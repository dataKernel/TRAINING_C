#include <stdio.h>
#include <unistd.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

char    *ft_strcat(char *dst, char *src)
{
    int     sizeDst;
    int     i;

    sizeDst = ft_strlen(dst);
    i = 0;
    while(src[i])
    {
        *(dst + (i + sizeDst)) = *(src + i);
        i++;
    }
    *(dst + (i + 1 + sizeDst)) = '\0';
    return(dst);
}

int     main(void)
{
    char    dst[100] = "lancelot";
    int     i;

    i = 0;
    return(0);
}
