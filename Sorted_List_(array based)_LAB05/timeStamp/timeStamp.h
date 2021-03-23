#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

const int MAX_ITEMS = 5;
template <class ItemType>
class timeStamp {
public :
    timeStamp();

private:
    int s, m, h;
    ItemType info[MAX_ITEMS];
    int currentPos;
};
#endif // TIMESTAMP_H_INCLUDED
