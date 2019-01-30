//
//  Array.hpp
//  DataStructures
//
//  Created by Ramos aguirre, Guillermo on 1/30/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp
#include <iostream>
#include <assert.h>

using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;

public:
    //constructor
    Array<Type>(int size);
    
    //copy constructor
    Array<Type>(const Array<Type> & toCopy);
    //destructor
    ~Array<Type>();
    
    //operators
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    //methods
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
};

//Implementation

template <class Type>
Array<Type> :: Array<Type>(int size)
{
    assert(size > 0);
    this->size = size;
    
    internalArray = new Type[size];
}



#endif /* Array_h */
