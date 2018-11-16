#include "ChainFxs.h"

int ChainFxs::Multiply(int a, int b) //Function to multiply a and b
{
    return a * b;
}


void ChainFxs::MultiplyAndPrintsBack(int a, int b) //Function to utilise Multiply()
{
    int result = Multiply(a, b);
    std::cout << "The result of " << a << " multiply " << b << " is: " << result << std::endl; //Prints back the result
}
