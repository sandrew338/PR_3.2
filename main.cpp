// Lab_03_2.cpp
// < ����������, �����>
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 0.1
#include <iostream>
using namespace std;
int main()
{
	// (x != c) && (a != c)
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// ����� 1: ������������ � ��������� ����
	if (x < -10 && b != 0)
		F = a * pow(x, 2) - c * x + b;
	if (x > -10 && b == 0)
		F = (x - a) / (x - c);
	if (!(x < -10 && b != 0) && !(x > -10 && b == 0)) // (x == -10)  simpler
		F = -x / (a - c);
	cout << endl;
	cout << "1) F = " << F << endl;
	// ����� 2: ������������ � ����� ����
	if (x < -10 && b != 0)
		F = a * pow(x, 2) - c * x + b;
	else
		if (x > -10 && b == 0)
			F = (x - a) / (x - c);
		else
			F = -x / (a - c);
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}