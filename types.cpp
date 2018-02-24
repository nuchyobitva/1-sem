#include <iostream>
#include <limits>

using namespace std;
int main()
{
    cout << "bool: "               << sizeof(bool)               << " (" << numeric_limits<bool>::min() << ", " << numeric_limits<bool>::max() << ")\n";

    cout << "unsigned char: "      << sizeof(unsigned char)      << " ("<< (int)numeric_limits<unsigned char>::min() << ", " << (int)numeric_limits<unsigned char>::max() << ")\n";

    cout << "signed char: "        << sizeof(signed char)        << " (" << (int)numeric_limits<signed char>::min() << ", " << (int)numeric_limits<signed char>::max() << ")\n";
    
    cout << "char16_t: "           << sizeof(char16_t)           << " (" << (int)numeric_limits<char16_t>::min() << ", " << (int)numeric_limits<char16_t>::max() << ")\n";
    cout << "short: "              << sizeof(short)              << " (" << numeric_limits<short>::min() << ", " << numeric_limits<short>::max() << ")\n";
    cout << "char32_t: "           << sizeof(char32_t)           << " (" << (int)numeric_limits<char32_t>::min() << ", " << (int)numeric_limits<char32_t>::max() << ")\n";
    cout << "wchar_t: "            << sizeof(wchar_t)            << " (" << (int)numeric_limits<wchar_t>::min() << ", " << (int)numeric_limits<wchar_t>::max() << ")\n";
    cout << "long long: "          << sizeof(long long)          << " (" << numeric_limits<long long>::min() << ", " << numeric_limits<long long>::max() << ")\n";
    cout << "char: "               << sizeof(char)               << " (" << (int)numeric_limits<char>::min() << ", " << (int)numeric_limits<char>::max() << ")\n";
    cout << "unsigned short: "     << sizeof(unsigned short)     << " (" << numeric_limits<unsigned short>::min() << ", " << numeric_limits<unsigned short>::max() << ")\n";
    cout << "int: "                << sizeof(int)                << " (" << numeric_limits<int>::min() << ", " << numeric_limits<int>::max() << ")\n";
    cout << "unsigned int: "       << sizeof(unsigned int)       << " (" << numeric_limits<unsigned int>::min() << ", " << numeric_limits<unsigned int>::max() << ")\n";
    cout << "long: "               << sizeof(long)               << " (" << numeric_limits<long>::min() << ", " << numeric_limits<long>::max() << ")\n";
    cout << "unsigned long: "      << sizeof(unsigned long)      << " (" << numeric_limits<unsigned long>::min() << ", " << numeric_limits<unsigned long>::max() << ")\n";
  
    cout << "unsigned long long: " << sizeof(unsigned long long) << " (" << numeric_limits<unsigned long long>::min() << ", " << numeric_limits<unsigned long long>::max() << ")\n";

    cout << "float: "              << sizeof(float)              << " (" << numeric_limits<float>::min() << ", " << numeric_limits<float>::max() << ")\n";
    cout << "double: "             << sizeof(double)             << " (" << numeric_limits<double>::min() << ", " << numeric_limits<double>::max() << ")\n";
    cout << "long double: "        << sizeof(long double)        << " (" << numeric_limits<long double>::min() << ", " << numeric_limits<long double>::max() << ")\n";

    cin.get();
}

/*  bool: 1 (0, 1)
unsigned char: 1 (0, 255)
signed char: 1 (-128, 127)
char16_t: 2 (0, 65535)
short: 2 (-32768, 32767)
char32_t: 4 (0, -1)
wchar_t: 4 (-2147483648, 2147483647)
long long: 8 (-9223372036854775808, 9223372036854775807)
char: 1 (-128, 127)
unsigned short: 2 (0, 65535)
int: 4 (-2147483648, 2147483647)
unsigned int: 4 (0, 4294967295)
long: 8 (-9223372036854775808, 9223372036854775807)
unsigned long: 8 (0, 18446744073709551615)
unsigned long long: 8 (0, 18446744073709551615)
float: 4 (1.17549e-38, 3.40282e+38)
double: 8 (2.22507e-308, 1.79769e+308)
long double: 16 (3.3621e-4932, 1.18973e+4932) */
