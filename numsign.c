#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<0){
        printf("Negative\n");
    }
    else if(a==0){
        printf("Neutral\n");
    }
    else if(a>0){
        printf("Possitive");
    }
    return 0;
}