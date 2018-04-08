#include <iostream>
using namespace std;
int main() {
    int x,y;
    char com,com2;
    cin >>x >> com;
    if ((com=='>')||(com=='<')){
        cin>>com2>>y;
    }else{cin>>y;}
    if (com=='+'){      cout << x+y;}
    else if (com=='-'){        cout << x-y;    }
    else if (com=='*'){        cout << x*y;    }
    else if (com=='/'){        cout << (double)x/y;    }
    else if (com=='%'){        cout << x%y;    }
    else if (com=='&'){        cout << (x & y);    }
    else if (com=='|'){        cout << ( x|y);    }
    else if (com=='^'){        cout << (x^y);    }
    else if ((com=='<')&&(com2==com)){        cout << (x<<y);    }
    else if ((com=='>')&&(com2==com)){        cout << (x>>y);    }
    else {cout<<"ERROR";
    }
    cin.get();
    return 0;
}
