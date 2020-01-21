#pragma once
#include "pch.h"

class Generator
{
	public:
		Generator();
		Generator(int& newCommon);

		///<summary>
		///Function returns requests amount per day
		///</summary>
		int GenerateRequests();

	private:
		///<summary>
		///Average number of constant requests
		///</summary>
		int commonDayRequests;

		///<summary>
		///Getting the frequensy of random requests
		///</summary>
		int GetDayType();

};

