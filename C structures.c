//C structures 
#include<string.h>
#include<stdio.h>
struct student{
    char name[50];
    float height;
    char reg_no[750];
    char email[50];
    int phone;
};
struct student student1;
      
int main (){ 
    struct student student1;
    strcpy(student1.name,"steph");
    student1.height=5.7;
    strcpy(student1.reg_no,"ct790");
    strcpy(student1.email,"stephtito2021@gmail.com");
    student1.phone=2043;
    
    printf("name:%s\n", student1.name);
    printf("height:%f\n", student1.height);
    printf("reg_no:%s\n", student1.name);
    printf("email:%s\n", student1.email);
    printf("phone:%d\n", student1.phone);
    
    return 0;
}
