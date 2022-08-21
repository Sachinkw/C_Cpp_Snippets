# include<stdio.h>

int main(){
    int a=19 ;
    int *i ;
    i = &a ;
    int z = *i;
    printf("Adress of variable a is %u\n",i);
    printf("Value at i is %d", z);
    return 0;
}