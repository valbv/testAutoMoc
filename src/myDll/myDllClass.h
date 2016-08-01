#pragma once

#include <QObject>
#include "myDllMacros.h"

class MYDLL_API MyDll : public QObject
{
	Q_OBJECT

public:
	MyDll();

	void qwe();

signals:
	void mySignal();

public slots:
	void mySlot();
};