#include<stdio.h>
int Heighest_Marks(int **p,int no_of_classes,int no_of_students[]);
int main()
{
    int no_of_classes=3,i,j;
    int no_of_students[]={4,3,2};
    int **p;
    p=(int **)malloc(no_of_classes*sizeof(int *));
    for(i=0;i<no_of_classes;i++)
    {
        p[i]=(int *)malloc(no_of_classes*sizeof(int));
    }
    for(i=0;i<no_of_students;i++)
    {
        printf("Enter marks for class %d\n",i+1);
        for(j=0;j<no_of_students[i];j++)
        {
            printf("Students %d",j+1);
            scanf("%d",&p[i][j]);
        }
    }
    printf("Heighest Marks is=%d",Heighest_Marks(p,no_of_classes,no_of_students));
    printf("\n");
    return 0;
}
int Heighest_Marks(int **p,int no_of_classes,int no_of_students[])
{
    int i,Maxnum,j;
    Maxnum=p[0][0];
    for(i=0;i<no_of_classes;i++)
    {
        for(j=0;j<no_of_students[i];j++)
        {
            if(Maxnum<p[i][j])
            {
                Maxnum=p[i][j];
            }
        }
    }
    return Maxnum;
}