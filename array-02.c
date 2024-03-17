#include<stdio.h>

int main(){
    int a[9],b;
    printf("input the number of the array : \n");
    for(b=0;b<9;b++){
        scanf("%d",&a[b]);
    }
    for(b=0;b<9;b++){
        if(a[b]%2==0){
            a[b]=a[b]+2;
        }
        else{
            a[b]=a[b]+3;
        }
        printf("%d\t",a[b]);
    }
    return 0;
}
