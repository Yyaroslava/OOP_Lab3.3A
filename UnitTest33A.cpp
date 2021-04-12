#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab3.3A/PublicLongLong.cpp"
#include "../OOP Lab3.3A/PrivateLongLong.cpp"
#include "../OOP Lab3.3A/LongLong.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			PublicLongLong A(1, 10), B(2, 9);
			Assert::AreEqual(A != B, true);
		}
	};
}
