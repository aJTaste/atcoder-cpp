#ifndef _PLAYER_INVENTORY_
#define _PLAYER_INVENTORY_

#include <iostream>
#include <string>

using namespace std;

class PlayerInventory
{
public:
    PlayerInventory(int capacity);
    ~PlayerInventory();
    bool addItems(int itemId);
    void showItems();

private:
    int m_capacity;
    int *inventory;
    int have_number;
    string have_items = "";
};
#endif // _PLAYER_INVENTORY_
