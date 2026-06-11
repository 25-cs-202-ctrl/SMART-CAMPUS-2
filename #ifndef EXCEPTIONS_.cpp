#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>
#include <exception>

using namespace std;

// 1. Course Capacity Exception
class CapacityExceededException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "ERROR: Course Capacity Exceeded!";
    }
};

// 2. Book Availability Exception
class BookNotAvailableException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "ERROR: Book Is Out Of Stock / Not Available!";
    }
};

// 3. Fee Defaulter Exception
class FeeNotPaidException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "ERROR: Action Denied! Outstanding Fees Not Paid.";
    }
};

// 4. Hostel Room Exception
class RoomUnavailableException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "ERROR: Hostel Room Is Fully Occupied!";
    }
};

// 5. User Input / Format Validation Exception
class InvalidDataException : public exception
{
public:
    const char* what() const noexcept override
    {
        return "ERROR: Invalid Input Or Data Format Entered!";
    }
};

#endif