// Fermín Narváez Reyes A01411229
#include <stdio.h>

int main() { 
  char string[200]; // Tamaño
  int words = 1; // Declaración de variables
  int counter = 0; // Declaración 2
  
  printf("Escribe aquí: "); // Lo que se le va a aparecer
  fgets(string, sizeof(string), stdin);
  
  // PROCESO para contar:
  while (string[counter] != '\0') {
    counter++;
    if (string[counter] == ' '){
      words++;
    }
  }

  printf("Tu frase tiene %i palabritas :)", words); // Output donde le digo sus palabras 

  return 0; // Fin
}