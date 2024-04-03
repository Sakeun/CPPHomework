#include "DoubleList.h"

#include <iostream>

DoubleList::DoubleList()
{
    begin = nullptr;
    end = nullptr;
    length = 0;
}

void DoubleList::addFirst(int v)
{
    if(begin == nullptr)
    {
        begin = new Block { nullptr, nullptr, v };
        end = begin;
        length++;
        return;
    }
    Block* newNode = new Block { nullptr, begin, v };
    begin->prev = newNode;
    begin = newNode;
    length++;
}

void DoubleList::addLast(int v)
{
    if(begin == nullptr)
    {
        addFirst(v);
        return;
    }
    Block* newNode = new Block { end, nullptr, v };
    end->next = newNode;
    end = newNode;
    length++;
}

void DoubleList::print()
{
    Block* curr = begin;
    while(curr != nullptr)
    {
        std::cout << curr->value << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}

void DoubleList::printReverse()
{
    Block* curr = end;
    while(curr != nullptr)
    {
        std::cout << curr->value << " ";
        curr = curr->prev;
    }
    std::cout << std::endl;
}

int DoubleList::removeFirst()
{
    if(length == 0)
        return -1;

    Block* temp = begin;
    int val = begin->value;
    begin = begin->next;
    delete temp;
    if(begin != nullptr)
        begin->prev = nullptr;
    length--;
    
    return val;
}

int DoubleList::removeLast()
{
    if(length == 0)
        return -1;

    Block* temp = end;
    int val = end->value;
    end = end->prev;
    delete temp;
    if(end != nullptr)
        end->next = nullptr;
    length--;
    
    return val;
}

void DoubleList::swap(Block* curr, Block* next)
{
    next->prev = curr->prev;
    curr->next = next->next;
    if(curr->prev != nullptr)
        curr->prev->next = next;
    curr->prev = next;
    next->next = curr;
    if(curr->next != nullptr)
        curr->next->prev = curr;
}

void DoubleList::orderList()
{
    for(int i = length; i > 0; i--)
    {
        Block* curr = begin;
        for(int j = 1; j < i - 1; j++)
        {
            if(curr != nullptr && curr->next != nullptr && curr->value > curr->next->value)
            {
                Block* next = curr->next;
                swap(curr, next);
                
                if(curr == begin)
                    begin = next;
                if(j == i - 2)
                    end = curr;
            }
            curr = curr->next;
        }
    }
}


DoubleList::~DoubleList()
{
    Block* curr = begin;
    while(curr != nullptr)
    {
        auto temp = curr;
        curr = curr->next;
        delete temp;
    }
}
