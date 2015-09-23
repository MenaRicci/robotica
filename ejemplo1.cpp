#include "ejemplo1.h"


ejemplo1::ejemplo1(): Ui_Counter()
{
	setupUi(this);
	
	reloj = new MyQTimer();
	show();
	contador=0;
	
	connect(button, SIGNAL(clicked()), this, SLOT(doButton()) );
	connect(button_2, SIGNAL(clicked()), this, SLOT(doButton2()) );
 	connect(button_3, SIGNAL(clicked()), this, SLOT(doButton3()) );
	connect(reloj,SIGNAL(Mytimeout()),this,SLOT(increase_Timer()));
	connect(Slider,SIGNAL(sliderReleased()),this,SLOT(get_SliderValue()));
	
	
	
	Slider->setMinimum(100);
	Slider->setMaximum(500);
	Slider->setValue(300);
	
	reloj->setInterval(Slider->value());
	
	reloj->start(); 
	
	
}

ejemplo1::~ejemplo1()
{

}
void ejemplo1::doButton()
{

  reloj->Mystop(); 
  
}
void ejemplo1::doButton2()
{

  reloj->setInterval(Slider->value());
  
}
void ejemplo1::doButton3()
{
  contador=0;
  lcdNumber->display(contador);
}
void ejemplo1::increase_Timer()
{
    
    lcdNumber->display(contador++);
   
}

int ejemplo1::get_SliderValue()
{
 // control.lock();
  reloj->setInterval(Slider->value()); 
  //control.unlock();
}


