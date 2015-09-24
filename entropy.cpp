//
//  entropy.cpp
//  M2EE
//
//  Created by Afnan Enayet on 9/22/15.
//  Copyright © 2015 Afnan Enayet. All rights reserved.
//

#include "entropy.hpp"

using namespace std;
unsigned int getSeed(std::string passwordString) {
    vector < bitset<16> > binaryPassword;
    auto shiftFactor = passwordString.length();
    unsigned int seed = 0;
    
    //converting password string to bitset
    for (auto character : passwordString) {
        binaryPassword.push_back(bitset<16>(character));
    }
    
    for (auto bitArray : binaryPassword) {
        bitArray.flip(shiftFactor);
        if (shiftFactor < 16) {
            bitArray <<= 16 % shiftFactor;
        }
        
        else {
            bitArray <<= shiftFactor % 16;
        }
        
        //cout << bitArray << "\n";
    }
    
    for (auto i = 0; i < binaryPassword.size(); i++) {
        seed += binaryPassword.at(i).to_ulong() * pow(10, i);
    }

    
    
    return seed; //TODO: remove after code has been added
}