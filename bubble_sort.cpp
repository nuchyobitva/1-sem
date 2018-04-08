#include <iostream>
#include <sstream>
#include <string>
using namespace std;
bool read_numbers(double *mas, unsigned int n){
    string string;
    getline(cin, string);
    istringstream stream(string);
    for(unsigned int i=0; i<n; ++i){
        if(!(stream>>mas[i])){
            cout<<"An error has occured while reading input data."<<endl;
            return false;
        }
    }
    return true;
}
void sorting(double *mas, unsigned int n){
    for(unsigned int i=0; i<n-1; ++i){
        for(unsigned int j=0; j<n-i-1; ++j){
            if(mas[j]>mas[j+1]){
                swap(mas[j+1], mas[j]);
            }
        }
    }
}
int main(){
    unsigned int n;
    string string;
    getline(cin, string);
    istringstream stream(string);
    if(!(stream>>n)){
        cout<<"An error has occured while reading input data."<<endl;
        return -1;
    }
    double *mas=new double[n];
    if(read(mas, n)){
        sorting(mas, n);
        for(unsigned int i=0; i<n; ++i){
            cout<<mas[i]<<" ";
        }
    }
    delete[]mas;
    return 0;
}
