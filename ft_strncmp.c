#include <stdio.h>
#include <string.h>

int     ft_strncmp(char *s1, char *s2, int n)
{
    int     result;
    int     index;

    result = 0;
    index = 0;
    if(n > 0)
    {
        do
        {
            result += (s1[index] - s2[index]);
            printf("result --> %i\n", result);
            index++;
        }while(index < n && (s1[index] || s2[index]) && s1[index] == s2[index]);
    }
    if(result > 0)
        return(1);
    else if(result < 0)
        return(-1);
    else
        return(0);
}

int     main(void)
{
    int     result;

    result = 0;
    result = ft_strncmp("dsdlkjh", "lancot", 0);
    printf("%i", result);
    return(0);
}
