#include<stdio.h> 
int add(int , int);
int result;

int main(){
	int num1,num2,resullt;
	
	printf("Enter Two numbers");
	scanf("%d",&num1);
    scanf("%d",&num2);
    
    result = add(num1,num2);
    printf("%d",result);
	
	
		
}

int add (int a,int b)
{
	result = a +b;
	
	return result;
}
