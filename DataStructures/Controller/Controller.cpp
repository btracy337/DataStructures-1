//
//  Controller.cpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 1/28/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#include "Controller.hpp"

void Controller:: start()
{
    cout << "welcome to data structures app" << endl;
    testGraph();
//    usingNodes();
//    testLinear();
}

void Controller:: usingNodes()
{
    Node<int> mine(5);
    Node<string> wordHolder("words can be stored too");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
}

void Controller:: testGraph()
{
    GraphTester testIt;
    testIt.testGraphs();
}
void Controller:: testLinear()
{
    LinearTester testIt;
    testIt.testVsSTL();
}
