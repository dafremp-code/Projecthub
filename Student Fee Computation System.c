#include <stdio.h>
//This program calculates the gross revenue of a school
//declaring variables

int main(){
float Tuition, libraryFee,laboratoryFee;
int Studentnum;
Tuition= 1500.00;
libraryFee= 200.00;
laboratoryFee=400.00;

printf("SCHOOL REVENUE CALCULATION SYSTEM \n\n\n");
printf("Kindly enter the number of students registered\n");
scanf("%d",&Studentnum);

float Tuition_T,libraryFee_T,laboratoryFee_T,Grand_T,Revenue_T;

Tuition_T = Tuition*Studentnum;
libraryFee_T = libraryFee*Studentnum;
laboratoryFee_T = laboratoryFee*Studentnum;
Revenue_T= Tuition_T+libraryFee_T+laboratoryFee_T;

printf("Total Tuition paid: %.2f$\n",Tuition_T);
printf("Total Library fees paid: %.2f$\n",libraryFee_T);
printf("Total Laboratoy fees paid: %.2f$\n",laboratoryFee_T);
printf("Total Revenue gained: %.2f$\n",Revenue_T);
return 0;
}
