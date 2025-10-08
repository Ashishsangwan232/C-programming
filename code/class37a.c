#include <stdio.h>
struct doj//ab
{
    int date;
    int month;
    int year;
    
};
struct employee
{
    int empId;
    char name[50];
    float salary;
    struct doj dobj1;
}e1;

int main(){
    printf("Enter emp ID: ");
    scanf("%d",&e1.empId);
    printf("Enter emp Name: ");
    scanf("%s",e1.name);
    printf("Enter Salary: ");
    scanf("%f",&e1.salary);
    printf("Enter date month  year:");
    scanf("%d%d%d",&e1.dobj1.date,&e1.dobj1.month,&e1.dobj1.year);
    printf("\n");
    printf("Employee ID: %d\n",e1.empId);
    printf("Employee name: %s\n",e1.name);
    printf("Employee salary: %f\n",e1.salary);
    printf("Employee join date : %d/%d/%d\n",e1.dobj1.date,e1.dobj1.month,e1.dobj1.year);
}