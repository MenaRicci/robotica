#ifndef MyQTimer_H
#define MyQTimer_H

#include "qthread.h"
#include "qmutex.h"
#include <stdio.h>
#include <stdlib.h>

class MyQTimer :  public QThread
{
  Q_OBJECT
private:
    
    struct mutex{
      
      int interval;
      QMutex mutex;
      
      void setInterval(int valor)
      {
	QMutexLocker ml(&mutex);
	interval=valor;
      }
      int getInterval()
      {
	QMutexLocker ml(&mutex);
	return interval;
      }
      
    }mutex_t;
    
public:
  MyQTimer();  
  virtual ~MyQTimer();

protected:
   void run();
public Q_SLOTS:
   
    void Mystop();

     void setInterval(int value);
  Q_SIGNALS:
      void Mytimeout();
  
};




#endif // MyQTimer_H