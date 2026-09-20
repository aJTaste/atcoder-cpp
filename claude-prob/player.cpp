#include <iostream>
#include "player.h"

using namespace std;

PlayerInventory::PlayerInventory(int capacity)
{
    cout << "インベントリを作成しました(容量: " << capacity << ")" << endl;
    m_capacity = capacity;
    inventory = new int[m_capacity];
    have_number = 0;
}

PlayerInventory::~PlayerInventory()
{
    delete[] inventory;
    cout << "インベントリを破棄しました" << endl;
}

bool PlayerInventory::addItems(int itemId)
{
    if (have_number < m_capacity)
    {
        inventory[have_number] = itemId;
        have_number += 1;
        return true;
    }
    else
    {
        cout << "インベントリがいっぱいです" << endl;
        return false;
    }
}

void PlayerInventory::showItems()
{
    int k;
    for (k = 0; k < have_number; k++)
    {
        have_items += " " + to_string(inventory[k]);
    };
    cout << "所持アイテム: " << have_items << endl;
}
