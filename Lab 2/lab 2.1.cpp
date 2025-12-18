#include <iostream>
using namespace std;


void first_func() {
	setlocale(LC_ALL, "Russian");
	cout << "Введите два числа\n";
	int a, b;
	cin >> a >> b;
	cout << "Среднее арифмет:: " << (a + b) / 2 << endl;
	cout << "Введите знак операции (+, -, * или /): \n";
	char op;
	cin >> op;

	//if (op == '+') {
	//    cout << a + b << endl;
	//}
	//else if (op == '-') {
	//    cout << a - b << endl;
	//}
	//else if (op == '*') {
	//    cout << a * b << endl;
	//}
	//else if (op == '/') {
	//    cout << a / b << endl;
	//}
	//else {
	//    cout << "Введен некорректный знак" << endl;
	//}

	switch (op) {
	case '+':
		cout << a + b << endl;
		break;
	case '-':
		cout << a + b << endl;
		break;
	case '*':
		cout << a * b << endl;
		break;
	case '/':
		cout << a / b << endl;
		break;
	default:
		cout << "Введен некорректный знак" << endl;
		break;
	}


}
