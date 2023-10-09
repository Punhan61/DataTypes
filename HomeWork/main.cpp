#include<iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
//#define TASK_3

void main()
{
	setlocale(LC_ALL, "");
#ifdef TASK_1
	float number;
	cout << "Enter number: "; cin >> number;
	int rub, kop;
	rub = number;
	kop = (number - rub) * 100;
	cout << rub << "rub " << kop << "kop";
#endif // TASK_1

#ifdef TASK_2
	double price_notebook, price_pencil;
	int number_notebooks, number_pencils, total_price;
	cout << "Вычесление стоимости покупки. " << "Введите исходные данные: " << endl;
	cout << "Price of the notebook: "; cin >> price_notebook;
	cout << "Number of notebooks: ";   cin >> number_notebooks;
	cout << "The price of a pencil: "; cin >> price_pencil;
	cout << "Number of pencils: ";     cin >> number_pencils;

	number_notebooks = price_notebook * number_notebooks;
	number_pencils = price_pencil * number_pencils;
	total_price = number_notebooks + number_pencils;
	cout << "Total price: " << total_price;
#endif // TASK_2

#ifdef TASK_3
	double distance, expendinture, price_petrol, total_price;
	cout << "Сalculating the cost of a trip to the country and back" << endl;
	cout << "Distance: "; cin >> distance;
	cout << "Expendinture petrol: "; cin >> expendinture;
	cout << "The price of petrol: "; cin >> price_petrol;
	total_price = distance * 2 * expendinture / 100 * price_petrol;
	cout << "Total price per trip: " << total_price;
#endif // TASK_3

	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	int bufer = a;
	a = b;
	b = bufer;
	cout << a << "\t" << b << endl;
	hggg
}