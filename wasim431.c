#include<stdio.h>
#include<string.h>
void Swap_Of_Two_Given_Char_Array(char *str,char *str1);
int main()
{
    char str[30],str1[30];
    printf("Enter first string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter second string\n");
    fgets(str1,30,stdin);
    str1[strlen(str1)-1]='\0';
    Swap_Of_Two_Given_Char_Array(str,str1);
    printf("\n");
    return 0;
}
void Swap_Of_Two_Given_Char_Array(char *str,char *str1)
{
    char temp[100];
    strcpy(temp,str);
    strcpy(str,str1);
    strcpy(str1,temp);
    printf("First String is=%s\n",str);
    printf("Second String is=%s",str1);
}