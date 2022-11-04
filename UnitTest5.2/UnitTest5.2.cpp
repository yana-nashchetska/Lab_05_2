#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_2/Lab_05_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			int n = 0;
			a = S(2, 0.0001, n);
			Assert::AreEqual(a, 0.34657, 0.0001);
		}
	};
}
