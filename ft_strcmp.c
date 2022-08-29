#include <stdio.h>
#include <unistd.h>
#include <string.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int index;

	index = 0;
	while(str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
}

int ft_strcmp(char *s1, char *s2)
{
	int index;
	int result;

	index = 0;
	result = 0;
	do
	{
		result += (s1[index] - s2[index]);
		index++;
	}while((s1[index] || s2[index]) && s1[index] == s2[index]);
	if(result > 0)
		return(1);
	else if(result < 0)
		return(-1);
	else
		return(0);
}

int main(void)
{
	printf("%i", strcmp("az", "lancelot"));
	return(0);
}
