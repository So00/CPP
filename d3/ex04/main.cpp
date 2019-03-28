#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    FragTrap    test = FragTrap("Jacky");
    ScavTrap    test_s = ScavTrap("Bob");
    NinjaTrap   test_n = NinjaTrap("Michel");

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
    test_n.ninjaShoebox(ScavTrap("ScavTrap"));
    test_n.ninjaShoebox(FragTrap("FragTrap"));
    test_n.ninjaShoebox(ClapTrap("ClapTrap"));
    std::cout << test_n << std::endl;
    test_n.set_max_hit_points(-15);
    test_n.set_max_energy_points(-15);
    test_n.set_melee_attack_damage(-20);
    test_n.set_ranged_attack_damage(-20);
    test_n.set_armor_damage_reduction(-40);
    std::cout << test_n << std::endl;

    return (0);
}