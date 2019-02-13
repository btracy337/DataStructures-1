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
    static vector<CrimeData> readCrimeDataToVector(string filename);
    LinkedList<CrimeData> readDataToList(string filename);
    
    static vector<Music> musicDataToVector(string filename);
    
    static Array<Music> musicDataToArrat(string filename);
    static LinkedList<Music> musicDataToList(string filename);

};

#endif /* FileController_hpp */
