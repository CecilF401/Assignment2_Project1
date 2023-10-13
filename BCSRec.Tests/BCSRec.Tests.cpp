#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int, int);
extern "C" int getArea(int, int);
extern "C" void setLength(int, int*);
extern "C" void setWidth(int, int*);

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

		TEST_METHOD(SetLengthFunctionality01) {
			int result = 0;
			setLength(1, &result);
			Assert::AreEqual(1, result);
		}

		TEST_METHOD(SetLengthFunctionality02) {
			int result = 0;
			setLength(99, &result);
			Assert::AreEqual(99, result);
		}

		TEST_METHOD(SetLengthFunctionality03) {
			int result = 0;
			setLength(-24, &result);
			Assert::AreEqual(0, result);
		}

		TEST_METHOD(SetWidthFunctionality01) {
			int result = 0;
			setWidth(1, &result);
			Assert::AreEqual(1, result);
		}

		TEST_METHOD(SetWidthFunctionality02) {
			int result = 0;
			setWidth(99, &result);
			Assert::AreEqual(99, result);
		}

		TEST_METHOD(SetWidthFunctionality03) {
			int result = 0;
			setWidth(-24, &result);
			Assert::AreEqual(0, result);
		}
	};
}
	