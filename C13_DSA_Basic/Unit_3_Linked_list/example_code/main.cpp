/**
 * @file main.cpp
 * @author Kevin Nguyen
 * @brief Ví dụ về linked list
 * @version 0.1
 * @date 2024-01-04
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include<iostream>
using namespace std;

struct Number // Node
{
    int value;
    Number *next;
};

int main()
{
    
    Number *n1 = new Number;
    n1->value = 6;

    Number *n2 = new Number;
    n2->value = 8;

    Number *n3 = new Number;
    n3->value = 3;

    Number *n4 = new Number;
    n4->value = 7;

    Number n5;
    n5.value = 10;
    n5.next = n6; 

    Number *n6 = new Number;
    n6->value = 5;

    // Linking
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = &n5;
    n5.next = n6;




    return 0;
}