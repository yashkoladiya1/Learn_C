#include<stdio.h>
#include<string.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char Name[50] = "";

    printf("Enter Age:");
    scanf("%d",&age);

    printf("Enter GPA:");
    scanf("%f",&gpa);

    printf("Enter Grade:");
    scanf(" %c",&grade);

    getchar();
    printf("Enter Name:");
    fgets(Name,sizeof(Name),stdin);
    Name[strlen(Name) - 1] = '\0';

    printf("Name:%s\n",Name);
    printf("Age:%d\n",age);
    printf("Gpa:%f\n",gpa);
    printf("Grade:%c\n",grade);
   



    return 0;
}