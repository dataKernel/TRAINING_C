#include <stdio.h>
#include "script.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_strlen(char *str)
{
    int     count;

    count = 0;
    while(*str)
    {
        count++;
        str++;
    }
    return(count);
}

bool    check_valid_email(char *str)
{
    char    *mail_domains[2];
    bool    result;

    result = false;
    mail_domains[0] = "gmail";
    mail_domains[1] = "hotmail";
    while(*str)
    {
        if(*str == '@')
        {   str++;
            for(int i = 0; i < 2; i++)
            {
                while(*str == *mail_domains[i])
                {
                    result = true;
                    str++;
                    mail_domains[i]++;
                }
            }
        }
        str++;
    }
    return(result);
}
