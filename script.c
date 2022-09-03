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
    return(dst);
}

int     main(void)
{
    char    *dst = "lancelot";
    ft_strcat(dst, "abc");
    return(0);
}
