#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc > 2) {
        printf("Error: You must provide only one argument\n");
    }
    else if (argc < 2) {
        printf("Error: You must provide an argument\n");
    }

    //FIXME
    //const char input = *argv[1];
    //printf(input);
    return 0;
}
