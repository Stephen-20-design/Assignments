// c structure 
# include<string.h>
#include<stdio.h>
struct student{
      char name [10];
      char email[30];
      char reg_no[20];
      int phone_no;
      int ID_no;
      int marks;
      float height;
      
      };
  struct student student1;
      
int main () {
 struct student student1;
  printf("enter name;");
  scanf("%s",&student1.name);
  printf("enter email;");
  scanf("%s",&student1.email);
  printf("enter reg_no;");
  scanf("%s",&student1.reg_no);
  printf("enter phone_no;");
  scanf("%d",&student1.ID_no);
  printf("enter marks;");
  scanf("%d",&student1.marks);
  printf("enter height;");
  scanf("%f",&student1.height);
  
  printf("names%s\n",student1.name);
  printf("email%s\n",student1.email);
  printf("reg_no%s\n",student1.reg_no);
  printf("phone_no%d\n",student1.phone_no);
  prin
