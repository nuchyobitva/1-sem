//old version
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int  len;
    char str[81];
    cin.getline(str,81);
    len = strlen(str);
    for(int i = 0; i < len; i++)  {
        if (str[i] == ' ') {
            cout << "%20"; }
        else {  cout << str[i]; }
    }
    return 0;
}
//the new one
/*
#include <iostream>
#include <string>
int main(){
  std::string s;
  getline(std::cin,s);
  for (int i=0;i<s.size();i++){
    if(s[i]==' ') std::cout<<"%"<<20;
    else std::cout<<s[i];
  }
  return 0;
}
*/
