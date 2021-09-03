#include <iostream>
#include <vector>
#include "hex2base64.h"

int defaultTest()
{
    std::string origin = "49276d206b696c6c696e6720796f757220627261696e206c696b65206120706f69736f6e6f7573206d757368726f6f6d";
    std::string destin = "SSdtIGtpbGxpbmcgeW91ciBicmFpbiBsaWtlIGEgcG9pc29ub3VzIG11c2hyb29t";
    std::vector<unsigned char> hexString(origin.begin(), origin.end());
    std::vector<unsigned char> base64String;
    std::cout << origin << "\n";
    base64String = bin2base64(hex2bin(hexString));
    for (long unsigned int i = 0; i < base64String.size(); i++)
    {
        std::cout << base64String[i];
    }
    return(0);
}
int expectedOutputTest()
{
    std::string origin;
    std::string destin;
    std::vector<unsigned char> base64String;
    

    std::cout << "Please, enter the Input String in hex: \n";
    std::cin >> origin;
    std::cout << "Please, enter the expected output in base 64: \n";
    std::cin >> destin;
    
    std::vector<unsigned char> hexString(origin.begin(), origin.end());
    std::vector<unsigned char> expectedOutput(destin.begin(), destin.end());

    base64String = bin2base64(hex2bin(hexString));

    std::cout << "The output generated was: \n";
    for (long unsigned int i = 0; i < base64String.size(); i++)
    {
        std::cout << base64String[i];
    }
    std::cout << "\n";

    if (base64String == expectedOutput)
    {
        std::cout << "The output is correct.\n";
    }
    else
    {
        std::cout << "the output is incorrect.\n";
    }
    return(0);
}
int main(){
    defaultTest();
    //expectedOutputTest();
    return(0);
}
