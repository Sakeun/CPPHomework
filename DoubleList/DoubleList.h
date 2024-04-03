#pragma once

struct Block
{
    Block* prev;
    Block* next;
    int value;
};

class DoubleList
{
private:
    Block* begin;
    Block* end;
    int length;
public:
    DoubleList();
    ~DoubleList();
    void addFirst(int v);
    void addLast(int v);
    void print();
    void printReverse();
    int removeFirst();
    int removeLast();
    void swap(Block* curr, Block* next);
    void orderList();
};
