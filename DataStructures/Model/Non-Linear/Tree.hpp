//
//  Tree.hpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 4/12/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp
#include "../Nodes/BinaryTreeNode.hpp"

template <class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;
public:
    //informational methods
    virtual int getSize()
};


#endif /* Tree_hpp */
