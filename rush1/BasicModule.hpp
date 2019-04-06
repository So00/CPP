#ifndef BASICMODULE_HPP
# define BASICMODULE_HPP

# include <iostream>
/* username */
# include <unistd.h>
/* hostname */
# include <sys/utsname.h>
# include <sys/types.h>
/* Command systcl proc etc .. */
# include <sys/sysctl.h>
# include <sys/proc_info.h>
/* time */
# include <ctime>
# include <chrono>
# include "IMonitorModule.hpp"
# include <regex>

class BasicModule : public virtual IMonitorModule
{

    public: 

        BasicModule(void);
        BasicModule(BasicModule const & src);
        virtual ~BasicModule(void);

        virtual std::string     getData(std::string key);
        virtual void            setData(std::string key, std::string data);
        std::string             get_list_systcl(std::string actSearch);
        std::string             exec(const char* cmd);

    protected:
        std::map<std::string, std::string> _map;

    private:
	    BasicModule &		    operator=(BasicModule const & rhs);


};


#endif
