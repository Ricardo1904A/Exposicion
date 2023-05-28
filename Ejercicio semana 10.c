#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char *materias[] = {
    "Ingenieria de Software",
    "Administracion",
    "Economia",
    "Relaciones Internacionales",
    "Matematicas",
    "Contabilidad",
    "Ingenieria Industrial"};
int main()
{

    srand(time(NULL));

    // Se genera una matriz de datos usando el numero de años (5),el numero de semestres(2)y el numero de carreras que son (7)
    int Datos[5][2][7];
    int a, s, c; // a= años, s= semestre, c= carreras

    for (a = 0; a < 5; a++)
    {
        for (s = 0; s < 2; s++)
        {
            for (c = 0; c < 7; c++)
            {
                Datos[a][s][c] = rand() % 201; // Generar los datos aleatoriamente entre 0 y 200
            }
        }
    }
    // Mostrar los datos de cada estudiante que ingreso en cada carrera
    for (a = 0; a < 5; a++)
    {
        printf("Año %d:\n", 2023 - 5 + a);
        for (s = 0; s < 2; s++)
        {
            printf("Semestre %d:\n", s + 1);
            for (c = 0; c < 7; c++)
            {
                printf("Carrera %d - %s: %d alumnos\n", c + 1, materias[c], Datos[a][s][c]);
            }
        }
    }
    // Calculo de a) El año en que ingresó la mayor cantidad de alumnos a la universidad.
    int Ami = 0; // Años de maximo ingreso
    int Mi = 0;  // Numero maximo de ingreso

    for (a = 0; a < 5; a++)
    {
        int ti = 0; // total de ingresos se iguala a 0

        for (s = 0; s < 2; s++)
        {
            for (c = 0; c < 7; c++)
            {
                ti += Datos[a][s][c];
            }
        }

        if (ti > Mi)
        {
            Mi = ti;
            Ami = 2023 - 5 + a;
        }
    }

    printf("\nEl año con la mayor cantidad de alumnos ingresaron a la universidad fue: %d\n", Ami);
    // Calculo de b) La Carrera que recibió la mayor cantidad de alumnos en el último año.
    int Mis = 0; // el mayor numero de ingresos que se registro
    int cma = 0; // la carrera a la que entraron la mayor cantidad de alumnos

    for (c = 0; c < 7; c++)
    {
        int tdi = Datos[5 - 1][2 - 1][c]; // total de ingresos

        if (tdi > Mis)
        {
            Mis = tdi;
            cma = c;
        }
    }

    printf("\nLa carrera que recibio la mayor cantidad de alumnos inscritos este ultmo año fue la de %s\n", materias[cma]);
