#include "pch.h"
#include "CppUnitTest.h"
#include "../1.1/Line.h"
#include "../1.1/Line.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			Line y;
			y.Init(4,1,2);
			int test = y.function();
			Assert::AreEqual(9, test);
		}
	};
}
