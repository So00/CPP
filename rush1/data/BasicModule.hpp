#ifndef BASICMODULE_HPP
# define BASICMODULE_HPP

# include <iostream>
# include <iterator>
# include <vector>
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

class BasicModule : public virtual IMonitorModule
{

    public: 

        BasicModule(void);
        BasicModule(BasicModule const & src);
        virtual ~BasicModule(void);

        virtual t_data          getData(std::string key);
        virtual void            setData(std::string key, t_data data);
        std::string             get_list_systcl(std::string actSearch);
        std::string             exec(const char* cmd);
        std::vector<std::string>    getKeys();

    protected:
        std::vector<std::string>                            _keys;
        std::map<std::string, t_data>                       _map;
        std::string                                         _top;
        std::chrono::time_point<std::chrono::system_clock>  _start;


    private:
	    BasicModule &		    operator=(BasicModule const & rhs);


};


#endif
