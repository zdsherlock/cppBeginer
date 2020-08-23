#include <iostream>

int main()
{
	unsigned short int myAge = 5, yourAge = 10;
	unsigned short int* pAge = &myAge; //a pointer

	std::cout << "myAge:\t" << myAge;
	std::cout << "\t\tyourAge:\t" << yourAge << "\n";
	std::cout << "&myAge:\t" << &myAge;
	std::cout << "\tyourAge:\t" << &yourAge << "\n";

	std::cout << "pAge:\t" << pAge << "\n";
	std::cout << "*pAge:\t" << *pAge << "\n\n";

	pAge = &yourAge; // reassign the pointer

	std::cout << "myAge:\t" << myAge;
	std::cout << "\t\tyourAage:\t" << yourAge << "\n";
	std::cout << "&myAge:\t" << &myAge;
	std::cout << "\t&yourAge:\t" << &yourAge << "\n";

	std::cout << "pAge:\t" << pAge << "\n";
	std::cout << "*pAge:\t" << *pAge << "\n\n";

	std::cout << "&pAge\t" << &pAge << "\n";

	unsigned short int temp = 0;
	temp = yourAge * *pAge;
	std::cout << "yourAge * *pAge:\t" << temp << "\n";

	myAge = *pAge;
	std::cout << "now myAge is: \t" << myAge << "\n";

	return 0;
}