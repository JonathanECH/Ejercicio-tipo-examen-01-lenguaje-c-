/* Para un grupo de 10 personas se tienen los siguientes datos: sexo, edad y número de hijos.
Se desea conocer:
a el promedio de edad de hombres (función)
b total de hijos del grupo.
El código es en C */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void promedioH(int sumaEdad, int counterH)
{
    float promedioEdad;
    promedioEdad = sumaEdad / counterH;
    printf("La edad promedio es: %.2f\n", promedioEdad);
}

int main()
{
    int edad, i, counterH = 0, sumaEdad = 0, nHijos = 0, hijos;
    char sexo, tieneHijos, convertir;

    for (i = 0; i < 2; i++)
    {
        printf("Cual es su sexo (M o F): ");
        scanf(" %c", &convertir);
        sexo = tolower(convertir);
        if (sexo == 'm')
        {
            counterH++;
            printf("Cual es su edad? ");
            scanf("%d", &edad);
            sumaEdad += edad;
        }

        printf("Tiene hijos? (S o N): ");
        scanf(" %c", &convertir);
        tieneHijos = tolower(convertir);
        if (tieneHijos == 's')
        {
            printf("Cuantos hijos tiene? ");
            scanf("%d", &hijos);
            nHijos += hijos;
        }
        else if (tieneHijos == 'n')
        {
        }
    }
    printf("\n");
    printf("-----Tabla de Informacion-----\n");
    promedioH(sumaEdad, counterH);
    printf("El total de hijos es: %d\n ", nHijos);
}