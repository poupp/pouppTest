#include <iostream>
#include <windows.h>
#include <string>

using namespace std;
int main(void) {
	int year;
	int month;
	bool flag;
	int days;
	bool x = true;

	cout << "请输入年份:	" << endl;
	cin >> year;
	cout << "请输入月份:	" << endl;
	cin >> month;

	if (year % 400 == 0) {
		flag = true;
	}
	else if (year % 4 == 0 && year % 100 != 0) {
		flag = true;
	}
	else {
		flag = false;
	}
	while (x) {

		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days = 31;
			x = false;
			break;
		case 2:
			days = flag ? 29 : 28;
			x = false;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			x = false;
			break;
		default:
			cout << "月份输入错误,请重新输入1-12!" << endl;
			cin.clear();
			cin.ignore((numeric_limits<streamsize>::max)(), '\n');
			cin >> month;
			break;
		}

	}
	cout << year << "年" << month << "月" << "有" << days << "天" << endl;

	system("pause");
	return 0;
}