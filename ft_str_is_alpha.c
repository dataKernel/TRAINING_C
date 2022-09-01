#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

int     ft_str_is_alpha(char *str)
{
    bool    check;
    int     i;

    check = true;
    i = 0;
    if(ft_strlen(str) == 0)
        return(1);
    while(str[i])
    {
        if(str[i] < 'a' || str[i] > 'z')
            check = false;
        i++;
    }
    if(check)
        return(1);
    else
        return(0);
}

int     main(void)
{
    char    *str = "lan1celot";
    printf("%i", ft_str_is_alpha(str));
    return(0);
}
