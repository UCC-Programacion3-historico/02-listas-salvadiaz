#ifndef CIRCLIST_H
#define CIRCLIST_H

#include "Nodo.h"
#inlcude <iostream>

class CircList {
private:
  Nodo<T> *puntero;
public:
  CircList();
  
  CircList(const CircList<T> &li);
  
  ~CircList();
  
  bool esVacia();
  
  int getTamanio();
  
  void intsertar (T dato);
  
  void avanzar();
  
  
  
  void remover();

};

CircList::CircList(){
  puntero = NULL;
}

CircList::CircList(const CircList<T> &li){
  
}

void CircList:: insertar (T dato){
 if (puntero == NULL){
   puntero = new Nodo(dato);
   puntero->setNext(puntero);
 }
  
  Nodo *tmp = new Nodo(dato, puntero->getNext());
  puntero->setNext(tmp);
  puntero = putero->getNext();
}

void CircList::avanzar(){
  if (puntero != NULL){
  puntero = puntero->getNext();
  }
}

void CircList::remover(){
  Nodo *aux = puntero;
  
  while (aux->getNext() != NULL){
    aux = aux->getNext();
  


#endif //CIRCLIST_H
