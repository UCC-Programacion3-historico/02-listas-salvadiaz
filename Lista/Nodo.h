#ifndef NODO_H
#define NODO_H
 
template <class T>
class Nodo{
  friend class Lista;
private:
  T dato;
  Nodo<T> *next;
public:
  Nodo(){
    next = NULL;
      
}
  Nodo(T d, Nodo<T>* n){
    dato = d;
    next = n;
      
}
  T getDato(){
    return dato;}
  void setDato(T d){
    dato = d;
      
}
  Nodo<T> getNext(){
    return next;
      
}
  void setNext(Nodo<T> *n){
    next = n;
      
}
};

    
    
#endif
