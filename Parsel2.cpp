#include <iostream>
#include <sstream>

using namespace std;

int main()
{
   char op;
    string str;
   double mas, chisla;
    
    getline(cin, str);
    istringstream stream(str);
    stream >> chisla;
    while (stream >> op)
    {
        if (op == '+')
        {
            stream >> mas;
            chisla = chisla + mas; }
        else if (op == '-')
        {
            stream >> mas;
            chisla =chisla - mas; }
        else if (op == '*')
        {
            stream >> mas;
            chisla = chisla * mas; }
        else if (op == '/')
        {
            stream >>mas;
            chisla = chisla /mas; }

    }
    cout << chisla;
    return 0;

}
