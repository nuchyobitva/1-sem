#include "iostream" 
#include "string"
using namespace std;
int main(){
  string a1,a2; 
  char n; 
  int i, x;
  cin >>a1 ;
  a2 = a1;
  for (i = 0, x = a1.length() - 1; x > i; i++, x--) {
	n = a1[i];
	a1[i] = a1[x];
	a1[x] = n;
}
if (a1 == a2)
cout << "1" << endl;
else cout << "0" << endl;
return 0;
}
//checks if a string is a palindrome
