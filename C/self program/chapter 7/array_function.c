# include<stdio.h>

void printArray(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("Value of element %d is %d\n",i+1,*(ptr+i));
    }
}
int main(){
    int arr[5] = {45,566,4,4,56};
    printArray(arr,5); //This can also be written as printArray(&arr[0],5)
    return 0;
}