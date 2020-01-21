#pragma once
#include "pch.h"
#include "Generator.h"
#include "StatisticManager.h"

class Processor: Generator, StatisticManager
{
	public:
		Processor(StatisticManager& newStatisticManager, Generator& newGenerator, int& newWorkDayCout, int& newBaleCount);

		///<summary>
		///Modeling starting
		///</summary>
		void Start();

		///<summary>
		///Method to get modeling information
		///</summary>
		std::vector<ModelingInfo> GetModelingInfo();

	private:

		///<summary>
		///Multiplier of the amount of request count
		///</summary>
		int workDayCount;

		///<summary>
		///Daily amount of bales the store purchases
		///</summary>
		int baleCount;

		///<summary>
		///Daily amount of newspapers the store purchases
		///</summary>
		int newspaperCount;

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
		ModelingInfo modelingInfo;

		///<summary>
		///Statistic Manager instance
		///</summary>
		StatisticManager statisticManager;

		///<summary>
		///Generator instance
		///</summary>
		Generator generator;

		///<summary>
		///Getting daily information
		///</summary>
		ModelingInfo GetCurrentInfo(int requestAmount);
};

