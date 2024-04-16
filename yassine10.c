#include<stdio.h>

void welcome()
{
	printf("welcome to my first game that I made\n");
	printf("i need You to find the number\n");
}

void mygame()
{
	
 	
int number;
int x=49;
int i ;
for(i =0;i<5;i++)
{
	
	printf("So try to guess the number :  ");
	scanf("%d" ,&number);
		
	if(number==x)
	{	
		printf("congratulations\n");
		break;
	
	}else if (number<x)
	{
	    printf("the number is smaller \n");
	    
	}else if (number>x)
	{
		printf("the number is bigger\n");	
		
	}
}
}



void bye()
{
	printf("byebye\n");
	
}
   
void main () {

welcome();
mygame();
bye();

 void présentation(){
 	
 		char Hi[50];
    	printf("\t\tHi humain\n");
     	printf("\t\twho are you\n");
    	printf("\t\tcan I have your name , please !\n");
    	printf("\t\t\t\tOK ? :",Hi);
        scanf("%s",&Hi);
        getchar();  
        
 }
 
   }
