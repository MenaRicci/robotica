#include "MyQTimer.h"

MyQTimer::MyQTimer(): QThread()
{

 mutex_t.setInterval(300);
}
MyQTimer::~MyQTimer()
{

}

void MyQTimer::setInterval(int msec)
 {
  mutex_t.setInterval(msec);
  start();
 }
 
 
void MyQTimer::Mystop()
 {
      terminate();
 }

void MyQTimer::run()
{
 while(1){
    msleep(mutex_t.getInterval());
    emit Mytimeout();
 }
}
 
