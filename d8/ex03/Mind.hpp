#ifndef MIND_HPP
# define MIND_HPP

# include <iostream>
# include "IInsttruction.hpp"
# include "Add.hpp"
# include "Subtract.hpp"
# include "ptrAdd.hpp"
# include "ptrSubtract.hpp"
# include "Print.hpp"
# include "getChar.hpp"

# define Case break;case

class Mind : public virtual IInsttruction
{

public: 

    virtual ~Mind(void); 
    Mind(std::string mind);
	Mind &		operator=(Mind const & rhs);
    Mind(Mind const & src);

    std::string         toString() const;
    virtual void        execute(char c);
    int                 getValue();
    void                doStuff();
    int                 loop(int i, int start);

private:
    Mind(void);
    Add         add;
    Subtract    subtract;
    PtrAdd      ptrAdd;
    PtrSubtract ptrSubtract;
    Print       print;
    GetChar     getChar;

};

std::ostream &	operator<< (std::ostream & o, Mind const & rhs);
#endif
