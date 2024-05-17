#include "queue.h"

void Queue::push(int data) {
    LinkedList::insert(size_, data);
}

void Queue::operator+=(int data) {
    Queue::push(data);
}

int Queue::pop() {
    int removed = LinkedList::get(0);
    LinkedList::remove(0);
    return removed;
}

int Queue::peek() {
    return LinkedList::get(0);
}