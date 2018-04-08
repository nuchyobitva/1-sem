
#include <iostream>

using namespace std;

struct complex_t {
	float real;
	float imag;
};

std::istream & read( std::istream & stream, complex_t & complex ){
  char sym=' ';
  int num;


  while((stream>>sym)&&(sym!=')')){
      if(!(stream>>num)){
          cout<<"\nAn error has occured while reading input data";
          
      }
     if (sym==','){complex.imag=num;}else if(sym=='('){complex.real=num;}else{ cout<<"\nAn error has occured while reading input data";
         }
  }

}
std::ostream & write( std::ostream & stream, complex_t complex ){
    stream<<"( "<<complex.real<<","<<complex.imag<<" )";
}





complex_t add( complex_t lhs, complex_t rhs ){
  complex_t sum;
  sum.imag=lhs.imag+rhs.imag;
  sum.real=lhs.real+rhs.real;
  return sum;
}
complex_t sub( complex_t lhs, complex_t rhs ){
  complex_t sum;
  sum.imag=lhs.imag-rhs.imag;
  sum.real=lhs.real-rhs.real;
  return sum;
}
complex_t mul( complex_t lhs, complex_t rhs ){
  complex_t sum;
  sum.real=lhs.real*rhs.real-lhs.imag*rhs.imag;
  sum.imag=rhs.real*lhs.imag+lhs.real*rhs.imag;
  return sum;
}
complex_t div( complex_t lhs, complex_t rhs ){
  complex_t sum;
  sum.real=(lhs.real*rhs.real+lhs.imag*rhs.imag)/(rhs.real*rhs.real+rhs.imag*rhs.imag);
   sum.imag=(lhs.imag*rhs.real-lhs.real*rhs.imag)/(rhs.real*rhs.real+rhs.imag*rhs.imag);
  return sum;
}
 int main() {
	complex_t z,f;	
	char oper;
read(cin,z);  
	  cin>>oper;
	 read(cin,f); 
	    
	    
	    switch (oper) {
	    case '+':
	    write(cout, add(z,f));break;
	    case '-':
	    write(cout, sub(z,f));break;
	    case '*':
	    write(cout, mul(z,f));break;
	    case '/':
	    write(cout, div(z,f));break;
 
	  } 
	    
	  }
