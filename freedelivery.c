#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=499){
        printf("Free delivery\n");
    }
    else{
        printf("Delivery charges apply\n");
    }
    return 0;
}