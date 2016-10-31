//
//  Sorting.cpp
//  Problem 22
//
//  Created by Alex Karpowich on 10/25/16.
//  Copyright © 2016 Alex Karpowich. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Sorting.hpp"

using namespace std;

void Sorting::import(){
    ifstream myFile("/Users/alex/Desktop/Education Stuff/Project-Euler/Problem 22/p022_names.txt");
    
    // read the file in and cout if not done properly
    if (!myFile){
        cout << "File not Read"<< endl;
        exit( 1 );
    }
    else{
        while(myFile)
        {
            string name;
            stringstream linestream(name);
            getline(myFile, inName);
        }
    }
    store();
}

void Sorting::store(){
    
    // iterate through .csv string and split into names
    char delimiter = ',';
    size_t pos = 0;
    while((pos = inName.find(delimiter)) != string::npos){
        string separated = inName.substr(0, pos);
        
        separated.erase(remove(separated.begin(), separated.end(), '"'), separated.end());
        names.push_back(separated);
        
        cout << separated << endl;
        
        // erase the comma and following quote before continuing to next break point
        inName.erase(0, pos +2);
    }
    
    // Quick fix of including final name with no following delimiter
    names.push_back("ALONSO");
    sort(names.begin(), names.end());
    score();
}

void Sorting::score(){
    int i = 0;
    
    // iterate through sorted names and get their score
    for(vector<string>::const_iterator it = names.begin(); it != names.end(); it++){
        int alphabetical = alphabeticalScore(names[i]);
        scores.push_back((alphabetical)*(i+1));
        i++;
    }
    
    int total = 0;
    for(int i = 0; i < scores.size(); i++){
        total += scores[i];
    }
    
    cout << names.size() << endl;
    cout << total << endl;
}

int Sorting::alphabeticalScore(string inName){
    int totalScore = 0;
    vector<char> letters(inName.begin(), inName.end());
    for(int i = 0; i < letters.size(); i++){
        if (letters[i] == 'A'){
            totalScore += 1;
        }
        else if(letters[i] == 'B'){
            totalScore += 2;
        }
        else if(letters[i] == 'C'){
            totalScore += 3;
        }
        else if(letters[i] == 'D'){
            totalScore += 4;
        }
        else if(letters[i] == 'E'){
            totalScore += 5;
        }
        else if(letters[i] == 'F'){
            totalScore += 6;
        }
        else if(letters[i] == 'G'){
            totalScore += 7;
        }
        else if(letters[i] == 'H'){
            totalScore += 8;
        }
        else if(letters[i] == 'I'){
            totalScore += 9;
        }
        else if(letters[i] == 'J'){
            totalScore += 10;
        }
        else if(letters[i] == 'K'){
            totalScore += 11;
        }
        else if(letters[i] == 'L'){
            totalScore += 12;
        }
        else if(letters[i] == 'M'){
            totalScore += 13;
        }
        else if(letters[i] == 'N'){
            totalScore += 14;
        }
        else if(letters[i] == 'O'){
            totalScore += 15;
        }
        else if(letters[i] == 'P'){
            totalScore += 16;
        }
        else if(letters[i] == 'Q'){
            totalScore += 17;
        }
        else if(letters[i] == 'R'){
            totalScore += 18;
        }
        else if(letters[i] == 'S'){
            totalScore += 19;
        }
        else if(letters[i] == 'T'){
            totalScore += 20;
        }
        else if(letters[i] == 'U'){
            totalScore += 21;
        }
        else if(letters[i] == 'V'){
            totalScore += 22;
        }
        else if(letters[i] == 'W'){
            totalScore += 23;
        }
        else if(letters[i] == 'X'){
            totalScore += 24;
        }
        else if(letters[i] == 'Y'){
            totalScore += 25;
        }
        else{
            totalScore += 26;
        }
    }
    return totalScore;
}
