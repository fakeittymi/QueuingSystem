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

		///<summary>
		///Multiplier of the amount of request count
		///</summary>
		int workDayCount;


	private:
		///<summary>
		///Calculating optimal amount of bales and sales profit
		///</summary>
		void ProfitCalculation(int _requestAmount);

		///<summary>
		///Variable contains amount of newspapers in one bale
		///</summary>
		const int baleSize = 25;

		///<summary>
		///Variable contains payment the market gets from 1 sold newspaper
		///</summary>
		const int newspaperProfit = 3;

		///<summary>
		///Variable contains number the market pays for 1 unsold newspaper
		///</summary>
		const int newspaperCredit = 4;

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

