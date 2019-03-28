#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>

class ScavTrap
{

    public:

        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap(void);
        
        ScavTrap & operator=(ScavTrap const & rhs);

        /*
        ** Getters and setters
        */
        int            get_hit_points(void) const;
        int            get_max_hit_points(void) const;
        int            get_energy_points(void) const;
        int            get_max_energy_points(void) const;
        int            get_level(void) const;
        std::string    get_name(void) const;
        int            get_melee_attack_damage(void) const;
        int            get_ranged_attack_damage(void) const;
        int            get_armor_damage_reduction(void) const;

        void           set_hit_points(int value);
        void           set_max_hit_points(int value);
        void           set_energy_points(int value);
        void           set_max_energy_points(int value);
        void           set_level(int value);
        void           set_name(std::string value);
        void           set_melee_attack_damage(int value);
        void           set_ranged_attack_damage(int value);
        void           set_armor_damage_reduction(int value);

        /*
        ** Utilities
        */

        void            rangedAttack(std::string const & target) const;
        void            meleeAttack(std::string const & target) const;
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        void            challengeNewcomer(std::string const & target);

    private:
        int             _hit_points;
        int             _max_hit_points;
        int             _energy_points;
        int             _max_energy_points;
        int             _level;
        std::string     _name;
        int             _melee_attack_damage;
        int             _ranged_attack_damage;
        int             _armor_damage_reduction;

};

std::ostream    &operator<<(std::ostream &o, ScavTrap const &rhs);

#endif