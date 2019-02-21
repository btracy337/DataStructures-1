//
//  CircularList.hpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 2/21/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#ifndef CircularList_hpp
#define CircularList_hpp
#include "../Nodes/DoubleNode.hpp"

template<class Type>
class CircularList : DoubleNode<Type>
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    int size;
    
    DoubleNode<Type> * findNode(int index);
public:
    CircularList();
    ~CircularList();
    
    //List methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type remove(int index);
    void setAtIndex(int index, Type item);
    Type getFromIndex(int index);
    int getSize() const;
};
//constructor/destructor
template<class Type>
CircularList<Type> :: CircularList()
{
    front = nullptr;
    end = nullptr;
    this->size = 0;
}
template<class Type>
CircularList<Type> :: ~CircularList()
{
    DoubleNode<Type> * current = front;
    while(this->front != nullptr)
    {
        front = front->getNext()
        delete current;
        current =  front;
    }
    
}
//methods
template<class Type>
DoubleNode<Type> * CircularList<Type> :: findNode(int index)
{
    assert(index >= 0 && index < this->size);
    DoubleNode<Type> * nodeToFind;
    
    if(index < this->size / 2)
    {
        nodeToFind = this->front;
        for(int position = 0; position < index; position++)
        {
            nodeToFind = nodeToFind->getNext();
        }
    }
    else
    {
        nodeToFind = this->end;
        for(int position = this->size - 1; position > index; position--)
        {
            nodeToFind = nodeToFind->getPrevious();
        }
    }
    
    return nodeToFind;
    
}


template<class Type>
void CircularList<Type> :: add(Type item)
{
    DoubleNode<Type> * addedNode;
    if(this->size == 0)
    {
        addedNode = new DoubleNode<Type>(item);
        this->front = addedNode
    }
    else
    {
        addedNode = new DoubleNode<Type>(item, this->end, this->front);
        this->end->setNext(addedNode);
    }
    this->end = addedNode;
    this->size++;   
}
template<class Type>
void CircularList<Type> :: addAtIndex(int index, Type item)
{
    
}
template<class Type>
Type CircularList<Type> :: remove(int index)
{
    
}
template<class Type>
void CircularList<Type> :: setAtIndex(int index, Type item)
{
    
}
template<class Type>
Type CircularList<Type> :: getFromIndex(int index)
{
    
}
template<class Type>
int CircularList<Type> :: getSize() const
{
    
}





#endif /* CircularList_hpp */
