#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main() {
    char name[50];
    char email[50];
    int age;
    char role[20];
    char recommendation[10];
    char languages[200];
    char comments[200];

    printf("Welcome to the GeeksforGeeks Survey Form\n\n");

    // Prompting and collecting user information
    printf("Name: ");
    scanf("%s", name);

    printf("Email: ");
    scanf("%s", email);

    printf("Age: ");
    scanf("%d", &age);

    printf("Which option best describes you? (Student/Intern/Professional/Other): ");
    scanf("%s", role);

    printf("Would you recommend GeeksforGeeks to a friend? (Yes/No/Maybe): ");
    scanf("%s", recommendation);

    printf("Languages and Frameworks known (comma-separated): ");
    getchar(); // Clearing the input buffer
    fgets(languages, sizeof(languages), stdin);
    languages[strcspn(languages, "\n")] = '\0'; // Remove trailing newline character

    printf("Any comments or suggestions: ");
    fgets(comments, sizeof(comments), stdin);
    comments[strcspn(comments, "\n")] = '\0'; // Remove trailing newline character

    // Displaying collected information
    printf("\nThank you for completing the survey!\n\n");
    printf("Name: %s\n", name);
    printf("Email: %s\n", email);
    printf("Age: %d\n", age);
    printf("Role: %s\n", role);
    printf("Recommendation: %s\n", recommendation);
    printf("Languages and Frameworks known: %s\n", languages);
    printf("Comments: %s\n", comments);

    return 0;
}
