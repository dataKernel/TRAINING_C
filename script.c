#include <stdio.h>
#include <unistd.h>

char    *ft_strcapitalize(char *str)
{
    int     index;

    index = 0;
    if(str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    while(str[index])
    {
        if(str[index] == ' '   && str[index + 1] >= 'a' && str[index + 1] <= 'z')
        {
            str[index + 1] -= 32;
        }
        index++;
    }
    return(str);
}

int     main(void)
{
    char    str[100] = "Lancelot Est la 42";

    printf("pre func:: %s\n", str);
    ft_strcapitalize(str);
    printf("post func:: %s\n", str);
    return(0);
}
