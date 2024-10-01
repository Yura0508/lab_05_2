#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_2/lab_5_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		
		// Тест для функції S
		TEST_METHOD(TestS)
		{
			double x = 0.5;
			double eps = 0.000000001;
			int n = 0;
			double s = 0.0;
			S(x, eps, n, s);

			double tolerance = 0.00001;
			
			double expectedValue = 1.10715;

			Assert::IsTrue(abs(s - expectedValue) < tolerance);

		}

		// Тест для функції A
		TEST_METHOD(TestA)
		{
			double x = 0.5;
			int n = 1;
			double a = -x;
			A(x, n, a);



			Assert::AreEqual(a, 0.041666666666666664);
		}
	};
}
