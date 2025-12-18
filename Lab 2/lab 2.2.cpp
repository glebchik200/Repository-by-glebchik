#include <iostream>
using namespace std;


void second_func() {

	int num;
	while (true) {
		cout << "������� ����� ������������� �����: " << endl;
		cin >> num;
		if (num > 0) {
			break;
		}
	}

	int ans = 0;
	for (int i = 0; i <= num; i++) {
		ans += i;
	}
	cout << ans << endl;

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int a : arr) {
		cout << a << " ";
	}
	cout << endl;

	for (int i = 0; i < length; i++) {
		if (i % 2 == 0) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;

	ans = 0;
	for (int i = 0; i < length; i++) {
		if (i % 2 != 0) {
			ans += arr[i];
		}
	}
	cout << ans << endl;

}
