#include <iostream>
#include "three_arm.h"

int main(char* ar[], int count)
{
    SchoolFriend sf;

    sf.addnewMan("Oleg");
    sf.addnewMan("Kostya");
    sf.addnewMan("Misha");
    sf.addnewMan("Vika");
    sf.addnewMan("Lesha");

    sf.delMan("Vika");
    sf.addnewMan("Anya");

    sf.addFriendship("Oleg", "Kostya");
    sf.addFriendship("Kostya", "Misha");
    sf.addFriendship("Misha", "Anya");
    sf.addFriendship("Anya", "Lesha");

    sf.showThreeHandshakes();

    return 0;
}