#include <iostream>
#include <string>
#include <sstream>
using namespace std;
bool read_numbers(int *mas, unsigned int n) {
	string string;
	getline(cin, string);
	istringstream stream(string);
	bool f = true;
	for (int i = 0; i < n; ++i) {
		if (!(stream >> mas[i])) {
			f = false; break;
		}
	}
	return f;
}
void reverse(int *mas, unsigned int n) {
	for (int i = 0; i<(n / 2); i++){
		swap(mas[i], mas[n - i - 1]);
	}
	for (int i = 0; i<n; i++) cout << mas[i] << ' ';
}
int main() {
	unsigned int n;
	cin >> n;
	cin.get();
	int *mas = new int[n];
	if (read_numbers(mas, n)) reverse(mas, n);
	else cout << "An error has occured while reading input data";
	delete[]mas;
	cin.get();
}
