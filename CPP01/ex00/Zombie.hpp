/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaso <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:12:01 by amaso             #+#    #+#             */
/*   Updated: 2023/05/30 17:12:10 by amaso            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# DEFINE ZOMBIE_HPP

#include <iostream>
#include <string>

Class Zombie {
    private :
    std::string _name;
    public :
    Zombie();
    ~Zombie();
    void    announce();
    std::string    getname();
    void    setname(std::string name);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif