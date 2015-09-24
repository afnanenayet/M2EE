//
//  main.cpp
//  M2EE
//
//  Created by Afnan Enayet on 9/22/15.
//  Copyright © 2015 Afnan Enayet. All rights reserved.
//

#include <iostream>
#include "encoder.hpp"
#include "entropy.hpp" //DEBUG

#define newline cout << '\n';

using namespace std;

int main() {
    // insert code here...
    string userInput;
    string userPassword;
    cout << "Type in a password";
    newline
    getline(cin, userPassword);
   /* newline
    cout << "Type in the string to be decoded";
    newline
    getline(cin, userInput);*/
    newline
    //encodeString(userPassword, userInput);
    auto debugVar = getSeed(userPassword);
    cout << "\nSeed: " << debugVar;
    return 0;
}
