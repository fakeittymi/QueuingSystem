#pragma once
#include "pch.h"
#include <vector>


using namespace std;

class StatisticManager
{
	public:
		StatisticManager();

		void CalculateStatistic();

		float avSoldNews;
		float avUnsoldNews;
		float avDebit;
		float avCredit;
		float avUntreated;
	
		///<summary>
		///Modeling information instance
		///</summary>
		struct ModelingInfo
		{
			///<summary>
			///Daily profit
			///</summary>
			int debit;

			///<summary>
			///Daily payment for unsold newspapers
			///</summary>
			int credit;

			///<summary>
			///Daily sold newspapers
			///</summary>
			int soldNewspapers;

			///<summary>
			///Daily unsold newspapers
			///</summary>
			int unsoldNewspapers;

			///<summary>
			///Daily untreated requests
			///</summary>
			int untreated;
		};

		///<summary>
		///Array of modeling information
		///</summary>
		vector<ModelingInfo> modelingInfoVec;
};

