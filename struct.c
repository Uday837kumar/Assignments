#include<stdio.h>
#include<string.h>
struct student{
    struct Patient{
        
    int roll, Patient_id;
    char name [100],Patient_name[200];
    float cgpa,readings;

};
};
int main()
{
        struct student s1;
        s1.roll= 1400;
        s1.cgpa= 7.8;
        strcpy(s1.name,"uday");
        printf("The student Roll no \n",s1.roll);
         scanf("The student Roll no %d\n", &s1.roll);
        printf("the cgpa:\n");     
        scanf("the cgpa: %f\n", &s1.cgpa);
        printf("student name:\n");
        scanf("student name: %s\n", &s1.name);

        struct Patient s2;
        s2.Patient_id= 90;
        s2.readings= 000.4986;
        strcpy(s2.name,"Manoj");
        printf("The Patient id is: \n",s2.Patient_id);
        scanf("The  id %d\n",&s2.roll);
        printf("The patient Readings: \n", s2.readings);
        scanf("the readings: %f\n", &s2.cgpa);
        printf("The name of the patient is: \n",s2.name);
        scanf("patient name: %s\n",&s2.name);
    return 0;
}

