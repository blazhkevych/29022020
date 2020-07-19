#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	const int sizer = 100, sizec = 100;
	int r, c, a = -20, b = 20;
	int arr[sizer][sizec]{ 0 };
	cout << "Введите количество рядов(r): ";
	cin >> r;
	cout << "Введите количество ячеек рядa(c): ";
	cin >> c;
	if (r<1 or r>sizer) return 0;
	if (c<1 or c>sizer) return 0;
	srand(time(0));
	for (int j = 0; j < r; j++) // генерация случайных чисел
		for (int i = 0; i < c; i++)
			arr[j][i] = a + rand() % (b - a + 1);
	for (int j = 0; j < r; j++) // вывод масива на экран
	{
		for (int i = 0; i < c; i++)
			cout << arr[j][i] << '\t';
		cout << endl;
	}
	int max = arr[0][0]; //максимальный єлемент массива
	for (int j = 0; j < r; j++)
		for (int i = 0; i < c; i++)
			if (max < arr[j][i]) max = arr[j][i];
	cout << "максимальный єлемент массива = " << max;
	int min = arr[0][0]; //минимальный єлемент массива
	for (int j = 0; j < r; j++)
		for (int i = 0; i < c; i++)
			if (min > arr[j][i]) min = arr[j][i];
	cout << "\nминимальный єлемент массива = " << min;
	int xmax = 0, ymax = 0; //позиция максимального 
	for (int j = 0; j < r; j++)
		for (int i = 0; i < c; i++)
			if (arr[j][i] > arr[ymax][xmax])
			{
				ymax = j;
				xmax = i;
			}
	cout << "\nПозиция максимального элемента массива = " << arr[ymax][xmax] << endl;
	int xmin = 0, ymin = 0; //позиция минимального 
	for (int j = 0; j < r; j++)
		for (int i = 0; i < c; i++)
			if (arr[j][i] < arr[ymin][xmin])
			{
				ymin = j;
				xmin = i;
			}
	cout << "\nПозиция минимального элемента массива = " << arr[ymin][xmin] << endl;
	swap(arr[ymax][xmax], arr[ymin][xmin]); //меняем местами максимальное и минимальное
	for (int j = 0; j < r; j++) // вывод масива на экран с суммой ряда
	{
		int sum = 0;
		for (int i = 0; i < c; i++)
		{
			cout << arr[j][i] << '\t';
			sum = sum + arr[j][i];
		}
		cout << "|" << sum << endl;
	}
	cout << endl;
	for (int j = 0; j < r; j++) // вывод масива на экран
	{
		for (int i = 0; i < c; i++)
			cout << arr[j][i] << '\t';
		cout << endl;
	}
	cout << endl;

	for (int j = 0; j < c; j++) // выводим сумму каждого столбца
	{
		int sum = 0;
		for (int i = 0; i < r; i++)
		{
			sum = sum + arr[i][j];
		}
		cout << sum << '\t';
	}
	cout << endl;
	cout << "\nсдвиг массива вправо\n";
	for (int j = 0; j < r; j++) // вывод масива на экран
	{
		for (int i = 0; i < c; i++)
			cout << arr[j][i] << '\t';
		cout << endl;
	}
	cout << endl;
	for (int j = 0; j < r; j++) // сдвиг массива вправо
	{
		int temp = arr[j][c - 1];
		for (int i = c - 1; i > 0; i--)
			arr[j][i] = arr[j][i - 1];
		arr[j][0] = temp;
	}
	cout << endl;
	for (int j = 0; j < r; j++) // вывод масива на экран
	{
		for (int i = 0; i < c; i++)
			cout << arr[j][i] << '\t';
		cout << endl;
	}
	cout << endl;
	cout << "сдвиг массива вправо(вариант 2)\n";
	for (int j = 0; j < r; j++) // вывод масива на экран
	{
		for (int i = 0; i < c; i++)
			cout << arr[j][i] << '\t';
		cout << endl;
	}
	cout << endl;
	for (int j = 0; j < r; j++) // сдвиг массива вправо вариант 2
	{
		for (int i = c - 1; i > 0; i--)
			swap(arr[j][i], arr[j][i - 1]);
	}
	cout << endl;
	for (int j = 0; j < r; j++) // вывод масива на экран
	{
		for (int i = 0; i < c; i++)
			cout << arr[j][i] << '\t';
		cout << endl;
	}
	cout << endl;

	cout << "сдвиг массива влево\n";
	for (int j = 0; j < r; j++) // вывод масива на экран
	{
		for (int i = 0; i < c; i++)
			cout << arr[j][i] << '\t';
		cout << endl;
	}
	for (int j = 0; j < r; j++) // сдвиг массива влево
	{
		for (int i = 0; i < c - 1; i++)
			swap(arr[j][i], arr[j][i + 1]);
		cout << endl;
	}
	for (int j = 0; j < r; j++) // вывод масива на экран
	{
		for (int i = 0; i < c; i++)
			cout << arr[j][i] << '\t';
		cout << endl;
	}
	cout << endl;
	return 0;
}

/*SetConsoleOutputCP(1251);
	const int sizer = 100, sizec = 100;
	int r, c, a = -20, b = 20;
	int arr[sizer][sizec]{ 0 };
	cout << "Введите количество рядов(r): ";
	cin >> r;
	cout << "Введите количество ячеек рядa(c): ";
	cin >> c;
	if (r<1 or r>sizer) return 0;
	if (c<1 or c>sizer) return 0;
	srand(time(0));
	for (int j = 0; j < r; j++) // генерация случайных чисел
		for (int i = 0; i < c; i++)
			arr[j][i] = a + rand() % (b - a + 1);
	for (int j = 0; j < r; j++) // вывод масива на экран
	{
		for (int i = 0; i < c; i++)
			cout << arr[j][i] << '\t';
		cout << endl;
	}
	int max = arr[0][0]; //максимальный єлемент массива
	for (int j = 0; j < r; j++)
		for (int i = 0; i < c; i++)
			if (max < arr[j][i]) max = arr[j][i];
	cout << "максимальный єлемент массива = " << max;
	int min = arr[0][0]; //минимальный єлемент массива
	for (int j = 0; j < r; j++)
		for (int i = 0; i < c; i++)
			if (min > arr[j][i]) min = arr[j][i];
	cout << "\nминимальный єлемент массива = " << min;
	int xmax = 0, ymax = 0; //позиция максимального
	for (int j = 0; j < r; j++)
		for (int i = 0; i < c; i++)
			if (arr[j][i] > arr[ymax][xmax])
			{
				ymax = j;
				xmax = i;
			}
	cout << "\nПозиция максимального элемента массива = " << arr[ymax][xmax] << endl;
	int xmin = 0, ymin = 0; //позиция минимального
	for (int j = 0; j < r; j++)
		for (int i = 0; i < c; i++)
			if (arr[j][i] < arr[ymin][xmin])
			{
				ymin = j;
				xmin = i;
			}
	cout << "\nПозиция минимального элемента массива = " << arr[ymin][xmin] << endl;
	swap(arr[ymax][xmax], arr[ymin][xmin]); //меняем местами максимальное и минимальное
	for (int j = 0; j < r; j++) // вывод масива на экран с суммой ряда
	{
		int sum = 0;
		for (int i = 0; i < c; i++)
		{
			cout << arr[j][i] << '\t';
			sum = sum + arr[j][i];
		}
		cout << "|" << sum << endl;
	}
	cout << endl;
	for (int j = 0; j < r; j++) // вывод масива на экран
	{
		for (int i = 0; i < c; i++)
			cout << arr[j][i] << '\t';
		cout << endl;
	}
	cout << endl;

	for (int j = 0; j < c; j++) // выводим сумму каждого столбца
	{
		int sum = 0;
		for (int i = 0; i < r; i++)
		{
			sum = sum + arr[i][j];
		}
		cout << sum << '\t';
	}
	cout << endl;

	for (int j = 0; j < r; j++) // вывод масива на экран
	{
		for (int i = 0; i < c; i++)
			cout << arr[j][i] << '\t';
		cout << endl;
	}
	cout << endl;

	for (int j = 0; j < r; j++) // сдвиг массива вправо
	{
		int temp = arr[j][c - 1];
		for (int i = c - 1; i > 0; i--)
			arr[j][i] = arr[j][i - 1];
		arr[j][0] = temp;
	}
	cout << endl;

	for (int j = 0; j < r; j++) // вывод масива на экран
	{
		for (int i = 0; i < c; i++)
			cout << arr[j][i] << '\t';
		cout << endl;
	}


	return 0;*/

	/*SetConsoleOutputCP(1251);
		const int sizer = 100, sizec = 100;
		int r, c, a = -20, b = 20;
		int arr[sizer][sizec]{ 0 };
		cout << "Введите количество рядов(r): ";
		cin >> r;
		cout << "Введите количество ячеек рядa(c): ";
		cin >> c;
		if (r<1 or r>sizer) return 0;
		if (c<1 or c>sizer) return 0;
		srand(time(0));
		for (int j = 0; j < r; j++) // генерация случайных чисел
			for (int i = 0; i < c; i++)
				arr[j][i] = a + rand() % (b - a + 1);
		for (int j = 0; j < 2; j++)// вывод масива на экран
		{
			for (int i = 0; i < 5; i++)
				cout << arr[j][i] << '\t';
			cout << endl;
		}
		int max = arr[0][0]; //максимальный єлемент массива
		for (int j = 0; j < r; j++)
			for (int i = 0; i < c; i++)
				if (max < arr[j][i]) max = arr[j][i];
		cout << "максимальный єлемент массива = " << max;
		int min = arr[0][0]; //минимальный єлемент массива
		for (int j = 0; j < r; j++)
			for (int i = 0; i < c; i++)
				if (min > arr[j][i]) min = arr[j][i];
		cout << "\nминимальный єлемент массива = " << min;
		int xmax = 0, ymax = 0; //позиция максимального
		for (int j = 0; j < r; j++)
			for (int i = 0; i < c; i++)
				if (arr[j][i] > arr[ymax][xmax])
				{
					ymax = j;
					xmax = i;
				}
		cout << "\nПозиция максимального элемента массива = " << arr[ymax][xmax] << endl;
		int xmin = 0, ymin = 0; //позиция минимального
		for (int j = 0; j < r; j++)
			for (int i = 0; i < c; i++)
				if (arr[j][i] < arr[ymin][xmin])
				{
					ymin = j;
					xmin = i;
				}
		cout << "\nПозиция минимального элемента массива = " << arr[ymin][xmin] << endl;
		swap(arr[ymax][xmax], arr[ymin][xmin]); //меняем местами максимальное и минимальное
		for (int j = 0; j < 2; j++)// вывод масива на экран
		{
			for (int i = 0; i < 5; i++)
				cout << arr[j][i] << '\t';
			cout << endl;
		}
		return 0;*/

		/*SetConsoleOutputCP(1251);
			const int sizer = 100, sizec = 100;
			int r, c, a = -20, b = 20;
			int arr[sizer][sizec]{ 0 };
			cout << "Введите количество рядов(r): ";
			cin >> r;
			cout << "Введите количество ячеек рядa(c): ";
			cin >> c;
			if (r<1 or r>sizer) return 0;
			if (c<1 or c>sizer) return 0;
			srand(time(0));
			for (int j = 0; j < r; j++) // генерация случайных чисел
				for (int i = 0; i < c; i++)
					arr[j][i] = a + rand() % (b - a + 1);
			for (int j = 0; j < 2; j++)// вывод масива на экран
			{
				for (int i = 0; i < 5; i++)
					cout << arr[j][i] << '\t';
				cout << endl;
			}

			int max = arr[0][0]; //максимальный єлемент массива
			for (int j = 0; j < r; j++)
				for (int i = 0; i < c; i++)
					if (max < arr[j][i]) max = arr[j][i];
			cout << "максимальный єлемент массива = " << max;
			return 0;*/

			/*SetConsoleOutputCP(1251);
				const int sizer = 100, sizec = 100;
				int r, c, a = -20, b = 20;
				int arr[sizer][sizec]{ 0 };
				cout << "Введите количество рядов(r): ";
				cin >> r;
				cout << "Введите количество ячеек рядa(c): ";
				cin >> c;
				if (r<1 or r>sizer) return 0;
				if (c<1 or c>sizer) return 0;
				srand(time(0));
				for (int j = 0; j < r; j++) // генерация случайных чисел
					for (int i = 0; i < c; i++)
						arr[j][i] = a + rand() % (b - a + 1);
				for (int j = 0; j < 2; j++)// вывод масива на экран
				{
					for (int i = 0; i < 5; i++)
						cout << arr[j][i] << '\t';
					cout << endl;
				}
				cout << endl;
				return 0;*/

				/*SetConsoleOutputCP(1251);
					const int sizer = 100, sizec = 100;
					int r, c;
					int arr[sizer][sizec]{ 0 };
					cout << "Введите количество рядов(r): ";
					cin >> r;
					cout << "Введите количество ячеек рядa(c): ";
					cin >> c;
					if (r<1 or r>sizer) return 0;
					if (c<1 or c>sizer) return 0;
					for (int j = 0; j < r; j++) // для ввоода с клавиатуры
						for (int i = 0; i < c; i++)
						{
							cout << "arr[" << j << "][" << i << "]= ";
							cin >> arr[j][i];
						}
					for (int j = 0; j < 2; j++)// вывод масива на экран
					{
						for (int i = 0; i < 5; i++)
							cout << arr[j][i] << '\t';
						cout << endl;
					}
					cout << endl;
					return 0;*/

					/*SetConsoleOutputCP(1251);
						int arr[2][5] //2-іклькість ліній, 5 - кількість ящиків в лінії
						{
						{10,20,15,30,40}, //этот масив 40 байт
						{1,2,3,4,10}
						};
						for (int j = 0; j < 2; j++)
						{
							for (int i = 0; i < 5; i++) // вывод масива на экран
								cout << arr[j][i] << '\t';
							cout << endl;
						}

						cout << endl;
						return 0;*/

						/*const int size = 100;
							int arr[size]{};
							cout << "Введите количество элементов: " << endl;
							int n;
							cin >> n;
							cout << "*** Случайные числа ***" << endl;
							srand(time(0));
							int a = -1000;
							int b = 1000;
							for (int i = 0; i < n; i++)
							{
								arr[i] = a + rand() % (b - a + 1);
								cout << arr[i] << '\t';
							}
							cout << endl;*/