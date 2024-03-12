#pragma once
#include<iostream>
using namespace std;

template <typename T>
class Cola
{
private:
    T* cola;
    int primero;
    int ultimo;
    int tamano;

public:
    Cola(int tamano);
    ~Cola();
    void push(T dato);
    T pop();
    int getPrimero();
    bool estaVacia();
    bool estaLlena();
    void imprimir();
};

template<typename T>
inline Cola<T>::Cola(int _tamano)
{
    tamano = _tamano;
    cola = new T[tamano];
    primero = 0;
    ultimo = -1;
}

template<typename T>
inline Cola<T>::~Cola()
{
    delete[] cola;
}

template<typename T>
inline void Cola<T>::push(T dato)
{
    if (!estaLlena())
    {
        ultimo++;
        cola[ultimo % tamano] = dato;
    }
    else
    {
        cout << "La Cola esta llena" << endl;
    }
}

template<typename T>
inline T Cola<T>::pop()
{
    if (!estaVacia())
    {
        T dato = cola[primero % tamano];
        primero++;
        return dato;
    }
    else {
        cout << "La Cola esta vacia" << endl;
    }
}

template<typename T>
inline int Cola<T>::getPrimero()
{
    return primero;
}

template<typename T>
inline bool Cola<T>::estaVacia()
{
    return ultimo < primero;
}

template<typename T>
inline bool Cola<T>::estaLlena()
{
    return ultimo - primero >= tamano - 1;
}

template<typename T>
inline void Cola<T>::imprimir()
{
    for (int i = primero; i <= ultimo; i++)
    {
        cout << cola[i % tamano] << " ";
    }
    cout << endl;
}


