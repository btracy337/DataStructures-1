//
//  LinearTester.cpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 2/13/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/gram2068/Documents/C++ code/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/gram2068/Documents/C++ code/DataStructures/DataStructures/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerSTL.getTimeInMicroseconds() - crimeTimerOOP.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicSTL.startTimer();
    vector<Music> music = FileController :: musicDataToVector("/Users/gram2068/Documents/C++ code/DataStructures/DataStructures/Resources/crime.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> moreMusic = FileController :: musicDataToList("/Users/gram2068/Documents/C++ code/DataStructures/DataStructures/Resources/crime.csv");
    musicOOP.stopTimer();
    
    musicSTL.displayInformation();
    musicOOP.displayInformation();
    cout << "A difference of: " << musicSTL.getTimeInMicroseconds() - musicOOP.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
}

