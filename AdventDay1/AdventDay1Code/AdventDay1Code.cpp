#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main()
{
    std::string filename = "AdventDay1Input.txt";

    int prev = 0;
    int total = 0;
    std::ifstream inputinfo;
    inputinfo.open("AdventDay1Input.txt");

    std::vector<std::string> alllines;
    std::string textline;
    while (std::getline(inputinfo, textline)) {
        alllines.push_back(textline);
    }
    std::string firsts = alllines.front();
    int first = stoi(firsts);
    prev = first;
    for (std::string i : alllines) {
        int int_i = stoi(i);
        int current = int_i;
        if (current > prev) {
            total += 1;
        }
        prev = current;
    }

    std::cout << total;
}
