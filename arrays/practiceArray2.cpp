#include <iostream>

#include <vector>
#include <string>

int findNumbers(std::vector<int> &nums)
{
    int counter = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        std::string number = "";
        number = std::to_string(nums[i]);
        if ((number.size() % 2) == 0)
        {
            counter++;
        }
    }
    return counter;
}

int main()
{

    std::vector<int> test = {1123, 1222, 3330, 441};

    findNumbers(test);

    return 0;
}