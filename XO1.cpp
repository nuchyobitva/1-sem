#include <iostream>
using namespace std;
void vivod(char sym1, char sym2, char sym3, char sym4, char sym5, char sym6, char sym7, char sym8, char sym9) {
	cout << "+---+---+---+" << endl;
	cout << "| " << sym1 << " | " << sym2 << " | " << sym3 << " |" << endl;
	cout << "+---+---+---+" << endl;
	cout << "| " << sym4 << " | " << sym5 << " | " << sym6 << " |" << endl;
	cout << "+---+---+---+" << endl;
	cout << "| " << sym7 << " | " << sym8 << " | " << sym9 << " |" << endl;
	cout << "+---+---+---+" << endl;
}
void check(char & sym1, char & sym2, char & sym3, char & sym4, char & sym5, char & sym6, char & sym7, char & sym8, char & sym9) {
		if (sym1 == sym2 && sym2 == sym3 && sym1 == 'x') { 
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "x win"; 
			cin.get(); cin.get();
			exit(0); 
		}
		if (sym4 == sym5 && sym5 == sym6 && sym4 == 'x') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym7 == sym8 && sym8 == sym9 && sym7 == 'x') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym1 == sym4 && sym4 == sym7 && sym1 == 'x') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym2 == sym5 && sym5 == sym8 && sym2 == 'x') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym3 == sym6 && sym6 == sym9 && sym3 == 'x') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym1 == sym5 && sym5 == sym9 && sym1 == 'x') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym3 == sym5 && sym5 == sym7 && sym3 == 'x') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym1 == sym2 && sym2 == sym3 && sym1 == 'o') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym4 == sym5 && sym5 == sym6 && sym4 == 'o') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym7 == sym8 && sym8 == sym9 && sym7 == 'o') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym1 == sym4 && sym4 == sym7 && sym1 == 'o') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym2 == sym5 && sym5 == sym8 && sym2 == 'o') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym3 == sym6 && sym6 == sym9 && sym3 == 'o') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym1 == sym5 && sym5 == sym9 && sym1 == 'o') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		}
		if (sym3 == sym5 && sym5 == sym7 && sym3 == 'o') {
			vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		}
}
void change(char & sym1, char & sym2, char & sym3, char & sym4, char & sym5, char & sym6, char & sym7, char & sym8, char & sym9,char cell,int & s) {
	if (cell == '1' && s % 2 == 0 && sym1=='1') {sym1 = 'x';s++;}  if (cell == '1' && s % 2 != 0 && sym1=='1') {sym1 = 'o';s++;}
	if (cell == '2' && s % 2 == 0 && sym2=='2') {sym2 = 'x';s++;}  if (cell == '2' && s % 2 != 0 && sym2=='2') {sym2 = 'o';s++;}
	if (cell == '3' && s % 2 == 0 && sym3=='3') {sym3 = 'x';s++;}  if (cell == '3' && s % 2 != 0 && sym3=='3') {sym3 = 'o';s++;}
	if (cell == '4' && s % 2 == 0 && sym4=='4') {sym4 = 'x';s++;}  if (cell == '4' && s % 2 != 0 && sym4=='4') {sym4 = 'o';s++;}
	if (cell == '5' && s % 2 == 0 && sym5=='5') {sym5 = 'x';s++;}  if (cell == '5' && s % 2 != 0 && sym5=='5') {sym5 = 'o';s++;}
	if (cell == '6' && s % 2 == 0 && sym6=='6') {sym6 = 'x';s++;}  if (cell == '6' && s % 2 != 0 && sym6=='6') {sym6 = 'o';s++;}
	if (cell == '7' && s % 2 == 0 && sym7=='7') {sym7 = 'x';s++;}  if (cell == '7' && s % 2 != 0 && sym7=='7') {sym7 = 'o';s++;}
	if (cell == '8' && s % 2 == 0 && sym8=='8') {sym8 = 'x';s++;}  if (cell == '8' && s % 2 != 0 && sym8=='8') {sym8 = 'o';s++;}
	if (cell == '9' && s % 2 == 0 && sym9=='9') {sym9 = 'x';s++;}  if (cell == '9' && s % 2 != 0 && sym9=='9') {sym9 = 'o';s++;}
	if (cell == 'q') exit(0);
}
int main() {
	char sym1 = '1'; char sym2 = '2'; char sym3 = '3'; char sym4 = '4'; char sym5 = '5'; 
	char sym6 = '6'; char sym7 = '7'; char sym8 = '8'; char sym9 = '9'; int s = 0; char cell;
	while (sym1 == '1' || sym2 == '2' || sym3 == '3' || sym4 == '4' || sym5 == '5' || sym6 == '6' || sym7 == '7' || sym8 == '8' || sym9 == '9') {
		check(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
		vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
		if (s % 2 == 0) cout << "Choose a cell in range 1-9 to mark with X or 'q' to exit: ";
		else cout << "Choose a cell in range 1-9 to mark with O or 'q' to exit: ";
		cin >> cell;
		change(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9, cell, s);
	}
	vivod(sym1, sym2, sym3, sym4, sym5, sym6, sym7, sym8, sym9);
		cin.get(); cin.get();
}
