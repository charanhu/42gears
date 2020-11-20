#include<stdio.h>  
 int main()    
{    
int a=0, b=0;      
printf("Enter A and B: ");
scanf("%d%d",&a,&b);      
a=a+b;//a=30 (10+20)    
b=a-b;//b=10 (30-20)    
a=a-b;//a=20 (30-10)    
printf("\nAfter swap A=%d B=%d",a,b);    
return 0;  
}   