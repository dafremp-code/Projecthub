#include <stdio.h>
int average(int a,int b);
int num1, num2
int main(){

int average(int a, int b){

float averg = (float) a / b;
printf("%d / %d = %f\n", a,b,averg);

}

printf("Enter your first number");
scanf("%d", &num1);

printf("");
printf("Enter your second number");
scanf("%d", &num2);

printf("%d",average(num1,num2));

return 0;
}