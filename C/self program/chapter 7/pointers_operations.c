# include<stdio.h>

int main(){
    char c = 'A';
    char d = 'B';
    char *ptr1 = &c;
    char *ptr2 = &d;
    int e = 84;
    // int ptr3 = ptr1 - ptr2; //If we use this way then differnce of
                                // two pointers must be of integers..
    printf("first pointer is %u\n",ptr1);
    printf("second pointer is %u\n",ptr2);
    printf("difference of pointers is %d\n",ptr1-ptr2);
    printf("addition of number to pointer is %d\n",e + ptr2);
    printf("difference of number to pointer is %d\n",ptr2-e);


    return 0;
}