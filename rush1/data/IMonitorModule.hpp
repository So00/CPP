#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

# include <iostream>
# include <map>
# include <list>


typedef struct  s_data
{
    std::map<std::string, std::string> _data;
    bool                                display;
}               t_data;

class IMonitorModule {

    public: 

        IMonitorModule(void) {}
        IMonitorModule(IMonitorModule const & src) {static_cast<void>(src);}
        virtual ~IMonitorModule(void) {}

        virtual t_data                  getData(std::string key) = 0;
        virtual void                    setData(std::string key, t_data data) = 0;
        virtual std::string             get_list_systcl(std::string actSearch) = 0;
        virtual std::string             exec(const char* cmd) = 0;

    private:
        IMonitorModule &		operator=(IMonitorModule const & rhs);
};

#endif
