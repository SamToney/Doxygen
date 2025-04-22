/**
 * @file Employee.h
 * @author Sam Toney
 * @date 2025-04-22
 * @brief Header file for Employee program
 * 
 * Holds an Employee class for use in the Employee program
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * Employee class for holding related data
 *
 * @class Employee Employee.h "Doxygen/Employee.h"
 * @brief Holds members and methods for Employee program
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;

public:
  

/**
 * Prints employee information
 *
 * @pre 
 * @return virtual 
 * @post Information has been properly printed.
 * 
 */
  virtual void print();
  

/**
 * Calculates the amount to be paid to an employee
 *
 * @pre 
 * @return virtual Number of dollars owed to employee
 * @post Amount to be paid has been properly calculated
 * 
 */
  virtual double calculatePay();
  

/**
 * Calculates bonus pay for employee anniversaries
 *
 * @pre 
 * @return void 
 * @post Bonus pay has been calculates properly.
 * 
 */
  void anniversary();
  

/**
 * Initializes employee values
 *
 * @pre 
 * @post values have been properly initialized
 * 
 */
  Employee();
  

/**
 * Updates employee information with the specified data
 *
 * @param int ID Employee ID
 * @param int years Number of years employee has worked
 * @param double hourlyRate Hourly rate of employee
 * @param float hoursWorked Number of hours worked by employee
 * @pre 
 * @post Employee information has been properly updated
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
