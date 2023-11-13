#include <iostream>
#include <string>
#include <vector>  


int main(int argc, char**)
{
    int num;
    
    std::cout << "Please write a number for the limit of the FizzBuzz" << "\n";
    
    std::cin >> num;

    std::cout << "\n";
    
    std::vector<int> nums = {3,5};
    std::vector<std::string> text = {"Fizz","Buzz"};
    
    for (int i =1 ; i  <= num ; i++)
    {
        std::string output;
        for (int j=0 ; j < text.size(); j++)
        {
            if (i % nums[j] ==0)
            {
                output += text[j];
            }
        }
            
        if(output.empty())
        {
           std::cout << i << "\n";    
        }
        else
        {
            std::cout << output << "\n";
        }
  
    }
    return 0;
}
