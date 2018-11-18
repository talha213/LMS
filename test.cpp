#include<stdio.h>

int main(){
	
	int x,y,z;
	printf("Enter a number");
	scanf("%d",&x);
	
	printf("\t");
	for(y=1;y<=x;y++)
	{
		for(z=1;z<=y;z++)
		{
			printf("*");
		}
		printf("\n\t");
	}
    for(y=1;y<=x;y++)
    {
    	for(z=y;z<=x;z++)
    	{
           printf("*");
		}
     printf("\n\t");
	}
	
}
