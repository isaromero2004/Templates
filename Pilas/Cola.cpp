#include "Cola.h"
#include <iostream>


using namespace std;

//template <typename T>
template <class T>
T sumar(T a, T b) {
	return a + b;
}

template <class T, class U>
class A {
public:
	T a;
	T b;
	U c;
	U d;
	A(T a, T b) : a(a), b(b) {}
	T sumar() {
		return a + b;
	}


};

int main() {

	string a, b;

	cout << "Ingrese su Nombre: ";
	cin >> a;
	cout << "Ingrese su apellido: ";
	cin >> b;

	cout << "Bienvenido " << sumar<string>(string(a) + " ", string(b)) << endl;
	cout << endl;

	cout << "La suma de datos enteros es: " << sumar<int>(79, 3) << endl;

	cout << "La suma de datos decimales es: "<< sumar<float>(245.73, 874.15) << endl;
	cout << endl;

	cout << "Representacion de la cola:" << endl;

	Cola<string> cola(5);
	cola.push("Jorge");
	cola.push("Isabel");
	cola.push("Helen");
	cola.push("Gabriel");
	cola.push("Ronald");
	
	cola.imprimir();
	cola.push("Carlos");

	

	string aux = cola.pop();

	cout << "Sale el primer integrante e ingresa uno nuevo:" << endl;

	cola.push("Carlos");

	cola.imprimir();

	
	return 0;
}