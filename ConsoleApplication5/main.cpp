#include <iostream>
#include "FIFO.h"
#include "StackLIFO.h"
#include "Checker.h"

int main()
{
    //stack stack1;
    //for (int i = 0; i < 5; i++) {

    //    std::cout << i << ' ';
    //    stack1.push(i);
    //}

    //std::cout << std::endl;

    //std::cout << stack1.top();
    ////for (size_t i = 0; i < 5; i++)
    ////{
    ////    std::cout << stack1.pop() << ' ';
    ////}

    //std::cout << std::endl; 

    /*StackLIFO stack1;

    stack1.push('d');
    stack1.push('i');
    stack1.push('m');
    stack1.push('a');

    std::cout << "Top: " << stack1.top() << std::endl; 

    stack1.pop();

    std::cout << "Top: " << stack1.top() << std::endl;*/

    std::string str1 = "({x-y-z}*[x+2y]-(z+4x))";
    std::string str2 = "([x-y-z}*[x+2y)-{z+4x)]";

    Checker checker1(str1);
    Checker checker2(str2);

    std::cout << "Check number 1 " << str1 << std::endl;
    checker1.checkBrackets();

    std::cout << "Check number 2 " << str2 << std::endl;
    checker2.checkBrackets();

}


