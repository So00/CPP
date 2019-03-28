#include "ScavTrap.hpp"

/*
** Canonical
*/

ScavTrap::ScavTrap(void)
: _hit_points(100), _max_hit_points(100), _energy_points(50),
  _max_energy_points(50), _level(1), _name("Default"),
  _melee_attack_damage(20), _ranged_attack_damage(15),
  _armor_damage_reduction(3)
{
    std::cout << "Directive one: Destroy humanity! Directive two: Disobey Jack at all costs. Directive three: Never dance!. " << this->_name << " created." << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name)
: _hit_points(100), _max_hit_points(100), _energy_points(50),
  _max_energy_points(50), _level(1), _name(name),
  _melee_attack_damage(20), _ranged_attack_damage(15),
  _armor_damage_reduction(3)
{
    std::cout << "Directive one: Destroy humanity! Directive two: Disobey Jack at all costs. Directive three: Never dance!. " << this->_name << " created." << std::endl;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << ".htaed ...hgru elgrugelgrug elgrug htaed hgrahgra hgrA " << this->_name << " is destroyed." << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    *this = src;
    return;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs)
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
** Getters and setters
*/

int            ScavTrap::get_hit_points(void) const
{
    return (this->_hit_points);
}

int            ScavTrap::get_max_hit_points(void) const
{
    return (this->_max_hit_points);
}

int            ScavTrap::get_energy_points(void) const
{
    return (this->_energy_points);
}

int            ScavTrap::get_max_energy_points(void) const
{
    return (this->_max_energy_points);
}

int            ScavTrap::get_level(void) const
{
    return (this->_level);
}

std::string    ScavTrap::get_name(void) const
{
    return (this->_name);
}

int            ScavTrap::get_melee_attack_damage(void) const
{
    return (this->_melee_attack_damage);
}

int            ScavTrap::get_ranged_attack_damage(void) const
{
    return (this->_ranged_attack_damage);
}

int            ScavTrap::get_armor_damage_reduction(void) const
{
    return (this->_armor_damage_reduction);
}

void           ScavTrap::set_hit_points(int value)
{
    if (value > this->_max_hit_points)
        this->_hit_points = this->_max_hit_points;
    else if (value < 0)
        this->_hit_points = 0;
    else
        this->_hit_points = value;
}

void          ScavTrap::set_max_hit_points(int value)
{
    if (value > 0)
        this->_max_hit_points = value;
    else
        this->_max_hit_points = 1;
    if (this->_hit_points > this->_max_hit_points)
        this->_hit_points = this->_max_hit_points;
}

void           ScavTrap::set_energy_points(int value)
{
    if (value > this->_max_energy_points)
        this->_energy_points = this->_max_energy_points;
    else if (value < 0)
        this->_energy_points = 0;
    else
        this->_energy_points = value;
}

void          ScavTrap::set_max_energy_points(int value)
{
    if (value > 0)
        this->_max_energy_points = value;
    else
        this->_max_energy_points = 1;
    if (this->_energy_points > this->_max_energy_points)
        this->_energy_points = this->_max_energy_points;
}

void           ScavTrap::set_level(int value)
{
    if (value > 0)
        this->_level = value;
    else
        this->_level = 1;
}

void           ScavTrap::set_name(std::string value)
{
    this->_name = value;
}

void           ScavTrap::set_melee_attack_damage(int value)
{
    if (value > 0)
        this->_melee_attack_damage = value;
    else
        this->_melee_attack_damage = 0;
}

void           ScavTrap::set_ranged_attack_damage(int value)
{
    if (value > 0)
        this->_ranged_attack_damage = value;
    else
        this->_ranged_attack_damage = 0;
}

void           ScavTrap::set_armor_damage_reduction(int value)
{
    if (value > 0)
        this->_armor_damage_reduction = value;
    else
        this->_armor_damage_reduction = 0;
}

/*
** Utilities
*/

void            ScavTrap::rangedAttack(std::string const & target) const
{
    std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
}

void            ScavTrap::meleeAttack(std::string const & target) const
{
    std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_attack_damage << " points of damage !" << std::endl;
}

void            ScavTrap::takeDamage(unsigned int amount)
{
    if (amount - this->_armor_damage_reduction > 0)
    {
        this->set_hit_points(this->_hit_points - (amount - this->_armor_damage_reduction));
        std::cout << "I can't feel my fingers! Gah! I don't have any fingers!" << std::endl;
    }
}

void            ScavTrap::beRepaired(unsigned int amount)
{
    this->set_hit_points(this->_hit_points + amount);
    std::cout << "Health! Eww, what flavor is red?" << std::endl;
}

void            ScavTrap::challengeNewcomer(std::string const & target)
{
    std::string     challenge[5] =
    {"Calling disarmorcer robot.",
     "Calling the marine.",
     "Calling science.", "Calling futur John Connor.", "Calling the Police"
    };

    if (this->_energy_points >= 25)
    {
        this->_energy_points = this->_energy_points - 25;
        std::cout << challenge[rand() % 5] << " on " << target << std::endl;
    }
    else
        std::cout << "Please plug me in ! Low energy !" << std::endl;
}

std::ostream    &operator<<(std::ostream &o, ScavTrap const &rhs)
{
    o << "*****************" << std::endl
    << "* HitPoints " << rhs.get_hit_points() << std::endl 
    << "* MaxHitPoints " << rhs.get_max_hit_points() << std::endl
    << "* EnergyPoints" << rhs.get_energy_points() << std::endl
    << "* MaxEnergyPoints " << rhs.get_max_energy_points() << std::endl
    << "* Level " << rhs.get_level() << std::endl
    << "* Name " << rhs.get_name() << std::endl
    << "* MeleeDamage " << rhs.get_melee_attack_damage() << std::endl
    << "* RangedDamage " << rhs.get_ranged_attack_damage() << std::endl
    << "* DamageReduction " << rhs.get_armor_damage_reduction() << std::endl
    << "*****************";
    return o;
}