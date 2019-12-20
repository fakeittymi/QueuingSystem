#include "pch.h"
#include "Generator.h"
#include <random>

Generator::Generator(int newCommon){
    
    commonDayRequests = newCommon;
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
    }
}

int Generator::GenerateRequests() {

    switch (GetDayType())
    {
        case 0:
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




