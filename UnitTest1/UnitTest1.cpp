#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_9_2_1/lab_9_2_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student* f = new Student[1];
			f->mat = 5;
			f->fiz = 5;
			f->spec = KN;
			f->prog = 5;
			int avarage = GPA(f[0]);
			Assert::AreEqual(avarage, 5);
		}
	};
}
