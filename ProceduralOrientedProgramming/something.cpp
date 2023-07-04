#include<iostream>
using namespace std;
int main()
{
    char name[20];
    cout << "Enter a word:--";
    cin >> name;


    char arr[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(name[i] == arr[j])
            {
                cout << "The vowel in the given word is at " << i+1 << j <<" "<< name[i] << endl;
            }
        }
    }
    return 0;
}