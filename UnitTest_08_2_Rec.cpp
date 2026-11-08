#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08_2_Rec/Lab_08_2_Rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab082Rec
{
    TEST_CLASS(UnitTestLab082Rec)
    {
    public:
        TEST_METHOD(TestMethodCountWordsStartingWithBRec)
        {
            string testStr1 = "apple banana book cat boy";
            Assert::AreEqual((size_t)3, CountWordsStartingWithB(testStr1)); // banana, book, boy

            string testStr2 = "  big   bear   balloon ";
            Assert::AreEqual((size_t)3, CountWordsStartingWithB(testStr2));

            string testStr3 = "hello world C++";
            Assert::AreEqual((size_t)0, CountWordsStartingWithB(testStr3));
        }
    };
}