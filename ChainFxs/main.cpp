#include <iostream>

#include "ChainFxs.h" //Chains of Functions
ChainFxs ChainFxs; //Instantiate an object to call the functions of ChainFxs.cpp, a must before calling class members


int main() //Main entry point of the application
{
    ChainFxs.MultiplyAndPrintsBack(7, 8); //A very shorterned way to call multiple functions
    ChainFxs.MultiplyAndPrintsBack(5, 2);
    ChainFxs.MultiplyAndPrintsBack(9, 6);
}
