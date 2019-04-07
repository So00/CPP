#ifndef MONITORSDL_HPP
# define MONITORSDL_HPP

# include <iostream>
# include <list>

# include "SDL.h"
# include "SDL_ttf.h"
// # include "frameworks/SDL2.framework/Headers/SDL.h"
// # include "frameworks/SDL2_ttf.framework/Headers/SDL_ttf.h"

# include "IMonitorDisplay.hpp"

# include "Controller.hpp"
# include "data/BasicModule.hpp"

# define WHITE _colors[0]
# define GREY _colors[7]

class MonitorSDL : public virtual IMonitorDisplay
{
public: 

	MonitorSDL(void);
	MonitorSDL(int w, int h);
	MonitorSDL(MonitorSDL const & src); 
	virtual ~MonitorSDL(void); 

	virtual void	init(void);
	virtual void	update(void);
	virtual void	keyEvent(int);
	virtual void	quit(void);

	void			drawModules(Controller & control);
	void			drawBox(std::string title, t_data data, int x, int y, SDL_Color c);
	void			drawTextBox(std::string str, int x, int y, int w, int h, SDL_Color c);
	void			printToWindow(std::string str, int x, int y);
	void			buttonEvent(Controller & control, int x, int y);
	SDL_Color		newColor(int r, int g, int b, int a);

	std::string const	toString(void) const;

	MonitorSDL &		operator=(MonitorSDL const & rhs);

	std::list<BasicModule>	modules;

private:
	int						_width;
	int						_height;
	SDL_Window*				_win;
	SDL_Renderer*			_rend;
	SDL_Event				_event;
	TTF_Font*				_font;
	SDL_Color				_colors[8];


};

std::ostream &	operator<< (std::ostream & o, MonitorSDL const & rhs);

#endif
