#include <stdio.h>


int main() {
    int num,digits=0,numc;
    scanf("%d",&num);
    numc=num;
    while(numc!=0){
        numc=numc/10;
        digits++;
    }
    int n1[digits];
    int i=0;
    while(num!=0){
        n1[i]=num%10;
        num=num/10;
        i++;
    }
    int flag=1;
    for(int i=0;i<digits;i++){
        if(n1[i]!=n1[digits-i-1]){
            flag=0;
        }
    }
    printf("%d",flag);}
