#include<stdio.h>
int countsetbits(int n){
    int a=0;
    scanf("%d",&a);
    while (a>0)
    {
        a&=(a-1);
        a++;
    }
    
}