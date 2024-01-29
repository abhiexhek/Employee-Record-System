#include <iostream>
#include "Employee.h"

using namespace std;
namespace Records
{
    Employee::Employee(const std::string& firstName,
                        const std::string& lastName)
                        :mfirstName(firstName), mlastName(lastName)
    {

    }
    void Employee::promote(int raiseAmount)
    {
        setSalary(getSalary() + raiseAmount);
    }
    void Employee::demote(int demeritAmount)
    {
        setSalary(getSalary() - demeritAmount);

    }
    void Employee::hire()
    {
        mHired = true;
    }
    void Employee::fire()
    {
        mHired = false;
    }
    void Employee::display() const
    {
        cout<<"Employee: "<<getLastName()<<", "<<getFirstName() <<endl;
        cout<<"-----------------------"<<endl;
        cout<<(isHired() ? "Current Employee": "Former Employee")<<endl;
        cout<<"Salary: $"<<getSalary()<<endl;
        cout<<endl;
    }
    void Employee::setFirstName(const string& firstName)
    {
        mfirstName = firstName;
    }
    const string& Employee::getFirstName() const
    {
        return mfirstName;
    }

    void Employee::setLastName(const std::string &lastName) 
    {
        mlastName = lastName;
    }

    const std::string &Employee::getLastName() const 
    {
        return mlastName;
    }

    void Employee::setEmployeeNumber(int employeenumber)
    {
        mEmployeeNumber = employeenumber;
    }

    // Only declare the function once, with a return type of int const
    int Employee::getEmployeeNumber() const
    {
        return mEmployeeNumber;
    }

    void Employee::setSalary(int newSalary)
    {
        mSalary = newSalary;
    }

    int Employee::getSalary() const 
    { 
        return mSalary; 
    }

    bool Employee::isHired() const
    {
        return mHired;
    }

}
