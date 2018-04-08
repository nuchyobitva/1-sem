#include <iostream>
using namespace std;
void vivod(char sym1,char sym2,char sym3,char sym4,char sym5,char sym6,char sym7,char sym8,char sym9,char sym10,char sym11,char sym12,char sym13,char sym14,char sym15,char sym16,char sym17,char sym18,char sym19,char sym20, char sym21, char sym22, char sym23, char sym24,char sym25){
  cout << "     1   2   3   4   5" << endl;
	cout << "   +---+---+---+---+---+" << endl;
	cout << "6  | " << sym1 << " | " << sym2 << " | " << sym3 << " | "  << sym4 << " | " << sym5 << " |"<< endl;
	cout << "   +---+---+---+---+---+" << endl;
	cout << "7  | " << sym6 << " | " << sym7 << " | " << sym8 << " | " << sym9 << " | " << sym10 << " |"<< endl;
	cout << "   +---+---+---+---+---+" << endl;
	cout << "8  | " << sym11 << " | " << sym12 << " | " << sym13 << " | " << sym14 << " | " << sym15 << " |"<< endl;
	cout << "   +---+---+---+---+---+" << endl;
	cout << "9  | " << sym16 << " | " << sym17 << " | " << sym18 << " | " << sym19 << " | " << sym20 << " |"<< endl;
	cout << "   +---+---+---+---+---+" << endl;
	cout << "10 | " << sym21 << " | " << sym22 << " | " << sym23 << " | " << sym24 << " | " << sym25 << " |"<< endl;
	cout << "   +---+---+---+---+---+" << endl;}

void check(char sym1,char sym2,char sym3,char sym4,char sym5,char sym6,char sym7,char sym8,char sym9,char sym10,char sym11,char sym12,char sym13,char sym14,char sym15,char sym16,char sym17,char sym18,char sym19,char sym20, char sym21, char sym22, char sym23, char sym24,char sym25) {
		if (sym1 == sym2 && sym2 == sym3 && sym3 == sym4 && sym4 == sym5 ) { 
			if (sym1 == 'x'){
			vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		  }
		  else if (sym1 == 'o'){
		    vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		  } 
		}
		if (sym6 == sym7 && sym7 == sym8 && sym8 == sym9 && sym9 == sym10 ) {
		  if (sym6 == 'x'){
			vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		  }
		  else if (sym6 == 'o'){
		    vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		  }
		}
		if (sym11 == sym12 && sym12 == sym13 && sym13 == sym14 && sym14 == sym15) {
			if (sym11  == 'x'){
			vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		  }
		  else if (sym11 == 'o'){
		    vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		  }
		}
		if (sym16 == sym17 && sym17 == sym18 && sym18 == sym19 && sym19 == sym20) {
		if (sym16 == 'x'){
			vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		  }
		  else if (sym16 == 'o'){
		    vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		  }
		}
		if (sym21 == sym22 && sym22 == sym23 && sym23 == sym24 && sym24 == sym25 ) {
			if (sym21 == 'x'){
			vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		  }
		  else if (sym21 == 'o'){
		    vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		  }
		}
		if (sym1 == sym6 && sym6 == sym11 && sym11 == sym16 && sym16 == sym21 ) {
			if (sym1 == 'x'){
			vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		  }
		  else if (sym1 == 'o'){
		    vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		  }
		}
		if (sym2 == sym7 && sym7 == sym12 && sym12 == sym17 && sym17 == sym22 ) {
			if (sym2 == 'x'){
			vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		  }
		  else if (sym2 == 'o'){
		    vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		  }
		}
		if (sym3 == sym8 && sym8 == sym13 && sym13 == sym18 && sym18 == sym23 ) {
			if (sym3 == 'x'){
			vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		  }
		  else if (sym3 == 'o'){
		    vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		  }
		}
		if (sym4 == sym9 && sym9 == sym14 && sym14 == sym19 && sym19 == sym24) {
			if (sym4 == 'x'){
			vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		  }
		  else if (sym4 == 'o'){
		    vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		  }
		}
		if (sym5 == sym10 && sym10 == sym15 && sym15 == sym20 && sym20 == sym25 ) {
			if (sym5 == 'x'){
			vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		  }
		  else if (sym5 == 'o'){
		    vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		  }
		}
		if (sym1 == sym7 && sym7 == sym13 && sym13 == sym19 && sym19 == sym25) {
			if (sym1 == 'x'){
			vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		  }
		  else if (sym1 == 'o'){
		    vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		  }
		}
		if (sym5 == sym9 && sym9 == sym13 && sym13 == sym17 && sym17 == sym21 ) {
			if (sym5 == 'x'){
			vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "x win";
			cin.get(); cin.get();
			exit(0);
		  }
		  else if (sym5 == 'o'){
		    vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
			cout << "o win";
			cin.get(); cin.get();
			exit(0);
		  }
		}
}
void change(char & sym1, char & sym2, char & sym3, char & sym4, char & sym5, char & sym6, char & sym7, char & sym8, char & sym9,char&  sym10,char&  sym11,char&  sym12,char & sym13,char&  sym14,char&  sym15,char&  sym16,char&  sym17,char&  sym18,char&  sym19,char&  sym20, char&  sym21, char&  sym22, char&  sym23, char&  sym24,char & sym25,int cell,int & s) {
	if ((cell == 16 || cell == 61) && s % 2 == 0 && sym1==' ') {sym1 = 'x';s++;}  if ((cell == 16 || cell == 61 )&& s % 2 != 0 && sym1==' ') {sym1 = 'o';s++;}
	if ((cell == 26 || cell == 62) && s % 2 == 0 && sym2==' ') {sym2 = 'x';s++;}  if ((cell == 26 || cell == 62) && s % 2 != 0 && sym2==' ') {sym2 = 'o';s++;}
	if ((cell == 36 || cell == 63) && s % 2 == 0 && sym3==' ') {sym3 = 'x';s++;}  if ((cell == 36 || cell == 63) && s % 2 != 0 && sym3==' ') {sym3 = 'o';s++;}
	if ((cell == 46 || cell == 64) && s % 2 == 0 && sym4==' ') {sym4 = 'x';s++;}  if ((cell == 46 || cell == 64 )&& s % 2 != 0 && sym4==' ') {sym4 = 'o';s++;}
	if ((cell == 56 || cell == 65) && s % 2 == 0 && sym5==' ') {sym5 = 'x';s++;}  if ((cell == 56 || cell == 65) && s % 2 != 0 && sym5==' ') {sym5 = 'o';s++;}
	if ((cell == 17 || cell == 71 )&& s % 2 == 0 && sym6==' ') {sym6 = 'x';s++;}  if ((cell == 17 || cell == 71) && s % 2 != 0 && sym6==' ') {sym6 = 'o';s++;}
	if ((cell == 27 || cell == 72) && s % 2 == 0 && sym7==' ') {sym7 = 'x';s++;}  if ((cell == 27 || cell == 72)&& s % 2 != 0 && sym7==' ') {sym7 = 'o';s++;}
	if ((cell == 37 || cell == 73) && s % 2 == 0 && sym8==' ') {sym8 = 'x';s++;}  if ((cell == 37 || cell == 73 )&& s % 2 != 0 && sym8==' ') {sym8 = 'o';s++;}
	if ((cell == 47 || cell == 74 )&& s % 2 == 0 && sym9==' ') {sym9 = 'x';s++;}  if ((cell == 47 || cell == 74) && s % 2 != 0 && sym9==' ') {sym9 = 'o';s++;}
	if ((cell == 57 || cell == 75) && s % 2 == 0 && sym10==' '){sym10 = 'x';s++;} if ((cell == 57 || cell == 75) && s % 2 != 0 && sym10==' ') {sym10 = 'o';s++;}
	if ((cell == 18 || cell == 81) && s % 2 == 0 && sym11==' ') {sym11 = 'x';s++;}  if ((cell == 18 || cell == 81) && s % 2 != 0 && sym11==' ') {sym11 = 'o';s++;}
	if ((cell == 28 || cell == 82) && s % 2 == 0 && sym12==' ') {sym12 = 'x';s++;}  if ((cell == 28 || cell == 82) && s % 2 != 0 && sym12==' ') {sym12 = 'o';s++;}
	if ((cell == 38 || cell == 83) && s % 2 == 0 && sym13==' ') {sym13 = 'x';s++;}  if ((cell == 38 || cell == 83) && s % 2 != 0 && sym13==' ') {sym13 = 'o';s++;}
	if ((cell == 48 || cell == 84 )&& s % 2 == 0 && sym14==' ') {sym14 = 'x';s++;}  if ((cell == 48 || cell == 84 )&& s % 2 != 0 && sym14==' ') {sym14 = 'o';s++;}
	if ((cell == 58 || cell == 85) && s % 2 == 0 && sym15==' ') {sym15 = 'x';s++;}  if ((cell == 58 || cell == 85) && s % 2 != 0 && sym15==' ') {sym15 = 'o';s++;}
	if ((cell == 19 || cell == 91) && s % 2 == 0 && sym16==' ') {sym16 = 'x';s++;}  if ((cell == 19 || cell == 91) && s % 2 != 0 && sym16==' ') {sym16 = 'o';s++;}
	if ((cell == 29 || cell == 92) && s % 2 == 0 && sym17==' ') {sym17 = 'x';s++;}  if ((cell == 29 || cell == 92) && s % 2 != 0 && sym17==' ') {sym17 = 'o';s++;}
	if ((cell == 39 || cell == 93) && s % 2 == 0 && sym18==' ') {sym18 = 'x';s++;}  if ((cell == 39 || cell == 93 )&& s % 2 != 0 && sym18==' ') {sym18 = 'o';s++;}
	if ((cell == 49 || cell == 94 )&& s % 2 == 0 && sym19==' ') {sym19 = 'x';s++;}  if ((cell == 49 || cell == 94) && s % 2 != 0 && sym19==' ') {sym19 = 'o';s++;}
	if ((cell == 59 || cell == 95) && s % 2 == 0 && sym20==' ') {sym20 = 'x';s++;}  if ((cell == 59 || cell == 95) && s % 2 != 0 && sym20==' ') {sym20 = 'o';s++;}
	if ((cell == 110 || cell == 101) && s % 2 == 0 && sym21==' ') {sym21 = 'x';s++;}  if ((cell == 110 || cell == 101) && s % 2 != 0 && sym21==' ') {sym21 = 'o';s++;}
	if ((cell == 210 || cell == 102) && s % 2 == 0 && sym22==' ') {sym22 = 'x';s++;}  if ((cell == 210 || cell == 102) && s % 2 != 0 && sym22==' ') {sym22 = 'o';s++;}
	if ((cell == 310 || cell == 103) && s % 2 == 0 && sym23==' ') {sym23 = 'x';s++;}  if ((cell == 310 || cell == 103) && s % 2 != 0 && sym23==' ') {sym23 = 'o';s++;}
	if ((cell == 410 || cell == 104 )&& s % 2 == 0 && sym24==' ') {sym24 = 'x';s++;}  if ((cell == 410 || cell == 104) && s % 2 != 0 && sym24==' ') {sym24 = 'o';s++;}
	if ((cell == 510 || cell == 105 )&& s % 2 == 0 && sym25==' ') {sym25 = 'x';s++;}  if ((cell == 510 || cell == 105) && s % 2 != 0 && sym25==' ') {sym25 = 'o';s++;}
	if (cell == 0) exit(0);
}
int main(){
	char sym1=' ';char sym2=' ';char sym3=' ';char sym4=' ';char sym5=' ';char sym6=' ';char sym7=' ';char sym8=' ';char sym9=' ';char sym10=' ';char sym11=' ';char sym12=' ';char sym13=' ';char sym14=' ';char sym15=' ';char sym16=' ';char sym17=' ';char sym18=' ';char sym19=' ';char sym20=' '; char sym21=' ';char sym22=' '; char sym23=' '; char sym24=' ';char sym25=' '; int s = 0; int cell;
	while (sym1 == ' ' || sym2 == ' ' || sym3 == ' ' || sym4 == ' ' || sym5 == ' ' || sym6 == ' ' || sym7 == ' ' || sym8 == ' ' || sym9 == ' '|| sym10 ==' ' || sym11 ==' '|| sym12 ==' '|| sym13 ==' '|| sym14 ==' '|| sym15 ==' '|| sym16 ==' '|| sym17 ==' '|| sym18 ==' '|| sym19 ==' '|| sym20 ==' '|| sym21 ==' '|| sym22 ==' '|| sym23 ==' '|| sym24 ==' '|| sym25 ==' ') {
		check(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
		vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
		if (s % 2 == 0) cout << "Выберите номер столбца и строки ячейки и запишите их в любом порядке, чтобы отметить знаком X или введите 0 чтобы выйти: ";
		else cout << "Выберите номер столбца и строки ячейки и запишите их в любом порядке, чтобы отметить знаком О или введите 0 чтобы выйти:: ";
		cin >> cell;
		change(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25, cell, s);
	}
	vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
		cin.get();
		cin.get();
vivod(sym1,sym2,sym3,sym4,sym5,sym6,sym7,sym8,sym9,sym10, sym11, sym12, sym13 ,sym14, sym15, sym16, sym17,sym18, sym19 ,sym20, sym21,  sym22,  sym23,  sym24, sym25);
}
