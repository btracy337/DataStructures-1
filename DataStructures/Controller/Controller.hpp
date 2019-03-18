//
//  Controller.hpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 1/28/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Testers/LinearTester.hpp"
#include "../Testers/GraphTester.hpp"
using namespace std;

class Controller
{
private:
    void usingNodes();
    void testLinear();
    void testGraph();
public:
    void start();
};

#endif /* Controller_hpp */
