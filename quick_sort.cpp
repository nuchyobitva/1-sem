#include <iostream>
#include <sstream>
using namespace std;
void quick_sorting(int *mas, int leftside, int rightside){
    int tmp;
    int i = leftside; 
    int j = rightside;
    tmp = mas[(leftside+rightside)/2];
    do {
        while((i < rightside) && (mas[i] < tmp)) i++;
        while((j > leftside) && (tmp < mas[j])) j--;
        if(i <= j) {
            swap(mas[i],mas[j]);
            i++; j--;
        }
    } while (i <= j);
    if(leftside < j) quick_sorting(mas, leftside, j);
    if(i < rightside) quick_sorting(mas, i, rightside);
}
bool read_numbers(int * &mas, int n){
    string str;
    int par;
    getline(cin, str);
    int *mas1 = new int [n];
    for (string str; getline(cin, str); ) {
        istringstream stream(str);
        for (unsigned int j = 0; j < n; ++j) {                                              //проверка на ввод самого массива
            if(!(stream >> mas1[j])) {
                return false;
            }
        }
        if(stream >> par) return false;                                                     //проверка на ввод лишних элементов
        break;
    }
    mas = mas1;
    return true;
}
int main(){
    int *mas,n;
    if (!(cin >> n)|| (n <= 0)){                                                           //проверка на отсутствие ввода размера массива и на его положительность
        cout << "An error has occured while reading input data"<<endl;
        return 0;
    }
    if (!(read_numbers(mas, n))){
        cout << "An error has occured while reading input data"<<endl;                       
        return 0;
    }
    quick_sorting(mas, 0, n-1);
    for (unsigned int i = 0; i < n; i++) cout << mas[i] << ' ';
    delete[] mas;
    cin.get();
    return 0;
}
