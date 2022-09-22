#include "utils.h"


int get_num_value_for_roman_character(char s)
{
    int sum = 0;
    switch (s)
    {
    case 'I':
        sum = 1;
        break;
    case 'V':
        sum = 5;
        break;
    case 'X':
        sum = 10;
        break;
    case 'L':
        sum = 50;
        break;
    case 'C':
        sum = 100;
        break;
    case 'D':
        sum = 500;
        break;
    case 'M':
        sum = 1000;
        break;
    default:
        break;
    }
    return sum;
}