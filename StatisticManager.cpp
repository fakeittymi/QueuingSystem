#include "pch.h"
#include "StatisticManager.h"
#include <math.h>

StatisticManager::StatisticManager() {

	avSoldNews = 0;
	avUnsoldNews = 0;
	avDebit = 0;
	avCredit = 0;
	avUntreated = 0;
}

void StatisticManager::CalculateStatistic() {

	for (int i = 0; i < modelingInfoVec.size(); i++) {

		avSoldNews += modelingInfoVec[i].soldNewspapers;
		avUnsoldNews += modelingInfoVec[i].unsoldNewspapers;
		avDebit += modelingInfoVec[i].debit;
		avCredit += modelingInfoVec[i].credit;
		avUntreated += modelingInfoVec[i].untreated;
	}

	avSoldNews /= modelingInfoVec.size();
	avUnsoldNews /= modelingInfoVec.size();
	avDebit /= modelingInfoVec.size();
	avCredit /= modelingInfoVec.size();
	avUntreated /= modelingInfoVec.size();
}