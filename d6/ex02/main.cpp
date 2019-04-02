#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int main(void)
{
    Base*   base = new Base();
    Base*   tmp;
    srand((int)time(0));

    for (int i = 0; i < 6; i++)
    {
        tmp = base->generate();
        base->identify_from_reference(*tmp);
        base->identify_from_pointer(tmp);
    }
    delete base;
    return (0);
}