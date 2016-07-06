#include <stdio.h>

int fib1(int n) {
  if(n == 1) {
    return 0;
  } else if(n == 2) {
    return 1;
  } else {
    return fib1(n-1) + fib1(n-2);
  }
}

int fib2(int n) {
  if(n == 1) {
    return 0;
  } else if(n == 2) {
    return 1;
  } else {
    // Arreglo para "recordar" los numeros de Fibonacci ya calculados.
    int memoria[n];
    memoria[0] = 0;
    memoria[1] = 1;
    int i;
    for(i = 2; i < n; i++) {
      memoria[i] = memoria[i-1] + memoria[i-2];
    }
    // Recordar que los arreglos de C comienzan desde el 0.
    return memoria[n-1];
  }
}

// Diálogo con el usuario.
int main(void) {
  printf("Ingrese un número entero: ");
  int number; // Declaramos la variable que vamos a pedir.
  scanf("%i", &number);
  printf("El n-ésino término de la serie de Fibonacci es:\n");
  printf("Calculado con fib1(n): ");
  printf("%i%s", fib1(number),"\n");
  printf("Calculado con fib2(n): ");
  printf("%i%s", fib2(number),"\n");
  // Los resultados son identicos, lo que cambia son los tiempos (comentar altenativamente entre implementaciones fib1 y fib2 para notarlo).
  return 0;
}
