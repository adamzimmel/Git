#include <stdio.h>
#include <stdlib.h>

int main()
{
char firstname[20];
float pay = 16.67;
int hours;
float totalpay;

printf("What is your name?\n");
scanf("%s",firstname);

printf("How many hours did you work?\n");
scanf("%d", &hours);

printf("You will make this much %s\n",firstname);

      totalpay = hours * pay;
printf("%f\n",totalpay);
return 0;


}
