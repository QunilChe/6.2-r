#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2-r/6.2-r.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int s[1] = {1};
			int t;
			t = Sum1(s, 1, 0, 0, 0);
			Assert::AreEqual(t, 1);

		}
	};
}
