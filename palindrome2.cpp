#include "iostream"
#include "string"
using namespace std;
int main(){
	string formated_string, a;
	getline(cin, a);
	for (int i = 0; i < a.length(); i++) {
		if (isalnum(a[i])) {
			formated_string += tolower(a[i]);
		}
	}
	bool is_palindrome = true;
	for (int i = 0, j = formated_string.length() - 1; j > i; i++, j--) {
		if (formated_string[i] != formated_string[j]) {
			is_palindrome = false;
			break;
		}
	}
	cout << is_palindrome;
	cin.ignore(100, '\n');
	cin.get();
	return 0;
}
