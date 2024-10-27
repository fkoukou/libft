/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:02:03 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/27 16:25:24 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strchr(const char *s, int c) {
    while (*s) {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    if ((char)c == '\0') {
        return (char *)s; 
    }
    return NULL;
}

int ft_strlen(const char *s) {
    int length = 0;    
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

char *ft_strtrim(const char *s1, const char *set) {
    if (!s1 || !set) 
        return NULL;

    while (*s1 && ft_strchr(set, *s1)) {
        s1++;
    }

    const char *c = s1 + ft_strlen(s1);

    while (c > s1 && ft_strchr(set, *(c - 1))) {
        c--;
    }

    size_t n = c - s1; 
    if (n == 0) {
        char *ptr = malloc(1 * sizeof(char)); 
        if (ptr == NULL) return NULL;
        ptr[0] = '\0'; 
        return ptr;
    }

    char *ptr = malloc((n + 1) * sizeof(char));
    if (ptr == NULL) 
        return NULL;
    size_t i = 0;
    while(i < n)
    {
        ptr[i] = s1[i];
        i++;
    }
    ptr[n] = '\0'; 
    return ptr;
}

int main() {
    const char *s1 = "anhelloan";
    const char *set = "an"; 
    
    char *ptr = ft_strtrim(s1, set);
    if (ptr) {
        printf("%s\n", ptr);
        free(ptr); 
    }
    return 0;
}

