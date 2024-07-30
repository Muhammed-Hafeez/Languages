#include <iostream>
using namespace std;

class Gun
{
public:
    string name;
    int ammo = 0;
    int option;
    enum arms
    {
        SHOOT,
        RELOAD,
        AUTO,
        SEMI_AUTO,
        SINGLE,
        MAX_AMMO = 120,
        MAX_MAGZINEAMMO = 30,
    };
    int max_ammo = arms::MAX_AMMO;
    Gun(string name)
    {
        cout << "picked an " << name << endl;
        this->name = name;
    }
    void Action()
    {
        while (true)
        {
            cout << "what is your options: " << endl;
            cout << arms::SHOOT << " shoot" << endl;
            cout << arms::RELOAD << " reload" << endl;
            cin >> option;
            if (option == RELOAD)
            {
                if (arms::MAX_MAGZINEAMMO == ammo)
                {
                    cout << "your gun is loaded" << endl;
                    continue;
                }
                else
                {
                    cout << "reloading...";
                    max_ammo -= 30;
                    ammo += 30;
                }
            }
            else if (option == SHOOT)
            {
                for (int i = 0; i < arms::MAX_MAGZINEAMMO; i++)
                {
                    cout << "-> ";
                }
                cout << endl;
                cout << " shooted 30 rounds" << endl;
            }
        }
    }
};
int main()
{
    // abstraction
    Gun ak("ak47");
    ak.Action();
    return 0;
}