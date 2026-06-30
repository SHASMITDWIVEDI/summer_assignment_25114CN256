#include <stdio.h>

int main() {
    int choice;
    int score = 0;

    printf("--- Quiz on Union Cabinet Ministers of India ---\n\n");

    printf("Q1. Who holds the portfolio of the Minister of External Affairs?\n");
    printf("1. Shri Amit Shah\n2. Dr. Subrahmanyam Jaishankar\n3. Shri Rajnath Singh\n4. Shri Nitin Gadkari\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer! The correct answer is 2. Dr. Subrahmanyam Jaishankar\n\n");
    }

    printf("Q2. Who is the current Minister of Defence?\n");
    printf("1. Shri Rajnath Singh\n2. Smt. Nirmala Sitharaman\n3. Shri Piyush Goyal\n4. Shri Ashwini Vaishnaw\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 1) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer! The correct answer is 1. Shri Rajnath Singh\n\n");
    }

    printf("Q3. Which minister is responsible for the Ministry of Finance and Ministry of Corporate Affairs?\n");
    printf("1. Shri Dharmendra Pradhan\n2. Shri Jagat Prakash Nadda\n3. Smt. Nirmala Sitharaman\n4. Shri Hardeep Singh Puri\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    if (choice == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong answer! The correct answer is 3. Smt. Nirmala Sitharaman\n\n");
    }

    printf("--- Quiz Completed ---\n");
    printf("Your final score is: %d out of 3\n", score);

    return 0;
}