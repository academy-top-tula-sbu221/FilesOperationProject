#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

using namespace std;

void TextFilesExample()
{
    /*FILE* f;
    fopen_s(&f, "file.dat", "w");*/

    // write text file
    /*FILE* myfile = fopen("file.dat", "w");

    if (myfile)
    {
        for (int i = 0; i < 5; i++)
        {
            fputs("Hello world", myfile);
            fputc('\n', myfile);
        }

    }*/

    // read text file
    FILE* myfile = fopen("file.dat", "r");
    char* buffer = new char[100];

    while (!feof(myfile))
    {
        fgets(buffer, 100, myfile);
        cout << buffer;
    }


    // append text file
    /*FILE* myfile = fopen("file.dat", "a");*/

    /*FILE* myfile = fopen("file.dat", "r+");

    fseek(myfile, 5, SEEK_SET);

    fputs("Insert text", myfile);*/

    fclose(myfile);
}

int main()
{
    char str[] = "Hello world";
    int n = 150;
    float x = 3544.786;

    //FILE* binfile = fopen("file01.bin", "wb+");

    //fwrite(str, sizeof(char), strlen(str), binfile);
    //fwrite(&n, sizeof(int), 1, binfile);
    //fwrite(&x, sizeof(float), 1, binfile);

    FILE* binfile = fopen("file01.bin", "rb+");
    float z;
    int a;
    //fread(&z, sizeof(float), 1, binfile);
    fread(&a, sizeof(int), 1, binfile);
    cout << a;

    fclose(binfile);
}
