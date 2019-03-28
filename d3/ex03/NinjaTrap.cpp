#include "NinjaTrap.hpp"

/*
** Canonical
*/

NinjaTrap::NinjaTrap(void)
: ClapTrap()
{
    this->_hit_points = 60;
    this->_max_hit_points = 60;
    this->_energy_points = 120;
    this->_max_energy_points = 120;
    this->_melee_attack_damage = 60;
    this->_ranged_attack_damage = 5;
    this->_armor_damage_reduction = 0;
    std::cout << "Watchaaa ! Ninja from China incoming ! " << this->_name << " created." << std::endl;
    return;
}

NinjaTrap::NinjaTrap(std::string name)
: ClapTrap(name)
{
    this->_hit_points = 60;
    this->_max_hit_points = 60;
    this->_energy_points = 120;
    this->_max_energy_points = 120;
    this->_melee_attack_damage = 60;
    this->_ranged_attack_damage = 5;
    this->_armor_damage_reduction = 0;
    std::cout << "Watchaaa ! Ninja from China incoming ! " << this->_name << " created." << std::endl;
    return;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "I see the light ! Please don't turn me into a clown after death ! " << this->_name << " is destroyed." << std::endl;
    return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
    *this = src;
    return;
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap & rhs)
{
    if (this != &rhs)
    {
        this->_hit_points = rhs.get_hit_points();
        this->_max_hit_points = rhs.get_max_hit_points();
        this->_energy_points = rhs.get_energy_points();
        this->_max_energy_points = rhs.get_max_energy_points();
        this->_level = rhs.get_level();
        this->_name = rhs.get_name();
        this->_melee_attack_damage = rhs.get_melee_attack_damage();
        this->_ranged_attack_damage = rhs.get_ranged_attack_damage();
        this->_armor_damage_reduction = rhs.get_armor_damage_reduction();
    }
    return *(this);
}

/*
** Utilities
*/

void            NinjaTrap::rangedAttack(std::string const & target) const
{
    std::cout << "NINJ4-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
}

void            NinjaTrap::meleeAttack(std::string const & target) const
{
    std::cout << "NINJ4-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_attack_damage << " points of damage !" << std::endl;
}

void            NinjaTrap::ninjaShoebox(ClapTrap const & target)
{
    std::string shoebox= "Jumping on the wall to ... HIIIIGH KIKUUUUU";

    if (this->_energy_points >= 25)
    {
        this->_energy_points = this->_energy_points - 25;
        std::cout << shoebox << " on " << target.get_name() << std::endl;
    }
    else
        std::cout << "Please plug me in ! Low energy !" << std::endl;
}

void            NinjaTrap::ninjaShoebox(FragTrap const & target)
{
    std::string shoebox= "Launching revolution ! ";

    if (this->_energy_points >= 25)
    {
        this->_energy_points = this->_energy_points - 25;
        std::cout << shoebox << " on " << target.get_name() << std::endl;
    }
    else
        std::cout << "Please plug me in ! Low energy !" << std::endl;
}

void            NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
    std::string shoebox= "Sneaking around and kill him in silence";

    if (this->_energy_points >= 25)
    {
        this->_energy_points = this->_energy_points - 25;
        std::cout << shoebox << " on " << target.get_name() << std::endl;
    }
    else
        std::cout << "Please plug me in ! Low energy !" << std::endl;
}

void            NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
    std::string shoebox= "Dual begin, the winner will be honored.";

    if (this->_energy_points >= 25)
    {
        this->_energy_points = this->_energy_points - 25;
        std::cout << shoebox << " on " << target.get_name() << std::endl;
    }
    else
        std::cout << "Please plug me in ! Low energy !" << std::endl;
}