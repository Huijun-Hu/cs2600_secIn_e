#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "employee.h"

int main(void){

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryoFind);


    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;

    // example of NOT FOUND and FOUND for number
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);
    if (matchPtr != NULL)
        printf("\nEmployee ID 1045 is in the record %ld\n", matchPtr - EmployeeTable);
    else
        printf("\nEmployee ID 1045 is NOT FOUND in the record\n");
    
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 10011);
    if (matchPtr != NULL)
        printf("Employee ID 10011 is in the record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID 10011 is NOT FOUND in the record\n");

    // example of NOT FOUND and FOUND for name
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tracy Hu");
    if (matchPtr != NULL)
        printf("\nEmployee name Tracy Hu is in the record %ld\n", matchPtr - EmployeeTable);
    else
        printf("\nEmployee name Tracy Hu is NOT FOUND in the record\n");

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Dorris Perl");
    if (matchPtr != NULL)
        printf("Employee name Dorris Perl is in the record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee name Dorris Perl is NOT FOUND in the record\n");

    // example of NOT FOUND and FOUND for phone
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "123-456-7890");
    if (matchPtr != NULL)
        printf("\nEmployee phone number 123-456-7890 is in the record %ld\n", matchPtr - EmployeeTable);
    else
        printf("\nEmployee phone number 123-456-7890 is NOT FOUND in the record\n");

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-1235");
    if (matchPtr != NULL)
        printf("Employee phone number 909-555-1235 is in the record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee phone number 909-555-1235 is NOT FOUND in the record\n");

    // example of NOT FOUND and FOUND for salary
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 0.10);
    if (matchPtr != NULL)
        printf("\nEmployee salary 0.10 is in the record %ld\n", matchPtr - EmployeeTable);
    else
        printf("\nEmployee salary 0.10 is NOT FOUND in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.50);
    if (matchPtr != NULL)
        printf("Employee salary 4.50 is in the record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee salary 4.50 is NOT FOUND in the record\n");

}