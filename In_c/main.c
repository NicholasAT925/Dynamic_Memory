#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Function Declerations */

/* Global Variables */
char *str = NULL;

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
    return 0;
}

/* Function Details */