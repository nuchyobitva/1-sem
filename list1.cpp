#include <iostream>
#include <sstream>
using namespace std;
struct node_t {
	int value;
	node_t * next = nullptr;
};
void firstdel(node_t *&list_1, node_t *&list_n, int &n) {
	if (n == 0) {
		return;
	}
	node_t *mid = list_1;
	list_1 = list_1->next;
	if (list_1 == nullptr) {
		list_n = nullptr;
	}
	delete(mid);
	n--;
}
void add(node_t *&list_1, node_t *&list_n, int tmp, int &n) {
	if (list_n == nullptr) {
		list_n = new node_t;
		list_n->value = tmp;
		list_n->next = nullptr;
		list_1 = list_n;
		n++;
		return;
	}
	list_n->next = new node_t;
	list_n->next->value = tmp;
	list_n->next->next = nullptr;
	list_n = list_n->next;
	n++;
}
void write_list(node_t *list_1, int n) {
	for (int par = 0; par<n; par++) {
		cout << "+---+    ";
	}
	cout << endl;
	for (node_t *par = list_1; par != nullptr; par = par->next) {
		cout << "| " << par->value << " |";
		if (par->next != nullptr) {
			cout << "--->";
		}
	}
	cout << endl;
	for (int par = 0; par<n; par++) {
		cout << "+---+    ";
	}
	cout << endl;
}
void reverse(node_t *&list_1, node_t* &list_n, int n) {
	if (n == 0) {
		return;
	}
	node_t * tmp_list_1 = list_n;
	while (list_n != list_1) {
		list_n->next = list_1;
		for (node_t *par = list_n->next; par != list_n; par = par->next) {
			list_n->next = par;
		}
		list_n = list_n->next;
	}
	list_1 = tmp_list_1;
	list_n->next = nullptr;
}
void listdel(node_t* list_1, node_t* listlast) {
	node_t* result;
	for (node_t *par = list_1; par != nullptr;) {
		result = par->next;
		delete(par);
		par = result;
	}
}
int main() {
	node_t* cop_list_1 = nullptr;
	node_t* cop_list_n = nullptr;
	int n = 0;
	char oper;
	cin >> oper;
	while (oper != 'q') {
		switch (oper) {
		case '+':
			int tmp;
			cin >> tmp;
			add(cop_list_1, cop_list_n, tmp, n);
			write_list(cop_list_1, n);
			break;
		case '-':
			firstdel(cop_list_1, cop_list_n, n);
			write_list(cop_list_1, n);
			break;
		case '=':
			write_list(cop_list_1, n);
			break;
		case '/':
			reverse(cop_list_1, cop_list_n, n);

			write_list(cop_list_1, n);
			break;
		}
		cin >> oper;
	}
	listdel(cop_list_1, cop_list_n);
	cin.get();
}
