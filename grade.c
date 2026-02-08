#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    if(mark<=100 && mark>=90){
        printf("grade A");
    }
    else if (mark<=89 && mark>=80)
    {
        printf("grade B");
    }
    else if (mark<=79 && mark>=65)
    {
        printf("grade C");
    }
    else{
        printf("grade D");
    }
    return 0;
}