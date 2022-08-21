#include<stdio.h>
void printTable(int *mulTable, int num, int n){
    printf("The multiplication table of %d is :\n", num);
    for(int i=0; i<n; i++){
        mulTable[i] = num*(i+1);
    }

    for(int i=0; i<n; i++){
        printf("%d X %d = %d\n", num, i+1, mulTable[i]);
    }
    printf("******************************************************\n\n");
}

int main(){
    int mulTable[3][10];
    printTable(&mulTable[0][0], 2, 10); //or printTable(mulTable[0], 2, 10); 
    printTable(&mulTable[1][0], 7, 10); //or printTable(mulTable[1], 2, 10);
    printTable(&mulTable[2][0], 9, 10); //or printTable(mulTable[2], 2, 10);
   
    printf("%d", mulTable[2][7]);

    return 0;
}