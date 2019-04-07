#ifndef NCURSES_HPP
# define NCURSES_HPP

# include <iostream>
# include <ncurses.h>

typedef struct s_ncurses {
    WINDOW      *board;
    int         width;
    int         height;
}               t_ncurses;

void        ft_init_ncurse(t_ncurses *info);
void        erase(WINDOW **board);
int         get_ev(int c);
void        launch_ncurses();



#endif
