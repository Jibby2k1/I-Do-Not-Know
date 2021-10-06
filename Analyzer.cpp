#include <iostream>
#include <string>
#include <vector>
#include "StringData.h"


using namespace std;

int linearSearch(string element, vector<string> dataset)
{
    for(int i = 0; i < 26*26*26*26*26; i++)
    {
        if((dataset[i])==(element)){
            return i;
        }
    }
    return -1;
}
int binarySearch(string element, vector<string> dataset)
{
    int bindex = dataset.size()/2;
    int min = 0;
    int max = dataset.size()-1;

    while(min<=max)
    {
        if(dataset[bindex].compare(element)==0)
        {
            return bindex;
        }
        else if(dataset[bindex].compare(element)<0)
        {
            min = bindex+1;
        }
        else
        {
            max = bindex-1;
        }
        bindex = (max+min)/2;
    }
    return -1;
}



int main() {
    //std::cout << "Hello, World!" << std::endl;
    vector <string> dataset = getStringData();

    string element = "";

    auto timeBefore = 0;
    auto timeAfter = 0;
    int outdex = 0;
    string printOut = "";

    element = "not_here";
    timeBefore = systemTimeNanoseconds();
    outdex = linearSearch(element, dataset);
    timeAfter = systemTimeNanoseconds();
    printOut = "Linear Search: " + to_string(outdex) + " Time: " + to_string(timeAfter-timeBefore-326);
    cout << printOut << "\n";

    timeBefore = systemTimeNanoseconds();
    outdex = binarySearch(element, dataset);
    timeAfter = systemTimeNanoseconds();
    printOut = "Binary Search: " + to_string(outdex) + " Time: " + to_string(timeAfter-timeBefore-326);
    cout << printOut<<"\n";

    element = "aaaaa";
    timeBefore = systemTimeNanoseconds();
    outdex = linearSearch(element, dataset);
    timeAfter = systemTimeNanoseconds();
    printOut = "Linear Search: " + to_string(outdex) + " Time: " + to_string(timeAfter-timeBefore-326);
    cout << printOut<<"\n";

    timeBefore = systemTimeNanoseconds();
    outdex = binarySearch(element, dataset);
    timeAfter = systemTimeNanoseconds();
    printOut = "Binary Search: " + to_string(outdex) + " Time: " + to_string(timeAfter-timeBefore-326);
    cout << printOut<<"\n";

    element = "mzzzz";
    timeBefore = systemTimeNanoseconds();
    outdex = linearSearch(element, dataset);
    timeAfter = systemTimeNanoseconds();
    printOut = "Linear Search: " + to_string(outdex) + " Time: " + to_string(timeAfter-timeBefore-326);
    cout << printOut<<"\n";

    timeBefore = systemTimeNanoseconds();
    outdex = binarySearch(element, dataset);
    timeAfter = systemTimeNanoseconds();
    printOut = "Binary Search: " + to_string(outdex) + " Time: " + to_string(timeAfter-timeBefore-326);
    cout << printOut<<"\n";


    return 0;


}
