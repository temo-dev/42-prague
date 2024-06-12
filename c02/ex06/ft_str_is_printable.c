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

int ft_check_printable(char *str)
{
	int i;
	int is_only_alphabet;
	i = 0;
	while (str[i] != '\0')
	{
		is_only_alphabet = 0;
		if (
			str[i] >= 32 && str[i] <= 126)
		{
			is_only_alphabet = 1;
		}
		else
		{
			return (is_only_alphabet = 0);
		}
		i++;
	}
	return (is_only_alphabet);
}

int ft_str_is_printable(char *str)
{
	int i;
	int number_of_char;
	int len_of_char;

	len_of_char = ft_strlen(str);
	i = 0;
	if (len_of_char == 0)
	{
		return (1);
	}
	else
	{
		return (ft_check_printable(str));
	}
}

int main(int argc, char *argv[])
{
	char string[40] = "Coucoutu vas bien ?";
	int i;
	i = ft_str_is_printable(string);
	printf("result:%d \n", i);
	return 0;
}