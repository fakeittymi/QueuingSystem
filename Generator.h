#pragma once
class Generator
{
	public:
		Generator();
		Generator(int newWorkDayCount, int newCommon);

		///<summary>
		///Function returns requests amount per day
		///</summary>
		int GenerateRequests();

		///<summary>
		///Multiplier of the amount of request count
		///</summary>
		int workDayCount;
	
		///<summary>
		///Average number of constant requests
		///</summary>
		int commonDayRequests;

	private:
		///<summary>
		///Random requests
		///</summary>
		int specialDayRequests;

		///<summary>
		///Getting the frequensy of random requests
		///</summary>
		int GetDayType();

};

