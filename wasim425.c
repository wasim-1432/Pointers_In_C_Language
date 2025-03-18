#include<stdio.h>
#include<string.h>
void Extract_String(char *str,int start_index,int end_index,char *result);
int main()
{
    char str[30];
    printf("Enter any string\n");
    fgets(str,30,stdin);
    str[strlen(str)-1]='\0';
    int start_index,end_index;
    printf("Enter starting & ending indices\n");
    scanf("%d%d",&start_index,&end_index);
    char result[100];
    Extract_String(str,start_index,end_index,result);
    printf("\n");
    return 0;
}
void Extract_String(char *str,int start_index,int end_index,char *result)
{
    int i,j=0;
    for(i=start_index;i<=end_index;i++)
    {
        result[j]=str[i];
        j++;
    }
    result[j]='\0';
    printf(result);
}