#include <stdio.h>
#include <unistd.h>

char    *ft_strupcase(char *str)
{
    int     index;

    index = 0;
    while(str[index])
    {
        if(str[index] >= 'a' && str[index] <= 'z')
            str[index] -= 32;
        index++;
    }
    return(str);
}

int     main(void)
{
    char    str[100] = "lancEoT";

    printf("pre func:: %s\n", str);
    ft_strupcase(str);
    printf("post func:: %s\n", str);
    return(0);
}
