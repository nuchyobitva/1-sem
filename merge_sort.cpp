#include <iostream>
#include <sstream>
using namespace std;
bool read_numbers(int * mas,int & n){
    string string;
    getline(cin, string);
    istringstream stream(string);
    bool success = true;
    for (int i = 0; i < n; ++i) {
        if (!(stream >> mas[i])) {
            success = false;
            break;
        }
    }
    return success;
}
void merge_sort(int * mas, int l_par, int r_par) {
    int m = (r_par + l_par) / 2;
    if (r_par == l_par) return;
    if (r_par - l_par == 1) {
        if (mas[r_par] < mas[l_par])
            swap(mas[r_par], mas[l_par]);
        return;
    }
    merge_sort(mas, l_par, m);
    merge_sort(mas, m + 1, r_par);
    int * tmp = new int [r_par - l_par + 1] ;
    int l_t = l_par, r_t = m + 1, j = 0;
    while (r_par - l_par + 1 != j) {
        if (l_t > m)  tmp[j++] = mas[r_t++];
        else if (r_t > r_par)   tmp[j++] = mas[l_t++];
        else if (mas[l_t] > mas[r_t])   tmp[j++] = mas[r_t++];
        else tmp[j++] = mas[l_t++];
    }
    for (int i = 0; i < j; i++) mas[i + l_par] = tmp[i];
    delete[] tmp;
}
int main() {
    int n;
    string str;
    getline(cin, str);
    istringstream stream(str);
    if (stream >> n && n > 0){
        int * mas = new int[n];
        if (read_numbers(mas,n)){
            merge_sort(mas, 0, n - 1);
            for (int i = 0; i < n; i++) cout << mas[i] << " ";
            delete[] mas;
        }
        else {
            cout << "An error has occured while reading input data.";
            delete[] mas;
        }
    }
    else {
        cout << "An error has occured while reading input data.";
    }
    cin.get();
    return 0;
}
