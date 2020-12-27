// Generate random passwords

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#define ALPHABET_LENGTH 26
#define NUMBERS_LENGTH 10
#define SPECIAL_CHARS_LENGTH 7

int main(int argc, char *argv[]) {

    // Ensure proper usage
    if (argc > 2) {
        printf("Usage: You must provide only one argument\n");
        return 1;
    } else if (argc < 2) {
        printf("Usage: You must provide an argument\n");
        return 1;
    }

    char *argument = argv[1];

    // Ensure argument is a digit
    if (!isdigit(*argument)) {
        printf("Usage: The argument must be a number\n");
        return 1;
    }

    int pass_length = atoi(argument);

    // A few more usage checks
    if (pass_length < 4) {
        printf("Usage: The minimum length has to be 4\n");
        return 1;
    } else if (pass_length >90) {
        printf("Usage: The maximum length has to be 90\n");
        return 1;
    }

    const char alphabet[ALPHABET_LENGTH] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    const char numbers[NUMBERS_LENGTH] = {'0','1','2','3','4','5','6','7','8','9'};
    const char special_characters[SPECIAL_CHARS_LENGTH] = {'!','@','#','$','%','&','*'};

    char pass_arr[pass_length];

    srand(time(0));

    // Get a random letter from alphabet, convert to uppercase and insert in pass_arr
    int random_1 = rand() % ALPHABET_LENGTH;
    char letter = alphabet[random_1];
    char upper_letter = toupper(letter);
    pass_arr[0] = upper_letter;

    // Get a random special character and insert in pass_arr
    int random_2 = rand() % SPECIAL_CHARS_LENGTH;
    char special = special_characters[random_2];
    pass_arr[1] = special;

    // Get a random number and insert in pass_arr
    int random_3 = rand() % NUMBERS_LENGTH;
    char number = numbers[random_3];
    pass_arr[2] = number;

    // Get random letters from alphabet and insert in pass_arr
    for (int i = 3; i < pass_length; i++) {
        int random = rand() % 26;
        char item = alphabet[random];
        pass_arr[i] = item;
    }

    // Print generated password
    for (int i = 0; i < pass_length; i++) {
        printf("%c", pass_arr[i]);
    }
    printf("\n");
    return 0;
}
