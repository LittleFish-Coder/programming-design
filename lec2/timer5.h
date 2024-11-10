#include<ctime>

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