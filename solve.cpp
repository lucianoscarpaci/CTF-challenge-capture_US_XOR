#include <iostream>
using namespace std;

int main() {
    string str = "Xx]FA}gBBEuBEAFAF&F@F*\\K\"ACK\"AZAE*VAEAQ@FkGuB..";
    for (char i = '0'; i <= 'Z'; i++) {
        for (char j = '0'; j <= 'Z'; j++) {
            if (i == '0' && j < '0')
                continue;
            if (i == 'Z' && j > 'Z')
                break;
            string strout;
            for(const char& chr : str) {
                strout += (chr ^ i) ^ j;
            }

            cout << (char)i << " " << (char)j << " : " << strout << endl;
        }
    }
    return 0;
}