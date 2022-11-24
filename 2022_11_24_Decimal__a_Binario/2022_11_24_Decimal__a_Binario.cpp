// 2022_11_24_Decimal__a_Binario.cpp
// Fernando Fabian Patino Ibarra
// Programa para conversion de numeros decimales a binario
//

#include <iostream>

void  binario(int n) {
	if (n > 1) { binario(n / 2); }
	std::cout << n % 2;
}

int main()
{
	int n;
	do
	{
		std::cout << "Ingrese un numero" << std::endl;
		std::cin >> n;
		if (n<0)
		{
			std::cout << "Numero Invalido!!!!!" << std::endl;
		}
	} while (n<0);
	std::cout << "\n numero: " << n;
	std::cout << "\n binario:";

	binario(n);
}


