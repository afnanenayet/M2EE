//
//  encoder.cpp
//  M2EE
//
//  Created by Afnan Enayet on 9/22/15.
//  Copyright © 2015 Afnan Enayet. All rights reserved.
//

#include "encoder.hpp"

using namespace std;

string encodeString(string password, string input) {
    vector<bitset<256>> binarySet;
    for(auto character : input) {
        cout << character << "\n";
        binarySet.push_back(bitset<256>(character));
        cout << bitset<256>(character) << "\n";
    }
    return "CHANGEME";
}