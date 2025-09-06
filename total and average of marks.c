#include <stdio.h>
int main() {
float sub1,sub2,sub3,total,average;
printf("subject 1 marks is: ");
scanf("%f",&sub1);
printf("subject 2 marks is: ");
scanf("%f",&sub2);
printf("subject 3 marks is: ");
scanf("%f",&sub3);
average = (sub1+sub2+sub3)/3;
total = sub1+sub2+sub3;
printf("average marks = %2f\n",average);
printf("total marks = %2f\n",total);
}
