#pragma once

#include <QObject>

class MyClass : public QObject
{
	Q_OBJECT

public:
	MyClass();

	void qwe();

signals:
	void mySignal();

public slots:
	void mySlot();
};