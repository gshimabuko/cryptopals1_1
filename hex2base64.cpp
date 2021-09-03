#include <iostream>
#include <vector>

std::vector<unsigned char> hex2bin(std::vector<unsigned char> hexString)
{
    std::string binNumber;
    std::vector<unsigned char> binString;
    for(long unsigned int i = 0; i < hexString.size(); i++)
    {
        switch(hexString[i])
        {
            case '0':
                binNumber = "0000";
                break;
            case '1':
                binNumber = "0001";
                break;
            case '2':
                binNumber = "0010";
                break;
            case '3':
                binNumber = "0011";
                break;
            case '4':
                binNumber = "0100";
                break;
            case '5':
                binNumber = "0101";
                break;
            case '6':
                binNumber = "0110";
                break;
            case '7':
                binNumber = "0111";
                break;
            case '8':
                binNumber = "1000";
                break;
            case '9':
                binNumber = "1001";
                break;
            case 'a':
                binNumber = "1010";
                break;
            case 'b':
                binNumber = "1011";
                break;
            case 'c':
                binNumber = "1100";
                break;
            case 'd':
                binNumber = "1101";
                break;
            case 'e':
                binNumber = "1110";
                break;
            case 'f':
                binNumber = "1111";
                break;
        }
        for (int j = 0; j < 4 ; j++)
        {
            binString.push_back(binNumber[j]);
            //std::cout << binNumber[j];
        }
        //std::cout << " ";
    }
    //std::cout << "\n\n";
    return(binString);
}
std::vector<unsigned char> bin2base64(std::vector<unsigned char> binString)
{
    int decNumber;
    std::string base64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    std::vector<unsigned char> base64String;
    for (long unsigned int i = 0; i < binString.size(); i = i + 6)
    {
        decNumber = (binString[i+5] - '0') + (binString[i+4] - '0') * 2 + (binString[i+3] - '0') * 4 + (binString[i+2] - '0') * 8 + (binString[i+1] - '0') * 16 + (binString[i] - '0') * 32;
        //std::cout << binString[i] << binString[i+1] << binString[i+2] << binString[i+3] << binString[i+4] << binString[i+5] << "(" << decNumber << ")"<< " ";
        base64String.push_back(base64[decNumber]);
    }
    //std::cout << "\n\n";
    //std::cout << "\n\n";
    
    return base64String;
    
}

