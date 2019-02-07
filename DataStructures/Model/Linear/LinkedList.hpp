//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 2/7/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include "List.hpp"
using namespace std;

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
private:
public:

};

#endif /* LinkedList_hpp */
