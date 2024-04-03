#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <stack>
#include <cstdlib>
#include <string>

#include "BST.h"
#include "FunctionTemplate.h"

/*
- what the use is of the keyword “template”
- how to create a template function.
- how to create a template class.
- how to divide a template class over multiple files.
- how to use the vector template.
- how to use vector member functions like clear, capacity, size, empty, etc.
- other container types like list, queue, stack, dequeue, etc.
*/

void print(int n)
{
    std::cout << n << " ";
}

int main(int argc, char* argv[])
{
    // Exercise 1:
    std::stack<double> s;
    s.push(1.1);
    s.push(3.2);
    s.push(6.4);
    s.push(3.7);
    while(!s.empty())
    {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;

    // Exercise 2:
    std::vector<int> vec(10);
    srand(10);
    for (int& i : vec)
    {
        i = rand() & 12 + 1;
    }

    std::for_each(vec.begin(), vec.end(), print);
    // alt version without function:
    // std::for_each(vec.begin(), vec.end(), [](int e) {
    //     std::cout << e << " ";
    // });
    std::cout << std::endl;

    // Exercise 3:
    BST<int> bst;
    bst.insert(2);
    bst.insert(5);
    bst.insert(15);
    bst.insert(0);
    bst.insert(23);
    bst.insert(10);
    bst.traverse();

    // Extra example of static function:
    auto x = FunctionTemplate::add(3, 5);
    std::cout << typeid(x).name() << ": " << x << std::endl;
    auto y = FunctionTemplate::add(3.2, 5.4);
    std::cout << typeid(y).name() << ": " << y << std::endl;
    auto z = FunctionTemplate::add(std::string("a"), std::string("b"));
    std::cout << typeid(z).name() << ": " << z << std::endl;
    
    return 0;
}
