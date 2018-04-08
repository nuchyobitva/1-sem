#include <iostream>
#include <string>
#include <sstream>
using namespace std;
bool read_numbers(int *mas, int n) {
string string;
getline(cin, string);
istringstream stream(string);
bool f = true;
for (int i = 0; i < n; ++i) {
if (!(stream >> mas[i])) {
f = false; break;
       }
  }
return f;
}
void sorting(int *mas,int n){
int tmp, j; 
for (int i = 1; i < n; i++){
tmp = mas[i];
j = i-1; 
while (mas[j]>tmp && j >= 0){
mas[j+1] = mas[j];
mas[j] =tmp;
j--;
	}
}
  for (int i=0;i<n;i++) cout<<mas[i]<<" ";
}
int main() {
int n;
cin >> n;
cin.get();
int *mas =new int[n];
if (read_numbers(mas, n)) sorting(mas,n); 
else cout << "An error has occured while reading input data";
cin.get();
}
