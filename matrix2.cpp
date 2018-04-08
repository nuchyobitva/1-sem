#include <iostream>
#include <sstream>
using namespace std;
auto read(istream & stream,
float ** & res_elem,
unsigned int & res_rows,
unsigned int & res_cols)->istream & {
unsigned int rows = 0;
unsigned int columns = 0;
char sym;
float ** elem = nullptr;
bool success = true;
string line;
if (getline(stream, line)) {
		istringstream sstream(line);
		if (sstream >> rows && sstream >> sym && sym == ',' && sstream >> columns && sstream.eof()) {
			elem = new float *[rows];
			for (unsigned int i = 0; i < rows && success; i++) {
				elem[i] = new float[columns];
				string line;
				if (getline(stream, line)) {
					istringstream sstream(line);
					for (unsigned j = 0; j < columns; j++) {
						sstream >> elem[i][j];
						if (!sstream) {
							success = false;
							break;
						}
					}
					success &= sstream.eof();
				}
				else {
					success = false;
				}
			}
		}
		else {
			success = false;
		}
	}

	if (success) {
		res_elem = elem;
		res_rows = rows;
		res_cols = columns;
	}
	else {
		stream.setstate(ios_base::failbit);
	}
	return stream;
}
bool add(float ** l_elems,
	unsigned int l_rows,
	unsigned int l_cols,
	float ** r_elems,
	unsigned int r_rows,
	unsigned int r_col,
	float ** & res_elem,
	unsigned int & res_rows,
	unsigned int & res_cols) {
	bool success = true;
	float ** elem = new float *[r_rows];
	for (int i = 0; i < r_rows; i++) {
		elem[i] = new float[r_col];
	}
	res_elem = new float *[r_rows];
	for (int i = 0; i < r_rows; i++) {
		res_elem[i] = new float[r_col];
	}
	if (l_rows == r_rows && l_cols == r_col) {
		for (int i = 0; i < r_rows; i++) {
			for (int j = 0; j < r_col; j++) {
				elem[i][j] = l_elems[i][j] + r_elems[i][j];
			}
		}
		res_elem = elem;
		res_rows = l_rows;
		res_cols = l_cols;
	}
	else success = false;
	return success;
}
bool sub(float ** l_elems,
	unsigned int l_rows,
	unsigned int l_cols,
	float ** r_elems,
	unsigned int r_rows,
	unsigned int r_cols,
	float ** & res_elems,
	unsigned int & res_rows,
	unsigned int & res_cols) {
	bool success = true;
	float ** elems = new float *[r_rows];
	for (int i = 0; i < r_rows; i++) {
		elems[i] = new float[r_cols];
	}
	res_elems = new float *[r_rows];
	for (int i = 0; i < r_rows; i++) {
		res_elems[i] = new float[r_cols];
	}
	if (l_rows == r_rows && l_cols == r_cols) {
	for (int i = 0; i < r_rows; i++) {
	for (int j = 0; j < r_cols; j++) {
		elems[i][j] = l_elems[i][j] - r_elems[i][j];
	}
		}
	res_elems = elems;
	res_rows = l_rows;
	res_cols = l_cols;
	}
	else success = false;
	return success;
}
bool multiply(float ** l_elems,
	unsigned int l_rows,
	unsigned int l_cols,
	float ** r_elems,
	unsigned int r_rows,
	unsigned int r_cols,
	float ** & res_elems,
	unsigned int & res_rows,
	unsigned int & res_cols) {
	bool success = true;
	float ** elems = new float *[r_rows];
	for (int i = 0; i < r_rows; i++) {
		elems[i] = new float[l_cols];
	}
	if (l_cols == r_rows) {
		int n = l_cols;
		res_elems = new float *[n];
		for (int i = 0; i < n; i++) {
			res_elems[i] = new float[n];
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				elems[i][j] = 0;
				for (int k = 0; k < n; k++)
					elems[i][j] += l_elems[i][k] * r_elems[k][j];
			}
		}
		res_elems = elems;
		res_rows = r_rows;
		res_cols = l_cols;
	}
	else success = false;
	return success;
}
bool transpose(float ** l_elems,
	unsigned int l_rows,
	unsigned int l_cols,
	float ** & res_elems,
	unsigned int & res_rows,
	unsigned int & res_cols) {
	bool success = true;
	res_rows = l_cols;
	res_cols = l_rows;
	res_elems = new float *[res_rows];
	for (int i = 0; i < res_rows; i++) {
		res_elems[i] = new float[res_cols];
	}
	for (int i = 0; i < res_rows; i++) {
		for (int j = 0; j < res_cols; j++) {
			res_elems[i][j] = l_elems[j][i];
		}
	}
	return success;
}
void destroy(float ** elems,
	unsigned int rows)
{
	for (unsigned int i = 0; i < rows; ++i) {
		delete[] elems[i];
	}
	delete[] elems;
}
bool inversion(float ** l_elems,
	unsigned int l_rows,
	unsigned int l_cols,
	float ** & res_elems,
	unsigned int & res_rows,
	unsigned int & res_cols) {
	bool success = true;
	res_elems = new float *[l_rows];
	for (int i = 0; i < l_rows; i++) {
		res_elems[i] = new float[l_rows];
	}
	if (l_rows == l_cols) {
		unsigned int n = l_rows;
		float tmp;
		float **elem = new float *[n];
		for (unsigned int i = 0; i < n; i++) {
			elem[i] = new float[n];
		}
		for (unsigned int i = 0; i < n; i++) {
			for (unsigned int j = 0; j < n; j++) {
				elem[i][j] = 0;
				if (i == j) {
					elem[i][j] = 1;
				}
			}
		}
		for (unsigned int k = 0; k < n; k++) {
			tmp = l_elems[k][k];
			for (unsigned int j = 0; j < n; j++) {
				l_elems[k][j] /= tmp;
				elem[k][j] /= tmp;
			}
			for (unsigned int i = k + 1; i < n; i++) {
				tmp = l_elems[i][k];
				for (unsigned int j = 0; j < n; j++) {
					l_elems[i][j] -= l_elems[k][j] * tmp;
					elem[i][j] -= elem[k][j] * tmp;
				}
			}
		}
		for (int k = n - 1; k > 0; k--) {
			for (int i = k - 1; i >= 0; i--) {
				tmp = l_elems[i][k];
				for (unsigned int j = 0; j < n; j++) {
					l_elems[i][j] -= l_elems[k][j] * tmp;
					elem[i][j] -= elem[k][j] * tmp;
				}
			}
		}
		res_elems = elem;
		res_cols = n;
		res_rows = n;
	}
	else success = false;
	return success;
}
double determinant(float ** l_elems, unsigned int rows)
{
	unsigned int n = rows;
	int i, j;
	double d = 0;
	float ** m;
	if (n == 1) {
		d = l_elems[0][0];
	}
	else if (n == 2) {
		d = l_elems[0][0] * l_elems[1][1] - l_elems[0][1] * l_elems[1][0];
	}
	else
	{
		m = new float*[n - 1];
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < n - 1; ++j)
			{
				if (j < i) m[j] = l_elems[j];
				else
					m[j] = l_elems[j + 1];
			}
			d += pow((double)-1, (i + j))*determinant(m, n - 1) * l_elems[i][n - 1];
		}
		delete[] m;
	}
	return d;
}
auto write(ostream & stream,
	float ** elems,
	unsigned int rows,
	unsigned int cols)->ostream & {
	cout << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			stream << elems[i][j] << ' ';
		}
		stream << endl;
	}
	return stream;
}
void write_error() {
	cout << "An error has occured while reading input data";
}
int main()
{
	float ** m1;
	unsigned int rows1, cols1;
	if (read(cin, m1, rows1, cols1)) {
		char op;
		cin >> op;
		cin.ignore(1, '\n');
		float ** m2;
		float ** res;
		unsigned int rows2, cols2,rows3, cols3;
		switch (op) {
		case '+':
			if (read(cin, m2, rows2, cols2) &&
				add(m1, rows1, cols1, m2, rows2, cols2, res, rows3, cols3)) {
				write(cout, res, rows3, cols3);
			}
			else write_error(); break;
		case '-':
			if (read(cin, m2, rows2, cols2) &&
				sub(m1, rows1, cols1, m2, rows2, cols2, res, rows3, cols3)) {
				write(cout, res, rows3, cols3);
			}
			else write_error(); break;
		case '*':
			if (read(cin, m2, rows2, cols2) &&
				multiply(m1, rows1, cols1, m2, rows2, cols2, res, rows3, cols3)) {
				write(cout, res, rows3, cols3);
			}
			else write_error(); break;
		case 'T':
			if (transpose(m1, rows1, cols1, res, rows3, cols3)) {
				write(cout, res, rows3, cols3);
			} break;
		case 'R':
			double d = determinant(m1, rows1);
			if (inversion(m1, rows1, cols1, res, rows3, cols3) && d != 0) {
				write(cout, res, rows3, cols3);
			}
			else cout << "This matrix cannot be reversed"; break;
		}
	}
	else write_error();
	cin.get();
}
