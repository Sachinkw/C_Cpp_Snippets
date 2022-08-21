# include<stdio.h>

int main(){
    int arr[10] = {42,54,84,66,29,14,9,47,36,6};
    // int *ptr = &arr[0];
    printf("value of third element is %d", *(arr+2));

    return 0;
}