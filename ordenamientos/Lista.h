#pragma once
#include "Nodo.h"
class Lista
{
public:
	Nodo* header;
	Nodo* tail;
	producto product;
	Lista();
	Lista(Nodo*, Nodo*);
	void insertarInicio(producto);
	void mostrar();
	void eliminarTodo();
	void eliminar(producto);
	void insertarFinal(producto);
	bool vacia();
	int tamanoLista();
	void insertarPosicion(int, producto);
	int buscar(producto);
	void primerElemento();
	void ultimoElemento();
	void anterior(producto);
	void siguiente(producto);
	void bubbleSort();
	void insertionSort();
	void selectionSort();
	void shellSort();
	void mergeSort(int, Lista*);
	void quickSort();
};