# include<stdio.h>

int main(){
    int eng, hindi, maths; 
    float percent ;
    printf("Enter your english marks : ");
    scanf("%d", &eng);
    printf("\nEnter your hindi marks : ");
    scanf("%d", &hindi);
    printf("\nEnter your mathematics marks : ");
    scanf("%d", &maths);

    percent = (eng + hindi + maths)/3.0 ;
    if (eng>=33 && hindi>=33 && maths>=33 && percent>=40)
    {
        printf("passed & you got %f percent", percent);
    }
    else
    {
        printf("failed");
    }
    return 0;
}