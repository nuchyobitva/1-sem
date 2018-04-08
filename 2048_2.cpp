#include <iostream>
#include <ctime>
using namespace std;
int matr[4][4];
void initmas(int a[4]) {
	for (int i = 0; i<4; i++) { a[i] = 0; }
}
void initmas(int a[4][4]) {
	for (int i = 0; i<4; i++) { for (int j = 0; j<4; j++) { a[i][j] = 0; } }
}
int ran2(int b) {
	int par = 0;
	int x = rand() % b;
	if (x != 0) { par = 1; }
	for (int i = 0; i<x; i++) {
		par += par;
	}
	return par;
}
void zero() {
	initmas(matr);
	srand(time(NULL));
	matr[1][0] = ran2(4);
	matr[1][1] = ran2(4);
	matr[1][2] = ran2(4);
	matr[1][3] = ran2(4);
	matr[2][3] = ran2(4);
	matr[0][3] = ran2(4);
	matr[2][2] = ran2(4);}
void k(int var[4][4]) {
	for (int j = 0; j<4; j++) {
		int y[4]; initmas(y); int n = 0;
		for (int i = 0; i<4; i++) { if (var[j][i] != 0) { y[n] = var[j][i]; n++; } }

		for (int f = 0; f<4; f++) { if ((y[f] == y[f + 1]) && (y[f] != 0)) { y[f] += y[f + 1]; y[f + 1] = 0; } }

		for (int n = 0; n<3; n++) { if (y[n] == 0) { y[n] = y[n + 1]; y[n + 1] = 0; } }

		for (int i = 0; i<4; i++) { var[j][i] = y[i]; };
	}
}
void j(int uper[4][4]) {
	for (int j = 0; j<4; j++) {
		int y[4]; initmas(y); int n = 3;
		for (int i = 3; i>-1; i--) { if (uper[j][i] != 0) { y[n] = uper[j][i]; n--; } }

		for (int z = 3; z>0; z--) { if ((y[z] == y[z - 1]) && (y[z] != 0)) { y[z] += y[z - 1]; y[z - 1] = 0; } }

		for (int w = 3; w>0; w--) { if (y[w] == 0) { y[w] = y[w - 1]; y[w - 1] = 0; } }

		for (int i = 0; i<4; i++) { uper[j][i] = y[i]; };
	}
}
void l(int uper[4][4]) {
	for (int j = 0; j<4; j++) {
		int y[4]; initmas(y); int n = 3;
		for (int i = 3; i>-1; i--) { if (uper[i][j] != 0) { y[n] = uper[i][j]; n--; } }

		for (int z = 3; z>0; z--) { if ((y[z] == y[z - 1]) && (y[z] != 0)) { y[z] += y[z - 1]; y[z - 1] = 0; } }

		for (int w = 3; w>0; w--) { if (y[w] == 0) { y[w] = y[w - 1]; y[w - 1] = 0; } }

		for (int i = 0; i<4; i++) { uper[i][j] = y[i]; };
	}
}
void h(int uper[4][4]) {
	for (int j = 0; j<4; j++) {
		int y[4]; initmas(y); int n = 0;
		for (int i = 0; i<4; i++) { if (uper[i][j] != 0) { y[n] = uper[i][j]; n++; } }

		for (int z = 0; z<4; z++) { if ((y[z] == y[z + 1]) && (y[z] != 0)) { y[z] += y[z + 1]; y[z + 1] = 0; } }

		for (int w = 0; w<3; w++) { if (y[w] == 0) { y[w] = y[w + 1]; y[w + 1] = 0; } }

		for (int i = 0; i<4; i++) { uper[i][j] = y[i]; };  }
}

void matrout() {
	for (int j = 0; j<4; j++) {
		for (int i = 0; i<4; i++) {
			if (matr[i][j] == 0) { cout << "*" << " "; continue; }cout << matr[i][j] << " "; }
		cout << "\n"; }cout << "\n";}
void newpar() {
  int x,y,z;
  x=rand() % 10 + 1;
  if (x<10) y=2;
  else y=4;
  int count=0;
  for (int j = 0; j<4; j++) {
		for (int i = 0; i<4; i++) {  
		  if (matr[j][i]==0) count++;
    }
  }
  if (count==0) return;
  do{
    x=(rand() % 3 + 1)-1;
    z=(rand() % 3 + 1)-1;
    if (matr[x][z]==0) matr[x][z]=y;
    
  } while (matr[x][z]==0);
  
}
int main() {
	char op = ' ';
	zero();

	while (op != 'q') {

		switch (op) {
		case 'j': j(matr); break;
		case 'k': k(matr); break;
		case 'h': h(matr); break;
		case 'l': l(matr); break;     }
		newpar();
		matrout();
		cin >> op; }
	cin.get();
}
