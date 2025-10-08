#include <stdio.h>
struct student{
    char name[30];
    int rollno;
    float marks;
};
int main(){
    struct student s1;
    struct student *sptr;
    sptr = &s1;
     printf("enter name of student:  ");
     scanf("%s",&sptr->name);
     printf("enter rollno: ");
     scanf("%d",&sptr->rollno);
     printf("enter marks : ");
     scanf("%f",&sptr->marks);
    
     printf("name %s\n",sptr->name);
     printf("roll No. %d\n",sptr->rollno);
     printf("marks %f\n",sptr->marks);
}