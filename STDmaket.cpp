#include<iostream>
#include<iomanip>
#include<Windows.h>
using namespace std;

/* �������� : �����, ������������(�������)
* 1) short - 2����� - 16��� - 2^16
* 2) int - 4b - 32bit - 2^32
* 3) long - 4b -32bit - 2^32
* 4) longlong - 8b - 64bit- 2^64
* b ������������ -
float 4b
double 8b
2) ���������� - ������ 1�
3) char - 1�
�������������� � ���������� ��������� ������� �� �������, ��������, ���������
�������			��������		���������
1 �������		2 ��������      3 ��������
!� - �� �
boolean
*x-������������
�++ ���������
�����������
	������
�-- ���������
++� ���������
����������
	������
--� ���������
*/

void main()
{
	setlocale(LC_ALL, "ru");
	/*int num1, num2;
	cout << "Enter numbers" << endl;
	cin >> num1;
	cin >> num2;
	if (num1 > num2)
	{
		num1 *= 2;

	}
	cout << num1 << "   " << endl;*/
	/*float x, y;
		cout << "Enter nuvbers" << endl;
		cin >> x;
		if (x - 1 < 0)
		{
			y = 4;
		}
		else
		{
			y = 3;
		}
		cout << x << "   " << y << endl;*/
		
		// % - ������� �� �������������� ������� 
	int sec_all,h, min, sec;
	cout << "Enter sec" << endl;
	cin >> sec_all;
	/*min = sec_all / 60;
	sec = sec_all % 60;
	cout << sec_all << " = " << min << "min" << sec_all << "sec" << endl;*/
	 h = sec_all / 3600;
	 min = sec_all % 3600 / 60;
	 sec = sec_all % 60;
	cout << sec_all << " = " << h << "h" << min << "min" << sec << "sec" << endl;

		
}
	