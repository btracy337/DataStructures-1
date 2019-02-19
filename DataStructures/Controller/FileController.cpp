//
//  FileController.cpp
//  DataStructures
//
//  Created by Guillermo Ramos  on 2/13/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string fileName)
{
    std :: vector <CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    //if the file exists at the path
    if(dataFile.is_open())
    {
        //keep reading until you are at the end of the file.
        while (!dataFile.eof())
        {
            //grab each line form the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\r');
            //exclude header row
            if  (rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}

vector<Music> FileController :: musicDataToVector(string fileName)
{
    std :: vector <Music> musicVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    //if the file exists at the path
    if(dataFile.is_open())
    {
        //keep reading until you are at the end of the file.
        while (!dataFile.eof())
        {
            //grab each line form the CSV separated by the carriage return character
            getline(dataFile, currentCSVLine, '\r');
            //exclude header row
            if  (rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return musicVector;
}

LinkedList<CrimeData> FileController:: readDataToList(string fileName)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            
            if(rowCount != 0)
            {
                
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
                
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return crimes;
}

LinkedList<Music> FileController:: musicDataToList(string fileName)
{
    LinkedList<Music> music;
    
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(fileName);
    
    if(dataFile.is_open())
    {
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            
            if(rowCount != 0)
            {
                
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    music.add(row);
                }
                
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return music;
}
