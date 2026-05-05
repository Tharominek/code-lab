#include <stdio.h>
#include <string.h>

#define MAX_WORD 50

void remove_newline(char text[]) 
{
    size_t length = strlen(text);

    if (length > 0 && text[length - 1] == '\n') {
        text[length - 1] = '\0';
    }
}

int is_empty(char text[]) {
    return text[0] == '\0';
}

void read_word(char destination[], int size, char prompt[]) 
{
    do {
        printf("%s", prompt);

        fgets(destination, size, stdin);

        remove_newline(destination);

        if (is_empty(destination)) {
            printf("You must type something. Try again.\n");
        }

    } while (is_empty(destination));
}

void print_story(
    char adjective1[],
    char noun[],
    char adjective2[],
    char verb[],
    char adjective3[]
) {
    printf("\n--- Your Mad Lib Story ---\n\n");

    printf("Today I went to a %s zoo.\n", adjective1);
    printf("In an exhibit, I saw a %s.\n", noun);
    printf("The %s was %s and %s!\n", noun, adjective2, verb);
    printf("I was %s!\n", adjective3);
}

int main() 
{
    char noun[MAX_WORD];
    char verb[MAX_WORD];
    char adjective1[MAX_WORD];
    char adjective2[MAX_WORD];
    char adjective3[MAX_WORD];
    char again[MAX_WORD];

    printf("=== Mad Lib Generator ===\n\n");

    do {
        read_word(adjective1, MAX_WORD, "Enter an adjective: ");
        read_word(noun, MAX_WORD, "Enter a noun, animal or person: ");
        read_word(adjective2, MAX_WORD, "Enter another adjective: ");
        read_word(verb, MAX_WORD, "Enter a verb ending with -ing: ");
        read_word(adjective3, MAX_WORD, "Enter one final adjective: ");

        print_story(adjective1, noun, adjective2, verb, adjective3);

        read_word(again, MAX_WORD, "\nDo you want to create another story? yes/no: ");

        printf("\n");

    } while (again[0] == 'y' || again[0] == 'Y');

    printf("Program finished.\n");

    return 0;
}