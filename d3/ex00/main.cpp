#include "FragTrap.hpp"

int main()
{
    FragTrap    test = FragTrap("Jacky");

    srand((int) time(0));
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
    return (0);
}