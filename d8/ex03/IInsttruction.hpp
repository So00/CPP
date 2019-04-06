#ifndef IINSTTRUCTION_HPP
# define IINSTTRUCTION_HPP

# include <iostream>

class IInsttruction {

    public: 

        IInsttruction(void);
        IInsttruction(IInsttruction const & src);
        virtual ~IInsttruction(void) = 0;
        virtual void execute(char c) = 0;


    protected:
        IInsttruction &		operator=(IInsttruction const & rhs);
        int             _position;
        std::string     _mind;
        std::string     _str;
};
#endif
