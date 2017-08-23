#ifndef NODO_H
#define NODO_H
 
Template <class T>
class Nodo{
  friend class Lista;
private:
  T dato;
  Nodo *next;
public:
  Nodo(){
    next = NULL;}
  Nodo(T d, Nodo* n){
    dato = d;
    next = n;}
  getDato(){
    return dato;}
  setDato(T d){
    dato = d;}
  getNext(){
    return next;}
  setNext(Nodo* n){
    next = n;}

    
    
#endif
