//
//  BinaryTreeNode.hpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 4/12/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#ifndef BinaryTreeNode_hpp
#define BinaryTreeNode_hpp
#include <iostream>
#include "Node.hpp"

template <class Type>
class BinaryTreeNode : public Node<Type>
{
private:
    BinaryTreeNode<Type> * root;
    BinaryTreeNode<Type> * leftChild;
    BinaryTreeNode<Type> * rightChild;
public:
    BinaryTreeNode();
    BinaryTreeNode(Type data);
    
    BinaryTreeNode<Type> * getRoot();
    BinaryTreeNode<Type> * getLeftChild();
    BinaryTreeNode<Type> * getRightChild();
    
    void setRoot(BinaryTreeNode<Type> * root);
    void setLeftChild(BinaryTreeNode<Type> * left);
    void setRightChild(BinaryTreeNode<Type> * right);

};

//implementation

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode() : Node<Type>()
{
    
}

template <class Type>
BinaryTreeNode<Type> :: BinaryTreeNode(Type data) : Node<Type>(data)
{
    this->root = nullptr;
    this-> leftChild = nullptr;
    this-> rightChild = nullptr;
}

//getters
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRoot()
{
    return this->root;
}
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getLeftChild()
{
    return this->leftChild;
}
template <class Type>
BinaryTreeNode<Type> * BinaryTreeNode<Type> :: getRightChild()
{
    return this->rightChild;
}
//setters
template <class Type>
void BinaryTreeNode<Type> :: setRoot(BinaryTreeNode<Type> * root)
{
    this->root = root;
}
template <class Type>
void BinaryTreeNode<Type> :: setLeftChild(BinaryTreeNode<Type> * left)
{
    this->leftChild = left;
}
template <class Type>
void BinaryTreeNode<Type> :: setRightChild(BinaryTreeNode<Type> * right)
{
    this->rightChild = right;
}






#endif /* BinaryTreeNode_hpp */
