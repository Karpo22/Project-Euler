//
//  Sorting.hpp
//  Problem 22
//
//  Created by Alex Karpowich on 10/25/16.
//  Copyright © 2016 Alex Karpowich. All rights reserved.
//

#ifndef Sorting_hpp
#define Sorting_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class Sorting
{
    public:
        void import();
        void store();
        void score();
        int alphabeticalScore(string inName);
    
    private:
        string inName;
        vector<string> names;
        vector<double> scores;
};

#endif /* Sorting_hpp */
