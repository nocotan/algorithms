#include <string>
using namespace std;


class Solution {
    public:
        string defangIPaddr(string address) {
            string defanged_addr = "";
            for (int i=0; i<address.size(); ++i) {
                if (address[i] == '.') defanged_addr += "[.]";
                else defanged_addr += address[i];
            }

            return defanged_addr;
        }
};