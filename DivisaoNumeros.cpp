#include <iostream>
int main (){
	
	int numero = 0;
	int divisor1 = 0;
	int divisor2 = 0;
	
	std:: cout << "Digite um numero: \n";
	std:: cin >> numero;
	std:: cout << "Digite um numero que divida o antes escolhido: ";
	std:: cin >> divisor1;
	std:: cout << "Digite outro numero que divida o antes escolhido: ";
	std:: cin >> divisor2;
	
	if (numero % divisor1 == 0 && numero % divisor2 == 0){
			std:: cout << "Os divisores " << divisor1 << " e " << divisor2 << " dividem " << numero;
	}else if (numero % divisor1 != 0 && numero % divisor2 == 0){
		std::  cout << "Que pena " << divisor1 << " nao divide " << numero << " mas " << divisor2 << " divide " << numero;
	}else if (numero % divisor1 == 0 && numero % divisor2 != 0){
		std:: cout<< "Que pena " << divisor1 << "  divide " << numero << " mas " << divisor2 << " nao divide " << numero;
	}else {
		std:: cout << "Que pena " << divisor1 << " e " <<  divisor2 << " nao dividem " << numero;
	}
	
	
	return 0;
}
