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

#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

int main(void)
{
	char string_1[100] = "hello world";
	char string_2[100] = "abc";
}