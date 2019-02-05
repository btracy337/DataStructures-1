//
//  LinearNode.h
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 1/30/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#ifndef LinearNode_hpp
#define LinearNode_hpp
#include <iostream>

template <class Type>
class LinearNode : public Node<Type>
{
private:
    LinearNode<Type> * next;
public:
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    LinearNode<Type> * getNext();
    void setNext(LinearNode<Type> * next);
};

//implementation
template <class Type>
LinearNode<Type> :: LinearNode() : Node()
{
    
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}

template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}

template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNext()
{
    return this->next;
}

template <class Type>
void LinearNode<Type> :: setNext(LinearNode<Type> * next)
{
    this->next = next;
}



#endif /* LinearNode_h */