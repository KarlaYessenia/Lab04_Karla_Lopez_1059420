#include "Lista.h"
Lista::Lista() {
	Inicio = nullptr;
	Fin = nullptr;
	contador == 0;
};
//Insert Operations
void Lista::InsertAtStart(int dato) {
	Nodo* new_nodo = new Nodo();
	new_nodo->dato = dato;

	if (isEmpty()) { //The list is empty
		Inicio = new_nodo;
		Fin = new_nodo;
	}
	else { //The list is not empty
		new_nodo->siguiente = Inicio;
		Inicio = new_nodo;
	}
	contador++;
}


void Lista::InsertAtEnd(int dato) {
	Nodo* new_nodo = new Nodo();
	new_nodo->dato = dato;

	if (isEmpty()) { //The list is empty
		Inicio = new_nodo;
		Fin = new_nodo;
	}
	else { //The list is not empty
		Fin->siguiente = new_nodo;
		Fin = new_nodo;
	}
	contador++;
}

void Lista::InsertAtPosition(int dato, int position) {
	Nodo* new_nodo = new Nodo();
	new_nodo->dato = dato;

	if (isEmpty() || (position == 0)) { //The list is empty
		InsertAtStart(dato);
	}
	else { //The list is not empty
		if (position >= contador) {
			InsertAtEnd(dato);
		}
		else { //Position in the middle
			Nodo* pretemp = Inicio;
			Nodo* temp = Inicio->siguiente;
			int index = 1;
			while ((temp) && (index < position)) {
				pretemp = temp;
				temp = temp->siguiente;
				index++;
			}
			new_nodo->siguiente = temp;
			pretemp->siguiente = new_nodo;
		}
	}
	contador++;
}

//Extract operation
Nodo* Lista::ExtractAtStart() {
	Nodo* temp = Inicio;
	if (!isEmpty()) {
		Inicio = Inicio->siguiente;
		if (contador == 1) {
			Fin = Inicio;
		}
		contador--;
	}
	return temp;
}


Nodo* Lista::ExtractAtEnd() {
	Nodo* temp = Fin;
	if (!isEmpty()) {
		if (contador == 1) {
			Fin = Fin->siguiente;
			Inicio = Fin;
		}
		else {
			Nodo* pretemp = Inicio;
			temp = pretemp->siguiente;
			while (temp != Fin) {
				pretemp = temp;
				temp = pretemp->siguiente;
			}
			pretemp->siguiente = temp->siguiente;
			Fin = pretemp;
		}
		contador--;
	}
	return temp;
}

Nodo* Lista::ExtractAtPosition(int position) {
	Nodo* temp = Inicio;
	if (!isEmpty()) {
		if ((contador == 1) || (position == 0)) {
			return ExtractAtStart();
		}
		else {
			if (position >= contador) {
				return ExtractAtEnd();
			}
			else {
				Nodo* pretemp = Inicio;
				temp = pretemp->siguiente;
				int index = 1;
				while ((temp) && (index < position)) {
					pretemp = temp;
					temp = pretemp->siguiente;
					index++;
				}
				pretemp->siguiente = temp->siguiente;
				contador--;
			}
		}
	}
	return temp;
}

//Search operations
Nodo* Lista::GetNode(int dato) {
	Nodo* temp = Inicio;
	while ((temp) && (temp->dato != dato)) {
		temp = temp->siguiente;
	}
	return temp;
}

int Lista::GetValue(int position) {
	if ((position >= 0) && (position < contador)) {
		Nodo* temp = Inicio;
		int index = 0;
		while ((temp) && (index < position)) {
			temp = temp->siguiente;
			index++;
		}
		return temp->dato;
	}
	return -1;
}

bool Lista::isEmpty() {
	return contador == 0;
}

