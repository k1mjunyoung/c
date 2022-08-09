#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int maxlen, len;
    int i;
    char *str;
    printf("Max length: ");
    scanf("%d", &maxlen);
    getchar();

    str = (char*)malloc(sizeof(char)*(maxlen+1));

    printf("Input string: ");
    fgets(str, maxlen+1, stdin);
    str[strlen(str)-1] = 0;
    len = strlen(str);

    for ( i = len; i > 0; i--)
    {
        if (str[i] == ' ')
        {
            printf("%s ", &str[i+1]);
            str[i] = 0;
        }
    }

    printf("%s\n", &str[0]);
    free(str);
    return 0;
    
}
