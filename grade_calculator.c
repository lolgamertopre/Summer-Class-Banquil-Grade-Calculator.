#include <stdio.h>

void getScores(double *Quiz, double *Exam) {
    printf("Enter your quiz score: ");
    scanf("%lf", Quiz);

    printf("Enter your exam score: ");
    scanf("%lf", Exam);
}

void computeGrade(double Quiz, double Exam) {
    double average = (Quiz * 0.4) + (Exam * 0.6);
    char letter;

    if (average >= 90) letter = 'A';
    else if (average >= 80) letter = 'B';
    else if (average >= 70) letter = 'C';
    else if (average >= 60) letter = 'D';
    else letter = 'F';

    printf("\n--- RESULT ---\n");
    printf("Quiz  (40%%): %.2f\n", Quiz * 0.4);
    printf("Exam  (60%%): %.2f\n", Exam * 0.6);
    printf("Final Grade: %.2f\n", average);
    printf("Letter Grade: %c\n", letter);
}

int main() {
    double Quiz, Exam;

    getScores(&Quiz, &Exam);
    computeGrade(Quiz, Exam);

    return 0;
}