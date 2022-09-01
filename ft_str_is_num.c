#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int     ft_str_is_num(char *str)
{
    bool    check;
    int     i;

    check = true;
    i = 0;
    if(str[i] == '\0')
        return(1);
    while(str[i])
    {
        if(str[i] < '0' || str[i] > '9')
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
    char    *str = "42";

    printf("%i", ft_str_is_num(str));

    return(0);
}
