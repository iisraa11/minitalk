/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isrguerr <isrguerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:25:22 by isrguerr          #+#    #+#             */
/*   Updated: 2025/03/13 17:14:28 by isrguerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "talk.h"

int main(int argc, char *argv)
{
    if (argc != 1)
    {
        ft_putstr_fd("Use ./server\n", 1);
        return (1);
    }
    printf("PID: %d\n", getpid());
    
    while(1 == 1)
        pause();
    return (0);
}