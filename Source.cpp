#include<stdio.h>
int main()
{
	float radius, high, PI = 3.141592;;
	scanf_s("%f %f", &radius, &high);
	printf("Cylinder volume = %f", PI * radius * radius * high);
}