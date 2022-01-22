// SelectionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int SmallestElement(vector<int> arr) {
    int smallest = arr[0];
    int smallestIndex = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }
    }
    return smallestIndex;
}
vector<int> SelectionSort(vector<int> arr) {
    vector<int> SortedArray;
    for (int i = 0; i < arr.size();)
    {
        int index = SmallestElement(arr);
        SortedArray.push_back(arr[index]);
        arr.erase(arr.begin() + index);
    }


    return SortedArray;
};

int main()
{
    vector<int> array = { 5, 9, 0,131,1323,111,1234, 3, 1, 2, 11 };
    vector<int> sorted = SelectionSort(array);
    for (int i = 0; i < sorted.size(); i++)
    {
        cout << sorted[i] << " ";
    }
    cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
