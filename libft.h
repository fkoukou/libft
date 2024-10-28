/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:40:06 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/28 11:52:44 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

char *ft_strjoin(char const *s1, char const *s2);
int ft_strlen(const char *s);
void ft_bzero (void *s, size_t n);
void *ft_memset(void *b,  int c, size_t len);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_substr(char const *s, unsigned int start, size_t len); 
char * ft_strdup(const char *s1);
void ft_memcpy(void *dest, const void *src, size_t n);





#endif