#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b, c, delta, R1, R2;
	printf("Digite os valores de a, b, c: ");
	scanf("%f%f%f", &a,&b,&c);
	
	delta = (pow(b, 2))-(4*a*c);
	R1 = (-b+sqrt(delta))/(2*a);
	R2 = (-b-sqrt(delta))/(2*a);
	
	if (delta > 0 && a != 0)
	{
		printf("R1 = %4f", R1);
		printf("\nR2 = %4f", R2);
	}
	if (delta == 0 && a != 0)
	{
		printf("R = %4f", (-b)/(2*a));
	}
	else
	{
		if (delta < 0 || a == 0)
		{
			printf("Impossivel de calcular");
		}
	}
		
}
