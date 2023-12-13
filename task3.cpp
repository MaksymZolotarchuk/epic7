#include <iostream>

using namespace std;

int main()
{
	int KOL;
	cout << "Enter kol per hour: " << endl;
	cin >> KOL;

	const int shift_standart = 8; // звичайна зміна
	const int shift_day = 2; // 2 зміни
	const int month_days = 30;
	const int relax_days = 4; // вихідні дні
	const int profilactic_hour = 1; // час на профілактику верстата

	int work_hours = shift_standart - profilactic_hour;
	int work_days = month_days - relax_days;

	int Kol_per_8 = KOL * work_hours;
	int Kol_per_day = Kol_per_8 * shift_day;
	int Kol_per_month = Kol_per_day * work_days;

	cout << "Kol per 8 hours: " << Kol_per_8 << endl;
	cout << "Kol per 1 day: " << Kol_per_day << endl;
	cout << "Kol per 1 month: " << Kol_per_month << endl;

	return 0;

}