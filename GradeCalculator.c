#include <stdio.h>

int main() {
    float s1, s2, s3, s4, s5;
    float total_marks, percentage;
    char* grade;

    printf("Enter marks for 5 subjects (out of 100 each): \n");
    scanf("%f %f %f %f %f", &s1, &s2, &s3, &s4, &s5);

    // Compute total and percentage
    total_marks = s1 + s2 + s3 + s4 + s5;
    percentage = (total_marks / 500.0f) * 100.0f;

    // Logic for Grade
    if (percentage >= 75) grade = "A";
    else if (percentage >= 60) grade = "B";
    else if (percentage >= 45) grade = "C";
    else grade = "Fail";

    // 4. Print formatted report exactly as requested
    printf("\n--- Student Report ---\n");
    printf("Subject 1: %.2f\n", s1);
    printf("Subject 2: %.2f\n", s2);
    printf("Subject 3: %.2f\n", s3);
    printf("Subject 4: %.2f\n", s4);
    printf("Subject 5: %.2f\n", s5);
    printf("----------------------\n");
    printf("Total Marks: %.2f\n", total_marks);
    printf("Percentage:  %.2f%%\n", percentage);
    printf("Grade:       %s\n", grade);

    return 0;
}
