#include "pch.h"
#include "Generator.h"
#include <random>

Generator::Generator() {};

Generator::Generator(int newWorkDayCount, int newCommon){
    if (newWorkDayCount > 0) {
        workDayCount = newWorkDayCount;
    }
    else {
        workDayCount = 1;
    }

    if (newCommon > 0) {
        commonDayRequests = newCommon;
    }
    else {
        commonDayRequests = 175;
    }
    
    specialDayRequests = 0;
}

int Generator::GetDayType() {
   
    int probability = rand() % 10;

    switch (probability)
    {
    case 0:
    case 1:
    case 2:
        return 0;
        break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
        return 1;
        break;
    case 8:
    case 9:
        return 2;
        break;
    default:
        return 0;
    }
}

int Generator::GenerateRequests() {

        switch (GetDayType())
        {
        case 0:
            specialDayRequests = 0;
            break;
        case 1:
            specialDayRequests = 50;
            break;
        case 2:
            specialDayRequests = 100;
            break;
        }

    return commonDayRequests + specialDayRequests;
}




