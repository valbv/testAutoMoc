#pragma once

#include <QObject>
#include "myDll2Macros.h"

class MYDLL2_API MyDll2 : public QObject
{
	Q_OBJECT

public:
	MyDll2();

	void qwe();

signals:
	void mySignal();

public slots:
	void mySlot();
	void mySlot2();
};