#ifndef NCURSES_HPP
# define NCURSES_HPP

# include <iostream>
# include <ncurses.h>
# include "data/Controller.hpp"
# include "IMonitorDisplay.hpp"

typedef struct s_ncurses {
    WINDOW      *board;
    int         width;
    int         height;
}               t_ncurses;

class Ncurses : public virtual IMonitorDisplay
{

    public: 

        Ncurses(void); 
        Ncurses(Ncurses const & src); 
        virtual ~Ncurses(void); 

        Ncurses &		operator=(Ncurses const & rhs);

        std::string const	toString(void) const;

        virtual void	init(void);
        virtual void	update(void);
        virtual void	keyEvent(int);
        virtual void	quit(void);

        void        launch_ncurses();
        void	    option_ncurses(void);

    private:
        t_ncurses   *info;
        int         ev;
        Controller  controller;

};

std::ostream &	operator<< (std::ostream & o, Ncurses const & rhs);

#endif
