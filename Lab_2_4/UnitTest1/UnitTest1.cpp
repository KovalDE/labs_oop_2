#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2_4/Vector.h"
#include "../Lab_2_4/Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector a(3), b(3);
			bool t = true;
			Assert::AreEqual(a == b, t);
		}
	};
}
