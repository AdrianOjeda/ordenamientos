#include "producto.h"
#include <string.h>

producto::producto() {

	precio = 0;
	strcpy_s(nombre, "");

	id = 0;
}

producto::producto(int edad, char* nombre, int id) {
	this->precio = edad;
	strcpy_s(this->nombre, nombre);
	this->id = id;
}