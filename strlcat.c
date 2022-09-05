#include <stdio.h>
#include <unistd.h>

int     ft_strlen(char *str)
{
    int     counter;

    counter = 0;
    while(*str++)
        counter++;
    return(counter);
}

char    *ft_strncat(char *dst, char *src, int n)
{
    int     sizeDst;
    int     index;

    sizeDst = ft_strlen(dst);
    index = 0;
    while(index < n)
    {
        dst[sizeDst + index] = src[index];
        index++;
    }
    dst[sizeDst + index] = '\0';
    return(dst);
}

int     main(void)
{
    char    dst[100] = "lancelot";
    printf("%s", ft_strncat(dst, "abc", 1));
    return(0);
}
