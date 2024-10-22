#include "pch.h"
#include "CppUnitTest.h"
#include "../PR5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTestExample
{
    TEST_CLASS(UnitTestExample)
    {
    public:

        TEST_METHOD(TestQ)
        {
            maxDepth = 0;
            currentDepth = 0;
            int result = Q(5, 3, 1);
            Assert::AreEqual(5, result); // Оновлюємо очікуваний результат
            Assert::AreEqual(7, maxDepth); // Оновлюємо очікувану максимальну глибину рекурсії
        }

        TEST_METHOD(TestBaseCase1)
        {
            maxDepth = 0;
            currentDepth = 0;
            int result = Q(1, 1, 1);
            Assert::AreEqual(1, result);
            Assert::AreEqual(1, maxDepth);
        }

        TEST_METHOD(TestBaseCase2)
        {
            maxDepth = 0;
            currentDepth = 0;
            int result = Q(0, 0, 1);
            Assert::AreEqual(0, result);
            Assert::AreEqual(1, maxDepth);
        }

        TEST_METHOD(TestDepth)
        {
            maxDepth = 0;
            currentDepth = 0;
            int result = Q(10, 5, 1);
            Assert::AreEqual(30, result); // Оновлюємо очікуваний результат
            Assert::AreEqual(14, maxDepth); // Оновлюємо очікувану максимальну глибину рекурсії
        }
    };
}
