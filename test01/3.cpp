//old version
#include <iostream>
#include <sstream>
using namespace std;
int main() {
	int mas1[10], mas2[10], mas[20], num, x1 = 0, x2 = 0;
	string str1;
	getline(cin, str1);
	istringstream stream1(str1);
	for (int i = 0; i<10; i++) {
		if (!(stream1 >> num)) {
			cout << "An error has occured while reading the input sequence.";
			exit(0);
		}
		mas1[i] = num;
	}
	string str2;
	getline(cin, str2);
	istringstream stream2(str2);
	for (int i = 0; i<10; i++) {
		if (!(stream2 >> num)) {
			cout << "An error has occured while reading the input sequence.";
			exit(0);
		}
		mas2[i] = num;
	}
	for (int i = 0; i<9; i++) {
		if (mas1[i]>mas1[i + 1]) {
			cout << "The input sequence must be non-decreasing.";
			cin.get();
			exit(0);
		}
	}
	for (int i = 0; i<9; i++) {
		if (mas2[i]>mas2[i + 1]) {
			cout << "The input sequence must be non-decreasing.";
			cin.get();
			exit(0);
		}
	}
	for (int i = 0; i<20; i++) {
		if (mas1[x1]>=mas2[x2] && x1<10 && x2<10) {
			mas[i] = mas2[x2];
			x2++;
		}
		else {
			mas[i] = mas1[x1];
			x1++;
		}
		if (x1 > 9) { mas[i] = mas2[x2]; x2++; }
		if (x2 > 9) { mas[i] = mas1[x1]; x1++; }
	}
	for (int i = 0; i<20; i++) cout << mas[i] << " ";

	cin.get();
	return 0;
}
//new version
/*
#include <iostream>
#include <string>
#include <sstream>
void read(int mas[10]){
  std::string s;
  getline(std::cin,s);
  std::istringstream chit(s);
  for (int i=0;i<10;i++){
    int r;
    if(chit>>r) mas[i]=r;
    else {
      std::cout<<"An error has occurred while reading the input sequence.\n";
      exit(0);
    }
  }
}
bool decr(int mas[10]){
  for (int i=0;i<9;i++){
    if (mas[i]>mas[i+1]) return 0;
  }
  return 1;
}
int main(){
  int mas1[10],mas2[10],n,mas[20];
  read(mas1);
  read(mas2);
  if(!decr(mas1)||!decr(mas2)){
     std::cout<<"The input sequence must be non-decreasing.\n";
     return 0;
  }
  {
  int i=0,j=0;
  for (int x=0;x<20;x++){
    if (mas1[i]<mas2[j]){
      mas[x]=mas1[i];
      i++;
    }
    else{
      mas[x]=mas2[j];
      j++;
    }
  }
  }
  for (int x=0;x<20;x++){
    std::cout<<mas[x]<<" ";
  }
  return 0;
}
*/
