#include <stdio.h>

int main(){
    float a, b, c;
    scanf("%f %f %f",&a,&b,&c);
    float max=a;
    max=max<b?(b>c?b:c):(max>c?(max):c);
    printf("%f",max);
}