#include <stdio.h>

int main() {
    printf("Size of Data Types:\n");

    
    printf("short int:      %ld bytes\n", sizeof(short int));
    printf("int:            %ld bytes\n", sizeof(int));
    printf("long int:       %ld bytes\n", sizeof(long int));
    printf("long long int:  %ld bytes\n", sizeof(long long int));
    printf("unsigned int:   %ld bytes\n", sizeof(unsigned int));
    printf("float:          %ld bytes\n", sizeof(float));
    printf("double:         %ld bytes\n", sizeof(double));
    printf("long double:    %ld bytes\n", sizeof(long double));
    printf("char:           %ld bytes\n", sizeof(char));

    

    return 0;
}
