int mySqrt(int x) {
    if (x == 0) return 0;
    
    for (long long i = 1; i <= x; i++) {
        if (i * i > x) return i - 1;
    }
    
    return 0;
}
/*Explicación del Método de Búsqueda Binaria:

Si el número es 0, devuelve 0
Establece un rango de búsqueda desde 1 hasta x
Calcula el punto medio
Compara el cuadrado del punto medio con x
Si el cuadrado es menor, actualiza el resultado
Ajusta los límites de búsqueda
Repite hasta encontrar la raíz cuadrada entera

Consideraciones:

Usa long long para evitar desbordamiento
Redondea hacia abajo al entero más cercano
Maneja casos especiales como 0

*/