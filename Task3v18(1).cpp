#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); // ��� ������ ����������
	double money;
	cout << "������ ������� �����: " << endl;
		cin >> money;
		double fraction;
		double integer;
		fraction = modf(money, &integer); // ��� �������� �� ���� �� ������� �������

		cout << integer << " ���." << " " << (fraction * 100) << " ���." << endl;

		return 0;

}