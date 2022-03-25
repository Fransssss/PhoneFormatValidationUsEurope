// Title:  Phone Number Format Validation
// Purpose: Practice validate different phone number format US and Europe
// Class: Enjoy the process
// Author: Fransiskus Agapa

#include <iostream>
#include <string>
#include "IsValidPhoneNumber.h"
#include "IsValidPhoneNumberEurope.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    bool validPhoneNmm;
    int input = 0;

    cout << " What type of format of phone number you want to validate (Input 1/2)\n";
    cout << " 1.USA\n 2.Europe " << endl;
    cin >> input;

    if(input == 1)                                                // assume user wants to put us phone number
    {
        string usPhoneNum ;
        cout << "Enter a US phone number to validate in these format [ 1-xxx-xxx-xxxx ] : " << endl;
        cin >> usPhoneNum;
        validPhoneNmm = isValidPhoneNumber(usPhoneNum);

        if (!validPhoneNmm) {
            cout << "[ " << usPhoneNum << " ] is not a valid format of US number " << endl;
        } else {
            cout << "[ " << usPhoneNum << " ] is a valid format of US number " << endl;
        }
    }

    if(input == 2)                                                // assume user wants to put europe phone number
    {
        string euPhoneNum;
        cout << "Enter a Europe phone number to validate in these format [ 4-xxx-xxx-xxxx ] : " << endl;
        cin >> euPhoneNum;
        validPhoneNmm = isValidEuPhoneNum(euPhoneNum);

        if(!validPhoneNmm)
        {
            cout <<"[ " <<  euPhoneNum << " ] is not a valid format of  Europe number" << endl;
        } else
        {
            cout << "[ "  << euPhoneNum << " ] is a valid format or Europe number" << endl;
        }

    }

    if(input != 1 && input != 2)                                 // unexpected input
    {
        cout << " Invalid input " << endl;
        return -1;
    }
    return 0;
}
