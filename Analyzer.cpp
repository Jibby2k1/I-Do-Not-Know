#include <iostream>
#include <string>
#include <vector>
#include "StringData.h"


using namespace std;

int linearSearch(string element, vector<string> dataSet){
    for(int i = 0; i < dataSet.size(); i++)
    {
        if((dataSet[i])==(element)){
            return i;
        }
    }
    return -1;
}

int binarySearch(string element, vector<string> dataset){
    int minIndex = 0;
    int maxIndex = dataset.size()-1;
    int mid = 0;

    while (minIndex <= maxIndex){
        mid = dataset.size()/2;
        if(dataset[mid].compare(element)==0)
        {
            return mid;
        }
        else if(dataset[mid].compare(element)<0)
        {
            minIndex = mid + 1;
        }
        else
        {
            maxIndex = mid - 1;
        }

    }
    return -1;
}



int main() {
    //std::cout << "Hello, World!" << std::endl;
    vector <string> dataset = getStringData();

    string element = "";

    auto start = 0;
    auto end = 0;
    int outdex = 0;
    string printOut = "";

    element = "not_here";
    start = systemTimeNanoseconds();
    outdex = linearSearch(element, dataset);
    end = systemTimeNanoseconds();
    printOut = "Linear Search: " + to_string(outdex) + " Time: " + to_string(end-start-326);
    cout << printOut << "\n";

    start = systemTimeNanoseconds();
    outdex = binarySearch(element, dataset);
    end = systemTimeNanoseconds();
    printOut = "Binary Search: " + to_string(outdex) + " Time: " + to_string(end-start-326);
    cout << printOut<<"\n";

    element = "aaaaa";
    start = systemTimeNanoseconds();
    outdex = linearSearch(element, dataset);
    end = systemTimeNanoseconds();
    printOut = "Linear Search: " + to_string(outdex) + " Time: " + to_string(end-start-326);
    cout << printOut<<"\n";

    start = systemTimeNanoseconds();
    outdex = binarySearch(element, dataset);
    end = systemTimeNanoseconds();
    printOut = "Binary Search: " + to_string(outdex) + " Time: " + to_string(end-start-326);
    cout << printOut<<"\n";

    element = "mzzzz";
    start = systemTimeNanoseconds();
    outdex = linearSearch(element, dataset);
    end = systemTimeNanoseconds();
    printOut = "Linear Search: " + to_string(outdex) + " Time: " + to_string(end-start-326);
    cout << printOut<<"\n";

    start = systemTimeNanoseconds();
    outdex = binarySearch(element, dataset);
    end = systemTimeNanoseconds();
    printOut = "Binary Search: " + to_string(outdex) + " Time: " + to_string(end-start-326);
    cout << printOut<<"\n";


    return 0;


}