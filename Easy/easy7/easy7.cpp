// github.com/spokenlore
// reddit.com/r/dailyprogrammer/wiki/challenges
// Create a program to decrypt morse code
// Extra Credit: Add functionality to do the reverse

#include <map>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <fstream>
#include <string>

using namespace std;

int main(){ 
    map<string,char> morsemap;

    ifstream pf("morse.txt");
    for(string morse, chr, line; pf.good() && getline(pf,line);morsemap.insert(pair<string,char>(morse,chr[0])))
    {
        stringstream strm(line);
        getline(strm,chr,',');
        getline(strm,morse,',');
    };
    pf.close();

    for(string inputstring; cin.good()&&getline(cin,inputstring,'/');)
    {
        stringstream strm(inputstring);
        for( string morse; strm.good()&&getline(strm,morse,' ');)
        {
            if(!morse.empty()) cout<<morsemap.find(morse)->second;
        }
        cout<<" ";
    }
    system("PAUSE");
    return 0;
}