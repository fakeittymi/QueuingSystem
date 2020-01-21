#include "pch.h"
#include "Generator.h"
#include <chrono>
#include <random>
#include <math.h>

Generator::Generator() {};

Generator::Generator(int& newCommon){

    commonDayRequests = newCommon; 
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

    int seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine engine(seed);
    std::normal_distribution<double> comDistribution((double)commonDayRequests);
    std::normal_distribution<double> firstTDistribution((double)50);
    std::normal_distribution<double> secondTDistribution((double)100);

    int commonRequests = (int)comDistribution(engine);
    int specialDayRequests = 0;

    switch (GetDayType())
    {
    case 0:
        specialDayRequests = 0;
        break;
    case 1:
        specialDayRequests = (int)firstTDistribution(engine);
        break;
    case 2:
        specialDayRequests = (int)secondTDistribution(engine);
        break;
    }

    return commonRequests + specialDayRequests;
}




