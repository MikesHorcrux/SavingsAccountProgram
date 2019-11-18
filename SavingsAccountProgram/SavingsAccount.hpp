//
//  SavingsAccount.hpp
//  SavingsAccountProgram
//
//  Created by Mike  Van Amburg on 11/17/19.
//  Copyright © 2019 Mike Van Amburg. All rights reserved.
//

#ifndef SavingsAccount_hpp
#define SavingsAccount_hpp

#include <stdio.h>

//add SavingsAccount class
class SavingsAccount{
    
    public:
        SavingsAccount(){}
        SavingsAccount(int accountBalance);
        ~SavingsAccount(){}
        
        //varibles
        static double annualInterestRate;
    
//    member functions
        static void modifyIntererestRate(double intrestAmount);
        void calculateMonthlyInterest();
        float GetBalance() const { return savingsBalance; }
    private:
        float savingsBalance;
};

#endif /* SavingsAccount_hpp */
