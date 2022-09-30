#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char buffer[100];
    double value;
    char *endptr;
    printf("Enter the floating point number\n");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        return -1; /* Unexpected error */
    }
    value = strtod(buffer, &endptr);
    if ((*endptr == '\0') || (isspace(*endptr) != 0))
    {
         printf("Valid\n");
    }
    else
    {
        printf("invalid\n");
    }

    return 0;      
}
