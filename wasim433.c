#include<stdio.h>
void Merge_Two_Given_Int_Arrays(int *arr1,int size1,int *arr2,int size2,int *arr3);
int main()
{
    int size1,size2,i;
    printf("Enter the size of first array\n");
    scanf("%d",&size1);
    int arr1[size1];
    printf("Enter the %d elements of first array\n",size1);
    for(i=0;i<=size1-1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array\n");
    scanf("%d",&size2);
    int arr2[size2],arr3[100];
    printf("Enter the %d elements of second array\n",size2);
    for(i=0;i<=size2-1;i++)
    {
        scanf("%d",&arr2[i]);
    }
    Merge_Two_Given_Int_Arrays(arr1,size1,arr2,size2,arr3);
    printf("\n");
    return 0;
}
int Sort_Of_The_Given_Array(int *arr,int size)
{
    int round,i;
    for(round=1;round<=size-1;round++)
    {
        for(i=0;i<=size-round-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
void Merge_Two_Given_Int_Arrays(int *arr1,int size1,int *arr2,int size2,int *arr3)
{
    int i=0,j=0,k=0,size3;
    size3=size1+size2;
    for(i=0,j=0;i<=size1-1 && j<=size2-1;k++)
    {
        if(arr1[i]>arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
        {
            arr3[k]=arr2[j];
            j++;
        }
    }
    while(i<size1)
    {
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<size2)
    {
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    Sort_Of_The_Given_Array(arr3,size3);
    for(k=0;k<size3;k++)
    {
        printf("%d ",arr3[k]);
    }
}