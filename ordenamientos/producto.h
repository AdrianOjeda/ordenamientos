#pragma once
#include <string.h>
class producto
{
private:
	char nombre[30];
	int precio = 0;
	int id = 0;
public:
	producto();
	producto(int, char*, int);
	//getters
	char* getNombre() { return nombre; }
	int getPrecio() { return precio; }
	int getId() { return id; }

	// setters
	void setNombre(char* n) { strncpy_s(nombre, n, sizeof(nombre)); }
	void setPrecio(int e) { precio = e; }
	void setId(int i) { id = i; }

};

