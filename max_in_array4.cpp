#include <iostream>
#include <sstream>
using namespace std;
int main(){
	for (string string; getline(cin, string); ) {
		int a[10];
		istringstream stream(string);
		bool failure = false;
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> a[i])) {
				failure = true;
				break;
			}
		}
		int k=0;
		if (!failure) {
		  for (int i = 0; i < 10; ++i) {
			for (int j=i; j<10;j++){
			  if (a[i]>a[j]) k++;
			}
		}
			cout<<k;
		}
		else 	cout << "An error has occured while reading numbers from line" <<endl;
		return 0;
	}
} 
