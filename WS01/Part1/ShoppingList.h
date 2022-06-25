#ifndef _SHOPPINGLIST_H_
#define _SHOPPINGLIST_H_
namespace sdds{
    const int MAX_NO_OF_RECS = 15;

    bool loadList();
    void displayList();
    void removeBoughtItems();
    void removeItem(int index);
    bool saveList();
    void clearList();
    void toggleBought();
    void addItemToList();
    void removeItemfromList();
    bool listIsEmpty();
}
#endif //!_SHOPPINGLIST_H_