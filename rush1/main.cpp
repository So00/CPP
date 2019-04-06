#include <iostream>
#include "Controller.hpp"

int main()
{
    Controller control;

    control.update();
    // std::cout << control.getData("cpuusage");

    /**************** LES NOMS ****************/

    // std::string hostname = get_list_systcl("kern.hostname");
    // char username[31];
    // getlogin_r(username, 31);
    // std::cout << hostname << std::endl << username << std::endl;

    /*TA GRAND MERE PREVOT LA VIEILLE VERSION
    // char hostname[31];
    // gethostname(hostname, 31);
    */


    /*************** Os Info ****************/

    // struct utsname      *os = new struct utsname;
    // uname(os);
    // std::cout << os->sysname << std::endl;
    // std::cout << os->nodename << std::endl;
    // std::cout << os->release << std::endl;
    // std::cout << os->version << std::endl;
    // std::cout << os->machine << std::endl;

    /************ Time date ****************/

    // SAVING THE START
    // std::chrono::time_point<std::chrono::system_clock> start, end, act;
    // start = std::chrono::system_clock::now();

    // while(1)
    // {
    //     sleep(4);
    //     act = std::chrono::system_clock::now();
    //     std::time_t date = std::chrono::system_clock::to_time_t(act);
    //     int elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(act-start).count();
    //     std::cout << "Timestamp : " << std::chrono::system_clock::to_time_t(act) << " Actual date : " << std::ctime(&date) << "elapsed time: " << elapsed_seconds << "s" << std::endl;
    // }


    /************ CPU CORE ************/

    /* Temps depuis que c'est allumé */
    // std::string ret = exec("sysctl kern.boottime");
    // std::cout << ret;

    /* Processus total */
    // std::string ret = exec("top -l 1 | grep Processes:");
    // std::cout << ret;

    /* network */
    // std::string ret = exec("top -l 1 | grep Networks:");
    // std::cout << ret;
    
    return (0);
}
