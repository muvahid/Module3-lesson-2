#include<iostream>
#include<locale>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "������� ����� �������:";
	cin >> nz;
	switch (nz)
	{
	case 1:

	{
		//1.	�������� ��������� ���������� ��������� �����������, ���� �� �������� � ������������ ��������������� 20% ������. ������ ����������������� ��������� � ���� ������ (����� �� 1 �� 7).//

		double st = 5.52;
		double dl;
		int day;
		cout << "������� ������������ ��������� ";
		cin >> dl;

		cout << "������� ���� ������ ";
		cin >> day;

		cout << "����� ����� " << dl * st << endl;
		switch (day)
		{
		case 6:
		case 7:
		{
			cout << "����� � ������ ������ ����� " << (dl *st) - ((dl* st) * 0.2) << endl;
		}
		break;

		default:
		{
			cout << "����� ����� " << dl * st << endl;
		}
		break;
		}
	}




	case 2:
		////	{//2.��������� ��������� ������� � ������ ������.������ 5 % ���������������, ���� ����� ������� ��������� 500 ����� � 10 % , ���� ������ 1000 �����//
		////
		////		int p = 1100;
		////		int op;
		////		int d = 600;
		////		int dp;
		////		int price;
		////		cout << "��������� �������";
		////		cin >> op;
		////		cout << "������� ����� ������� ";
		////
		////		cout << "����� �����" << p*op << endl;
		////
		////		cout << "��������� �������";
		////		cin >> dp;
		////		cout << "������� ����� �������";
		////		cout << "����� �����" << d*dp << endl;
		////
		////		if (price <= 500)
		////		{
		////			cout << "����� � ������ ������ ����� " << (d*dp) - ((dp*d)*0.5) << endl;
		////		}
		////		else if (price >= 1000)
		////		{
		////			cout << "����� � ������ ������ ����� " << (p*op) - ((op*p)*0.10) << endl;
		////		}
		////		else
		////		{
		////			cout << "������ ��� !";//
		//		}
		//
		//	}
		//	}


	case 3:
	{
		int n;

		cout << "������� ����� ������ (����� �� 1 �� 12, 0 - �����)" << endl;
		cin >> n;
		switch (n) {

		case 1:
		case 2:
		case 12:
			cout << "����" << endl;
			break;
		case 3:
		case 4:
		case 5:
			cout << "�����" << endl;
			break;
		case 6:
		case 7:
		case 8:
			cout << "����" << endl;
			break;
		case 9:
		case 10:
		case 11:
			cout << "�����" << endl;
			break;
		case 0:
			break;
		default:
			cout << "������ ����� ������." << endl;
		}
		//cout << endl;
	} //cout (n != 0);
	}
		case 4: {




			int a, b, c;
			cout << "a=" << "b=" << "c=" << endl;
			cin >> a;
			cin >> b;
			cin >> c;
			switch (a, b, c)
			{
			case a:
			case b:
			case c:


				(a == b || b == a || a == c || c == a || b == c || c == b) {
				cout << "" << endl;
			}
				{
					cout << "" << endl;
				}
				getche();
			}
		}
}