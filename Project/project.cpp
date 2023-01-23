#include<bits/stdc++.h>
using namespace std;
#define d 50
#define d1 20
int q=13;
char *text=new char [d];
char *pattern=new char[d1];

class ProjectOneEight
{
public:
    void myfileWriteforText();
    void myfileReadforText();
    int project();

};
void ProjectOneEight::myfileWriteforText()
{
    ofstream myfile("C:\\Users\\Fahim Arefin\\Desktop\\projectCse246\\fahims.txt");

    for(int i=0; i<d; i++)
    {

        myfile<<"ATTGC";

    }

    myfile.close();
}
void ProjectOneEight::myfileReadforText()
{

    char data;

    ifstream myReadFile("C:\\Users\\Fahim Arefin\\Desktop\\projectCse246\\fahims.txt");
    cout<<"DNA SEQUNCE OF ANNIE:"<<endl;

    cout<<"--------------------------------------------------"<<endl;
    int count=0;
    for(int i=0; i<d; i++)
    {
        myReadFile>>data;
        cout<<data;
        text[i]=data;
        count++;
    }
    cout<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Number of DNA sequences of ANNIE:"<<count;
    cout<<endl;
}
int ProjectOneEight::project()
{

    int m = 20 ;
    int n = 50 ;
    int L[m+1][n+1];
     cout << "Enter the Pattern that you want to check:" << endl;
        for (int i = 0; i < m; i++) {
            cin >> pattern[i];
        }

   for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (pattern[i - 1] == text[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;

            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }


    return L[m][n];

    cout<<endl;


}


int main()
{

    ProjectOneEight obj1;
    obj1.myfileWriteforText();
    obj1.myfileReadforText();
    cout<<"______________________________________________"<<endl;
    cout<<"There is six girls in the park so you have to"<<endl;
    cout<<"give input DNA sequence of those girls to find "<<endl;
    cout<<"Annie's daughter"<<endl;
    cout<<"______________________________________________"<<endl;

    int data[6];
    for(int i=0; i<6; i++)
    {
        data[i]=obj1.project();
        cout<<data[i]<<endl;


    }
    for(int i=0; i<6; i++){

        if(data[0]<data[i]){
            data[0]=data[i];
        }
    }

    cout<<"__________________________________________________________"<<endl;
    cout<<"The largest matching sub sequence will be Annie's Daughter"<<endl;
    cout<<"__________________________________________________________"<<endl;
    cout<<"Most largest sequence value is:"<<data[0]<<endl;

    cout<<"So this is Annie's daughter."<<endl;



}

