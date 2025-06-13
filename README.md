# Sorting Algorithm Visualizer  

## Overview  
This C++ project visualizes six fundamental sorting algorithms in action: **Bubble Sort**, **Selection Sort**, **Insertion Sort**, **Merge Sort**, **Quick Sort**, and **Shell Sort**. Each step of the sorting process is printed to the console with intentional delays, allowing users to observe how elements are rearranged over time.  

## Features  
- **Interactive Menu**: Choose which sorting algorithm to visualize.  
- **Step-by-Step Visualization**: The array is printed after each critical operation (e.g., swaps, merges).  
- **Delay Mechanism**: Artificial delays (`simpleDelay()`) slow down the process for better observation.  
- **Randomized Input**: Generates an array of random integers (10–100) for each run.  
- **Educational Focus**: Clearly demonstrates the time complexity trade-offs between algorithms.  

## Supported Algorithms  
1. **Bubble Sort**  
2. **Selection Sort**  
3. **Insertion Sort**  
4. **Merge Sort**  
5. **Quick Sort**  
6. **Shell Sort**  

## How to Use  
1. **Compile**:  
   ```bash
   g++ DSA_Lab_Project.cpp -o sort_visualizer
   ```
2. **Run**:  
   ```bash
   ./sort_visualizer
   ```
3. **Follow Prompts**:  
   - Enter a number (1–6) to select a sorting algorithm.  
   - Watch the algorithm process the unsorted array step by step.  

## Example Output  
```plaintext
Unsorted Array: 45 12 78 23 56 89 34 67 90 11  

Bubble Sort:  
12 45 23 56 78 34 67 89 11 90  
12 23 45 56 34 67 78 11 89 90  
...  
Sorted Array: 11 12 23 34 45 56 67 78 89 90  
```

## Code Structure  
- **Core Functions**:  
  - `initializeArray()`: Fills the array with random values.  
  - `printArray()`: Prints the current state of the array.  
  - `simpleDelay()`: Adds pauses between steps.  
- **Sorting Algorithms**: Each algorithm includes visual feedback via `printArray()`.  

## Dependencies  
- C++ compiler (e.g., `g++`).  

## Future Enhancements  
- Add time complexity analysis (real-time metrics).  
- Support for user-defined array sizes.  
- Graphical visualization (e.g., using SFML).  

Designed for students and educators to explore sorting algorithms intuitively! 🚀
