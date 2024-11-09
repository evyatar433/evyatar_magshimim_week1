#include <iostream>
using namespace std;
#include "Utils.h"

void reverse(int* nums, unsigned int size)
{
    int index = 0;
    int last = size - 1;
    while (index < last)
    {
        // swap the elements
        int temp = nums[index];
        nums[index] = nums[last];
        nums[last] = temp;


        index++;
        last--;
    }
}
// reverse th   
int* reverse10() 
{
    static int nums[10];
    int index = 0;
    int last = 9;
    cout << "enter 10 integers:" << endl;
    for (int i = 0; i < 10; ++i) 
    {
        cin >> nums[i];
    }

    // reverse the array
    while (index < last) 
    {
        // swap the elements
        int temp = nums[index];
        nums[index] = nums[last];
        nums[last] = temp;

        index++;
        last--;
    }

    return nums;
}

int main()
{
    int size = 10;
    int* nums = reverse10();

    // print the array after reversing
    for (int i = 0; i < size; i++)
    {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}