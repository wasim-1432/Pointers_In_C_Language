#include<stdio.h>
#include<string.h>
int Swap_Of_Given_Two_Numbers_Using_Pointers(int *a,int *b);
int main()
{
    int a,b;
    printf("Enter any two numbers\n");
    scanf("%d%d",&a,&b);
    Swap_Of_Given_Two_Numbers_Using_Pointers(&a,&b);
    printf("A=%d B=%d",a,b);
    printf("\n");
    return 0;
}
int Swap_Of_Given_Two_Numbers_Using_Pointers(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}