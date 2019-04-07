#include "MonitorSDL.hpp"
#include <iostream>

MonitorSDL::MonitorSDL(void) : _width(600), _height(800)
{
	return;
}

MonitorSDL::MonitorSDL(int w, int h) : _width(w), _height(h)
{
	return;
}

MonitorSDL::MonitorSDL(MonitorSDL const & src) : _width(src._width), _height(src._height)
{
	*this = src;
	return;
}

MonitorSDL::~MonitorSDL(void)
{
	return;
}

void		MonitorSDL::init()
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
		throw std::exception();
	if (TTF_Init() != 0)
		throw std::exception();
	
	_win = SDL_CreateWindow("ft_gkrellm",
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			_width,
			_height,
			SDL_WINDOW_SHOWN);
			// SDL_WINDOW_RESIZABLE); // ?
	
	if (_win == NULL)
		throw std::exception();
	_rend = SDL_CreateRenderer(_win, -1, SDL_RENDERER_ACCELERATED);
	
	if (_rend == NULL)
		throw std::exception();
	
	if ((_font = TTF_OpenFont("fonts/neue.ttf", 16)) == NULL)
		throw std::exception();
}

void		MonitorSDL::quit()
{
	SDL_DestroyRenderer(_rend);
	SDL_DestroyWindow(_win);
	TTF_CloseFont(_font);
	TTF_Quit();
	SDL_Quit();
	exit(EXIT_SUCCESS);// needed to key ESC
}

void		MonitorSDL::update()
{
	
	Controller	control;


	while (true)
	{
		control.update();//?????
		
		SDL_WaitEventTimeout(&_event, 100);
		if (_event.type == SDL_QUIT)
			quit();
		if (_event.type == SDL_KEYDOWN)
			keyEvent(_event.key.keysym.sym);
		// if (_event.type == SDL_WINDOWEVENT)
		// 	if (_event.window.event == SDL_WINDOWEVENT_RESIZED) // ?
		// 	{
		// 		SDL_GetWindowSize(_win, &_width, &_height);
		// 	}
		
		drawModules(control);

		// put _rend in the win
		SDL_RenderPresent(_rend);
		
		// reset drawing color, clear window
		if (SDL_SetRenderDrawColor(_rend, 0, 0, 0, 255) != 0
			|| SDL_RenderClear(_rend) != 0)
			throw std::runtime_error("SDL - Reset drawing color or RenderClear failure");
	}
}

void		MonitorSDL::drawModules(Controller & control)
{
		drawTextBox("Hostname/username", 25, 25, 250, 30);
		drawTextBox("OS info", 25, 65, 250, 30);
		drawTextBox("Date/time", 25, 105, 250, 30);
		drawTextBox("CPU info", 25, 145, 250, 30);
		drawTextBox("RAM info", 25, 185, 250, 30);
		drawTextBox("Network throughtput", 25, 225, 250, 30);
		drawTextBox("Unicorn", 25, 265, 250, 30);
		SDL_RenderDrawLine(_rend, 300, 10, 300, (_height - 10));
		
		std::vector<std::string>	validKeys = control.getKeys();
		int i = 340;
		int	count = 0;

	    std::vector<std::string>::iterator it;
		for (it = validKeys.begin(); it != validKeys.end(); it++)
		{
			// if (control.getData(*it).display)
				if (count < 3)
					drawBox(*it, control.getData(*it), i, 25);
				else if (count < 6)
					drawBox(*it, control.getData(*it), i, 345);
				else
					drawBox(*it, control.getData(*it), i, 665);
				i += 420;
				count++;
				if (count == 3)
					i = 340;
		}

}

void		MonitorSDL::drawBox(std::string title, t_data data, int x, int y)//, int w, int h)
{
(void)data;
	
	drawTextBox(title, x + 5, y, 100, 30);
	
	std::string	str;
	std::map<std::string, std::string>::iterator itD;
	int	tmp = 1;
	for (itD = data._data.begin(); itD != data._data.end(); itD++)
	{
		str = itD->first + ": " + itD->second;
		// std::cout << str << std::endl;
		printToWindow(str, x , y + tmp * 40);
		tmp++;
	}
	
	SDL_Rect	pos;
	pos.x = x - 10;
	pos.y = y - 10;
	pos.w = 400;
	pos.h = 300;

	SDL_SetRenderDrawColor(_rend, 254, 252, 242, 255);
	SDL_RenderDrawRect(_rend, &pos);
}

void		MonitorSDL::drawTextBox(std::string str, int x, int y, int w, int h)
{
	SDL_Rect	pos;
	pos.x = x;
	pos.y = y;
	pos.w = w;
	pos.h = h;

	SDL_SetRenderDrawColor(_rend, 254, 252, 242, 255);
	SDL_RenderDrawRect(_rend, &pos);
	printToWindow(str, x + 5, y + 5);
}

void		MonitorSDL::printToWindow(std::string str, int x, int y)
{
	SDL_Color	color;
	color.r = 254;
	color.g = 252;
	color.b = 242;
	color.a = 255;

	SDL_Rect	pos;
	pos.x = x;
	pos.y = y;

	SDL_Surface	*surface;
	SDL_Texture	*texture;
	if ((surface = TTF_RenderText_Blended(_font, str.c_str(), color)) == NULL)
		throw std::runtime_error("TTF_RenderText_Blended failed");
	if ((texture = SDL_CreateTextureFromSurface(_rend, surface)) == NULL)
		throw std::runtime_error("SDL_CreateTextureFromSurface failed");
		
	SDL_QueryTexture(texture, NULL, NULL, &pos.w, &pos.h);
	SDL_RenderCopy(_rend, texture, NULL, &pos);
	SDL_FreeSurface(surface);
	SDL_DestroyTexture(texture);
}

void		MonitorSDL::keyEvent(int key)
{
	if (key == SDLK_ESCAPE)
		quit();
}

MonitorSDL &	MonitorSDL::operator=(MonitorSDL const & rhs)
{
	(void)rhs;//Do whatever needs to be done

	return *this;
}

std::string const MonitorSDL::toString(void) const
{
	return "";// Return whatever needs to be returned
}

std::ostream &	operator<< (std::ostream & o, MonitorSDL const & rhs)
{
	o << rhs.toString();
	return o;
}
