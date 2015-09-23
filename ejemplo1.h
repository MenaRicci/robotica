#ifndef ejemplo1_H
#define ejemplo1_H

#include <QtGui>
#include "ui_counterDlg.h"
#include "MyQTimer.h"

class ejemplo1 : public QWidget, public Ui_Counter
{
Q_OBJECT
public:
    ejemplo1();
    
    virtual ~ejemplo1();
public slots:
	void doButton();
	void doButton2();
	void doButton3();
 	void increase_Timer(); 
	int get_SliderValue();

private: 
    MyQTimer *reloj;
    QMutex control;
    int contador;
	 
};

#endif // ejemplo1_H
