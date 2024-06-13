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
// #include <stdio.h>
// #include <string.h>

char *ft_strlcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	while (i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[n] = '\0';
	return dest;
}

// int main(void)
// {
// 	char str_1[20] = "hello world";
// 	char str_2[9];
// 	ft_strlcpy(str_2, str_1, 9);
// 	// strncpy(str_2, str_1, 9);
// 	int i = 0;
// 	while (str_2[i] != '\0')
// 	{
// 		printf("%c", str_2[i]);
// 		i++;
// 	}
// }