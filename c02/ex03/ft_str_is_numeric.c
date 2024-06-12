/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuanguye <tuanguye@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:42:36 by tuanguye          #+#    #+#             */
/*   Updated: 2024/06/12 14:24:45 by tuanguye         ###   ########.fr       */
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

int ft_check_number(char *str)
{
	int i;
	int is_only_numeric;

	i = 0;
	while (str[i] != '\0')
	{
		is_only_numeric = 0;
		if (
			str[i] >= 48 && str[i] <= 57 || str[i] == 32)
		{
			is_only_numeric = 1;
		}
		else
		{
			return (is_only_numeric = 0);
		}
		i++;
	}
	return (is_only_numeric);
}

int ft_str_is_numeric(char *str)
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
		return (ft_check_number(str));
	}
}

int main(void)
{
	char str_1[20] = "111120 21313";
	char str_2[20] = "!@1232#$%^&";
	char str_3[20] = "";
	printf("result:%d \n", ft_str_is_numeric(str_1));
	return 0;
}