#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str)
{
	int		result;
	int		i;

	result = 0;
	i = 0;
	while(str[i])
	{
		result = (result + str[i] - '0') * 10;
		i++;
	}
	return(result / 10);
}

int 	main(void)
{
	return ;
}

int		main(void)
{
	int res;

	res = ft_atoi("123");
	printf("res -->%i", res);
	return(0);
}
