#include <iostream>
using namespace std;

int sum(int* i, int* end) { 
    int s = 0;
    while (i < end) {
        s += *i;
        i++;
    }
    return s;
}

int sub(int a, int b) {
    return a - b;
}

int add(int a, int b) { 
    return a + b; 
} 

int (*getFunc(char op))(int, int) { 
    if (op == '+') 
        return add;
    if (op == '-') 
        return sub;

    return nullptr;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[] = { 5, 10, 15 }; 
    int res = sum(arr, arr + 3); 
    cout << res << endl;


    int a = 12;
    int b = 16;

    char op;
    cout << "Введите + или -: ";
    cin >> op;

    int (*fx)(int, int) = getFunc(op);
    if (fx)
        cout << "Результат операции: " << fx(a, b) << endl;
    else
        cout << "Неверный символ операции!" << endl;

    float* n = new float(1.33); 

    cout << *n << endl;

    delete n; 

    n = nullptr; 

    return 0;
}
