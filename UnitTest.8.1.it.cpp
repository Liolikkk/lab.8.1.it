#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.8.1.it/lab.8.1.it.cpp" // �������������, �� ���� �� ������ ����� ����������

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81it
{
    TEST_CLASS(UnitTest81it)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // ���� ��� ������� FindThirdDot
            char str1[] = "a.b.c.d.e";
            int result = FindThirdDot(str1);
            Assert::AreEqual(5, result); // ���������, �� ������ ������ ������ - 5
        }
    };
}
