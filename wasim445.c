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
struct Employee SortName(struct Employee e[],int n)
{
    char temp[100];
    int round,i;
    for(round=0;round<=n-2;round++)
    {
        for(i=0;i<=n-round-1;i++)
        {
            if(strcmp(e[i].name,e[i+1].name)>0)
            {
                strcpy(temp,e[i].name);
                strcpy(e[i].name,e[i+1].name);
                strcpy(e[i+1].name,temp);
            }
        }
    }
    printf("Sortde Name is:\n");
    for(i=0;i<=n;i++)
    {
        printf("%s\n",e[i].name);
    }
}
int main()
{
    int n,i;
    printf("Enter the number of employee\n");
    scanf("%d",&n);
    struct Employee e[50];
    printf("Enter the names of employees\n");
    for(i=0;i<=n;i++)
    {
        fgets(e[i].name,50,stdin);
        fflush(stdin);
        e[i].name[strlen(e[i].name)-1]='\0';
    }
    SortName(e,n);
    printf("\n");
    return 0;
}