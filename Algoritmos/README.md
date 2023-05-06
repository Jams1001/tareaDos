# tareaDos - Algoritmos de ordenamiento

## Autor

Jorge Adán Mora Soto - B95222 - <jorgeadan.mora@ucr.ac.cr>

### Requisitos

Compilador g++ con soporte para C++11

### Instrucciones de uso:

1. Ubicarse en el path: **/tareaDos/Algoritmos**
2. Ejecutar la sintaxis: `make`

### Documentación:

Simplemente ingrese a la dirección web: <https://beautiful-pixie-ef7614.netlify.app>

O bien, también se adjunta el código fuente entonces podría:

1. Ubicarse en el path: **/tareaDos/Algoritmos**
2. Ejecutar la sintaxis: `make documentation-firefox` para abrir la documentación generada por Doxygen en Firefox o `make documentation-Chrome` para abrirla en Chrome.

### Desarrollo

1. Se desarrolló la documentación con Doxygen para el headerSort.hpp
2. Se implementaron los algoritmos en fun.cpp
3. Complejidad
    1. **BubbleSort:** Su complejidad es $O(n^2)$ en el peor de los casos, ya que tiene que comparar cada par de elementos en la lista.
        * Peor caso: $O(n^2)$
        * Caso promedio: $O(n^2)$
        * Mejor caso: $O(n)$
    2. **Selection Sort:** Su complejidad es $O(n^2)$ en el peor de los casos, ya que tiene que buscar el elemento mínimo en cada iteración y colocarlo en su posición correcta.
        * Peor caso: $O(n^2)$
        * Caso promedio: $O(n^2)$
        * Mejor caso: $O(n^2)$
    3. **Insertion Sort:** Su complejidad es $O(n^2)$ en el peor de los casos, ya que tiene que comparar cada par de elementos en la lista y mover los elementos en su posición correcta.
        * Peor caso: $O(n^2)$
        * Caso promedio: $O(n^2)$
        * Mejor caso: $O(n)$
    4. **Quick Sort:** Su complejidad es O(n log n) en el mejor de los casos y en promedio, pero puede degenerar a $O(n^2)$ en el peor de los casos si se elige un pivote malo.
        * Peor caso: $O(n^2)$
        * Caso promedio: $O(n log n)$
        * Mejor caso: $O(n log n)$