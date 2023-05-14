#include "pch.h"
#include "CppUnitTest.h"
#include "..\puz\puz.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
				
        // Тест 1: Сортировка пузырьком массива случайных элементов
        TEST_METHOD(Test_BubbleSort)
        {
            int arr[] = { 4, 2, 1, 5, 3 };
            bubble_sort(arr, 5);
            int expected[] = { 1, 2, 3, 4, 5 };
            for (unsigned int i = 0; i < 5; ++i)
                Assert::AreEqual(expected[i], arr[i]);
        }

        // Тест 2: Сортировка пузырьком отсортированного массива
        TEST_METHOD(Test_BubbleSort_sorted)
        {
            int arr[] = { 1, 2, 3, 4, 5 };
            bubble_sort(arr, 5);
            int expected[] = { 1, 2, 3, 4, 5 };
            for (unsigned int i = 0; i < 5; ++i)
                Assert::AreEqual(expected[i], arr[i]);
        }

        // Тест 3: Сортировка пузырьком массива с элементами по убыванию
        TEST_METHOD(Test_BubbleSort_Asc)
        {
            int arr[] = { 5, 4, 3, 2, 1 };
            bubble_sort(arr, 5);
            int expected[] = { 1, 2, 3, 4, 5 };
            for (unsigned int i = 0; i < 5; ++i)
                Assert::AreEqual(expected[i], arr[i]);
        }

        // Тест 4: Сортировка выбором массива с одним элементом 
        TEST_METHOD(Test_BubbleSort_With_0)
        {
            int arr[] = { 0 };
            bubble_sort(arr, 1);
            int expected[] = { 0 };
            for (unsigned int i = 0; i < 1; ++i)
                Assert::AreEqual(expected[i], arr[i]);
        }

        // Тест 5: Сортировка выбором массива случайных элементов
        TEST_METHOD(Test_SelectionSort)
        {
            int arr[] = { 4, 2, 1, 5, 3 };
            selection_sort(arr, 5);
            int expected[] = { 1, 2, 3, 4, 5 };
            for (unsigned int i = 0; i < 5; ++i)
                Assert::AreEqual(expected[i], arr[i]);
        }

        // Тест 6: Сортировка выбором отсортированного массива
        TEST_METHOD(Test_SelectionSort_sorted)
        {
            int arr[] = { 1, 2, 3, 4, 5 };
            selection_sort(arr, 5);
            int expected[] = { 1, 2, 3, 4, 5 };
            for (unsigned int i = 0; i < 5; ++i)
                Assert::AreEqual(expected[i], arr[i]);
        }

        // Тест 7: Сортировка выбором массива с элементами по убыванию
        TEST_METHOD(Test_SelectionSort_Asc)
        {
            int arr[] = { 5, 4, 3, 2, 1 };
            selection_sort(arr, 5);
            int expected[] = { 1, 2, 3, 4, 5 };
            for (unsigned int i = 0; i < 5; ++i)
                Assert::AreEqual(expected[i], arr[i]);
        }

        // Тест 8: Сортировка выбором массива с одним элементом
        TEST_METHOD(Test_SelectionSort_With_0)
        {
            int arr[] = {0};
            selection_sort(arr, 1);
            int expected[] = { 0 };
            for (unsigned int i = 0; i < 1; ++i)
                Assert::AreEqual(expected[i], arr[i]);
        }

	};
}
