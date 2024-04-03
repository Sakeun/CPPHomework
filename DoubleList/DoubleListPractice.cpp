
#include <iostream>

#include "DoubleList.h"

int main(int argc, char* argv[])
{
    DoubleList* list = new DoubleList();
    list->addFirst(1);
    list->addFirst(3);
    list->addFirst(2);
    list->addFirst(10);
    list->print();
    list->printReverse();
    list->addLast(11);
    list->addLast(22);
    list->addLast(51);
    list->print();
    list->orderList();
    list->print();
    list->printReverse();
    int deleted = list->removeFirst();
    std::cout << "deleted first: " << deleted << std::endl;
    deleted = list->removeFirst();
    std::cout << "deleted first: " << deleted << std::endl;
    list->print();
    list->printReverse();
    deleted = list->removeLast();
    std::cout << "deleted last: " << deleted << std::endl;
    deleted = list->removeLast();
    std::cout << "deleted last: " << deleted << std::endl;
    list->print();
    list->printReverse();
    
    return 0;
}
