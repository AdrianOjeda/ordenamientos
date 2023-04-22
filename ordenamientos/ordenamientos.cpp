#include "Lista.h"
#include <string.h>
#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
    int opcion, posicion, precio, id;
    char resp, nombre[30];


    Lista* list = new Lista;
    producto product;
    cout << "*** ALMACEN DE PRODUCTOS *** " << endl << endl;
    do {
        cout << "Eliga una opcion: " << endl << "1: Insertar producto al inicio" << endl << "2: Insertar producto al final" << endl << "3: Insertar producto en posicion determinada" << endl << "4: Eliminar producto" << endl << "5: Eliminar todo" << endl << "6: Buscar producto" << endl << "7: Inicializa lista" << endl << "8: Vacia" << endl << "9: Mostrar el primer producto de la lista" << endl << "10: Mostrar el ultimo producto de la lista" << endl << "11: Mostrar el tamano de la lista" << endl << "12: Siguiente" << endl << "13: Anterior" << endl << "14: Mostrar todo" << endl;

        cin >> opcion;
        switch (opcion) {
        case 1: {
            cout << "*** Insertar producto al inicio ***" << endl;
            id = rand();
            product.setId(id);
            cout << "Ingrese el precio del producto: ";
            cin >> precio;
            product.setPrecio(precio);

            cout << "Ingrese el nombre del producto: ";
            cin.ignore();
            cin.getline(nombre, 30);
            product.setNombre(nombre);

            list->insertarInicio(product);
            break;
        }case 2: {
            cout << "*** Insertar producto al final ***" << endl;

            if (list->vacia() == false) {
                id = rand();
                product.setId(id);
                cout << "Ingrese el precio del producto: ";
                cin >> precio;
                product.setPrecio(precio);

                cout << "Ingrese el nombre del producto: ";
                cin.ignore();
                cin.getline(nombre, 30);
                product.setNombre(nombre);
                list->insertarFinal(product);
            }


            break;
        }case 3: {
            cout << "*** Insertar producto en posicion ***" << endl;
            if (list->vacia() == false) {
                cout << "Escriba la posicion en la que quiere insertar el elemento: ";
                cin >> posicion;
                if (posicion > 0 && posicion <= list->tamanoLista()) {
                    id = rand();
                    product.setId(id);
                    cout << "Ingrese el precio del producto: ";
                    cin >> precio;
                    product.setPrecio(precio);

                    cout << "Ingrese el nombre del producto: ";
                    cin.ignore();
                    cin.getline(nombre, 30);
                    product.setNombre(nombre);
                    list->insertarPosicion(posicion, product);
                }if (posicion == list->tamanoLista() + 1) {
                    id = rand();
                    product.setId(id);
                    cout << "Ingrese el precio del producto: ";
                    cin >> precio;
                    product.setPrecio(precio);

                    cout << "Ingrese el nombre del producto: ";
                    cin.ignore();
                    cin.getline(nombre, 30);
                    product.setNombre(nombre);
                    list->insertarFinal(product);
                }
                else {
                    cout << "La posicion deseada no es valida" << endl;
                }
            }

            break;
        }case 4: {
            cout << "*** Eliminar producto ***" << endl;

            if (list->vacia() == false) {

                cout << "Ingrese el id del producto: ";
                cin >> id;
                product.setId(id);

                list->eliminar(product);
            }
            break;
        }case 5: {

            cout << "*** Eliminando todo ***" << endl;
            cout << endl;
            if (list->vacia() == false) {
                list->eliminarTodo();
            }


            break;
        }case 6: {
            cout << "*** Buscar Alumno ***" << endl;
            if (list->vacia() == false) {

                cout << "Ingrese el id del producto: ";
                cin >> id;
                product.setId(id);

                cout << "El alumno esta en la posicion: " << list->buscar(product) << endl;


            }
            break;
        }case 7: {
            cout << "*** Inicializar lista***" << endl;
            cout << "...";
            Lista* list = new Lista;
            cout << " Lista inicializada!" << endl;
            break;
        }case 8: {
            cout << "*** Vacia ***" << endl;
            if (list->vacia() == false) {
                cout << "La lista no esta vacia!" << endl;

            }
            break;
        }case 9: {
            cout << "*** Mostrando el primer producto de la lista ***" << endl;
            if (list->vacia() == false) {
                list->primerElemento();

            }
            break;
        }case 10: {
            cout << "*** Mostrando el ultimo producto de la lista ***" << endl;
            if (list->vacia() == false) {
                list->ultimoElemento();

            }
            break;
        }case 11: {
            cout << "*** Tamano de la lista ***" << endl;
            if (list->vacia() == false) {
                cout << endl << "El tamano de la lista es de: " << list->tamanoLista() << endl;

            }
            break;
        }case 12: {
            cout << "*** Siguiente ***" << endl;
            if (list->vacia() == false) {

                cout << "Ingrese la edad del producto: ";
                cin >> precio;
                product.setPrecio(precio);

                cout << "Ingrese el nombre del producto: ";
                cin.ignore();
                cin.getline(nombre, 30);
                product.setNombre(nombre);
                posicion = list->buscar(product);
                if (posicion > 0 && posicion <= list->tamanoLista()) {
                    list->siguiente(product);
                }
                else {
                    cout << "El alumno ingresado no se encuentra en la lista, ingrese un alumno valido!" << endl;

                }

            }

            break;
        }case 13: {
            cout << "*** Anterior ***" << endl;
            if (list->vacia() == false) {

                cout << "Ingrese la edad del producto: ";
                cin >> precio;
                product.setPrecio(precio);

                cout << "Ingrese el nombre del producto: ";
                cin.ignore();
                cin.getline(nombre, 30);
                product.setNombre(nombre);
                posicion = list->buscar(product);
                if (posicion > 0 && posicion <= list->tamanoLista()) {

                    list->anterior(product);
                }
                else {
                    cout << "El alumno ingresado no se encuentra en la lista, ingrese un alumno valido!" << endl;

                }

            }
            break;
        }case 14: {
            list->mostrar();
            break;
        }case 15: {
            int ordenamiento;
            cout << "*** Ordenar ***" << endl;
            cout << "1. Bubble-sort" << endl;
            cout << "2. Insertion-Sort" << endl;
            cout << "3. Selection-Sort" << endl;
            cout << "4. Shell-sort" << endl;
            cout << "5. Merge-Sort" << endl;
            cout << "6. Quick-Sort" << endl;
            cin >> ordenamiento;
            switch (ordenamiento) {
            case 1: {
                list->bubbleSort();
                cout << "Lista ordenada con exito!" << endl;
                break;
            }case 2: {
                list->insertionSort();
                cout << "Lista ordenada con exito!" << endl;
                break;
            }case 3: {
                list->selectionSort();
                cout << "Lista ordenada con exito!" << endl;
                break;
            }case 4: {
                list->shellSort();
                cout << "Lista ordenada con exito!" << endl;
                break;
            }case 5: {
                list->mergeSort();
                cout << "Lista ordenada con exito!" << endl;
                break;
            }case 6: {
                list->quickSort();
                cout << "Lista ordenada con exito!" << endl;
                break;
            }default: {

                cout << "Ingrese una opcion valida" << endl;
                break;
            }
            }


        }
        default: {
            cout << "Ingrese una opcion valida!!" << endl;
            break;
        }
        }

        cout << "Desea continuar? y/n: ";
        cin >> resp;
    } while (resp == 'y' || resp == 'Y');
    delete list;

}