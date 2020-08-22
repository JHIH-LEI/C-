#include <stdio.h>
int main() {
    int guess;
    int answer = 4;
    printf("plz enter your guess: ");
    scanf("%d", &guess);
    if (guess > answer) {
        printf("Too large!\n");
    } else if (guess < answer) {
        printf("Too small\n");
    } else {
        printf("correct!\n");
    }
    return 0;
}