#include <stdio.h>
#include <math.h>

int main() {
    double number;
    double s_r, c_r;

    printf("Enter a number\n");
    scanf("%lf", &number);
    if (number < 0) {
        printf("Square root of a negative number is not defined\n");
    } 
    else {
        s_r = sqrt(number); 
        printf("Square root of %.2lf is %.2lf\n", number, s_r);
    }

    c_r = cbrt(number); 
    printf("Cube root of %.2lf is %.2lf\n", number, c_r);
    return 0;
}