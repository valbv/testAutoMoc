#include "myClass.h"
#include <QtCore/QDebug>

MyClass::MyClass()
{
	connect(this, &MyClass::mySignal, this, &MyClass::mySlot);
}

void MyClass::qwe()
{
	emit MyClass::mySignal();
}

void MyClass::mySlot()
{
	qDebug() << "Hello World";
}