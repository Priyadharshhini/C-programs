#include<stdio.h>
int main(){
    float a;
    scanf("%f",&a);
    if(a>2.0){
        printf("Data limit exceed");
    }
    else if(a<=2.0){
        printf("Data within limit");
    }
    return 0;
}