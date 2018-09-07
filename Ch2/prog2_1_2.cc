/*
* Mortgagae Calculator
* Version 1.0
* Makoa Santarini
*/

#include <iostream>
#include <math.h>

int main(){
	
  //get mortgage amount
  double mortgageAmount = 0;
  std::cout << "What is your mortgage amount (do not use commas)?" << std::endl;
  std::cin >> mortgageAmount;

  //get interest rate
  double annualInterestRate = 0;
  std::cout << "What is your annual interst rate?" << std::endl;
  std::cin >> annualInterestRate;

  //convert annual interest rate to monthly interest rate
  double monthlyInterestRate = 0;
  monthlyInterestRate = annualInterestRate/12;

  //get mortgage period years
  int mortgagePeriodYears = 0;
  std::cout << "What is duration of your mortgage in years?" << std::endl;
  std::cin >> mortgagePeriodYears;

  //convert mortgage period years to months
  double mortgagePeriodMonths;
  mortgagePeriodMonths = mortgagePeriodYears * 12;

  //calculate monthly payment
  double monthlyPayment = 0;
  double EAR = 0;
  EAR = pow(1+(monthlyInterestRate/100), mortgagePeriodMonths);
  monthlyPayment = mortgageAmount * (((monthlyInterestRate/100)*EAR)/((EAR)-1));

  //output total cost of mortgage and monthly payment
  std::cout << std::endl << "Your monthly interest payment: " << monthlyPayment << std::endl;
  std::cout << "Your total mortgage cost: " << monthlyPayment * mortgagePeriodMonths << std::endl;
}
