#include "iostream"
#include <stdlib.h>
#include <conio.h>
#include <locale>
#include <math.h>
#include <Windows.h>
using namespace std;



void proverka()
{
	int num;
	while (true)
	{
		if (cin.good())
		{
			cin.ignore(150, '\n');
			break;
		}
		cin.clear();
		cout << "\x1b[31mОшибка. Неверный ввод данных \x1b[0m" << endl;
		cin.ignore(150, '\n');
		break;
	}
}

int fact(int n) {
	int F = 1;
	if (n <= 0)
		return 1;
	if (n > 0)
	{
		for (int i = 1; i <= n; i++)
			F = F * i;

	}
	return F;
}


int main()
{
	SetConsoleOutputCP(65001);
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	SetConsoleTitleA("Задачи СМО:\n");
	int num = 1;
	bool exit = false;
	string s = "\n1.Задача №1\n2.Задача №2\n3.Задача №3\n4.Очистка консоли\n5.Закрыть программу\n";
	cout << s;
	while (!exit)
	{
		cout << "\n\x1b[33mНомер операции > \x1b[0m";
		cin >> num;
		proverka();
		switch (num) {
		case 1:
		{
			double t, r, mm, p, N1, p0, pz, Ns, Toch, Ts;

			while (true) {
				cout << "Введите T:\n";
				cin >> t;
				proverka();
				if (t > 0)
				{
					break;
				}
			}
			while (true) {
				cout << "Введите A:\n";
				cin >> r;
				proverka();
				if (r > 0)
				{
					break;
				}
			}

			mm = 1 / t;
			p = r / mm;
			N1 = (pow(p, 2)) / (1 - p);
			p0 = 1 - p;
			pz = 1 - p0;
			Ns = p / (1 - p);
			Toch = pow(p, 2) / (r * (1 - p));
			Ts = 1 / (mm * (1 - p));

			cout << "\n\x1b[32mРезультат задачи № 1:\x1b[0m";
			cout << "\nИнтенсивность потока обслуживаний: " << mm;
			cout << "\np = " << p;
			cout << "\nNоч = " << N1;
			cout << "\np0 = " << p0;
			cout << "\nPзан = " << pz;
			cout << "\nNсист = " << Ns;
			cout << "\nTоч = " << Toch;
			cout << "\nTсист = " << Ts;


			cout.precision(3);
			if (Toch > t)
			{

				cout << "\nВывод. Очевидно, что скорость обслуживания составов на сортировочной станции невысокая, так как время на ожидание обслуживания (" << Toch << " ч) превышает время на обслуживание (" << t << " ч). Для повышения эффективности работы сортировочной горки необходимо уменьшить время обслуживания одного состава или увеличить число сортировочных станций." << endl;

			}
			if (Toch < t)
			{

				cout << "\nВывод. Очевидно, что скорость обслуживания составов на сортировочной станции высокая, так как время на ожидание обслуживания (" << Toch << " ч) не превышает время на обслуживание (" << t << " ч). Для повышения эффективности работы сортировочной горки необходимо увеличить время обслуживания одного состава или уменьшить число сортировочных станций." << endl;

			}


			break;
		}
		case 2:
		{
			double t, r, p0, p1, N, Toch, Ns, Ts, K, Kd;
			while (true) {
				cout << "Введите T:\n";
				cin >> t;
				proverka();
				if (t > 0)
				{
					break;
				}
			}
			while (true) {
				cout << "Введите A:\n";
				cin >> r;
				proverka();
				if (r > 0)
				{
					break;
				}
			}
			double p = t * r;


			if (ceil(p) == 1) {
				p0 = pow((1 + (p / fact(1)) + ((pow(p, 2)) / (fact(1) * (1 - p)))), -1);
			}
			if (ceil(p) == 2)
			{
				p0 = pow((1 + (p / fact(1)) + (pow(p, 2) / fact(2)) + ((pow(p, 3)) / (fact(2) * (2 - p)))), -1);

			}

			if (ceil(p) == 3)
			{
				p0 = pow((1 + (p / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + ((pow(p, 4)) / (fact(3) * (3 - p)))), -1);

			}

			if (ceil(p) == 4)
			{
				p0 = pow((1 + (p / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + ((pow(p, 5)) / (fact(4) * (4 - p)))), -1);

			}
			if (ceil(p) == 5)
			{
				p0 = pow((1 + (p / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + (pow(p, 5) / fact(5)) + ((pow(p, 6)) / (fact(5) * (5 - p)))), -1);

			}

			if (ceil(p) == 6)
			{
				p0 = pow((1 + (p / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + (pow(p, 5) / fact(5)) + (pow(p, 6) / fact(6)) + ((pow(p, 7)) / (fact(6) * (6 - p)))), -1);

			}

			if (ceil(p) == 7)
			{
				p0 = pow((1 + (p / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + (pow(p, 5) / fact(5)) + (pow(p, 6) / fact(6)) + (pow(p, 7) / fact(7)) + ((pow(p, 8)) / (fact(7) * (7 - p)))), -1);

			}

			if (ceil(p) == 8)
			{
				p0 = pow((1 + (p / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + (pow(p, 5) / fact(5)) + (pow(p, 6) / fact(6)) + (pow(p, 7) / fact(7)) + (pow(p, 8) / fact(8)) + ((pow(p, 9)) / (fact(8) * (8 - p)))), -1);

			}
			if (ceil(p) == 9)
			{
				p0 = pow((1 + (p / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + (pow(p, 5) / fact(5)) + (pow(p, 6) / fact(6)) + (pow(p, 7) / fact(7)) + (pow(p, 8) / fact(8)) + (pow(p, 9) / fact(9)) + ((pow(p, 10)) / (fact(9) * (9 - p)))), -1);

			}

			if (ceil(p) == 10)
			{
				p0 = pow((1 + (p / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + (pow(p, 5) / fact(5)) + (pow(p, 6) / fact(6)) + (pow(p, 7) / fact(7)) + (pow(p, 8) / fact(8)) + (pow(p, 9) / fact(9)) + (pow(p, 10) / fact(10)) + ((pow(p, 11)) / (fact(10) * (10 - p)))), -1);

			}
			if (ceil(p) > 10)
			{
				cout << "\nМы пока не можем решить задачу!\n";
				break;
			}


			p1 = (pow(p, ceil(p) + 1)) / (fact(ceil(p)) * ((ceil(p) - p))) * p0;

			N = ((pow(p, ceil(p) + 1)) * p0) / (ceil(p) * fact(ceil(p)) * (pow(1 - (p / ceil(p)), 2)));

			Toch = (1 / r) * N;

			Ns = N + p;

			Ts = (1 / r) * Ns;

			K = r / (1 / t);

			Kd = p / ceil(p);


			cout << "\n\x1b[32mРезультат задачи № 2: \x1b[0m";
			cout << "\np = " << p;
			cout << "\np0 = " << p0;
			cout << "\nPоч = " << p1;
			cout << "\nNоч = " << N;
			cout << "\nTоч = " << Toch;
			cout << "\nNсист = " << Ns;
			cout << "\nTсист = " << Ts;
			cout << "\nK = " << K;
			cout << "\nK(Доля) = " << Kd;

			cout << "\nАбсолютная пропускная способность узла расчета А = " << r << " (1/мин),или " << r * 60 << " (1/ч), т. е. " << r * 60 << " покупатель в час.";

			cout << "\nВывод. Анализ характеристик обслуживания свидетельствует о значительной перегрузке узла расчета при наличии " << ceil(p) << " кассиров.\n";

			break;
		}

		case 3:
		{
			double t, r, n, m, mm, p0, potk, Q, A, N1, Toch, K, Ns, Ts;

			while (true) {
				cout << "Введите T:\n";
				cin >> t;
				proverka();
				if (t > 0)
				{
					break;
				}
			}
			while (true) {
				cout << "Введите интенсивность подхода составов:\n";
				cin >> r;
				proverka();
				if (r > 0)
				{
					break;
				}
			}
			while (true) {
				cout << "Введите число выгрузочных фронтов:\n";
				cin >> n;
				proverka();
				if (n > 0)
				{
					break;
				}
			}
			while (true) {
				cout << "Введите число составов:\n";
				cin >> m;
				proverka();
				if (m > 0)
				{
					break;
				}
			}

			mm = 1 / t;

			double p = t * r;

			if (n == 1) {
				p0 = pow(1 + (pow(p, 1) / fact(1), 1) + (pow(p, n + 1) * pow(1 - (p / n), m)) / (n * fact(n) * (1 - (p / n))), -1);
			}

			if (n == 2) {
				p0 = pow(1 + (pow(p, 1) / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, n + 1) * pow(1 - (p / n), m)) / (n * fact(n) * (1 - (p / n))), -1);
			}

			if (n == 3) {
				p0 = pow(1 + (pow(p, 1) / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, n + 1) * pow(1 - (p / n), m)) / (n * fact(n) * (1 - (p / n))), -1);
			}

			if (n == 4) {
				p0 = pow(1 + (pow(p, 1) / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + (pow(p, n + 1) * pow(1 - (p / n), m)) / (n * fact(n) * (1 - (p / n))), -1);
			}

			if (n == 5) {
				p0 = pow(1 + (pow(p, 1) / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + (pow(p, 5) / fact(5)) + (pow(p, n + 1) * pow(1 - (p / n), m)) / (n * fact(n) * (1 - (p / n))), -1);
			}

			if (n == 6) {
				p0 = pow(1 + (pow(p, 1) / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + (pow(p, 5) / fact(5)) + (pow(p, 6) / fact(6)) + (pow(p, n + 1) * pow(1 - (p / n), m)) / (n * fact(n) * (1 - (p / n))), -1);
			}

			if (n == 7) {
				p0 = pow(1 + (pow(p, 1) / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + (pow(p, 5) / fact(5)) + (pow(p, 6) / fact(6)) + (pow(p, 7) / fact(7)) + (pow(p, n + 1) * pow(1 - (p / n), m)) / (n * fact(n) * (1 - (p / n))), -1);
			}

			if (n == 8) {
				p0 = pow(1 + (pow(p, 1) / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + (pow(p, 5) / fact(5)) + (pow(p, 6) / fact(6)) + (pow(p, 7) / fact(7)) + (pow(p, 8) / fact(8)) + (pow(p, n + 1) * pow(1 - (p / n), m)) / (n * fact(n) * (1 - (p / n))), -1);
			}

			if (n == 9) {
				p0 = pow(1 + (pow(p, 1) / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + (pow(p, 5) / fact(5)) + (pow(p, 6) / fact(6)) + (pow(p, 7) / fact(7)) + (pow(p, 8) / fact(8)) + (pow(p, 9) / fact(9)) + (pow(p, n + 1) * pow(1 - (p / n), m)) / (n * fact(n) * (1 - (p / n))), -1);
			}

			if (n == 10) {
				p0 = pow(1 + (pow(p, 1) / fact(1)) + (pow(p, 2) / fact(2)) + (pow(p, 3) / fact(3)) + (pow(p, 4) / fact(4)) + (pow(p, 5) / fact(5)) + (pow(p, 6) / fact(6)) + (pow(p, 7) / fact(7)) + (pow(p, 8) / fact(8)) + (pow(p, 9) / fact(9)) + (pow(p, 10) / fact(10)) + (pow(p, n + 1) * pow(1 - (p / n), m)) / (n * fact(n) * (1 - (p / n))), -1);
			}
			if (n > 10)
			{
				cout << "\nМы пока не можем решить задачу!\n";
				break;
			}

			potk = (pow(p, n + m) / (pow(n, m) * fact(n))) * p0;

			Q = 1 - potk;

			A = r * Q;

			N1 = ((pow(p, n + 1) * p0) * (1 - (m + 1 - m * (p / n)) * (pow(p / n, m)))) / ((n * fact(n)) * (pow(1 - (p / n), 2)));

			Toch = N1 / r;

			K = p * ((1 - ((pow(p, m + n)) / (pow(n, m) * fact(n)) * p0)));

			Ns = N1 + K;

			Ts = Ns / r;

			cout << "\n\x1b[32mРезультат задачи № 3:\x1b[0m";
			cout << "\nИнтенсивность потока = " << mm;
			cout << "\np = " << p;
			cout << "\np0 = " << p0;
			cout << "\nPотк = " << potk;
			cout << "\nQ = " << Q;
			cout << "\nA = " << A;
			cout << "\nNоч = " << N1;
			cout << "\nTоч = " << Toch;
			cout << "\nK = " << K;
			cout << "\nNсист = " << Ns;
			cout << "\nTсист = " << Ts;
			cout << "\nВывод. Среднее время пребывания состава в ожидании разгрузки на другой станции невелико. Это говорит о нормальной работе выгрузочного узла.\n";


			break;
		}
		case 4:
		{
			system("cls");
			cout << s;
			break;
		}
		case 5:
		{
			exit = true;
			break;
		}

		}
	}
}