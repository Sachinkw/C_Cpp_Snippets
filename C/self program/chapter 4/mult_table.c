# include<stdio.h>

int main(){
    // Multiplication table in normal order
    int i=1,n ;
    scanf("%d", &n);
    while (i<=10){
    int product = n*i; 
    printf("%d * %d = %d\n",n,i,product);
       i++; 
    }

// Multiplication table in reverse order
    int j=10;
    printf("\nIn the reverse order");
    while (j>=1){
    int product = n*j; 
    printf("%d * %d = %d\n",n,j,product);
       j--; 
    }
    
    return 0;
}