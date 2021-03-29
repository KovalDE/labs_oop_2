#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2_5/Number.h"
#include "../Lab_2_5/Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number l(4), r(5);
			double k = -1;
			Number res(l - r);
			Assert::AreEqual(k, res.getDouble());
		}
	};
}
