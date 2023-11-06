#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// Project 
    int sinav1,sinav2,sinav3,ort,proje;
    printf("1.Sinav Giriniz:");
    scanf("%d",&sinav1);
    printf("2.Sinavi Giriniz:");
    scanf("%d",&sinav2);
    printf("3.Sinavi Giriniz:");
    scanf("%d",&sinav3);
    printf("Projeyi Giriniz:");
    scanf("%d",&proje);
    ort = (sinav1+sinav2+sinav3+proje)/4;
    
    if (ort<50)
    {
    	printf("Sinav notunuz: FF\n ");
    	printf("%d",ort);
	}
    if (ort>=50 && ort<60)
    {
    	printf("Sinav notunuz: DD\n");
    	printf("%d",ort);
	}
	if (ort>=60 && ort<70)
	{
		printf("Sinav notunuz: CC\n");
		printf("%d",ort);
	}
	if (ort>=70 && ort<85)
	{
		printf("Sinav notunuz: BB\n");
		printf("%d",ort);	
	}
    if (ort>=85)
    {
    	printf("Sinav notunuz: AA\n");
		printf("%d",ort); 
	}
	printf("\n");
	
	printf("tebriklerr!!");
	return 0;
}
