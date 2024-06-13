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
	int i, j;
	i = 0;
	while (str[i] != '\0')
	{

		if (str[i] >= 97 && str[i] <= 122) // check a-z
		{
			if (i == 0 || str[i - 1] == 32) // change capitalize
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return str;
}

// int main(void)
// {
// 	char str[100] = "create a function that transforms every letter to uppercase .";
// 	ft_strcapitalize(str);

// 	int i = 0;
// 	while (str[i] != '\0')
// 	{
// 		printf("%c", str[i]);
// 		i++;
// 	}
// 	return (0);
// }