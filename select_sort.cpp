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
int par;
for (int i=0;i<n;i++){
par=i;
for (int tmp=0;tmp<n;tmp++){
if (mas[tmp]>mas[par]) swap(mas[tmp],mas[par]) ;
  }
    }
  for (int i=0;i<n;i++) cout<<mas[i]<<" ";
}
int main() {
int n;
cin >> n;
cin.get();
int *mas =new int[n];
if (read_numbers(mas, n))  sorting(mas,n); 
else cout << "An error has occured while reading input data";
cin.get();
}
