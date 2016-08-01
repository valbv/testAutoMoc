#include "myDllClass.h"
#include <QtCore/QDebug>

MyDll::MyDll()
{
	connect(this, &MyDll::mySignal, this, &MyDll::mySlot);
}

void MyDll::qwe()
{
	emit MyDll::mySignal();
}

void MyDll::mySlot()
{
	qDebug() << "Hello, this is dll";
}