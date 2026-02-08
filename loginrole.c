#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==1){
        printf("Admin\n");
    }
    else if(a==2){
        printf("User\n");
    }
    else if(a==3){
        printf("Guest");
    }
    return 0;
}