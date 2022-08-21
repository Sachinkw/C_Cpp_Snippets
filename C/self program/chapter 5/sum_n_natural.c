# include<stdio.h>

int sum(int i);

int main(){
    int n;
    printf("Enter a natural no. : ");
    scanf("%d", &n);
    int total = sum(n);
    printf("Sum of first %d natural numbers is %d",n,total);
    return 0;
}

int sum(int i){
    if (i==1)
    {
        return 1;
    }
    else
    {
    return (i + sum(i-1));
    }
}