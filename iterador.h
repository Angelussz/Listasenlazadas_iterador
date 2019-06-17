#include "lista.h"


template <class T>
class Iterador
{
    private:
        Nodo<T>* cursor;
    public:
        Iterador();
        bool hasNext();
        Iterador& next();

        Iterador& operator++();
        Iterador& operator=(Nodo<T>* entregar);
        T operator*();

};

template<class T>
Iterador<T>::Iterador()
{
	
	cursor=NULL;
}

template<class T>
bool Iterador<T>::hasNext() 
{ 
    return cursor->getSiguiente(); 
}

template<class T>
Iterador<T>& Iterador<T>::next() 
{
    cursor = cursor->getSiguiente();
    return *this;
}

template<class T>
Iterador<T>& Iterador<T>::operator++()
{ 
    return next();
}

template<class T>
Iterador<T>& Iterador<T>::operator=(Nodo<T>* entregar)
{
    cursor = entregar;
    return *this;
}

template<class T>
T Iterador<T>::operator*()
{
    return *(cursor->getDato());
}

