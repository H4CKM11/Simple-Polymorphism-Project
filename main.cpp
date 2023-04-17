#include <iostream>
#include "accounts.h"

int main()
{
    accounts* checkingPTR = new checkingAccount();
    accounts* savingPTR = new savingsAccount();
    accounts* trustPTR = new trustAccount();

    accounts* allAccountPTR [3] = {checkingPTR, savingPTR, trustPTR};

    for(int i = 0; i < 3; i++)
    {
        allAccountPTR[i]->checkBalance();
    }

    for(int i = 0; i < 3; i++)
    {
        delete allAccountPTR[i];
    }

    return 0;

}