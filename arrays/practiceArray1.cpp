#include <iostream>
#include <vector>

int findMaxConsecutiveOnes(std::vector<int> &nums)
{

    //If the vector has a size of 1 (the minimum) then we just check if is a ONE or ZERO
    if (nums.size() == 1)
    {
        if (nums[0] == 1)
        {
            return 1;
        }
        else
            return 0;
    }

    int max = 0;
    int rep = 0;

    //I am using an iterator to iterate through the vector
    for (int i = 0; i < nums.size(); i++)
    {

        // If the number is a 1, then we increase the counter
        if (nums[i] == 1)
        {
            rep++;
        }

        // If the iterator is at the end, then we just check which number is bigger
        if (i == (nums.size() - 1))
        {
            if (max < rep)
            {
                max = rep;
            }
        }

        // If the next number is a zero, then we just check if the current repetition is bigger than the previous one
        if (nums[(i + 1)] == 0)
        {
            if (max < rep)
            {
                max = rep;
            }
            rep = 0;
        }
    }

    return max;
}

int main()
{

    std::vector<int> test = {1, 1, 0, 1};

    std::cout << findMaxConsecutiveOnes(test) << std::endl;

    return 0;
}