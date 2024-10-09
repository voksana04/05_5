#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\Project_5.5\Project_5.5\lab_5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int depth = 0;
			int n = 12345; 
			int expectedSum = 15; 
			int expectedDepth = 5; 

			int resultSum = f(n, depth);

			Assert::AreEqual(expectedSum, resultSum);

			Assert::AreEqual(expectedDepth, depth);
		}
		TEST_METHOD(TestMethod3)
		{
			int depth = 0;
			int n = 0; 
			int expectedSum = 0; 
			int expectedDepth = 0; 

			int resultSum = f(n, depth);

			Assert::AreEqual(expectedSum, resultSum);
			Assert::AreEqual(expectedDepth, depth);
		}
	};
}
