#include <stdio.h>
#include <unistd.h>

char    *ft_strlowcase(char *str)
{
    int     index;

    index = 0;
    while(str[index])
    {
        if(str[index] >= 'A' && str[index] <= 'Z')
            str[index] += 32;
        index++;
    }
    return(str);
}

int     main(void)
{
    char    str[100] = "LANCeLOT";
    printf("pre func:: %s\n", str);
    ft_strlowcase(str);
    printf("post func:: %s\n", str);
    return(0);
}
