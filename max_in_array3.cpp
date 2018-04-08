#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	bool failure = false;
	int a[10],max, n,  b[10];
	
	while (!failure) {
		for (std::string string; std::getline(std::cin, string); ) {

			std::istringstream stream(string);


			for (int i = 0; i < 10; ++i)
			{
				if (!(stream >> a[i])) {
					failure = true;break;  }  
			}break;
		}
		if (failure) { break; }
		for (std::string string; std::getline(std::cin, string); ) {
			std::istringstream stream(string);
			for (int i = 0; i < 10; ++i) {
				if (!(stream >> b[i])) {
					failure = true;break;	}   }break;  }  break; }
	max = a[0];
	n = max + b[0];
	for (int i = 1; i < 10; ++i) {
		if (max<a[i]) {
			max = a[i];
		}
		if (n<max + b[i]) {
			n = max + b[i];
		}
	}
	if (!failure) {

		cout << n;
	}
	else {
		cout << "An error has occured while reading numbers from line" << endl;
	}
	cin.get();
}
