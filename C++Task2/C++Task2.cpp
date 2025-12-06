#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


//
//void bubbleSort(string& str) {
//    int n = str.length();
//    bool swapped;
//
//    for (int i = 0; i < n - 1; i++) {
//        swapped = false;
//        for (int j = 0; j < n - i - 1; j++) {
//            if (str[j] > str[j + 1]) {
//                swap(str[j], str[j + 1]);
//                swapped = true;
//            }
//        }
//        if (!swapped) break;
//    }
//}
//
//int main() {
//    string name = "GrigoriyUmanets";
//
//    cout << "Default string: " << name << endl;
//
//    bubbleSort(name);
//
//    cout << "Sorted string: " << name << endl;
//
//    return 0;
//}
//
//
//

//1 задание
void shakerSort(string& str) {
    bool swapped = true;
    int start = 0;
    int end = str.length() - 1;

    while (swapped) {
        swapped = false;

        for (int i = start; i < end; ++i) {
            if (str[i] > str[i + 1]) {
                swap(str[i], str[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }

        swapped = false;
        end--; 

        for (int i = end - 1; i >= start; --i) {
            if (str[i] > str[i + 1]) {
                swap(str[i], str[i + 1]);
                swapped = true;
            }
        }

        start++;
    }
}

int main() {
    string fullName = "GRIGORYUMANETS";

    cout << fullName << endl;

    shakerSort(fullName);

    cout << fullName << endl;

    return 0;
}


//2 задание
void shakerSort(int arr[], int size) {
    bool swapped = true;
    int start = 0;
    int end = size - 1;

    while (swapped) {
        swapped = false;

        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }

        swapped = false;
        end--; 

        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }

        start++;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = { 4, 1, 2, 6, 8 };

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, arrSize);

    shakerSort(arr, arrSize);

    printArray(arr, arrSize);

    return 0;
}

//3 задание
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = { 4, 1, 2, 6, 8 };

    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, arrSize);

    bubbleSort(arr, arrSize);

    printArray(arr, arrSize);

    return 0;
}











































//
//void selectionSort(string& str) {
//    int n = str.length();
//    for (int i = 0; i < n - 1; i++) {
//        int minIndex = i;
//        for (int j = i + 1; j < n; j++) {
//            if (str[j] < str[minIndex]) {
//                minIndex = j;
//            }
//        }
//        if (minIndex != i) {
//            swap(str[i], str[minIndex]);
//        }
//    }
//}
//
//int main() {
//    string name = "Grigoriy";
//    string surname = "Umanets";
//
//    string fullName = name + surname;
//
//    for (char& c : fullName) {
//        c = tolower(c);
//    }
//
//    cout << fullName << endl;
//
//    selectionSort(fullName);
//
//    cout << fullName << endl;
//
//    return 0;
//}
//
//
//int main()
//{
//    int arr[]{ 4, 1, 2, 6, 8, 9, 5 };
//
//    int arrSize{ sizeof(arr) / sizeof(arr[0]) };
//
//    for (int i = 0; i < arrSize; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    for (int i{ 0 }; i < arrSize; i++)
//    {
//        int minIndex = i;
//
//        for (int j = i + 1; j < arrSize; j++)
//        {
//            if (arr[j] < arr[minIndex])
//            {
//                minIndex = j;
//            }
//
//        }
//        if (minIndex != i)
//        {
//            int temp = arr[i];
//            arr[i] = arr[minIndex];
//            arr[minIndex] = temp;
//        }
//    }
//    for (int i = 0; i < arrSize; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}