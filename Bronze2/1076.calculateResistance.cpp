#include <iostream>
#include <map>
using namespace std;
/*
problem website
https://www.acmicpc.net/problem/1076

[Main Points]
1. Mapping color and number

2. Max number is bigger than int size so use long long


[Solution]
1. Input num += input * 10
2. Input num += input
3. num *= 10

*/
map<string, int> color{
    {"black", 0},
    {"brown", 1},
    {"red", 2},
    {"orange", 3},
    {"yellow", 4},
    {"green", 5},
    {"blue", 6},
    {"violet", 7},
    {"grey", 8},
    {"white", 9}};

int main()
{
    long long num = 0;
    char inputColor[20];
    cin >> inputColor;
    num = color.at(inputColor) * 10;
    cin >> inputColor;
    num += color.at(inputColor);
    cin >> inputColor;
    for (int i = 0; i < color.at(inputColor); i++)
    {
        num *= 10;
    }
    cout << num;
    return 0;
}