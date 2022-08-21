# include<stdio.h>

int fib(int n);

int main(){
    int element ;
    printf("Enter required element : ");
    scanf("%d", &element);
    int value = fib(element);
    printf("%dth element of fibonacci series is %d",element,value);
    return 0;
}

int fib(int n){
    if (n==0)
    {return 0;}
    
    else if (n==1)
    {return 1;}

    else
    {return (fib(n-1) + fib(n-2));}
}