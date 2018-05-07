#include"lib.h"

string Fill();
bool CharNotCounted(char x, vector <char> * in);
double ShowPercentage(string x, char y);
double ShowPairPercentage(string x, string y);
bool PairNotCounted(string x, vector <string> * in);
int main()
{
    int NOChar=0;
    string all=Fill();
    if(all.length()==0)
    {
        cout<<"Text is empty!";
        system("pause");
        return 0;
    }
    cout<<"Text:"<<endl<<all<<endl;
    vector<char> characters;
    for(int i=0; i < all.length(); i++)
    {
        if(CharNotCounted(all[i], &characters))
        {
            characters.push_back(all[i]);
            cout<<"Char "<<all[i]<<" probability: ";
            cout<<ShowPercentage(all, all[i])<<endl;
        }
    }
    system("pause");
    vector<string> pairs;
    for(int i=0; i < all.length()-1; i++)
    {
        string temp = string()+all[i]+all[i+1];
        if(PairNotCounted(temp, &pairs))
        {
            pairs.push_back(temp);
            cout<<"Pair "<<temp<<" probability: ";
            cout<<ShowPairPercentage(all, temp)<<endl;
        }
    }

    system("pause");
    return 0;
}
