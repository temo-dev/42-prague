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

// #include <string.h>
// #include <stdio.h>

unsigned int ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int len_dest;
	unsigned int len_src;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_src == 0)
	{
		return (len_dest);
	}

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && i <= size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (len_dest + len_src);
}
// int main()
// {
// 	char dst[20] = "abbb";
// 	char *src = "";
// 	unsigned int dstsize = sizeof(dst);
// 	unsigned int num;
// 	num = ft_strlcat(dst, src, dstsize);
// 	printf("num:%d \n", num);
// 	printf("dest:%s \n", dst);
// 	printf("src:%s \n", src);
// }