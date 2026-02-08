#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>90){
        printf("Overflow warning\n");
    }
    else{
        printf("safe level\n");
    }
    return 0;
}