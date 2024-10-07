#include "pch.h"
#include "CppUnitTest.h"
#include "../LR5.5/LR5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double expected;
			double result = fun(10, 15, 15 % 10, 1, 0);
			if (((30 >= 10) && (30 % 10) == 0) && ((30 >= 15) && (30 % 15) == 0) && ((30 >= 5) && (10 % 5) == 0))
				expected = 30;
			
			Assert::AreEqual(expected, result, 0.0001);
		}
	};
}
