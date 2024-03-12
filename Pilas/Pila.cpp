#include <iostream>
#include "Pila.h"

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
	Pila<string> pila(5);
	pila.push("juan");
	pila.push("pedro");
	pila.push("pablo");
	pila.push("mateo");
	pila.push("marcos");
	pila.push("judas");

	pila.imprimir();

	string aux = pila.pop();

	pila.imprimir();

	//cout << sumar<string>(string("Jose "), string("Luis")) << endl;
	//cout << sumar<int>(10, 23) << endl;
	return 0;
}