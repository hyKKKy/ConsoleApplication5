#pragma once
#include<iostream>
#include <string>
#include "StackLIFO.h"

class Checker {
private:
    std::string input;
    StackLIFO stack;

public:

    Checker(const std::string& str) {
        input = str;
    }
    bool isMatchingB(char open, char close) {
        return (open == '(' && close == ')') ||
            (open == '{' && close == '}') ||
            (open == '[' && close == ']');
    }

    void checkBrackets() {
        for (size_t i = 0; i < input.length(); i++) {
            char current = input[i];

            
            if (current == '(' || current == '{' || current == '[') {
                stack.push(current);
            }
            
            else if (current == ')' || current == '}' || current == ']') {
                
                if (stack.isEmpty()) {
                    std::cout << "Error, odd bracket'" << current << " place" << i << std::endl;
                    std::cout << input.substr(0, i + 1) << std::endl;
                    return;
                }

                char top = stack.pop();
               
                if (!isMatchingB(top, current)) {
                    std::cout << "Error, brackets didn't match there" << i << std::endl;
                    std::cout << input.substr(0, i + 1) << std::endl;
                    return;
                }
            }
            
        }

        
        if (!stack.isEmpty()) {
            std::cout << "Error, brackets haven't closed" << std::endl;
        }
        else {
            std::cout << "Correct!" << std::endl;
        }
    }
};