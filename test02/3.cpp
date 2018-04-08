#include <iostream>
#include <sstream>
using namespace std;
void delete1(int ** matr,unsigned int b){
	for (unsigned int i = 0; i < b; ++i)	delete[] matr[i];
	delete[] matr;
}
int** matr_new(unsigned int a,unsigned int b){
	int** matrix;
	matrix = new int*[b];
	for (unsigned int i = 0; i < b; ++i){
		matrix[i] = new int[a];
		for (unsigned int j = 0; j < a; ++j) {
			matrix[i][j] = 0.0f;
		}
	}
	return matrix;
}
bool read_matr(int**& matr,	unsigned int a_str,	unsigned int b_str){
	matr = matr_new(a_str, b_str);
	for (unsigned int j = 0; j < b_str; j++) {
		string row;
		getline(cin, row);
		istringstream stream(row);
		for (unsigned int i = 0; i < a_str; i++) {
			if (!(stream >> matr[j][i])) return false;
		}
	}
	return true;
}

void write(int** matr,	unsigned int a_str,	unsigned int b_str){
	for (unsigned int j = 0; j < b_str; j++){
		for (unsigned int i = 0; i < a_str; i++){
			if (matr[j][i] == -0) matr[j][i] = 0;
			cout << matr[j][i] << " ";
		}
		cout << endl;
	}
}
bool matr_size(unsigned int& a,	unsigned int& b){
	string string1;
	int b_str, a_str;
	char ch;
	getline(cin, string1);
	istringstream str(string1);
	if ((str >> b_str) && (str >> ch) && (str >> a_str) && (ch == ',') && (b_str>0) && (a_str>0)){
		b = b_str; a = a_str;
		return true;
	}
	return false;
}
bool spins_str(unsigned int &spin){
	string string1;
	getline(cin, string1);
	istringstream str(string1);
	int spin_str;
	if (str >> spin_str&&spin_str>0) {
		spin = spin_str;
		return true;
	}
	return false;
}
void spins(int **&matr,int a,int b,int op){
	int x;
	for (int s = 0; s<op; s++) {
		x = matr[0][0];
		for (int i = 0; i<a - 1; i++)	swap(x,matr[0][i + 1]);
		for (int i = 0; i<b - 1; i++)	swap(x,matr[i + 1][a - 1]);
		for (int i = a - 1; i>0; i--) swap(x,matr[b - 1][i - 1]);
    for (int i = b - 1; i>0; i--) swap(x,matr[i - 1][0]);
}
}
int main(){
	int** matr;
	unsigned int a, b, op;
	if (matr_size(a, b)){
		if (read_matr(matr, a, b) && spins_str(op)){
			spins(matr, a, b, op);
			write(matr, a, b);
		}
		else {
			cout << "An error has occured while reading input data";
      exit(0);
		}
		delete1(matr, b);
	}
	else {
		cout << "An error has occured while reading input data";
		exit(0);
	}
}
