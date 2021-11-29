#include<iostream>
#include <vector>
using namespace std;
 
// main function -
// where the execution of program begins
int main()
{
    std::string l_sDomainPath = "/Users/ruoxili/Documents/NRL/Learning-HGN-Methods/benchmarks/blocks";
    std::vector<std::string> l_vCurriculum = {"prob00.pddl"};
    for (std::string l_sTask : l_vCurriculum) {
        cout << l_sTask << endl;
    }
    return 0;
}