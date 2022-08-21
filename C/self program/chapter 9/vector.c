# include<stdio.h>

struct vector
{
    int x;
    int y;
};

void sumVector(struct vector a, struct vector b){
    int X = a.x + b.x;
    int Y = a.y + b.y;
    printf("Resultant vector is %di + %dj", X,Y);
}

int main(){
    struct vector v1,v2;

    printf("VECTOR 1:\n");
    printf("Magnitude in x-direction :");
    scanf("%d", &v1.x);
    printf("Magnitude in y-direction :");
    scanf("%d", &v1.y);

    printf("VECTOR 2:\n");
    printf("Magnitude in x-direction :");
    scanf("%d", &v2.x);
    printf("Magnitude in y-direction :");
    scanf("%d", &v2.y);


    sumVector(v1,v2);
    return 0;
}