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
if (average >=70 && average <=60)
printf("distinction class");
if (average >=60 && average <=50)
printf("first class");
if (average >=50 && average <=35)
printf("second class");
if (average >=35 && average <=50)
printf("third class");
if (average <35)
printf("fail");
}
