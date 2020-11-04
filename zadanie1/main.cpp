#include <iostream>
int main()
{

int a;
float b;
std::cout << "Podaj liczbe calkowita: ";
std::cin >> a;
std::cout << "Ilosc bledow: " << std::cin.fail() << std::endl;
while(std::cin.fail() > 0){
	std::cin.clear();
	std::cin.ignore( 1000, '\n');
	std::cout << "Wystapil blad, podaj ponownie liczbe calkowita: ";
	std::cin >> a;
	std::cout << "Ilosc bledow: " <<std::cin.fail() << std::endl;
	}
std::cout << "Podaj liczbe rzeczywista: ";
std::cin >> b;
std::cout << "Ilosc bledow: " <<std::cin.fail() << std::endl;
while(std::cin.fail() > 0){
	std::cin.clear();
	std::cin.ignore( 1000, '\n');
	std::cout << "Wystapil blad, podaj ponownie liczbe rzeczywista: ";
	std::cin >> b;
	std::cout << "Ilosc bledow: " << std::cin.fail() << std::endl;
}
std::cout << "Liczba a = " << a << std::endl;
std::cout << "Liczba b = " << b << std::endl;
return 0;
}
