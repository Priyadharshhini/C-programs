#include<stdio.h>
int main(){
    int mark,income;
    scanf("%d %d",&mark,&income);
    if(mark>=85 && income<300000){
        printf("Eligible\n");
    }
    else{
        printf("Not Eligible\n");
    }
    return 0;
}