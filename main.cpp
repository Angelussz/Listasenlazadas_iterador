//codigo guiado de https://ronnyml.wordpress.com/2009/07/04/listas-enlazadas-clase-lista-en-c/
//https://es.wikipedia.org/wiki/Iterador_(patrón_de_diseño)
//https://es.wikibooks.org/wiki/Programación_en_C%2B%2B/Sobrecarga_de_Operadores
#include "iterador.h"
using namespace std;
int main()
{
    Lista<int> lista1;
    lista1.agregar_f(0);
    lista1.agregar_f(5);
    lista1.agregar_f(2);
    lista1.agregar_f(8);
    lista1.agregar_d(9,1);
    //lista1.remove(2);
    //lista1.mostrar();
    Iterador<int> x;
	x=lista1.comienzo_list();
  
    while(x.hasNext()!=false)
    {
        cout << *x << " ";	
        ++x;
	}
	cout<<*x;
	cout << std::endl;  
}
