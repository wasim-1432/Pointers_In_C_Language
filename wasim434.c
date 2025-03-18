#include<stdio.h>
int Move_First_Value_Of_The_Array_To_The_Valid_Position(int *arr,int size);
int main()
{
    int size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int arr[size],i;
    printf("Enter the %d elements of the array\n",size);
    for(i=0;i<=size-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    Move_First_Value_Of_The_Array_To_The_Valid_Position(arr,size);
    printf("\n");
    return 0;
}
int Move_First_Value_Of_The_Array_To_The_Valid_Position(int *arr,int size)
{
    int left,right,loc,temp,i;
    left=0;
    right=size-1;
    loc=0;
    while(left<right)
    {
        while(left<right && arr[loc]<arr[right])
        {
            right--;
        }
        if(right==left)
        {
            break;
        }
        temp=arr[right];
        arr[right]=arr[loc];
        arr[loc]=temp;
        loc=right;

        while(left<right && arr[left]<arr[loc])
        {
            left++;
        }
        if(left==right)
        {
            break;
        }
        temp=arr[left];
        arr[left]=arr[loc];
        arr[loc]=temp;
        loc=left;
    }
    for(i=0;i<=size-1;i++)
    {
        printf("%d ",arr[i]);
    }
}