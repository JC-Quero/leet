char** fizzBuzz(int n, int* returnSize) {
    // Establece el tamaño de retorno (es un puntero, así que usamos *)
    *returnSize = n;

    // Reserva memoria para un array de punteros a cadenas
    // Cada elemento será un puntero a char (cadena)
    char** result = malloc(n * sizeof(char*));

    // Bucle for desde 1 hasta n (recuerda que es 1-indexado)
    for (int i = 1; i <= n; i++) {
        // Reserva memoria para cada cadena
        // Suficiente para un número de hasta 10 dígitos + terminador nulo
        result[i-1] = malloc(11 * sizeof(char));

        // Primero, verifica divisibilidad por 3 y 5
        if (i % 3 == 0 && i % 5 == 0) {
            strcpy(result[i-1], "FizzBuzz");
        } 
        // Luego, verifica divisibilidad solo por 3
        else if (i % 3 == 0) {
            strcpy(result[i-1], "Fizz");
        } 
        // Después, verifica divisibilidad solo por 5
        else if (i % 5 == 0) {
            strcpy(result[i-1], "Buzz");
        } 
        // Si no cumple ninguna condición, convierte el número a cadena
        else {
            sprintf(result[i-1], "%d", i);
        }
    }

    // Devuelve el array de cadenas
    return result;
}

// Ejemplo de cómo liberar la memoria
void freeResult(char** result, int n) {
    for (int i = 0; i < n; i++) {
        free(result[i]);
    }
    free(result);
}