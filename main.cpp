#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float potencia(float, float);

int main(int argc, char** argv) {
	float x,y;
	std::cout << "Ingrese valor de la base:" << std::endl;
	std::cin >> x;
	std::cout << "Ingrese valor del exponente:" << std::endl;
	std::cin >> y;
	std::cout << "El resultado es: " << potencia(x,y);
	return 0;
}
float potencia(float a, float b){
	int aux=1.0f;
	if (b==0.0f)
	{
		return 1.0f;
	}
	
	if (b>0.0f)
	{
		for (int i=0.0f; i<b; i++)
		{
			aux = aux * a;
		}	
		return aux;
	}
	if (b<0.0f)
	{
		for (int i=0.0f; i>b; i--)
		{
			aux = aux * a;
		}
		return 1.0f/aux;
	}
}
