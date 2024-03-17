#include<stdio.h>

int main(){
    int a[9],b;
    float sum=0;
    printf("input the number of the array : \n");
    for(b=0;b<9;b++){
        scanf("%d",&a[b]);
    }
    for(b=0;b<9;b++){
        sum=sum + a[b];
        }
        printf("the value of the summation is : \n");
        printf("%0.2f\t\n", sum);
        printf("the value of the average is : \n");
        printf("%0.4f\t\n", sum/9);
    return 0;
}
