#include <iostream>
using namespace std;
void vivod(int i, int j, int pos[4][4]){
    for (i = 0; i < 4; i++){
        cout << " +----+----+----+----+" << endl;
        for (j = 0; j < 4; j++){
            if (pos[i][j] != 0){
                if (pos[i][j] < 10) cout << " | 0" << pos[i][j];
                else cout << " | " << pos[i][j];
            }
            else cout << " |   ";
        }
        cout << " | " << endl ;
    }
    cout << " +----+----+----+----+" << endl;
}
int main () {
    int i, j, pos[4][4]={0}, k = 1, x, y, cnt;
    char op;
    srand(time( 0 ));
    do {
        i = 0 + rand() & 3;
        j = 0 + rand() & 3;
        if (pos[i][j] == 0){
            pos[i][j] = k;
            ++k;
        }
    } while (k != 16);
    vivod(i, j, pos);
   while (cnt != 15){
       cin >> op;
       switch(op){
           case 'k':
               for (i = 0; i < 4; i++){
                   for (j = 0; j < 4; j++){
                       if ((pos[i][j] == 0) && (i != 3)){
                           pos[i][j] = pos[i + 1][j];
                           x = i;
                           y = j;
                       }
                   }
               }
               pos[x + 1][y] = 0;
               break;

           case 'j':
               for (i = 0; i < 4; i++){
                   for (j = 0; j < 4; j++){
                       if ((pos[i][j] == 0) && (i != 0)){
                           pos[i][j] = pos[i - 1][j];
                           pos[i - 1][j] = 0;
                       }
                   }
               }
               break;

           case 'h':
               for (i = 0; i < 4; i++){
                   for (j = 0; j < 4; ++j){
                       if ((pos[i][j] == 0) && (j != 3)){
                           pos[i][j] = pos[i][j + 1];
                           x = i;
                           y = j;
                           pos[x][y + 1] = 20;
                       }
                   }
                  if  (pos[x][y + 1] == 20){
                      pos [x][y + 1] = 0;
                  }
               }

               break;

           case 'l':
               for (i = 0; i < 4; i++){
                   for (j = 0; j < 4; j++){
                       if ((pos[i][j] == 0) && (j != 0)){
                           pos[i][j] = pos[i][j - 1];
                           x = i;
                           y = j;
                           pos[x][y - 1] = 0;
                       }
                   }
               }

               break;


           case 'q':
               cout << "EXIT";
               cin.get();
               exit (0);
               break;
       }


       k = 0;
       cnt = 0;

       for (i = 0; i < 4; i++){
           for (j = 0; j < 4; j++){
               k++;
               if (pos [i][j] == k) cnt++;
           }
       }
           vivod(i, j, pos);

   }

    if (cnt == 15) cout << "YOU WIN";

    exit (0);
}
