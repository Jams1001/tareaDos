# tareaDos - Excepciones

## Autor

Jorge Adán Mora Soto - B95222 - <jorgeadan.mora@ucr.ac.cr>

### Requisitos

Compilador g++ con soporte para C++11

### Instrucciones de uso:

1. Ubicarse en el path: **/tareaDos/Templates**
2. Ejecutar la sintaxis: `make`

### Desarrollo

1. Se hicieron los comentarios considerados necesarios por el autor.
2. Se hizo la división de archivos.
3. Se disparan las exepciones `std::out_of_range exception`, `std::invalid_argument exception`, `std::overflow_error exception`. Las primeras dos excepciones se realizan implícitamente (automáticamente) dentro de las funciones `at()` y `stoi()`, las cuales ya manejan un control de errores. Para la de overflow se fuerza la excepción en el main mediante `throw`; pero esto podría perfectamente ser una función aparte.

