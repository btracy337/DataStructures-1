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
#include “../Resources/CrimeData.hpp”
#include “../Resources/Music.hpp”
#include <string>
#include <fstream>
#include <vector
#include <sstream>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);

};

#endif /* FileController_hpp */
