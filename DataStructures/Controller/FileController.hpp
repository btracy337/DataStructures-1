//
//  FileController.hpp
//  DataStructures
//
//  Created by Guillermo Ramos  on 2/13/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include <iostream>
#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"
#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"

#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string fileName);
    LinkedList<CrimeData> readDataToList(string fileName);
    
    static vector<Music> musicDataToVector(string fileName);
    
    static Array<Music> musicDataToArrat(string fileName);
    static LinkedList<Music> musicDataToList(string fileName);

};

#endif /* FileController_hpp */
