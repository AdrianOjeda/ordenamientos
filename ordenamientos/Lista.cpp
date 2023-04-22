#include "Lista.h"
#include <iostream>
using namespace std;


Lista::Lista() {
	header = nullptr;
	tail = nullptr;

}
Lista::Lista(Nodo* ptr, Nodo* ptrtail) {
	header = ptr;
	tail = ptrtail;

}


void Lista::insertarInicio(producto product) {
	Nodo* temp = new Nodo(product, nullptr, nullptr);
	if (!header) {
		header = temp;
		tail = temp;
		cout << "Producto ingresado con exito!" << endl;
	}
	else {
		//header = temp;
		temp->sig = header;
		header->ant = temp;
		header = temp;
	}
}

void Lista::mostrar() {
	Nodo* aux = header;

	if (header) {
		while (aux != tail->sig) {
			cout << "Nombre: " << aux->product.getNombre() << " | Precio: " << aux->product.getPrecio() << " | Id: " << aux->product.getId()<<  endl;
			aux = aux->sig;
		}
		cout << endl;
	}
	else {
		cout << endl << "Lista vacia" << endl;
	}

}

void Lista::eliminarTodo() {

	Nodo* aux = header;
	while (aux != nullptr) {
		Nodo* temp = aux;
		aux = aux->sig;
		delete temp;
	}
	header = nullptr;
	tail = nullptr;
	delete aux;
	cout << "Lista eliminada con exito!" << endl;
}

void Lista::insertarFinal(producto product) {
	Nodo* temp = new Nodo(product, nullptr, nullptr);
	Nodo* ultimo = header;
	temp->ant = tail;
	/*while (ultimo != tail) {
		ultimo = ultimo->sig;
	}*/
	tail->sig = temp;
	tail = temp;
	tail->sig = nullptr;
	cout << "Producto ingresado con exito!" << endl;

}
void Lista::eliminar(producto product) {

	Nodo* aux = header;
	Nodo* auxAnterior = nullptr;
	bool bandera = true;
	if (header != nullptr) {
		while (aux && bandera) {
			if ( product.getId() == aux->product.getId() ) {
				bandera = false;
			}
			else {
				auxAnterior = aux;
				aux = aux->sig;

			}
		}
		if (aux == nullptr) {
			cout << "No se encontro el producto" << endl;

		}
		else if (aux == header) {
			header = header->sig;
			//header->ant->sig = nullptr;
			delete aux;
			cout << "Producto eliminado con exito!" << endl;

		}
		else if (aux->sig == nullptr) {
			tail = tail->ant;
			tail->sig = nullptr;
			//aux->ant->sig=nullptr;

			//auxAnterior->sig = nullptr;
			delete aux;
			cout << "Producto eliminado con exito!" << endl;

		}
		else {

			aux->ant->sig = aux->sig;
			aux->sig->ant = aux->ant;
			//auxAnterior->sig = aux->sig;
			delete aux;
			cout << "Producto eliminado con exito!" << endl;
		}

	}
}

bool Lista::vacia() {

	if (header) {
		//cout << "hola" << endl;
		return false;
	}
	else {
		cout << endl << "Lista vacia" << endl;
		return true;
	}

}

int Lista::tamanoLista() {
	int contador = 0;
	Nodo* aux = header;
	while (aux != nullptr) {
		aux = aux->sig;
		contador++;

	}
	return contador;
}

void Lista::insertarPosicion(int posicion, producto product) {
	int contador = 0;
	Nodo* aux = header;
	//Nodo* auxAnterior = nullptr;
	Nodo* temp = new Nodo(product, nullptr, nullptr);
	if (posicion == 1) {
		temp->sig = header;
		header->ant = temp;
		header = temp;

		cout << "Producto ingresado con exito!" << endl;
	}
	else {
		while (contador < posicion - 1) {

			aux = aux->sig;
			contador++;

		}
		temp->sig = aux;
		temp->ant = aux->ant;
		aux->ant->sig = temp;
		aux->ant = temp;
		cout << "Producto ingresado con exito!" << endl;
	}

}

int Lista::buscar(producto product) {
	Nodo* aux = header;
	Nodo* auxAnterior = nullptr;
	int contador = 1;
	bool bandera = true;
	while (aux && bandera) {
		if (product.getId() == aux->product.getId() ) {
			bandera = false;
		}
		else {
			auxAnterior = aux;
			aux = aux->sig;
			contador++;
		}
	}
	return contador;
}
void Lista::primerElemento() {

	cout << "Nombre: " << header->product.getNombre() << " | Precio: " << header->product.getPrecio() <<" | ID: "<<header->product.getId()<< endl;

}
void Lista::ultimoElemento() {
	cout << "Nombre: " << tail->product.getNombre() << " | Precio: " << tail->product.getPrecio() << " | Id: " << tail->product.getId() << endl;
	


}
void Lista::siguiente(producto product) {
	Nodo* aux = header;
	Nodo* auxAnterior = nullptr;
	bool bandera = true;
	while (aux && bandera) {
		if (product.getPrecio() == aux->product.getPrecio() && product.getId() == aux->product.getId() && strcmp(product.getNombre(), aux->product.getNombre()) == 0) {
			bandera = false;
		}
		else {
			auxAnterior = aux;
			aux = aux->sig;
		}
	}
	if (aux->sig == nullptr) {
		cout << "El producto ingresado ya es el ultimo de la lista!" << endl;
	}
	else {
		cout << "El Producto que sigue de " << product.getNombre() << " es: " << endl;
		cout << "Nombre: " << aux->sig->product.getNombre() << " | Precio: " << aux->sig->product.getPrecio() << endl;
	}
}

void Lista::anterior(producto product) {

	Nodo* aux = header;
	Nodo* auxAnterior = nullptr;
	bool bandera = true;
	while (aux && bandera) {
		if (product.getPrecio() == aux->product.getPrecio() && product.getId() == aux->product.getId() && strcmp(product.getNombre(), aux->product.getNombre()) == 0) {
			bandera = false;
		}
		else {
			auxAnterior = aux;
			aux = aux->sig;

		}
	}
	if (aux == header) {
		cout << "El producto ingresado es el primero de la lista!" << endl;
	}
	else {
		cout << "El producto que esta antes de " << product.getNombre() << " es: " << endl;
		cout << "Nombre: " << auxAnterior->product.getNombre() << " | Precio: " << auxAnterior->product.getPrecio() <<" | ID: "<<auxAnterior->product.getId()<< endl;
	}

}

void Lista::bubbleSort() {

}

void Lista::insertionSort() {

}
void Lista::selectionSort() {


}

void Lista::shellSort() {


}
void Lista::mergeSort() {


}
void Lista::quickSort() {


}