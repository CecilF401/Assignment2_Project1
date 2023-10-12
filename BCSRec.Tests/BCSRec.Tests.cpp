#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int, int);
extern "C" int getArea(int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(BCSRecTests)
	{
	public:
		
		TEST_METHOD(GetPerimeterFunctionality)
		{
			int result = 0;
			result = getPerimeter(23, 40);	
			Assert::AreEqual(126, result);

		}
		TEST_METHOD(GetAreaFunctionality) {
			int result = 0;
			result = getArea(3, 5);
			Assert::AreEqual(15, result);
		}
	};
}
	