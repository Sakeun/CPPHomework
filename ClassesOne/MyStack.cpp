#include "MyStack.h"

#include <iostream>

MyStack::MyStack()
{
    top = nullptr;
}

bool MyStack::is_empty()
{
    return top == nullptr;
}

void MyStack::push(int x)
{
    if(top == nullptr)
        top = new Block { x, nullptr };
    else
    {
        push(x, top);
    }
}

Block* MyStack::push(int x, Block* block)
{
    if(block->next == nullptr)
    {
        block->next = new Block { x, nullptr };
        return block;
    }
    return push(x, block->next);
}

int MyStack::pop()
{
    int temp = top->number;
    top = top->next;
    return temp;
}

int MyStack::size()
{
    int i = 0;
    Block* curr = top;
    while(curr != nullptr)
    {
        i++;
        curr = curr->next;
    }
    return i;
}

int MyStack::sum()
{
    int sum = 0;
    Block* curr = top;
    while(curr != nullptr)
    {
        sum += curr->number;
        curr = curr->next;
    }
    return sum;
}

void MyStack::print()
{
    Block* curr = top;
    while(curr != nullptr)
    {
        std::cout << curr->number << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}


MyStack::~MyStack()
{
    Block* curr = top;
    while(curr != nullptr)
    {
        Block* temp = curr->next;
        delete curr;
        curr = temp;
    }
}

