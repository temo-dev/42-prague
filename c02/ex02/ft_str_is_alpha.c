/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuanguye <tuanguye@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:42:36 by tuanguye          #+#    #+#             */
/*   Updated: 2024/06/12 14:17:20 by tuanguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

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

int ft_check_alphabet(char *str)
{
	int i;
	int is_only_alphabet;

	i = 0;
	while (str[i] != '\0')
	{
		is_only_alphabet = 0;
		if (
			str[i] >= 97 && str[i] <= 122 || str[i] >= 65 && str[i] <= 90 || str[i] == 32)
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

int ft_str_is_alpha(char *str)
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
		return (ft_check_alphabet(str));
	}
}

// int main(void)
// {
//   char str_1[20] = "ha aUaa";
//   char str_2[20] = "!@#$%^&";
//   char str_3[20] = "";
//   printf("%d \n", ft_str_is_alpha(str_3));
//   return 0;
// }