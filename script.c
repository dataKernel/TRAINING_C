#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strcpy(char *dst, char *src)
{
	int		i;

	i = 0;
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return(dst);
}

int		main(void)
{
	char	*src = "lancelot";
	char	dst[10];
	ft_strcpy(dst, src);
	return(0);
}
