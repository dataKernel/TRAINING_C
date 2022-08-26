#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *tofind)
{
	int		i;
	int		j;
	
	i = 0;
	if(tofind[0] == '\0')
	{
		printf("c vide");
		return(str);
	}
	while(tofind[i])
	{
		j = 0;
		while(str[j])
		{
			if(tofind[i] == str[j])
				return(str + j);
			j++;
		}
		i++;
	}
	return(str);
}

int		main(void)
{
	char	*str = "lancelot";

	printf("%s", ft_strstr(str, "cc"));

	return(0);
}
