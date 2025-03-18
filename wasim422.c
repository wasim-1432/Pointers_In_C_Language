#include<stdio.h>
#include<string.h>
void Searches_All_Occurrences(char *str,char ch,int *arr);
int main()
{
    char str[30],ch;
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    printf("Enter any character\n");
    scanf("%c",&ch);
    int arr[100];
    Searches_All_Occurrences(str,ch,arr);
    printf("\n");
    return 0;
}
void Searches_All_Occurrences(char *str,char ch,int *arr)
{
    int i,k=0,n=0;
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            arr[k]=i;
            k++;
            n++;
        }
    }
    for(k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }
}