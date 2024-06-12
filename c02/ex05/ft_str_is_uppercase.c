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

int ft_check_uppercase(char *str)
{
	int i;
	int is_only_alphabet;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c \n", str[i]);
		is_only_alphabet = 0;
		if (
			str[i] >= 65 && str[i] <= 90 || str[i] == 32)
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

int ft_str_is_lowercase(char *str)
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
		return (ft_check_uppercase(str));
	}
}

int main(void)
{
	char str_1[20] = "AAAKKKK";
	char str_2[20] = "!@#$%^&";
	char str_3[20] = "";
	printf("result:%d \n", ft_str_is_lowercase(str_1));
	return 0;
}