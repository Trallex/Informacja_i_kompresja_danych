#include"lib.h"

string Fill();
bool CharNotCounted(char x, vector <char> * in);
double ShowPercentage(string x, char y);
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
    return 0;
}
