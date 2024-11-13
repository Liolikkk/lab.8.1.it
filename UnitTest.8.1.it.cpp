#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.8.1.it/lab.8.1.it.cpp" // Переконайтеся, що шлях до вашого файлу правильний

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81it
{
    TEST_CLASS(UnitTest81it)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // Тест для функції FindThirdDot
            char str1[] = "a.b.c.d.e";
            int result = FindThirdDot(str1);
            Assert::AreEqual(5, result); // Очікується, що індекс третьої крапки - 5
        }
    };
}
