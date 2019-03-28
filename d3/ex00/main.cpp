#include "FragTrap.hpp"

int main()
{
    FragTrap    test = FragTrap("Jacky");

    srand((int) time(0));

    std::cout << std::endl << "TESTING FRAG" << std::endl << std::endl;

    test.rangedAttack("Michel");
    test.set_ranged_attack_damage(2);
    test.rangedAttack("Michel");
    test.set_name("Mordecai");
    test.meleeAttack("Handsome Jack");
    test.set_melee_attack_damage(2);
    test.meleeAttack("Handsome Jack");
    std::cout << test << std::endl;
    test.takeDamage(10);
    std::cout << "* Taking Damage 10 *" << std::endl;
    std::cout << test << std::endl;
    test.takeDamage(200);
    std::cout << "* Taking Damage 200 *" << std::endl;
    std::cout << test << std::endl;
    test.beRepaired(10);
    std::cout << "* Repaired 10 *" << std::endl;
    std::cout << test << std::endl;
    test.beRepaired(200);
    std::cout << "* Repaired 200 *" << std::endl;
    std::cout << test << std::endl;
    test.set_max_hit_points(200);
    std::cout << "* Max hit points 200 *" << std::endl;
    test.beRepaired(400);
    std::cout << "* Repaired 400 *" << std::endl;
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
    std::cout << "* max hits points -15 *" << std::endl;
    std::cout << "* max energy points -15 *" << std::endl;
    std::cout << "* max melee damage -20 *" << std::endl;
    std::cout << "* max ranged damata -20 *" << std::endl;
    std::cout << "* max armored reduction -40 *" << std::endl;
    std::cout << test << std::endl;

    return (0);
}