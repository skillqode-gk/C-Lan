#include<stdio.h>
int main()
{
    int a[5][5],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter val a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    // display
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}