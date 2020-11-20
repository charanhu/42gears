#include<stdio.h>
#include<conio.h>
#include <string.h>
void main(){
    int i=0;
    int j=0;
    char str[100];
    int length=0;
    printf("Enter a string :\n");
    gets(str);
    length = strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]=='0' || str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9')
        {
            j=j+1;
        }
    }
    printf("number of digits = %d", j);
}