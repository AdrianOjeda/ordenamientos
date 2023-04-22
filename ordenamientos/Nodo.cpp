#include "Nodo.h"
#include <string.h>

Nodo::Nodo() {
	product.setPrecio(0);
	product.setNombre(0);
	product.setId(0);
}
Nodo::Nodo(producto product, Nodo* sig, Nodo* ant) {

	this->product.setNombre(product.getNombre());
	this->product.setPrecio(product.getPrecio());
	this->product.setId(product.getId());
	this->sig = sig;
	this->ant = ant;

}