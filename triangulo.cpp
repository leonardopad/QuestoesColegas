#include <iostream>
int main(){
	float a , b ,c , d , e , f;
	float area = 0;
	float area2 = 0; 
	std:: cout << "Diga as areas referentes aos 3 lados de um triangulo e compare as com a area de um segundo triangulo \n ";
	std:: cout << "Primeiro triangulo: \n Lado A ";
	std:: cin >> a;
	std:: cout << "Lado B: ";
	std:: cin >> b;
	std:: cout  << "Lado C ";
	std:: cin >> c;
	area = (a + b + c) / 2;	
	std:: cout << "area do primeiro triangulo e: \n" << area;
	std:: cout << "Segundo triangulo: \n Lado A ";
	std:: cin >> d;
	std:: cout << "Lado B: ";
	std:: cin >> e;
	std:: cout  << "Lado C ";
	std:: cin >> f;
	area2 = (a + b + c) / 2;
	std:: cout << " \n area do segundo triangulo e: \n" << area2;
	
		
	
	
}
