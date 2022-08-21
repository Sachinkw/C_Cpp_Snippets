# include<stdio.h>
int count(int arr[],int n){
    int num = 0;
    for(int i=0; i<n; i++){
        if (arr[i] > 0)
        {
            num++;
        }
    }
    return num;
}

int main(){
    int arr[9] = {5,9,-8,-4,0,9,4,4,1};
    int number = count(arr,9);
    printf("Number of positive integers in the array is %d",number);
    return 0;
}