#include <iostream> 
#include <sstream>
using namespace std;
int main(){
	int mat1[3][3], mat2[3][3], mat3[3][3];
	for (int j = 0; j < 3; ++j) {
		for (string string; getline(cin, string); ) {
			istringstream stream(string);
			bool failure = false;
			for (int i = 0; i < 3; ++i) {
				if (!(stream >> mat1[j][i])) {
					failure = true;
					break;
				}
			}
			if (!failure) break;
			else {
				cout << "An error has occured while reading numbers from line" << endl;
			}
		}
	}
	char op;
	cin >> op;
	cin.ignore(1, '\n');
	for (int j = 0; j < 3; ++j) {
		for (string string; getline(cin, string); ) {
			istringstream stream(string);
			bool failure = false;
			for (int i = 0; i < 3; ++i) {
				if (!(stream >> mat2[j][i])) {
					failure = true;
					break;
				}
			}
			if (!failure) break;
			else {
				cout << "An error has occured while reading numbers from line" << endl;
			}
		}
	}
	cout << endl;
	switch (op) {
	case '+':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				mat3[i][j] = 0;
				for (int k = 0; k < 3; k++)
					mat3[i][j] = mat1[i][k] + mat2[k][j];
				cout << mat3[i][j] << " ";
			}
			cout << endl;
		}
		break;
	case '-':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				mat3[i][j] = 0;
				for (int k = 0; k < 3; k++)
					mat3[i][j] = mat1[i][k] - mat2[k][j];
				cout << mat3[i][j] << " ";
			}
			cout << endl;
		}
		break;
	case '*':
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				mat3[i][j] = 0;
				for (int k = 0; k < 3; k++)
					mat3[i][j] += mat1[i][k] * mat2[k][j];
				cout << mat3[i][j] << " ";
			}
			cout << endl;
		}
		break;

	default: cout << "ERROR";
	}
	cin.get();
	cin.get();	
}
