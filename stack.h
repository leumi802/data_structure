#ifndef STACK_H
#define STACK_H

#include "linked_list.h"

class Stack: public LinkedList {
public:
  void push(int data);
  void operator+=(int data);
  int pop();
  int peek();
};

#endif