#include "queue.h"
#include<iostream>

QueueList *QueueList_new() {
	QueueList* l = new QueueList;
	l->head = nullptr;
	l->tail = nullptr;
	l->lenght = 0;
	return l;
}

int QueueList_lenght(QueueList *l) {
	return l->lenght;
}

void QueueList_pushback(QueueList *l, int x) {
	Cell* aux = new Cell;
	aux->value = x;
	aux->next = nullptr;
	if (l->head == nullptr) {
		l->head = aux;
		l->tail = aux;
	}
	
	else {
		l->tail->next = aux;
		l->tail = aux;
	}
}

void QueueList_delete(QueueList *l) {
	
	while (l->head != nullptr) {
		Cell* aux = l->head;
		l->head = aux->next;
		delete aux;
	}
}

void QueueList_print(QueueList* l) {
	Cell* aux = l->head;
	
	while (aux != nullptr) {
		std::cout << aux->value << std::endl;
		aux = aux->next;
	}
}

void QueueList_popback(QueueList *l) {
	std::string err = "empty list";
	if (l == nullptr)
		throw err;
	if (l->tail == l->head) {
		delete l->head;
		l->head = nullptr;
	}
	else {
	
	Cell* cur = l->head;
	Cell* prev = l->head;
	cur = cur->next;
	
	while (cur->next != nullptr) {
		cur = cur->next;
		prev = prev->next;
	}
	
	delete cur;
	cur = nullptr;
	prev->next = nullptr;
	
	}
}

void QueueList_pushfront(QueueList *l,int v) {
	Cell* aux = new Cell;
	aux->value = v;
	
	if (l == nullptr) {
		aux->next = nullptr;
		l->head = aux;
		l->tail = aux;
	}
	
	else {
		aux->next = l->head;
		l->head = aux;
	}
		
}
