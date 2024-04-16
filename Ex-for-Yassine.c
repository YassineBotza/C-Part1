#include<stdio.h>

void main () {
        	

		      	
	float number;
	
	printf(" Give me a number :  ",number);
	
	scanf("%f" ,&number);
	
		
	if(number>0)
	{	
		printf("the number %.2f is positif",number);
	
	}else if (number==0)
	{
	    printf("the number %.0f is null");
	}else{
		printf("the number %.2f is negatif",number);
		
	}  

}

