//
//  DoubleNode.hpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 2/21/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#ifndef DoubleNode_hpp
#define DoubleNode_hpp
#include <iostream>
#include "Node.hpp"

template <class Type>
class DoubleNode : public Node<Type>
{
private:
    DoubleNode<Type> * nextNode;
    DoubleNode<Type> * previousNode;
public:
    //constructors
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode<Type> * nextNode, DoubleNode<Type> * previousNode);
    //getters
    DoubleNode<Type> * getNextNode();
    DoubleNode<Type> * getPrevNode();
    //setters
    void setNextNode(DoubleNode<Type> * nextNode);
    void setPrevNode(DoubleNode<Type> * previousNode);
    
};

//constructor
template<class Type>
DoubleNode<Type> :: DoubleNode(Type data) : Node<Type>()
{
    
}
template<class Type>
DoubleNode<Type> :: DoubleNode(Type data, DoubleNode<Type> * nextNode, DoubleNode<Type> * previousNode) : Node<Type>(data)
{
    this->nextNode = nextNode;
    this->previousNode = previousNode;
}
//getters
template<class Type>
DoubleNode<Type> * DoubleNode<Type> :: getNextNode()
{
    return this->nextNode;
}
template<class Type>
DoubleNode<Type> * DoubleNode<Type> :: getPrevNode()
{
    return this->previousNode;
}
//setters
template<class Type>
void DoubleNode<Type> ::  setNextNode(DoubleNode<Type> * nextNode)
{
    this->nextNode = nextNode;
}
template<class Type>
void DoubleNode<Type>::  setPrevNode(DoubleNode<Type> * previousNode)
{
    this->previousNode = previousNode;
}





#endif /* DoubleNode_hpp */
