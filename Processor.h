#pragma once
#include "Generator.h"
#include "StatisticManager.h"

class Processor: Generator, StatisticManager
{
	public:
		Processor(StatisticManager statisticManager);
		///<summary>
		///Modeling starting
		///</summary>
		void Start();

		///<summary>
		///Statistic Manager instance
		///</summary>
		StatisticManager _statisticManager;

	private:
		///<summary>
		///Calculating optimal amount of bales and sales profit
		///</summary>
		void ProfitCalculation(int $_requestAmount);

		///<summary>
		///Earnings from newspapers sold
		///</summary>
		int _debit;

		///<summary>
		///Spent on unsold newspapers
		///</summary>
		int _credit;
		
		///<summary>
		///Unsold newspapers
		///</summary>
		int _unsoldNewspapers;

		///<summary>
		///Newspapers bales that contain 25 newspapers
		///</summary>
		int _bales;


};

