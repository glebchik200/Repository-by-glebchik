#include <iostream>
using namespace std;


int foo(int n = 1) {
    if (n <= 0) {
        return 0;
    }
    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

void calc(int a, int b, int& sum, int& prod) { 
    sum = a + b;  
    prod = a * b; 
}

void third_func() {
    setlocale(LC_ALL, "");


    int arr[2][3]{ {1, 2, 3}, {4, 5, 6} };
    int sum = 0;

    for (auto &subarr : arr) {

        for (int num : subarr) {
            sum += num;
        }
    }
    cout << sum << endl;

    int arr2[3]{};

    for (int j = 0; j < 3; ++j) {
        arr2[j] = arr[0][j] + arr[1][j];
    }

    for (int num : arr2) {
        cout << num << ", ";
    }
    cout << endl;

    float fnum = 20.84; 
    float& ref1 = fnum;
    float& ref2 = fnum;

    ref1 = 15.5; 

    cout << "Значение переменной: " << fnum << endl; 
    cout << "Значение через ссылку 1: " << ref1 << endl;
    cout << "Значение ссылку 2: " << ref2 << endl;

    cout << "foo(10) = " << foo(10) << endl;
    cout << "foo() = " << foo() << endl; 

    int a = 3, b = 4, s = 0, p = 0;

    calc(a, b, s, p); 
    cout << "Сумма: " << s << ", Произведение: " << p << endl;

    int num = 10;
    cout << num << endl;

    for (int i = 0; i < 3; ++i) { 
        int x = i + 1;
        cout << "x = " << x << endl;
    }


}
