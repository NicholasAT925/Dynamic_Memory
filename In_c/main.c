#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function Declerations */

/* Global Variables */
char *str = NULL;
char *text = NULL;
int size;
int main(){
    /* Initializing Global Variables */

    /* Initial memory allocation */
    str = (char *) malloc(5 * sizeof(char));
    strcpy(str, "jason");
    printf("String = %s, Address of String is = %p\n", str, str);

    /* Reallocating memory */
    str = (char *)realloc(str, (25 * sizeof(char)));
    strcat(str, ".com");
    printf("String = %s, Address of String is = %p\n", str, str);

    free(str);

    printf("enter a number limit for text: ");
    scanf("%d", &size);
    /* Initial memory allocation */
    text = (char *) malloc(size * sizeof(char));

    if(text != NULL){
        printf("Enter some text: \n");
        scanf("%s", text);
        // scanf(" ");
        // gets(text);10
        printf("You inputed: %s", text);
    }

    free(text);
    return 0;
}

/* Function Details */