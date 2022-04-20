#pragma once


using namespace System;

namespace TMathLib {
	public ref class TMCalculator
	{
	internal:
		void* refClass;
		~TMCalculator();
		!TMCalculator();


	public:
		TMCalculator();
		int Sum(int a, int b);
	};
}
