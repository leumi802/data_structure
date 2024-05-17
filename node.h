#ifndef NODE_H
#define NODE_H

class Node {
  friend class LinkedList;

public:
  Node(int value) {
    value_ = value;
    next_ = nullptr;
  }

private:
  int value_;
  Node *next_;
};

#endif