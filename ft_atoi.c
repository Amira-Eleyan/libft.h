/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 21:53:05 by marvin            #+#    #+#             */
/*   Updated: 2023/12/17 21:53:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int num;
    int sign;
    char *ptr;

    ptr = (char *)str;
    num = 0;
    i = 0;
    sign = 1;
    while(str[i])
    {
        while ((str[i]>=9 && str[i]<= 13) ||str[i]==32)
            i++;
        if (str[i] == '-' ||str[i] == '+')
        {
            if(str[i] ==  '-')
                sign = -1;
            i++;
        }

        while ((str[i] >= '0' && str[i] <= '9'))
        {
            ptr[i] = str[i] - '0';
            num = num*10 + ptr[i];
            i++;
        }
    }
    return(sign * num);
}

int main(void)
{
    char *str = "   1234g";
    printf("%d",ft_atoi(str));
    return 0;
}