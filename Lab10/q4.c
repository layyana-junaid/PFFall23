/**
  * Programmer: Layyana Junaid
  * Date: 20th Novemeber 2023
  * Description: Lab10 Question 04
  * 
  **/
#include <stdio.h>
#include <string.h>

void reverse(char sentence[]) {
    char* word_start = sentence;
    char* word_end = NULL;

    while (*word_start) {
        word_end = word_start + 1;
        while (*word_end) {
            word_end++;
        }

        for (char* left = word_start, *right = word_end - 1; left < right; left++, right--) {
            char temp = *left;
            *left = *right;
            *right = temp;
        }

        word_start = word_end;
    }
} // end reverse 

int main() {
    char sentence[] = "I am Layyana Junaid, student of BS AI in FAST NUCES";
    printf("Original sentence: %s\n", sentence);
    reverse(sentence);
    printf("Reversed sentence: %s\n", sentence);

    return 0;
} // end main