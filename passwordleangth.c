#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>8){
        printf("strong password");
    }
    else if(a<8){
        printf("weak password");
    }
    else if(a==8){
        printf("meets minumum requirement");
    }
    return 0;
}