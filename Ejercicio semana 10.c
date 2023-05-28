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
