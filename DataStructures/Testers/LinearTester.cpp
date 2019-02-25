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
    
    cout << "CRIME STL " << endl;
    crimeTimerSTL.displayInformation();
    cout << "CRIME OOP" << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    musicSTL.startTimer();
    vector<Music> music = FileController :: musicDataToVector("/Users/gram2068/Documents/C++ code/DataStructures/DataStructures/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> moreMusic = FileController :: musicDataToList("/Users/gram2068/Documents/C++ code/DataStructures/DataStructures/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "MUSIC STL " << endl;
    musicSTL.displayInformation();
    cout << "MUSIC OOP " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerSTL.startTimer();
    crimes[randomIndex];
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "CRIME STL RANDOM RETRIEVAL" << endl;
    crimeTimerSTL.displayInformation();
    cout << "CRIME OOP RANDOM RETRIEVAL" << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    randomIndex = rand() % moreMusic.getSize();
    
    musicSTL.startTimer();
    music[randomIndex];
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    moreMusic.getFromIndex(randomIndex);
    musicOOP.stopTimer();
    
    cout << "MUSIC STL RANDOM RETRIEVAL" << endl;
    musicSTL.displayInformation();
    cout << "MUSIC OOP RANDOM RETRIEVAL" << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
}

void LinearTester:: testVsStack()
{
    vector<CrimeData> crime = FileController :: readCrimeDataToVector("/Users/gram2068/Documents/C++ code/DataStructures/DataStructures/Resources/crime.csv");
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/gram2068/Documents/C++ code/DataStructures/DataStructures/Resources/crime.csv");
    
    Stack<CrimeData> crimeStack;
    
    for(int index = 0; index < 10; index++)
    {
        crimeStack.push(crime[index]);
    }

    
}
