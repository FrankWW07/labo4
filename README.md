# reporte del laboratorio 4: Plataformas abiertas

## Estudiante: Frank Wang Wu
## carné: B57946

### 1. Agregar un nodo (agregarNodo)
Descripción: Esta función se encarga de agregar un nuevo nodo al final de la lista enlazada. En la que recibe la dirección al puntero de la cabeza de la lista (donde se almacena el primer nodo) y el nuevo dato a agregar, esta función crea un nuevo nodo, lo cual asigna el valor especificado y se agrega al final de la lista.

### 2. Agregar un nodo por valor (eliminarNodoPorValor) 
Descripción: Esta función se encarga de eliminar un nodo en específico dado dado en la lista por su valor. En la que recibe la dirección al puntero de la cabeza de la lista dada, y el otro es el valor para buscar y eliminarlo. Este busca el nodo con el valor específico y lo elimina de la lista. 

### 3. Agregar un nodo al inicio de la lista (agregarNodoAlInicio)
Descripción: Esta función se encarga de agregar un nuevo nodo al inicio de la lista enlazada. En la que recibe la dirección al puntero de la cabeza de la lista, y el nuevo dato a agregar. Este crea un nuevo nodo con el valor dado para añadir, y lo enlaza al inicio de la lista, así termina de enlazar el resto de la lista.

### 4. Agregar un nodo al final de la lista (agregarNodoAlFinal)
Descrpción: Esta función es parecido al 1, ya que añade el nuevo nodo al final de la lista enlazada.

### 5. Buscar un nodo por valor (buscarNodoPorValor) 
Descripción: Esta función se encarga de buscar un valor en la lista de nodos. En la que recibe la dirección del puntero a la cabeza de la lista y el valor a buscar. Este recorre toda la lista, para encontrar el valor dado, este muestra mensaje si este valor existe o no en la lista.

### 6. Mostrar la lista a la función stdout (mostrarListaAlStdout)
Descripción: Esta función se encarga de recorrer la lista y, este muestra cada elemento para la consola del stdout. En la que recibe la dirección del puntero a la cabeza de la lista. Se realiza un bucle while para recorrer toda la lista, y muestra cada elemento con el formato fprintf "valor ->" ; y finalmente le indica "NULL" al final de la lista.

### 7. Obtener el elemento enésimo (obtenerElementoEnesimo)
Descripción: Esta función se encarga de buscar y luego mostrar el valor de la posición (índice) del nodo de la lista. En la que se recibe la dirección del puntero a la cabeza de la lista y un índice dada. Este solo recorre la lista empezando con el primer elemento y termina hasta el índice especificado, luego muestra la posición de la lista y el valor que se encuentra en esa posición (índice). 
