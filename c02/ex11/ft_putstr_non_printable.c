/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuanguye <tuanguye@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:42:36 by tuanguye          #+#    #+#             */
/*   Updated: 2024/06/12 15:30:01 by tuanguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void ft_check_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (
			str[i] < 32 || str[i] == 126)
		{
			printf("number:%016x pointer:%p", str[i], &str[i]);
		}
		// else
		// {

		// }
		i++;
	}
}

void ft_putstr_non_printable(char *str)
{
	int i;
	int number_of_char;
	int len_of_char;

	len_of_char = ft_strlen(str);
	i = 0;
	if (len_of_char == 0)
	{
		write(1, &str, 1);
	}
	else
	{
		ft_check_printable(str);
	}
}

int main(int argc, char *argv[])
{
	char string[40] = "Coucoutu \n vas bien ?";
	int i;
	ft_putstr_non_printable(string);
	return 0;
}