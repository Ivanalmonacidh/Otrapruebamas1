#include <stdio.h>  // Se debe incluir para usar printf()

int b;  // Declaración correcta de una variable global

int main(void) {  // Corrección de la firma de main()
    int a;  // Declarar la variable a dentro de main()
    
    printf("Ingrese un número: ");
    scanf("%d", &a);  // Leer un valor para a

    b = a + 4;
    printf("Aquí está el número 4 más lo que usted quiera: %d\n", b);
    
    return 0;
}
