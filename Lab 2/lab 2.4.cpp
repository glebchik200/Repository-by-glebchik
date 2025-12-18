#include <iostream>
#include "static_f.h"
using namespace std;
using namespace MyFuncs;

#define SUM(a, b) ((a) + (b))


void foo() {
	staticFunction(5);
	staticFunction(10);
	staticFunction(3);

}


int fourth_func() {
	staticFunction(5);
	staticFunction(10);
	staticFunction(3);

	int result = SUM(7, 8);
	cout << "����� ����� ������ SUM: " << result << endl;

}
