#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = 1 + x;
	// ����� 1: ������������ � ���������� ����
	if (x <= 4)
		B = exp(log(2 + (2 * x)) + 2 * x);
	if (4 < x && x <= 7)
		B = 1. / tan((1 + x) / 9) + 8 * x;
	if (x > 7)
		B = 1 - 7 * x + pow(x, 2) - 2 * pow(x, 3);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ������ ����
	if (x <= 4)
		B = exp(log(2 + (2 * x)) + 2 * x);
	else
		if (x > 7)
			B = 1 - 7 * x + pow(x, 2) - 2 * pow(x, 3);
		else
			B = 1. / tan((1 + x) / 9) + 8 * x;
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}
