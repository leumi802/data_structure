#include "stack.h"

void Stack::push(int data) {
    LinkedList::insert(0, data);
}

void Stack::operator+=(int data) {
    Stack::push(data);
}

int Stack::pop() {
    int removed = LinkedList::get(0);
    LinkedList::remove(0);
    return removed;
}

int Stack::peek() {
    return LinkedList::get(0);
}