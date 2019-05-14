//
//  BinaryTreeTester.cpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 4/12/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: test()
{
    testNode = BinaryTreeNode<int>(19);
}

void BinaryTreeTester:: doTreeStuff()
{
    
    testSearch.insert(7);
    testSearch.insert(1);
    testSearch.insert(23);
    testSearch.insert(231);
    
    testSearch.getHeight();
    testSearch.isComplete();
    testSearch.isBalanced();
    
    testSearch.inOrderTraversal();
    testSearch.preOrderTraversal();
    testSearch.postOrderTraversal();
}
