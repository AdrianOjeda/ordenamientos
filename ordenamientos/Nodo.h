#pragma once
#include "producto.h"

class Nodo
{
public:
	producto product;
	Nodo* sig;
	Nodo* ant;
	Nodo();
	Nodo(producto, Nodo*, Nodo*);
};
