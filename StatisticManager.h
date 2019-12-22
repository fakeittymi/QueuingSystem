#pragma once
#include <vector>

using namespace std;
class StatisticManager
{
	public:
		StatisticManager();
		struct ModelingInfo
		{
			int debit;
			int credit;
			int unsoldNewspapers;
			int bales;
		};

		vector<ModelingInfo> modelingInfoVec;



};

