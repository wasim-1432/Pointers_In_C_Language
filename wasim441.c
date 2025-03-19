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
int main()
{
    struct Employee emp =InputEmployeeData();
    printf("Id is=%d\n",emp.id);
    printf("Name is=%s\n",emp.name);
    printf("Slaray is=%f",emp.salary);
    printf("\n");
    return 0;
}