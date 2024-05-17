#include <iostream>
#include "linked_list.h"

LinkedList::LinkedList() {
    size_ = 0;
    head_ = nullptr;
}

LinkedList::~LinkedList() {
    Node *cur = head_;
    Node *pre;
    // while (cur->next_ != nullptr) - 매번 체크하므로 for문이 괜찮을 것.
    for (int i = 0; i < size_; i++) {
        pre = cur;
        cur = cur->next_;
        delete pre;
    }
}

void LinkedList::print() {
    Node *cur = head_;
    for (int i = 0; i < size_; i++) {
        std::cout << cur->value_ << " ";
        cur = cur->next_;
    }
    std::cout << std::endl;
}

void LinkedList::insert(int index, int value) {
    // 노드 새로 만들기 (동적 할당)
    // 인덱스 가기
    // pre -> newNode, newNode -> next
    Node *newNode = new Node(value);

    if (index == 0) {
        newNode->next_ = head_;
        head_ = newNode;
        size_++;
        return;
    }
     
    Node *pre = head_;
    for (int i = 1; i < index; i++) {
        pre = pre->next_;
    }
    newNode->next_ = pre->next_;
    pre->next_ = newNode;
    size_++;
}

int LinkedList::get(int index) {
    Node *cur = head_;
    for (int i = 0; i < index; i++) {
        cur = cur->next_;
    }
    return cur->value_;
}

void LinkedList::remove(int index) {
    // 인덱스 가기
    // 인덱스 새로 설정
    // 동적 할당 해제
    
    // 삭제할 node - cur, 전 - pre
    // pre.next = cur.next
    // delete cur
    if (index == 0) {
        Node *cur = head_;
        head_ = cur->next_;
        delete cur;
    } else {
        Node *pre;
        Node *cur = head_;
        for (int i = 0; i < index; i++) {
            pre = cur;
            cur = cur->next_;
        }
        pre->next_ = cur->next_;
        delete cur;
    }
    size_--;
}