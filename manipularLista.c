#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura de un nodo
struct Nodo
{
  int dato;  
  struct Nodo* siguiente;

};



// Función para agregar un nuevo nodo al final de la lista
void agregarNodo (struct Nodo** cabeza, int nuevoDato)
{
  struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
  nuevoNodo->dato = nuevoDato;
  nuevoNodo->siguiente = NULL;

  if (*cabeza == NULL) {
    *cabeza = nuevoNodo;
  } else {
    struct Nodo* actual = *cabeza;
    while (actual->siguiente != NULL) {
      actual = actual->siguiente;
    }
  actual->siguiente = nuevoNodo;
  }

}


// Función para eliminar nodo de la lista por valor
void eliminarNodoPorValor (struct Nodo** cabeza, int valor)
{
  struct Nodo* actual = *cabeza;
  struct Nodo* anterior = NULL;

  while(actual != NULL && actual->dato != valor) {
    anterior = actual;
    actual = actual->siguiente;
  }

  if (actual != NULL) {
    if (anterior == NULL) {
      *cabeza = actual->siguiente;
    } else {
      anterior->siguiente = actual->siguiente;
    }
    free(actual);
  }

}

// Función para mostrar los elementos de la lista
void mostrarLista (struct Nodo* cabeza)
{
  struct Nodo* actual = cabeza;
  while (actual != NULL) {
    printf("%d -> ", actual->dato);
    actual = actual->siguiente;
  }
  printf("NULL\n");

}


// Función para agregar un nuevo nodo al inicio de la lista
void agregarNodoAlInicio (struct Nodo** cabeza, int nuevoDato)
{
  struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));  
  nuevoNodo->dato = nuevoDato;
  nuevoNodo->siguiente = *cabeza;
  *cabeza = nuevoNodo;

}


// Función para agregar un nuevo nodo al final de la lista
void agregarNodoAlFinal (struct Nodo** cabeza, int nuevoDato)
{
  struct Nodo* nuevoNodo = (struct Nodo*)malloc(sizeof(struct Nodo));
  nuevoNodo->dato = nuevoDato;
  nuevoNodo->siguiente = NULL;

  if(*cabeza == NULL) {
    *cabeza == nuevoNodo;
  } else {
    struct Nodo* actual = *cabeza;
    while(actual->siguiente != NULL) {
      actual = actual->siguiente;
    }
    actual->siguiente = nuevoNodo;
  }

}


// Función para buscar un nodo por valor e imprimir si existe o no dicho nodo
void buscarNodoPorValor (struct Nodo* cabeza, int valor)
{
  struct Nodo* actual = cabeza;
  while(actual != NULL) {
    if(actual->dato == valor) {
      printf("El valor %d existe en la lista.\n", valor);
      return;
    }
    actual = actual->siguiente;
  }
  printf("El valor %d no existe en la lista.\n", valor);

}


// Funcin para mostrar los elementos de la lista al stdout
void mostrarListaAlStdout (struct Nodo* cabeza)
{
  struct Nodo* actual = cabeza;
  while(actual != NULL) {
    fprintf(stdout, "%d -> ", actual->dato);
    actual = actual->siguiente;
  }
  fprintf(stdout, "NULL\n");

}


// Función para obtener el elemento enésimo de la lista
void obtenerElementoEnesimo (struct Nodo* cabeza, int indice)
{
  struct Nodo* actual = cabeza;
  int contador = 0;

  while(actual != NULL) {
    if(contador == indice) {
      printf("Elemento en el índice %d: %d\n", indice, actual->dato);
      return;
    }
    actual = actual->siguiente;
    contador++;
  }
  printf("No se encontró un elemento en el índice %d\n", indice);

}


int main()
{
  struct Nodo* lista = NULL; // Inicialmente, la lista está vacía

  // Agregar algunos elementos a la lista
  agregarNodo(&lista, 10);
  agregarNodo(&lista, 20);
  agregarNodo(&lista, 30);
  agregarNodo(&lista, 40);

  // Mostrar la lista
  printf("\n\nÍtem 1\n");
  printf("Lista: ");
  mostrarLista(lista);

  // Eliminar un nodo con valor de 20
  eliminarNodoPorValor(&lista, 20);
  printf("\n\nÍtem 2\n");
  printf("Después de eliminar el nodo con valor de 20\n");
  printf("Lista: ");
  mostrarLista(lista);

  // Agregar un nodo al inicio de la lista
  agregarNodoAlInicio(&lista, 2);
  printf("\n\nÍtem 3\n");
  printf("Después de añadir un nodo al inicio\n");
  printf("Lista: ");
  mostrarLista(lista);

  // Agregar nodos al final de la lista
  agregarNodoAlFinal(&lista, 50);
  agregarNodoAlFinal(&lista, 60);
  printf("\n\nÍtem 4\n");
  printf("Después de añadir nodos al final\n");
  printf("Lista: ");
  mostrarLista(lista);

  printf("\n\n");
  printf("\nÍtem 5\n");
  buscarNodoPorValor(lista, 10);

  printf("\n\n");
  buscarNodoPorValor(lista, 70);

  printf("\n\nÍtem 6\n");
  printf("Impresión de la lista con stdout\nLista: ");
  mostrarListaAlStdout(lista);

  printf("\n\nÍtem 7\n");
  printf("Para obtener el elemento enésimo\n");
  obtenerElementoEnesimo(lista, 5);



  return 0;
}

