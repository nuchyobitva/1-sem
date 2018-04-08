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
