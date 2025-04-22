/**
 * @file Officer.h
 * @author Sam Toney
 * @date 2025-04-22
 * @brief Header file for Officer program
 * 
 * Holds an Officer class for use in the Officer program
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * Officer class for holding related data
 *
 * @class Officer Officer.h "Doxygen/Officer.h"
 * @brief Holds members and methods for Officer program
 *
 */
class Officer : public Employee {
 private:
  double evilness;
 public:
  

/**
 * Prints employee information
 *
 * @pre 
 * @return void 
 * @post Information has been properly printed.
 * 
 */
  void print();
  

/**
 * Calculates the amount to be paid to an officer
 *
 * @pre 
 * @return double Number of dollars owed to officer
 * @post Amount to be paid has been properly calculated
 * 
 */
  double calculatePay();
  

/**
 * Initializes officer values
 *
 * @pre 
 * @post values have been properly initialized
 * 
 */
  Officer();
  

/**
 * Updates employee information with the specified data
 *
 * @param int ID Officer ID
 * @param int years Number of years officer has worked
 * @param double hourlyRate Hourly rate of Officer
 * @param float hoursWorked Number of hours worked by officer
 * @param double evilness Evilness of the officer
 * @pre 
 * @post Officer information has been properly updated
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
