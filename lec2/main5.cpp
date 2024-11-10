#include<iostream>
#include<ctime>
#include<unistd.h>
#include"timer5.h"

using namespace std;

int main(int argc, char** argv){
    Timer tmr1;
    Timer tmr2(time(NULL));

    tmr1.start();
    sleep(2);

    cout << "tmr1.start = " << tmr1.getStart() << ", elapsed time = "<< tmr1.getElapsedTime() << endl;
    cout << "tmr2.start = " << tmr2.getStart() << ", elapsed time = "<< tmr2.getElapsedTime() << endl; 


    return 0;
}