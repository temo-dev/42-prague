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

char *ft_strcapitalize(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 32)
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return str;
}

int main(void)
{
	char str[100] = "Create a function that transforms every letter to uppercase.";

	int i = 0;
	while (ft_strcapitalize(str)[i] != '\0')
	{
		printf("%c", ft_strcapitalize(str)[i]);
		i++;
	}
	return (0);
}