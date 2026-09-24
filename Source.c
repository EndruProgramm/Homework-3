#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h> 
double s (double s)
{
	double area;
    area = pow(s, 2) * sqrt(3.0); 
	return area;

}
double s (double s)
{
	double volume;
	volume = (pow(s, 3) * sqrt(2.0)) / 12;
	return volume;

}
int main() {
    
    setlocale(LC_ALL, "Rus");

    double s; 
    double area; // Ïëîùàäü 
    double volume; // Îáúåì

    printf("Ïðîãðàììà ðàñ÷åòà ïëîùàäè è îáúåìà ïðàâèëüíîãî òåòðàýäðà\n");
    printf("Ââåäèòå äëèíó ðåáðà s: ");

    
    scanf("%lf", &s);
   

    area = pow(s, 2) * sqrt(3.0); // pow -  ôóíöèÿ âîçâåäåíèå â ñòåïåíü
    volume = (pow(s, 3) * sqrt(2.0)) / 12.0;

    
    printf("\nÐåçóëüòàòû ðàñ÷åòà:\n");
    printf("Ïëîùàäü ïîëíîé ïîâåðõíîñòè: %.4lf\n", area);
    printf("Îáúåì òåòðàýäðà: %.4lf\n", volume);

    printf("\nÍàæìèòå Enter, ÷òîáû âûéòè");
    getchar();

    return 0;
}
