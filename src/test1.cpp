#include "myheader.h"

#include <iostream>

void test_enum()
{
   struct userData user_info;
   user_info.name = "lfy";
   user_info.age = 20;

   std::cout << user_info.name << " - " << user_info.age << std::endl; 

    std::cout << State::STATE_OK << std::endl;
}