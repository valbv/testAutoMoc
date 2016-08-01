#include "myDll2Class.h"
#include <QtCore/QDebug>

MyDll2::MyDll2()
{
	connect(this, &MyDll2::mySignal, this, &MyDll2::mySlot);
}

void MyDll2::qwe()
{
	emit MyDll2::mySignal();
}

void MyDll2::mySlot()
{
	qDebug() << "Hello, this is dll2";
}

void MyDll2::mySlot2()
{
	qDebug() << "Hello, this is dll2";
}