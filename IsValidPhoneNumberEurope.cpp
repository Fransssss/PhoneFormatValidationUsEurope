// Purpose: Implement function to validate Europe phone number
// Class: Enjoy the process
// Author: Fransiskus Agapa

#include "IsValidPhoneNumberEurope.h"
#include <cctype>

bool isValidEuPhoneNum(const string& euPhoneNUm)
{
    string phoneEuFormat = "4-xxx-xxx-xxxx";                         // default length and format

    if(euPhoneNUm.length() != phoneEuFormat.length())                // the length of given phone number has to match the length od default eu number
    {
        return false;
    }

    for(size_t i = 0; i < phoneEuFormat.length(); ++i)
    {
        if(euPhoneNUm[i] !=  '-')
        {
            if(!isdigit(euPhoneNUm[i]))                           // if  'i' is not a dash then check it its a digit
            {
                return false;
            }
        } else
        {
            if(euPhoneNUm[i] != '-')                                // it 'i'  is not a digit nor a dash then return false
            {
                return false;
            }
        }
    }

    if(euPhoneNUm[0] != '4')                                           // europe phone number has to start with 4
    {
        return false;
    }

    return true;
}