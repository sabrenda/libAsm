/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 01:42:47 by sabrenda          #+#    #+#             */
/*   Updated: 2021/04/01 20:04:12 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <unistd.h>

size_t	ft_strlen(char *rdi);
int		ft_strcmp(const char *rdi, const char *rsi);
char	*ft_strcpy(char *rdi, const char *rsi);
ssize_t	ft_write(int rdi, void *rsi, int rdx);
ssize_t	ft_read(int rdi, void *rsi, int rdx);
char	*ft_strdup(const char *rdi);

#endif
