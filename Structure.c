#include<stdio.h>
#include<string.h>

struct student
{
    int std_id;
    char std_name[50];
    int std_age;
    char std_course[50];
    char std_city[50];
    int std_standard;
    char std_school[50];
};
main ()
{ struct student students [3];

for (int i = 0; i < 3; i++)
{
 printf("Enter students details %d:\n",i+1);

 printf("Enter student id: ");
 scanf("%d",&students[i].std_id,"\n");

 printf("Enter student name : ");
 getchar();
 scanf("%s",&students[i].std_name,"\n");

printf("Enter student Age : ");
scanf("%d",&students[i].std_age,"\n");

printf("Enter student course : ");
getchar();
scanf("%s",&students[i].std_course,"\n");

printf("Enter student city : ");
getchar();
scanf("%s",&students[i].std_city,"\n");

printf("Enter student standard: ");
scanf("%d",&students[i].std_standard,"\n");

printf("Enter student school : ");
getchar();
scanf("%s",&students[i].std_school,"\n");

printf("\n");
}

    printf("\n     students detail       \n");
    for (int i = 0; i < 3; i++)
    {
      printf("Details of students %d:\n",i+1);

      printf("Id: %d\n",students[i].std_id);
      printf("Name:%s\n",students[i].std_name);
      printf("Age:%d\n",students[i].std_age);
      printf("Course:%s\n",students[i].std_course);
      printf("City:%s\n",students[i].std_city);
      printf("Standard: %d\n",students[i].std_standard);
      printf("School : %s\n",students[i].std_school);

      printf("\n");   
    }
    

   







}