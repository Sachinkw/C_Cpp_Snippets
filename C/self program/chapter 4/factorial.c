# include<stdio.h>

int main(){
    int n,fact=1;
    scanf("%d", &n);
    int i=n;

    while (i>=1)
    {fact = fact*i;
        i--;}
    printf("factorial of %d is %d", n,fact);

    /*Using for loop
     for (i = n; i >=1; i--)
        {
         fact = fact*i;
        }
    printf("factorial of %d is %d", n,fact);*/
    return 0;
}