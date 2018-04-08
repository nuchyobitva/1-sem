#include <iostream>
#include <sstream>
using namespace std;
int main(){
int between = 0;
	
	char* op = (char*)malloc(sizeof(char));
	double* x = (double*)malloc(sizeof(double));
	string str;
	double var;
	char sym;
	getline(cin, str);
	istringstream stream(str);
	stream >> *x;
	while (stream >> sym) 	{
	switch (sym) {
		case '+':
			if (stream >> var) {
				op = (char*)realloc(op, (between + 1) * sizeof(char));
				*(op + between) = sym;	}
		between++;
			x = (double*)realloc(x, (between + 1) * sizeof(double));
			*(x + between) = var;
			break;
		case '-':
			if (stream >> var) {
				op = (char*)realloc(op, (between + 1) * sizeof(char));
				*(op + between) = sym;	}
			between++;
			x = (double*)realloc(x, (between + 1) * sizeof(double));
			*(x + between) = var;
			break;
		
		case '/':
			stream >> var;
			*(x + between) = (*(x + between)) / var;
			break;
			case '*':
			stream >> var;
			*(x + between) = (*(x + between)) * var;
			break;
			default: 
			cout << "An error has occured";
			return 0;
	}
	}
	double answer = *x;
	for (int i = 0; i<between + 1; i++) {
		switch (*(op + i)) {
		case '+':
			answer += *(x + i + 1); break;
			case '-':
			answer -= *(x + i + 1); break; 	}
	}
	cout << answer<< endl;
cin.get();
}
