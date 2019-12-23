#include "pch.h"
#include "Processor.h"
#include "StatisticManager.h"
#include <vector>

using namespace std;

Processor::Processor(StatisticManager statisticManager, Generator generator, int newWorkDayCount) {
	_statisticManager = statisticManager;
	_generator = generator;

	if (newWorkDayCount > 0) {
		workDayCount = newWorkDayCount;
	}
	else {
		workDayCount = 1;
	}

	_modelingInfo.bales = 0;
	_modelingInfo.credit = 0;
	_modelingInfo.debit = 0;
	_modelingInfo.unsoldNewspapers = 0;
	_modelingInfo.soldNewspapers = 0;
	
}

void Processor::Start() {

	int requestAmount = 0;

	for (int i = 0; i < workDayCount; i++) {
		
		requestAmount = _generator.GenerateRequests();
		ProfitCalculation(requestAmount);
		_statisticManager.modelingInfoVec.push_back(_modelingInfo);
	}
	
}

void Processor::ProfitCalculation(int _requestAmount) {

	if (_requestAmount%25 == 0) {
		_modelingInfo.bales = _requestAmount / 25;
	}
	else {
		_modelingInfo.bales = _requestAmount / 25 + 1;
	}

	_modelingInfo.unsoldNewspapers = _modelingInfo.bales * 25 - _requestAmount;
	_modelingInfo.credit = _modelingInfo.unsoldNewspapers * 4;
	_modelingInfo.debit = _requestAmount * 3 - _modelingInfo.credit;
	_modelingInfo.soldNewspapers = _requestAmount;

	if ((_modelingInfo.debit) < (_modelingInfo.bales - 1) * 75) {
		_modelingInfo.bales--;
		_modelingInfo.unsoldNewspapers = 0;
		_modelingInfo.credit = 0;
		_modelingInfo.debit = _modelingInfo.bales * 75;
		_modelingInfo.soldNewspapers = _modelingInfo.bales * 25;
	}
}

vector<StatisticManager::ModelingInfo> Processor::GetModelingInfo() {

	return _statisticManager.modelingInfoVec;

}
		
float Processor::GetAverageBales(vector<StatisticManager::ModelingInfo> _modelInfo) {

	float tmp = 0;

	for (int i = 0; i < workDayCount; i++) {

		tmp += _modelInfo[i].bales;
	}

	return tmp / workDayCount;
}
