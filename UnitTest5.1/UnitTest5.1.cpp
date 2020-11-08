#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double z;
			const double a = 0;
			const double b = 0;
			const double c = 0;
			z = f(a, b, c);
			Assert::AreEqual(z, 0.);
		}
	};
}
