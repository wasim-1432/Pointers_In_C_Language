#include<stdio.h>
void Sort_An_Array_Of_Int_Type_Values(int *ptr,int size);
int main()
{
    int size,i;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int ptr[size];
    printf("Enter the %d elements of the array\n",size);
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&ptr[i]);
    }
    Sort_An_Array_Of_Int_Type_Values(ptr,size);
    printf("\n");
    return 0;
}
void Sort_An_Array_Of_Int_Type_Values(int *ptr,int size)
{
    int i,round;
    for(round=1;round<=size-1;round++)
    {
        for(i=0;i<=size-round-1;i++)
        {
            if(ptr[i]>ptr[i+1])
            {
                int temp;
                temp=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=temp;
            }
        }
    }
    printf("Sorted Array is :\n");
    for(i=0;i<=size-1;i++)
    {
        printf("%d ",ptr[i]);
    }
}