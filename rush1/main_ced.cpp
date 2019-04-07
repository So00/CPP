#include "MonitorSDL.hpp"
#include "ncurses.hpp"

bool	choice(int ac, char **av)
{
	if (ac < 2)
		return true;
	std::string	choice = av[1];
	if (choice == "ncurses")
		return false;
	return true;
}

int		main(int ac, char **av)
{
	if (choice(ac, av))
	{
		MonitorSDL	sdl(1920, 1080);
		try
		{
			sdl.init();
			sdl.update();
			sdl.quit();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
	{
		Ncurses ncurses;
		ncurses.launch_ncurses();
	}
	
	
	return 0;
}
