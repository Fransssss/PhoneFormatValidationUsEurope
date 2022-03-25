// Purpose: Implement function to validate US phone number
// Class: Enjoy the process
// Author: Fransiskus Agapa

#include "IsValidPhoneNumber.h"
#include <cctype>

bool isValidPhoneNumber(const string& phoneNum)
{
    string phoneUsFormat = "1-###-###-####";                                // default length and format

    if(phoneNum.length() != phoneUsFormat.length())                         // if the length of given phone number not equal default length then false
    {
        return false;
    }

    for(size_t i = 0; i < phoneUsFormat.length(); ++i)
    {
        if(phoneNum[i] != '-')
        {
            if(!isdigit(phoneNum[i]))                                  // after check 'I' not a dash then check if it's a digit
            {
                return false;
            }
        } else
        {
            if(phoneNum[i] != '-')                                        // if 'I' not a digit nor dash then false
            {
                return false;
            }
        }
    }

    if(phoneNum[0] != '1')                                               // if phone number not start with 1 then false
    {
        return false;
    }

    return true;
}