#include <stdio.h>
#include <string.h>

main()

{
    char   s[20];
    int i,len;
    printf("Give one string\n");
    gets(s);




    len = strlen(s);

        for(i=2;i<len;i=i+3)
        if (islower(s[i]))
            printf("%c",s[i]);
        }
