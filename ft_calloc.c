/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakoukou <fakoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:16:53 by fakoukou          #+#    #+#             */
/*   Updated: 2024/10/26 17:56:33 by fakoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

void *ft_memset(void *b,  int c, size_t len)
{
    unsigned char *ptr;
    char x;
    unsigned int i;

    ptr = b;
    i = 0;
    x = c;

    while(i < len)
    {
        ptr[i] = x;
        i++;
    }
    return b;
}
void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    if(count != 0 && (size * count) > SIZE_MAX)
    { 
        return (NULL);
    }
    ptr = (void*)malloc(count*size);
    if (ptr == NULL)
    {
        return NULL;
    }
    ft_memset(ptr , 0, size * count);
    return ptr;
}

int main() {
    size_t num_elements = 5;
    int *array = (int *)ft_calloc(num_elements, sizeof(int));

    
    if (array == NULL) {
        printf("Échec de l'allocation de mémoire\n");
        return 1;
    }

    for (size_t i = 0; i < num_elements; i++) {
        printf("array[%zu] = %d\n", i, array[i]); 
    }
    free(array);
    return 0;
}