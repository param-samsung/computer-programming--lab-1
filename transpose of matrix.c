#include <stdio.h>

int main() {
    int a[4][4],i,j;
    printf("1st matrix:\n");
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        scanf("%d",&a[i][j]);
    }}
    for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
    int c=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=c;}}
    printf("Transpose:\n");
    for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
    printf("%d ",a[j][i]);}
        printf("\n");
    }

}
