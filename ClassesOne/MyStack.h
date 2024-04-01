#pragma once

struct Block
{
    int number;
    Block* next;
};

class MyStack
{
private:
    Block* top;
    
public:
    MyStack();
    ~MyStack();

    bool is_empty();
    void push(int x);
    Block* push(int x, Block* block);
    int pop();
    void print();
    int size();
    int sum();
};
