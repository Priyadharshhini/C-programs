#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>80){
        printf("Distinction\n");
    }
    else if(a>=40){
        printf("Pass\n");
    }
    else if(a<40){
        printf("Fail");
    }
    return 0;
}