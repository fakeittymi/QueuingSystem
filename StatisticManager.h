#pragma once
#include "pch.h"
#include <vector>

using namespace std;
class StatisticManager
{
	public:
		StatisticManager();

		///<summary>
		///Modeling information instance
		///</summary>
		struct ModelingInfo
		{
			int debit;
			int credit;
			int soldNewspapers;
			int unsoldNewspapers;
			int bales;
		};

		///<summary>
		///Array of modeling information
		///</summary>
		vector<ModelingInfo> modelingInfoVec;
};

