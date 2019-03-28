/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 15:37:48 by atourner          #+#    #+#             */
/*   Updated: 2019/03/28 15:38:18 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
    FragTrap    test = FragTrap("Jacky");
    ScavTrap    test_s = ScavTrap("Bob");
    NinjaTrap   test_n = NinjaTrap("Michel");
    SuperTrap   test_ss = SuperTrap("DidierSuper");

    srand((int) time(0));

    std::cout << std::endl << "TESTING FRAG" << std::endl << std::endl;

    test.rangedAttack("Michel");
    test.set_ranged_attack_damage(15);
    test.rangedAttack("Michel");
    test.set_name("Mordecai");
    test.meleeAttack("Handsome Jack");
    test.set_melee_attack_damage(15);
    test.meleeAttack("Handsome Jack");
    std::cout << test << std::endl;
    test.takeDamage(10);
    std::cout << test << std::endl;
    test.takeDamage(200);
    std::cout << test << std::endl;
    test.beRepaired(10);
    std::cout << test << std::endl;
    test.beRepaired(200);
    std::cout << test << std::endl;
    test.set_max_hit_points(200);
    test.beRepaired(400);
    std::cout << test << std::endl;
    test.vaulthunter_dot_exe("Handsome Jack");
    std::cout << test << std::endl;
    test.vaulthunter_dot_exe("Handsome Jack");
    test.vaulthunter_dot_exe("Handsome Jack");
    test.vaulthunter_dot_exe("Handsome Jack");
    test.vaulthunter_dot_exe("Handsome Jack");
    std::cout << test << std::endl;
    test.set_max_hit_points(-15);
    test.set_max_energy_points(-15);
    test.set_melee_attack_damage(-20);
    test.set_ranged_attack_damage(-20);
    test.set_armor_damage_reduction(-40);
    std::cout << test << std::endl;

    std::cout << std::endl << "TESTING SCAV" << std::endl << std::endl;

    test_s.rangedAttack("Michel");
    test_s.set_ranged_attack_damage(10);
    test_s.rangedAttack("Michel");
    test_s.set_name("LiveOfChicken");
    test_s.meleeAttack("Handsome Jack");
    test_s.set_melee_attack_damage(15);
    test_s.meleeAttack("Handsome Jack");
    std::cout << test_s << std::endl;
    test_s.takeDamage(10);
    std::cout << test_s << std::endl;
    test_s.takeDamage(200);
    std::cout << test_s << std::endl;
    test_s.beRepaired(10);
    std::cout << test_s << std::endl;
    test_s.beRepaired(200);
    std::cout << test_s << std::endl;
    test_s.set_max_hit_points(200);
    test_s.beRepaired(400);
    std::cout << test_s << std::endl;
    test_s.challengeNewcomer("Handsome Jack");
    std::cout << test_s << std::endl;
    test_s.challengeNewcomer("Handsome Jack");
    test_s.challengeNewcomer("Handsome Jack");
    test_s.challengeNewcomer("Handsome Jack");
    test_s.challengeNewcomer("Handsome Jack");
    std::cout << test_s << std::endl;
    test_s.set_max_hit_points(-15);
    test_s.set_max_energy_points(-15);
    test_s.set_melee_attack_damage(-20);
    test_s.set_ranged_attack_damage(-20);
    test_s.set_armor_damage_reduction(-40);
    std::cout << test_s << std::endl;

    std::cout << std::endl << "TESTING NINJA" << std::endl << std::endl;


    test_n.rangedAttack("Michel");
    test_n.set_ranged_attack_damage(10);
    test_n.rangedAttack("Michel");
    test_n.set_name("LiveOfChicken");
    test_n.meleeAttack("Handsome Jack");
    test_n.set_melee_attack_damage(15);
    test_n.meleeAttack("Handsome Jack");
    std::cout << test_n << std::endl;
    test_n.takeDamage(10);
    std::cout << test_n << std::endl;
    test_n.takeDamage(200);
    std::cout << test_n << std::endl;
    test_n.beRepaired(10);
    std::cout << test_n << std::endl;
    test_n.beRepaired(200);
    std::cout << test_n << std::endl;
    test_n.set_max_hit_points(200);
    test_n.beRepaired(400);
    std::cout << test_n << std::endl;
    test_n.ninjaShoebox(test_n);
    std::cout << test_n << std::endl;
    test_n.ninjaShoebox(test_s);
    test_n.ninjaShoebox(test_n);
    test_n.ninjaShoebox(test);
    std::cout << test_n << std::endl;
    test_n.set_max_hit_points(-15);
    test_n.set_max_energy_points(-15);
    test_n.set_melee_attack_damage(-20);
    test_n.set_ranged_attack_damage(-20);
    test_n.set_armor_damage_reduction(-40);
    std::cout << test_n << std::endl;

    std::cout << std::endl << "TESTING SUPER" << std::endl << std::endl;

    test_ss.rangedAttack("Michel");
    test_ss.set_ranged_attack_damage(15);
    test_ss.rangedAttack("Michel");
    test_ss.set_name("Mordecai");
    test_ss.meleeAttack("Handsome Jack");
    test_ss.set_melee_attack_damage(15);
    test_ss.meleeAttack("Handsome Jack");
    std::cout << test_ss << std::endl;
    test_ss.takeDamage(10);
    std::cout << test_ss << std::endl;
    test_ss.takeDamage(200);
    std::cout << test_ss << std::endl;
    test_ss.beRepaired(10);
    std::cout << test_ss << std::endl;
    test_ss.beRepaired(200);
    std::cout << test_ss << std::endl;
    test_ss.set_max_hit_points(200);
    test_ss.beRepaired(400);
    std::cout << test_ss << std::endl;
    test_ss.vaulthunter_dot_exe("Handsome Jack");
    std::cout << test_ss << std::endl;
    test_ss.vaulthunter_dot_exe("Handsome Jack");
    test_ss.ninjaShoebox(test_s);
    test_ss.ninjaShoebox(test);
    test_ss.ninjaShoebox(test_n);
    std::cout << test_ss << std::endl;
    test_ss.set_max_hit_points(-15);
    test_ss.set_max_energy_points(-15);
    test_ss.set_melee_attack_damage(-20);
    test_ss.set_ranged_attack_damage(-20);
    test_ss.set_armor_damage_reduction(-40);
    std::cout << test_ss << std::endl;

    return (0);
}