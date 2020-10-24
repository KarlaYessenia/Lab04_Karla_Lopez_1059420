#pragma once
#include"Nodo.h"
class Lista
{
	public:
	Nodo* Inicio;
	Nodo* Fin;
	int contador;
	Lista();
	void InsertAtStart(int dato);
	void InsertAtEnd(int dato);
	void InsertAtPosition(int dato, int position);
	Nodo* ExtractAtStart();
	Nodo* ExtractAtEnd();
	Nodo* ExtractAtPosition(int position);
	Nodo* GetNode(int dato);
	int GetValue(int position);
	bool isEmpty();
	~Lista() {};
};

