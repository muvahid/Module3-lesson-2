#include<iostream>
#include<locale>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int nz;
	cout << "Введите номер задания:";
	cin >> nz;
	switch (nz)
	{
	case 1:

	{
		//1.	Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям предоставляется 20% скидка. Ввести продолжительность разговора и день недели (цифра от 1 до 7).//

		double st = 5.52;
		double dl;
		int day;
		cout << "Введите длительность разговора ";
		cin >> dl;

		cout << "Введите день недели ";
		cin >> day;

		cout << "Сумма равна " << dl * st << endl;
		switch (day)
		{
		case 6:
		case 7:
		{
			cout << "Сумма с учётом скидки равна " << (dl *st) - ((dl* st) * 0.2) << endl;
		}
		break;

		default:
		{
			cout << "Сумма равна " << dl * st << endl;
		}
		break;
		}
	}




	case 2:
		////	{//2.Вычислить стоимость покупки с учетом скидки.Скидка 5 % предоставляется, если сумма покупки превышает 500 тенге и 10 % , если больше 1000 тенге//
		////
		////		int p = 1100;
		////		int op;
		////		int d = 600;
		////		int dp;
		////		int price;
		////		cout << "Стоимость покупки";
		////		cin >> op;
		////		cout << "Введите сумма покупки ";
		////
		////		cout << "Сумма равна" << p*op << endl;
		////
		////		cout << "Стоимость покупки";
		////		cin >> dp;
		////		cout << "Введите сумма покупки";
		////		cout << "Сумма равна" << d*dp << endl;
		////
		////		if (price <= 500)
		////		{
		////			cout << "Сумма с учётом скидки равна " << (d*dp) - ((dp*d)*0.5) << endl;
		////		}
		////		else if (price >= 1000)
		////		{
		////			cout << "Сумма с учётом скидки равна " << (p*op) - ((op*p)*0.10) << endl;
		////		}
		////		else
		////		{
		////			cout << "Скидки нет !";//
		//		}
		//
		//	}
		//	}


	case 3:
	{
		int n;

		cout << "Введите номер месяца (число от 1 до 12, 0 - Выход)" << endl;
		cin >> n;
		switch (n) {

		case 1:
		case 2:
		case 12:
			cout << "Зима" << endl;
			break;
		case 3:
		case 4:
		case 5:
			cout << "Весна" << endl;
			break;
		case 6:
		case 7:
		case 8:
			cout << "Лето" << endl;
			break;
		case 9:
		case 10:
		case 11:
			cout << "Осень" << endl;
			break;
		case 0:
			break;
		default:
			cout << "Ошибка ввода данных." << endl;
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