#include <iostream>

enum steam {Modernwarfare, DarknessII, DevillMayCry4, BadCompany2, SaintsRow3};

int main(){

    steam game = BadCompany2;

    switch (game)
    {
    case Modernwarfare: std::cout << "first great game for multiplayer" << '\n';
        break;
    case DarknessII: std::cout << "First great story game" << '\n';
        break;
    case DevillMayCry4: std::cout << "amaizing slasher with keyboard" << '\n';
        break;
    case BadCompany2: std::cout << "the BEST multiplayer shooter i played" << '\n';
        break;
    case SaintsRow3: std::cout << "most chaotic and funny game" << '\n';
        break;
    }

    return 0;
}