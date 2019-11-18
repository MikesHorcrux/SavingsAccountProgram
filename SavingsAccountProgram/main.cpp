//
//  main.cpp
//  SavingsAccountProgram
//
//  Created by Mike  Van Amburg on 11/17/19.
//  Copyright © 2019 Mike Van Amburg. All rights reserved.
//

#include <iostream>

//including SavingsAccount H file
#include "SavingsAccount.hpp"


int main(int argc, const char * argv[]) {
    puts("** SAVINGS ACCOUNT PROGRAM ** \n\n");
//    Init first and second saver
    SavingsAccount firstSaver(1000.00);
    SavingsAccount secondSaver(2000.00);
    
//    Sets the annualInterestRate to 2%.
    std::cout << "First Months intrest: \n" << std::endl;
    SavingsAccount::modifyIntererestRate(2);
//    calculate the monthly interest
    firstSaver.calculateMonthlyInterest();
    secondSaver.calculateMonthlyInterest();
//    print the new balances
    std::cout << "First Saver Savings Balance: $" << firstSaver.GetBalance() << std::endl;
    std::cout << "Second Saver Savings Balance: $" << secondSaver.GetBalance() << std::endl;
    std::cout << std::endl;
    
    //    Then set the annualInterestRate to 3%
    std::cout << "Next Months intrest: \n" << std::endl;
    SavingsAccount::modifyIntererestRate(3);
//    calculate the next month's interest
    firstSaver.calculateMonthlyInterest();
    secondSaver.calculateMonthlyInterest();
//    print the new balances
    std::cout << "First Saver Savings Balance: $" << firstSaver.GetBalance() << std::endl;
    std::cout << "Secomd Saver Savings Balance: $" << secondSaver.GetBalance() << std::endl;
    std::cout << std::endl;
    return 0;
}
