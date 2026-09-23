#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> 
int main() {
    
    setlocale(LC_ALL, "Rus");

    double s; 
    double area; // Площадь 
    double volume; // Объем

    printf("Программа расчета площади и объема правильного тетраэдра\n");
    printf("Введите длину ребра s: ");

    
    scanf("%lf", &s);
   

    area = pow(s, 2) * sqrt(3.0); // pow -  фунция возведение в степень
    volume = (pow(s, 3) * sqrt(2.0)) / 12.0;

    
    printf("\nРезультаты расчета:\n");
    printf("Площадь полной поверхности: %.4lf\n", area);
    printf("Объем тетраэдра: %.4lf\n", volume);

    printf("\nНажмите Enter, чтобы выйти");
    getchar();

    return 0;
}
