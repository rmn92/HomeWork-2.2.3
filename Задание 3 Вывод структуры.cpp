#include <iostream>

using namespace std;

struct addresses
{
	string cityName;
	string streetName;
	int houseNumber;
	int apartmentNumber;
	int indexNumber;
};

void printAddresses(addresses& address);
int main()
{
	setlocale(LC_ALL,"rus");

	addresses address;

	cout << "Введите название города: ";
	cin >> address.cityName;
	cout << "Введите название улицы: ";
	cin >> address.streetName;
	cout << "Введите номер дома: ";
	cin >> address.houseNumber;
	cout << "Введите номер квартиры: ";
	cin >> address.apartmentNumber;
	cout << "Введите индекс: ";
	cin >> address.indexNumber;

	printAddresses(address);
}

void printAddresses(addresses& address)
{
	cout << "Город: " << address.cityName << endl;
	cout << "Улица: " << address.streetName << endl;
	cout << "Номер дома: " << address.houseNumber << endl;
	cout << "Номер квартиры: " << address.apartmentNumber << endl;
	cout << "Индекс: " << address.indexNumber << endl;
}
