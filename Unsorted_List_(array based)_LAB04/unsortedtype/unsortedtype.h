#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEMS = 5;

template <class ItemType> class UnsortedType { // name of the templete class ItemType
public :
    UnsortedType();
    void MakeEmpty();
    bool IsFull();
    int getLength();
    void InsertItem(ItemType);
    void DeleteItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void ResetList();
    void GetNextItem(ItemType&);
private:
    int length;
    ItemType info[MAX_ITEMS]; // example: int arr[5]
    int currentPos;
};
#endif // UNSORTEDTYPE_H_INCLUDED
