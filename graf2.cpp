#include<iostream>
using namespace std;
int main() {
	setlocale(0, "RU");
	int x, k = 0, k_nechet = 0, sum = 0,max = 0; 
	cout << "��� ���������� ����� �������� ������� -1.\n������� ������� �����:\n";
	cin >> x;
	if (x == -1) cout << "���� �� ������.";
	while (x != -1) {
		if (x != 0) {
			if (x % 2 != 0) k_nechet++;
			sum += x;
			k++;
			if (x > max) max = x;
		}
		cin >> x;
	}
	if (sum % 2 == 0 && k <= sum && max < k && k_nechet % 2 == 0) {
		cout << endl << "���� ����������.";
	}
	else {
		cout << endl << "���� �� ����������.";
	}
}