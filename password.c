#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

    // Check usage
    if (argc > 2) {
        printf("Usage: You must provide only one argument\n");
        return 1;
    }
    else if (argc < 2) {
        printf("Usage: You must provide an argument\n");
        return 1;
    }
    
    char *c = argv[1];

    // Check if argument is a digit
    if (!isdigit(*c)) {
        printf("Usage: The argument must be a number\n");
        return 1;
    }

    int input = atoi(c);

    // A few more checks
    if (input < 4) {
        printf("Usage: The minimum length has to be 4\n");
        return 1;
    }
    else if (input >90) {
        printf("Usage: The maximum length has to be 90\n");
        return 1;
    }

    printf("%i\n", input);
    //return 0;

    // Make sure the geneareted password will have the desired length
    int pass_length = input - 3;
    printf("%i\n", pass_length);

    return 0;
}
