#include <stdio.h>

// prototype declaration
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main() {
    float c1 = 25.0;
    float f1 = 98.6;
    float ansF, ansC;

    // calling first function
    ansF = celsiusToFahrenheit(c1);
    printf("%.2f Celsius = %.2f Fahrenheit\n", c1, ansF);

    // calling second function
    ansC = fahrenheitToCelsius(f1);
    printf("%.2f Fahrenheit = %.2f Celsius\n", f1, ansC);

    return 0;
}

// function to convert C to F
float celsiusToFahrenheit(float c) {
    float f;
    f = (c * 9/5) + 32; // basic formula
    return f;
}

// function to convert F to C
float fahrenheitToCelsius(float f) {
    float c;
    c = (f - 32) * 5/9;
    return c;
}
