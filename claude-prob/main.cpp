#include <iostream>
#include "player.h"

using namespace std;

int main()
{
    PlayerInventory *pC = 0;
    pC = new PlayerInventory(3);
    pC->addItems(101);
    pC->addItems(393);
    pC->addItems(512);
    pC->addItems(999);
    pC->showItems();
    delete pC;
    return 0;
}
