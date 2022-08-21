# include<stdio.h>

float ctf(float C);

int main(){
    float cel ;
    printf("Enter the value in deg. Celcius\n");
    scanf("%f", &cel);
    float far = ctf(cel);
    printf("Temperature in deg. Farenheit\n%0.3f",far);

    return 0;
}

float ctf(float C){
    float F = (C * 9/5) + 32;
    return F;
}