/**
 * @file Supervisor.h
 * @author Sam Toney
 * @date 2025-04-22
 * @brief Header file for Supervisor program
 * 
 * Holds an Supervisor class for use in the Supervisor program
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * Supervisor class for holding related data
 *
 * @class Supervisor Supervisor.h "Doxygen/Supervisor.h"
 * @brief Holds members and methods for Supervisor program
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:
  

/**
 * Prints supervisor information
 *
 * @pre 
 * @return void 
 * @post Information has been properly printed.
 * 
 */
  void print();
  

/**
 * Calculates the amount to be paid to a supervisor
 *
 * @pre 
 * @return double Number of dollars owed to supervisor
 * @post Amount to be paid has been properly calculated
 * 
 */
  double calculatePay();
  

/**
 *  Initializes supervisor values
 *
 * @pre 
 * @post values have been properly initialized
 * 
 */
  Supervisor();
  

/**
 * Updates supervisor information with the specified data
 *
 * @param int ID Supervisor ID
 * @param int years Number of years supervisor has worked
 * @param double hourlyRate Hourly rate of Supervisor
 * @param float hoursWorked Number of hours worked by supervisor
 * @param int numSupervised Number of peopled managed by supervisor
 * @pre 
 * @post Supervisor information has been properly updated
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
