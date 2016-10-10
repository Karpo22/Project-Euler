//
//  main.cpp
//  Problem 5
//
//  Created by Alex Karpowich on 10/10/16.
//  Copyright © 2016 Alex Karpowich. All rights reserved.
//

#include <iostream>
#include <list>

int main(int argc, const char * argv[]) {
    int testNumber = 2520;
    int divisor = 19;
    
    while(divisor != 1){
        if(testNumber%divisor != 0){
            divisor = 19;
            testNumber+=20;
        }
        else{
            divisor--;
        }
    }
    std::cout << testNumber;
}
