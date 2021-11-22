#ifndef CLION_STACKTYPE_H
#define CLION_STACKTYPE_H

const int MAX_ITEMS = 5;

class FullStack
// Exception class thrown
// by Push when stack is full.
{
};

class EmptyStack
// Exception class thrown
// by Pop and Top when stack is emtpy.
{
};

template<class ItemType>
class StackType {
public:
    StackType();

    bool IsFull();

    bool IsEmpty();

    void Push(ItemType);

    void Pop();

    ItemType Top();

    void displayStack();

private:
    int top;
    ItemType items[MAX_ITEMS];
};

#endif //CLION_STACKTYPE_H
