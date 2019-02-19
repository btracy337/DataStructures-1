//
//  LinearTester.cpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 2/13/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#include "LinearTester.hpp"
#include "../Resources/CrimeData.hpp"
#include "../Controller/FileController.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimerTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController:: readCrimeDataToVector("/Users/gram2068/Documents/C++ code/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimerTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/gram2068/Documents/C++ code/DataStructures/DataStructures/Resources/crime.csv");
    crimerTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimerTimerOOP.displayInformation();
    
    cout << "a difference of: " << crimerTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
}
