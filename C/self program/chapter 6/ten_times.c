# include<stdio.h>

int tenTimes(int *i){
    int j = 10 **i;
    return j;    
}

int main(){
    int a = 5645;
    int *c = &a;
    int b = tenTimes(c);
    printf("Ten times value is %d",b);
    return 0;
}

