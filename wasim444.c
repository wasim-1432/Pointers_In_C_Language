#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
struct Employee InputEmployeeData()
{
    struct Employee e;
    printf("Enter the id,name & salary\n");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%f",&e.salary);
    return e;
}
struct Employee Display()
{
    struct Employee emp=InputEmployeeData();
    printf("Id is=%d\n",emp.id);
    printf("Name is=%s\n",emp.name);
    printf("Slaray is=%f",emp.salary);
}
struct Employee HighestSalary(struct Employee e[],int n)
{
    struct Employee MaxsalaryEmployee;
    int i;
    MaxsalaryEmployee=e[0];
    for(i=1;i<=n-1;i++)
    {
        if(MaxsalaryEmployee.salary<e[i].salary)
        {
            MaxsalaryEmployee.salary=e[i].salary;
        }
    }
    return MaxsalaryEmployee;
}
struct Employee SortSalary(struct Employee e[],int n)
{
    int i,round;
    for(round=1;round<=n-1;round++)
    {
        for(i=0;i<=n-round-1;i++)
        {
            if(e[i].salary>e[i+1].salary)
            {
                float temp;
                temp=e[i].salary;
                e[i].salary=e[i+1].salary;
                e[i+1].salary=temp;
            }
        }
    }
    printf("Sorted Salaries is:\n");
    for(i=0;i<=n-1;i++)
    {
        printf("%.2f ",e[i].salary);
    }
}
int main()
{
    int n,i;
    printf("Enter the number of employee\n");
    scanf("%d",&n);
    struct Employee e[n];
    printf("Enter the salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&e[i].salary);
    }
    SortSalary(e,n);
    printf("\n");
    return 0;
}