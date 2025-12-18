#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int num = 10; 

    int* pNum = &num; 

    cout << pNum << endl; 
    cout << *pNum << endl;

    *pNum = 35; 

    cout << "Изменненное значение: " << endl; 

    int arr[] = { 5, 10, 15, }; 
    int* pArr = arr; 

    for (int i = 0; i < 5; ++i) {
        cout << *(pArr + i) << endl;
    }

    int val = 5; 

    int* const pVal = &val; 

    *pVal = 10; 

    cout << *pVal << endl;
    cout << val << endl;
 
    int x = 11;
    pVal = &x; 

    return 0;
}
