#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("sample.txt");
    if(!fin){
        cout<<"File not found"<<endl;
    }
    else{
        cout<<"File found"<<endl;
    }
    return 0;
}


// File Opening Modes
// ios::in: This mode is used to open a file for reading only. It means that the file can be read from but cannot be written to. This mode is used when you only need to read data from a file./

// ios::out: This mode is used to open a file for writing only. It means that the file can be written to but cannot be read from. If the file already exists, the contents of the file will be overwritten. If the file does not exist, a new file will be created. This mode is used when you only need to write data to a file.

// ios::app: This mode is used to open a file for writing in "append" mode. It means that any data written to the file will be appended to the end of the file, rather than overwriting the existing contents of the file. If the file does not exist, a new file will be created. This mode is useful when you need to add data to the end of an existing file.

// ios::binary: This mode is used to open a file in binary mode, which means that the file is treated as a binary file rather than a text file. This mode is used when you need to read or write binary data to a file, such as images or audio files.

// ios::ate: This mode is used to open a file and position the file pointer at the end of the file. This mode is useful when you need to read or write data to the end of the file.

// ios::trunc: This mode is used to truncate the file to zero length when opening a file for writing. It means that if the file already exists, its contents will be deleted and the file will be truncated to zero length. If the file does not exist, a new file will be created. This m