#include "pch.h"
#include "Processor.h"
#include <vector>

using namespace std;

Processor::Processor(StatisticManager& newStatisticManager, Generator& newGenerator, int& newWorkDayCount, int& newBaleCount) {

	statisticManager = newStatisticManager;
	generator = newGenerator;
	baleCount = newBaleCount;
	newspaperCount = baleCount * baleSize;
	workDayCount = newWorkDayCount;
	modelingInfo.credit = 0;
	modelingInfo.debit = 0;
	modelingInfo.unsoldNewspapers = 0;
	modelingInfo.soldNewspapers = 0;
	
}

void Processor::Start() {

	int requestAmount = 0;

	for (int i = 0; i < workDayCount; i++) {
		
		requestAmount = generator.GenerateRequests();
		modelingInfo = GetCurrentInfo(requestAmount);
		statisticManager.modelingInfoVec.push_back(modelingInfo);
	}
	
}

std::vector<StatisticManager::ModelingInfo> Processor::GetModelingInfo() {

	return statisticManager.modelingInfoVec;

}

StatisticManager::ModelingInfo Processor::GetCurrentInfo(int requestAmount) {

	ModelingInfo modelCurInfo;

	if (newspaperCount - requestAmount <= 0) {
		modelCurInfo.soldNewspapers = newspaperCount;
		modelCurInfo.unsoldNewspapers = 0;
		modelCurInfo.credit = 0;
		modelCurInfo.debit = modelCurInfo.soldNewspapers * newspaperProfit;
		modelCurInfo.untreated = requestAmount - newspaperCount;
	}
	else {
		modelCurInfo.soldNewspapers = requestAmount;
		modelCurInfo.unsoldNewspapers = newspaperCount - requestAmount;
		modelCurInfo.credit = modelCurInfo.unsoldNewspapers * newspaperCredit;
		modelCurInfo.debit = modelCurInfo.soldNewspapers * newspaperProfit - modelCurInfo.credit;
		modelCurInfo.untreated = 0;
	}

	return modelCurInfo;
}
