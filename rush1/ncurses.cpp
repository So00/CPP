#include "ncurses.hpp"
#include "data/Controller.hpp"

void     Ncurses::keyEvent(int c)
{
    if (c == 'q' || c == 27)
        this->ev = false;
}

void	    Ncurses::option_ncurses(void)
{
	curs_set(0);
    noecho();
	cbreak();
    keypad(stdscr, TRUE);
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_YELLOW, COLOR_BLACK);
	init_pair(3, COLOR_GREEN, COLOR_BLACK);
	init_pair(4, COLOR_BLUE, COLOR_BLACK);
	init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(6, COLOR_CYAN, COLOR_BLACK);
	init_pair(7, COLOR_RED, COLOR_BLACK);
	init_pair(8, 20, COLOR_BLACK);
	init_pair(9, COLOR_RED, COLOR_WHITE);
	init_color(20, 255, 255, 255);
}

void        Ncurses::update()
{
    while (this->ev)
    {
        this->controller.update();
        wattron(info->board, COLOR_PAIR(1));
        int     c;
        for (int i = 1; i < 82; i++)
            mvwprintw(info->board, i, 1, "%*s", 358 ," ");
        mvwprintw(info->board, 1, 5, "%s", "Usefull information, don't stay forever 👀");
        std::vector<std::string> vec = controller.getKeys();
        std::vector<std::string>::iterator it = vec.begin();

        int     y = 4;
        int     x = 20;
        int     color = 1;

        while (it != vec.end())
        {
            wattron(info->board, COLOR_PAIR(color));
            mvwprintw(info->board, y, x, "%s", (*it).c_str());
            y++;
            t_data data = controller.getData(*it);
            std::map<std::string, std::string>::iterator itD = data._data.begin();
            while (itD != data._data.end())
            {
                mvwprintw(info->board, y, x + 3, "%s => %s", itD->first.c_str(), itD->second.c_str());
                itD++;
                y++;
            }
            it++;
            color++;
            y++;
        }
        wrefresh(info->board);
        c = wgetch(info->board);
        keyEvent(c);
    }
}

void        Ncurses::launch_ncurses()
{
    this->info = new t_ncurses;
    this->ev = true;
    setlocale(LC_ALL, "");
    init();
    this->controller.update();
    this->update();
    quit();
    delete info;
}

void        Ncurses::init()
{
    initscr();
    info->width = 360;
    info->height = 83;
    info->board = newwin(info->height, info->width, 0, 0);
    box(info->board, ACS_VLINE, ACS_HLINE);
    nodelay(info->board, 1);
    option_ncurses();
    wrefresh(info->board);
}

void    Ncurses::quit()
{
    delwin(this->info->board);
	endwin();
}

Ncurses::Ncurses(void)
{
    return;
}

Ncurses::Ncurses(Ncurses const & src) 
{
    *this = src;
    return;
}

Ncurses::~Ncurses(void)
{
    return;
}

Ncurses &	Ncurses::operator=(Ncurses const & rhs)
{
    static_cast<void>(rhs);
    return *this;
}

std::string const Ncurses::toString(void) const
{
    return "";
}

std::ostream &	operator<< (std::ostream & o, Ncurses const & rhs)
{
    o << rhs.toString();
    return o;
}
