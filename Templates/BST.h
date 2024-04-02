#pragma once
#include <string>

template <typename T>
struct Node
{
    T value;
    Node* left;
    Node* right;
};
template <typename T>
class BST
{
private:
    Node<T>* root;
    void insert(Node<T>*& node, T val);
    std::string traverse(Node<T>* node);
    
public:
    BST();
    ~BST();
    void insert(T val);
    void traverse();
};

template class BST<int>;
template class BST<std::string>;