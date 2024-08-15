
#include "include/list.h"

int main(int arg_count, char *args[])
{
    if (arg_count > 1)
    {
        list simplelist;
        simplelist.name = string(args[1]);
        simplelist.print_menu();
    }
    else
    {
        cout << "Username not Supplied.. exiting the progrm" << endl;
    }

    return 0;
}
