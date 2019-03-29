/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:17:19 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 12:25:14 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"

int main()
{
    /* AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();
    AWeapon *cpr = new PlasmaRifle(*((PlasmaRifle*)pr));

    pr->attack();
    pf->attack();
    cpr->attack();

    Enemy *sm = new SuperMutant();
    Enemy *rs = new RadScorpion();

    std::cout << *sm;
    sm->takeDamage(pf->getDamage());
    std::cout << *sm;
    sm->takeDamage(pf->getDamage());
    sm->takeDamage(pf->getDamage());
    sm->takeDamage(pf->getDamage());
    sm->takeDamage(pf->getDamage());
    sm->takeDamage(pf->getDamage());
    sm->takeDamage(pf->getDamage());
    sm->takeDamage(-60);
    std::cout << *sm;

    std::cout << *rs;
    rs->takeDamage(50);
    std::cout << *rs;

    delete sm;
    delete rs;

    delete pr;
    delete pf;
    delete cpr; */
    Character* zaz = new Character("zaz");
    std::cout << *zaz;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    return (0);
}