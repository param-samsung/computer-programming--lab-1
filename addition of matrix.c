#include <stdio.h>
int main(){
int a[3][3],b[3][3],c[3][3];
printf("1st matrix:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }}
printf("\n");
printf("2nd matrix:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        c[i][j]=a[i][j]+b[i][j];
}}
printf("\n");
for(int i=0;i<3;i++){
        printf("|%d %d %d| + |%d %d %d| = |%d %d %d|",a[i][0],a[i][1],a[i][2],b[i][0],b[i][1],b[i][2],c[i][0],c[i][1],c[i][2]);
        printf("\n");
}}
