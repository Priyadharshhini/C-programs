#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=5){
        printf("Valid email\n");
    }
    else{
        printf("Invalid email\n");
    }
    return 0;
}