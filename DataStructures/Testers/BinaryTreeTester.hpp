//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 4/12/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp
#include <iostream>

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "BinaryTreeTester.hpp"
#include "../Model/Non-Linear/BinarySearchTree.hpp"

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testSearch;
    void test();
};


#endif /* BinaryTreeTester_hpp */
