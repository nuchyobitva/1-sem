#include <iostream>
#include <sstream>
using namespace std;
int main(){
	for (string string; getline(cin, string); ) {
		int a[10], b[10];
		istringstream stream(string);
		bool failure1 = false;
		bool failure2 = false;
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> a[i])) {
				failure1 = true;
				break;
			}
		}
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> b[i])) {
				failure2 = true;
				break;
			}
		}
		int max1 = a[1];
		int max2 = b[1];
		
if ((!failure1) and (!failure2)) {
		  for (int i = 0; i < 10; ++i) {
			if (a[i]>max1) {
				max1 = a[i];
			}}
		  for (int i = 0; i < 10; ++i) {
			if (b[i]>max2) {
				max2 = b[i];
			}}
		 
cout<< max1+max2;}
else {
			cout << "An error has occured while reading numbers from line" << endl;
		}
		return 0;
	}
}
//finds the sum of max numbers of 2 arrays of 10
