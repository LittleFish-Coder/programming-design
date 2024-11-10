#include "timer6.h"
Timer::Timer(){
    start_s = 0;
}
Timer::Timer(time_t s){
    setStart(s);
}
void Timer::start(){
    start_s = time(NULL);
}
void Timer::setStart(time_t s){
    start_s = s;
}
time_t Timer::getStart(){
    return start_s;
}
int Timer::getElapsedTime()
{
    return time(NULL) - getStart();
}