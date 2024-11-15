#include<iostream>
#include<ctime>
#include<unistd.h>

using namespace std;

class Timer {
    public:
        Timer(){
            start_s = 0;
        }
        Timer(time_t s){
            setStart(s);
        }
        void start(){
            start_s = time(NULL);
        }
        void setStart(time_t s){
           start_s = s; 
        }
        time_t getStart(){
            return start_s;
        }
        int getElapsedTime(){
            return time(NULL) - getStart();
        }
    private:
    time_t start_s;

};

int main(int argc, char** argv){
    Timer tmr1;
    Timer tmr2(time(NULL));

    tmr1.start();
    sleep(2);

    cout << "tmr1.start = " << tmr1.getStart() << ", elapsed time = "<< tmr1.getElapsedTime() << endl;
    cout << "tmr2.start = " << tmr2.getStart() << ", elapsed time = "<< tmr2.getElapsedTime() << endl; 


    return 0;
}