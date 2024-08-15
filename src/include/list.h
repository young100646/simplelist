#include <iostream>
#include <vector>
using namespace std;

class list
{
private:
protected:
public:
    // list()
    // {
    // constructor
    // }
    ~list()
    {
        // deconstructor
    }
    vector<string> list;
    string name;
    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
};
