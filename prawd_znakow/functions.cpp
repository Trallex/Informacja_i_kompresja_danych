#include"lib.h"
string Fill()
{
    fstream file;
    string line, ret;
    file.open("infile.txt");
    if(file.good())
    {
        while(!file.eof())
        {
            getline(file,line);
            ret+=line;
        }
    }
    return ret;
}
bool CharNotCounted(char x, vector <char> * in)
        {
            vector<char>& vecRef = *in;
            for(int i=0 ; i< vecRef.size(); i++)
            {
                if(x==vecRef[i])
                    return false;
            }
            return true;
        }

double ShowPercentage(string x, char y)
{
    double per=0;
    for(int i=0; i<x.length(); i++)
        if(y==x[i])
            per++;
    return per/x.length();
}
