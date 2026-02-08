#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=7){
        printf("No fine\n");
    }
    else if(a>7){
        printf("Fine applied\n");
    }
    return 0;
}