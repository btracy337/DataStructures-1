//
//  GraphTester.hpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 3/18/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#ifndef GraphTester_hpp
#define GraphTester_hpp

#include <iostream>
#include "../Model/Non-Linear/Graph.hpp"

using namespace std;

class GraphTester
{
private:
    Graph<string> puzzle;
    void setup();
    void compareTraversals();
    void findCheapestTraversal();
public:
    void testGraphs();
}

#endif /* GraphTester_hpp */
