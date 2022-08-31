#include <stdio.h>
#include <unistd.h>

char    *ft_strupcase(char *str)
{
    int     index;

    index = 0;
    while(str[index])
    {
        str[index] -= 32;
        index++;
    }
    return(str);
}

int     main(void)
{
    char    str[100] = "lancelot";

    printf("pre func:: %s\n", str);
    ft_strupcase(str);
    printf("post func:: %s\n", str);
    return(0);
}
