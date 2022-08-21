# include<stdio.h>

void reverseArr(int arr[], int n){
    int temp1,temp2;
    for(int i=0;i<(n/2);i++){
        temp1 = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-i-1] = temp1;
    }
    // for(int j=(n-1);j>(n/2);j--){
    //     temp2 = arr[j];
    //     arr[j] = temp1;
    // }
   
}

    int main(){
        int arr[10] = {4,8,8,6,7,1,9,4,3,8};
        int *ptr = arr;
        reverseArr(ptr,10);
         for(int j=0;j<10;j++){
        printf("element %d is %d\n",j+1,arr[j]);
    }
    return 0;
}