#include "BST.h"

#include <iostream>
#include <sstream>

template <typename T>
BST<T>::BST()
{
    root = nullptr;
}

template <typename T>
void BST<T>::insert(T val)
{
    insert(root, val);
}

template <typename T>
void BST<T>::insert(Node<T>*& node, T val)
{
    if(node == nullptr)
    {
        node = new Node<T> { val, nullptr, nullptr };
        return;
    }

    if(val < node->value)
    {
        insert(node->left, val);
        return;
    }

    if(val > node->value)
    {
        insert(node->right, val);
    }
}

template <typename T>
void BST<T>::traverse()
{
    std::string str = traverse(root);
    std::cout << str << std::endl;
}

template <typename T>
std::string BST<T>::traverse(Node<T>* node)
{
    if(node == nullptr)
        return "";

    std::ostringstream os;
    os << traverse(node->left) << node->value << " " << traverse(node->right);
    return os.str();
}

template <typename T>
BST<T>::~BST()
{
    if(root == nullptr)
        return;
    Node<T>* n = root;
    DeleteBranch(n->left);
    DeleteBranch(n->right);
    delete n;
}

template <typename T>
void BST<T>::DeleteBranch(Node<T>* node)
{
    if(node == nullptr)
        return;
    
    if(node->left != nullptr)
        DeleteBranch(node->left);
    if(node->right != nullptr)
        DeleteBranch(node->right);

    delete node;
}
