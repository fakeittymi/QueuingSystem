#include "pch.h"
#include "Processor.h"
#include "StatisticManager.h"
#include "Form1.h"
#include <vector>

using namespace std;

Processor::Processor(StatisticManager $statisticManager) {
	auto _statisticManager = $statisticManager;
	
}

void Processor::Start() {
	int requestAmount = 0;
	ModelingInfo modelingInfo;
	for (int i = 0; i < workDayCount; i++) {
		
		requestAmount = GenerateRequests();
		ProfitCalculation(requestAmount);
		modelingInfo.bales = _bales;
		modelingInfo.credit = _credit;
		modelingInfo.debit = _credit;
		modelingInfo.unsoldNewspapers = _unsoldNewspapers;
		_statisticManager.modelingInfoVec.push_back(modelingInfo);

	}
	
}

void Processor::ProfitCalculation(int _requestAmount) {

	if (_requestAmount%25 == 0) {
		_bales = _requestAmount / 25;
	}
	else {
		_bales = _requestAmount / 25 + 1;
	}

	_unsoldNewspapers = _bales * 25 - _requestAmount;
	_credit = _unsoldNewspapers * 4;
	_debit = _requestAmount * 3;

	if ((_debit - _credit) < (_bales - 1) * 75) {
		_bales--;
		_unsoldNewspapers = 0;
		_credit = 0;
		_debit = _bales * 75;
	}
}
