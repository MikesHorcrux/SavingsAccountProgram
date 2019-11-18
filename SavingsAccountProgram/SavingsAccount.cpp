//
//  SavingsAccount.cpp
//  SavingsAccountProgram
//
//  Created by Mike  Van Amburg on 11/17/19.
//  Copyright © 2019 Mike Van Amburg. All rights reserved.
//

#include <iostream>
#include "SavingsAccount.hpp"

// constructor
SavingsAccount::SavingsAccount(int accountBalance)
{
    savingsBalance = accountBalance;
}


//static annualInterestRate to store the annual interest rate for each of the savers
double SavingsAccount::annualInterestRate = 0;


// calculateMonthlyInterest calculates the monthly interest by multiplying the savingsBalance by annualInterestRate then divided by 12 and then adds this interest to savingsBalance.
void SavingsAccount::calculateMonthlyInterest()
{
    savingsBalance += ((savingsBalance * annualInterestRate) / 12);
}
//modifyIntererestRate sets annualInterestRate to a new value.
void SavingsAccount::modifyIntererestRate(double intrestAmount)
{
    annualInterestRate = intrestAmount;
}
