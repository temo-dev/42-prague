#include <unistd.h>

int check_upper(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int ft_str_is_uppercase(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(check_upper(str[i])))
		{
			return (0);
		}
		i++;
	}
	return (1);
}