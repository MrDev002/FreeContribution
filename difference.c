#include <stdio.h>
#include <stdlib.h>
 
int main()
{
     
    int a,b;
    int diff;
 
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
 
    diff=abs(a-b);
 
    printf("\nDifference between %d and %d is = %d",a,b,diff);
    return 0;
}