#pragma once
#include "pch.h"
#include "Generator.h"
#include "StatisticManager.h"

class Processor: Generator, StatisticManager
{
	public:
		Processor(StatisticManager statisticManager, Generator generator, int newWorkDayCout);
		///<summary>
		///Modeling starting
		///</summary>
		void Start();

		///<summary>
		///Method to get modeling information
		///</summary>
		vector<ModelingInfo> GetModelingInfo();

		///<summary>
		///Get average amount of bales
		///</summary>
		float GetAverageBales(vector<StatisticManager::ModelingInfo> _modelInfo);


	private:
		///<summary>
		///Calculating optimal amount of bales and sales profit
		///</summary>
		void ProfitCalculation(int _requestAmount);

		///<summary>
		///Multiplier of the amount of request count
		///</summary>
		int workDayCount;

		///<summary>
		///Modeling data instance
		///</summary>
		ModelingInfo _modelingInfo;

		///<summary>
		///Statistic Manager instance
		///</summary>
		StatisticManager _statisticManager;

		///<summary>
		///Generator instance
		///</summary>
		Generator _generator;


};

