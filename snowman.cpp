#include <iostream>
#include <vector>
#include <stdexcept>
#include "snowman.hpp"

using namespace std;


namespace ariel{

	string snowman(int snowmanShape){
        string outputOfsnowman;
        string str = to_string(snowmanShape);
        if(str.size() != 8){
        throw invalid_argument{"Incorrect input: The input should be 8 digits in the range of 1-4\n"};
    } 
    for (int i = 0; i < str.size(); i++){
        if(str[i] < '1' || str[i] > '4'){
            throw invalid_argument{"Incorrect input: The input should be 8 digits in the range of 1-4\n"};
        }
    }

        outputOfsnowman = "To be continued\n";
       
        return outputOfsnowman;
    }
};