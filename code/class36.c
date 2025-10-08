// #include <stdio.h>
// struct student{
//     int regNo;
//     float fees;
//     char name[32];
// }s1; //declare it here or in main it same thing
// int main(){
//     struct student s1;//here!.......
//     struct student s1={125,125.25,"Dummy"}//like an array.......
//     printf("s1=%d\n",sizeof(s1));
//     printf("s2=%d",sizeof(s2));
//     printf("Enter regNo: ");
//     scanf("%d",&s1.regNo);
//     printf("Enter fees: ");
//     scanf("%f",&s1.fees);
//     printf("Enter name: ");
//     scanf("%s",&s1.name);
//     s2=s1;//copy content from one to another one.....

//     printf("regNo = %d\n",s1.regNo);
//     printf("fees = %d\n",s1.fees);
//     printf("name = %d\n",s1.name);
// }
#include <stdio.h>
struct student 
{
    /* data */
    char name[50];
    int rollno;
    float marks;
};
int main(){
    struct student s1[3];
    int i;
    for(i=0;i<3;i++){
        printf("student %d\n",i+1);
        printf("enter name: \n");
        scanf("%s",&s1[i].name);
        printf("enter rollNo: \n");
        scanf("%d",&s1[i].rollno);
        printf("enter marks: \n");
        scanf("%f",&s1[i].marks);
    }
    for(i=0;i<3;i++){
        printf("details of student %d\n",i+1);
        printf("Name %s\n",s1[i].name);
        printf("Roll No. %d\n",s1[i].rollno);
        printf("marks %f\n",s1[i].marks);
    }
}
