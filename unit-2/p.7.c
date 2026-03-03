//Add Two Complex Numbers by Passing Structure to a Function.
#include <stdio.h>


typedef struct
{
    float real;
    float imag;
} Complex;


Complex addComplex(Complex n1, Complex n2)
{
    Complex temp;


    temp.real = n1.real + n2.real;


    temp.imag = n1.imag + n2.imag;

    return temp;
}

int main()
{
    Complex num1, num2, result;


    printf("First complex number\n");
    printf("Enter real and imaginary parts: ");
    scanf("%f %f", &num1.real, &num1.imag);


    printf("\nSecond complex number\n");
    printf("Enter real and imaginary parts: ");
    scanf("%f %f", &num2.real, &num2.imag);


    result = addComplex(num1, num2);


    printf("\nSum = %.1f + %.1fi\n", result.real, result.imag);

    return 0;
}
