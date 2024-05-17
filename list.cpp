#include "list.h"

void List::insert(int index, int value) {
    LinkedList::insert(index, value);
}

int List::get(int index) {
    return LinkedList::get(index);
}

void List::remove(int index) {
    LinkedList::remove(index);
}