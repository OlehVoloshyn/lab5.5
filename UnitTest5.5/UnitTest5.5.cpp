#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.5/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int level = 1;
			int n = 6;
			int k = 4;
			int gl = 0;
			t = C(n,k,level,gl);
			Assert::AreEqual(t, (C(n - 1, k - 1, level + 1, gl) + C(n - 1, k, level + 1, gl)));
		}
	};
}
