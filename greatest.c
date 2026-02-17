#include <stdio.h>
int main()
{
    int A,B,C;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&A,&B,&C);
    if (A>B && A>C)
    {
        printf("A is the largest number!");
    }
    else if(B>C && B>A)
    {
        printf("B is the largest number!");
    }
    else{
        printf("C is the largest number!");
    }
    
}