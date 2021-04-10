/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 19:57:09 by sabrenda          #+#    #+#             */
/*   Updated: 2021/04/01 20:09:03 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libasm.h"

void	more_tests(void)
{
	char	str1[50];
	char	str2[50];

	printf("\n");
	printf("strlen: %zu\n", strlen("daadfdfddfaffdffadf"));
	printf("ft_strlen: %zu\n", ft_strlen("daadfdfddfaffdffadf"));
	printf("\n");
	printf("strcpy: %s\n", strcpy(str1, "range , typically a neat one"));
	printf("ft_strcpy: %s\n", ft_strcpy(str2, "range , typically a neat one"));
	printf("\n");
	printf("strcmp: %d\n", strcmp("asdfghjkl", "qwee"));
	printf("ft_strcmp: %d\n", ft_strcmp("asdfghjkl", "qwee"));
	printf("\n");
	write(-1, "IT IS WRIIIIITE\n", strlen("IT IS WRIIIIITE\n"));
	ft_write(-1, "IT IS WRIIIIITE\n", strlen("IT IS WRIIIIITE\n"));
	printf("\n");
	printf("Error write: %zd",
	write(-1, "IT IS WRIIIIITE\n", strlen("IT IS WRIIIIITE\n")));
	printf("\n");
	printf("Error ft_write: %zd",
	ft_write(-1, "IT IS WRIIIIITE\n", strlen("IT IS WRIIIIITE\n")));
	printf("\n");
}

int		main(void)
{
	char	str3[6];
	char	str4[6];
	char	*str5;
	char	*str6;

	more_tests();
	printf("\n");
	printf("ft_read: ");
	ft_read(1, str4, 10);
	str4[ft_strlen(str4)] = '\0';
	printf("%s", str4);
	printf("Error ft_read: %zd", ft_read(-1, str4, 10));
	printf("\n");
	printf("read: ");
	read(1, str3, 10);
	str3[ft_strlen(str3)] = '\0';
	printf("%s", str3);
	printf("Error read: %zd\n", read(-1, str4, 10));
	printf("\n");
	printf("strdup: %s\n", str5 = strdup("lalala"));
	printf("ft_strdup: %s\n", str6 = ft_strdup("lalala"));
	return (0);
}
