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
}

void BinaryTreeTester:: doTreeStuff()
{
    testInt.insert(7);
    testInt.insert(1);
    testInt.insert(23);
    testInt.insert(231);
    testInt.insert(2842939);
    testInt.insert(1223);
    testInt.insert(1);
    testInt.insert(1233);
    
    testInt.getHeight();
    testInt.isComplete();
    testInt.isBalanced();
    
    cout << "IN ORDER INT" << endl;
    testInt.inOrderTraversal();
    cout << "PRE ORDER INT" << endl;
    testInt.preOrderTraversal();
    cout << "POST ORDER INT" << endl;
    testInt.postOrderTraversal();
    
    
    testString.insert("Bill Gates");
    testString.insert("Steve Jobs");
    testString.insert("Alan Turing");
    testString.insert("Grace Hopper");
    testString.insert("Ada Lovelace");
    
    testString.getHeight();
    testString.isComplete();
    testString.isBalanced();
    
    cout << "IN ORDER STRING" << endl;
    testString.inOrderTraversal();
    cout << "PRE ORDER STRING" << endl;
    testString.preOrderTraversal();
    cout << "POST ORDER STRING" << endl;
    testString.postOrderTraversal();
    
}
