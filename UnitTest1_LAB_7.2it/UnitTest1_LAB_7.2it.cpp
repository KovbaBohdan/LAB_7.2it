#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_7.2.it/lab_7.2.it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB72it
{
	TEST_CLASS(UnitTest1LAB72it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int rowCount = 3;
            int colCount = 3;
            int** a = new int* [rowCount];
            for (int i = 0; i < rowCount; i++)
            {
                a[i] = new int[colCount];
                for (int j = 0; j < colCount; j++)
                {
                    a[i][j] = 1;
                }
            }

            int max = MaxMin(a, rowCount, colCount);
            Assert::AreEqual(1, max);
            for (int i = 0; i < rowCount; i++)
            {
                delete[] a[i];
            }
            delete[] a;
		}
	};
}
