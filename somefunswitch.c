#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    switch (a,b)
    {
    case 1:
        a+b;
        printf("Sum=%d",a+b);
        break;
    case 2:
        a-b;
        printf("Sub=%d",a-b);
        break;
    case 3:
        a*b;
        printf("mul=%d",a*b);
        break;
    case 4:
        a/b;
        printf("div=%d",a/b);
        break;
    case 5:
        a%b;
        printf("mod=%d",a%b);
        break;
    default:
        printf("Enter valid no");
        break;
    }
}