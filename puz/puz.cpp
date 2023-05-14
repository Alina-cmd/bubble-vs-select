// puz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <chrono>
using namespace std;



// A function to implement bubble sort
void bubble_sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            swap(arr[i], arr[min_index]);
        }
    }
}


// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void sort_time() {
    const int n = 10000;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    long long total_time = 0; // Общее время выполнения
    int num_runs = 100; // Количество запусков
    for (int i = 0; i < num_runs; i++) {
        auto start = chrono::high_resolution_clock::now(); // Замер времени начала сортировки
        selection_sort(arr, n);
        auto end = chrono::high_resolution_clock::now(); // Замер времени окончания сортировки
        auto duration = chrono::duration_cast<chrono::microseconds>(end - start); // Вычисление времени выполнения
        total_time += duration.count(); // Добавление времени выполнения к общему времени
        cout << "One more iteration completed: " << duration.count()  << endl;
    }
    long long avg_time = total_time / num_runs; // Среднее время выполнения
    cout << "Average time taken: " << avg_time << " microseconds" << endl;

}

// Driver code
int main()
{
    //int arr[] = { 5, 1, 4, 2, 8 };
    //int N = sizeof(arr) / sizeof(arr[0]);
    //bubble_sort(arr, N);
    //sort_time();
    ////selection_sort(arr, N);
    //cout << arr[0] << arr [1];
    //cout << "Sorted array: \n";
    //printArray(arr, N);
    //return 0;
   sort_time();
}





//int main()
//{
//    int size;
//    std::cout << "input size of array\n: ";
//    std::cin >> size;
//    int array[100];
//
//    for (int i = 0; i < size; i++) {
//        //std::cout << "Age: " << age << "\t Weight: " << weight << std::endl;
//        std::cout << "Input " << size << " element: ";
//        std::cin >> size;
//    }
//
//    
//}
//void bubbleSort(int arr[], int n) {
//    int i, j;
//    
//    for (i = 0; i < n - 1; i++) {
//        for (j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                swap(&arr[j], &arr[j + 1]);
//            }
//        }
//    }
//
//}
//
//void swap(int* xp, int* yp) {
//    int temp = *xp;
//    *xp = *yp;
//    *yp = temp;
//}
//
//// Function to print an array
//void printArray(int arr[], int size)
//{
//    int i;
//    for (i = 0; i < size; i++)
//    std::cout << arr[i] << " ";
//    std::cout << "/n";
//}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
