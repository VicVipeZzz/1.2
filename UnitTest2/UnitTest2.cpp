#include "pch.h"
#include "CppUnitTest.h"
#include "../1.2/Rectangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			bool a;
			Rectangle b;
			a = b.Init(2, 3);
			Assert::IsTrue(a);
		}
	};
}
