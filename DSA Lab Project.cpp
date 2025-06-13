#include <iostream>
using namespace std;

const int arraySize = 10;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    cout << "\n";
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Simple random number generator (not truly random)
int simpleRand() {
    static int seed = 42;  // Initial seed
    seed = (seed * 19 + 7) % 101;  // Arbitrary constants for simplicity
    return seed;
}

void initializeArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = simpleRand() % 91 + 10;  // Random numbers between 10 and 100
    }
}

void simpleDelay() {
    for (volatile int i = 0; i < 50000000; ++i) {}
}

// Sorting algorithms
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                printArray(arr, size);
                simpleDelay();
            }
        }
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
        printArray(arr, size);
        simpleDelay();
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
        printArray(arr, size);
        simpleDelay();
    }
}

void merge(int arr[], int left, int mid, int right) {
    // ... (merge function remains the same)
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
        printArray(arr, arraySize);
        simpleDelay();
    }
}

int partition(int arr[], int low, int high) {
    // ... (partition function remains the same)
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
        printArray(arr, arraySize);
        simpleDelay();
    }
}

void shellSort(int arr[], int size) {
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; ++i) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
        printArray(arr, size);
        simpleDelay();
    }
}

int main() {
    int arr[arraySize];

    // Initialize array with "random" values
    initializeArray(arr, arraySize);

    int choice;
    cout << "Choose a sorting algorithm to visualize:\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "3. Insertion Sort\n";
    cout << "4. Merge Sort\n";
    cout << "5. Quick Sort\n";
    cout << "6. Shell Sort\n";
    cout << "Enter your choice: ";
    cin >> choice;

    // Visualize unsorted array
    cout << "Unsorted Array: ";
    printArray(arr, arraySize);
    simpleDelay();

    // Visualize the chosen sorting algorithm
    switch (choice) {
        case 1:
            cout << "Bubble Sort:\n";
            bubbleSort(arr, arraySize);
            break;
        case 2:
            cout << "Selection Sort:\n";
            selectionSort(arr, arraySize);
            break;
        case 3:
            cout << "Insertion Sort:\n";
            insertionSort(arr, arraySize);
            break;
        case 4:
            cout << "Merge Sort:\n";
            mergeSort(arr, 0, arraySize - 1);
            break;
        case 5:
            cout << "Quick Sort:\n";
            quickSort(arr, 0, arraySize - 1);
            break;
        case 6:
            cout << "Shell Sort:\n";
            shellSort(arr, arraySize);
            break;
        default:
            cerr << "Invalid choice.\n";
            return 1;
    }

    return 0;
}