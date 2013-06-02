#include <stdio.h>
#include <assert.h>

struct Tnodo{
   char* valor;
   struct Tnodo *hijos;
   struct Tnodo *siguiente;
     
};

void insertar_nodo(char* padre, char* Nombre);
struct Tnodo* buscar_nodo(struct Tnodo* raiz, char* nombre,struct Tnodo *aux);
struct Tnodo *p;



int main(){

  insertar_nodo("document","1.1");
  
 
 return 0;
 
} 

void insertar_nodo(char* padre, char* Nombre){
      struct Tnodo *aux;
      struct Tnodo *nuevo;
      struct Tnodo *aux2;
     if(p==NULL){
          p->valor=padre;
          p->hijos=NULL;
          p->siguiente=NULL;
     }
     aux=buscar_nodo(p,padre,NULL);
        if (aux!= NULL){
      nuevo->valor=Nombre;
            nuevo->siguiente=NULL;
            nuevo->hijos=NULL;
	    aux2=aux->hijos;
            while(aux2->siguiente != NULL){
                aux2=aux2->siguiente;
            }
	    aux2->siguiente = nuevo;
    
        
     }

}

struct Tnodo* buscar_nodo(struct Tnodo* raiz, char* nombre,struct Tnodo *aux){
     if(strcmp(raiz->valor,nombre)==0){
            aux=raiz;    // puede dar error
	    return aux;
     }
     else{
        if(raiz==NULL | aux!=NULL){
	    return aux;
	}
        else {
	     buscar_nodo(raiz->hijos , nombre,aux);
	     buscar_nodo(raiz->siguiente , nombre,aux);
        }
           
     }
     

}
