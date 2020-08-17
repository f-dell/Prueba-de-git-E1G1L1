#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1, N2, N3, N4, Promedio;

    printf("Ingrese cuatro notas: ");
    scanf("%f%f%f%f", &N1, &N2,&N3, &N4);
    fflush(stdin);

    printf("El promedio es: %.2f ",(N1+N2+N3+N4)/4);

    getchar();
    return 0;
}
