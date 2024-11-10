#include<iostream>
#include<cstring>

using namespace std;

// use this command to compile:
// g++ -DDEBUG -o debug debug.cpp

int main(int argc, char **argv){

    #ifdef DEBUG
    cout<<argv[1]<<endl;
    #endif

    cout<<strlen(argv[1])<<endl;

    return 0;
}