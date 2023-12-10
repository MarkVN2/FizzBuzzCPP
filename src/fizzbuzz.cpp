#include <iostream>
#include <string>
#include <vector>  


void fizzBuzz(int num, std::vector<int> nums, std::vector<std::string> text)
    {
    for (int i =1 ; i  <= num ; i++)
        {
            std::string output;
            for (std::size_t j=0 ; j < text.size(); j++)
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
    };

int main(int argc, char**)
{
    void fizzBuzz(int num, std::vector<int> nums, std::vector<std::string> text);  
   
    int num;

    printf("Please write a number for the limit of the FizzBuzz\n");
    
    std::cin >> num;

    printf("\n");
    
    
    std::vector<int> nums = {3,5};
    std::vector<std::string> text = {"Fizz","Buzz"};
    fizzBuzz(num, nums, text);
    return 0;
}
