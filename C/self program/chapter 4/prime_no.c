# include<stdio.h>

int main(){
    int i=2,n,s=0;
    scanf("%d", &n);
    while (i<n)
    {
    if ((n%i)==0){
        s=1;
        break;}
        i++;}
    if ((s==1) && (n!=2))
    {
        printf("number entered by you is non prime");
    }
    else
    {
        printf("number entered by you is prime");
    }
    return 0;
}