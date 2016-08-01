#include <QtWidgets/QApplication>
#include "testqt.h"
#include "myClass.h"
#include "myDll/myDllClass.h"
#include "myDll2/myDll2Class.h"

int main(int argc, char** argv)
{
	QApplication myApp (argc, argv);

	MyClass a;
	a.qwe();

	MyDll dll;
	dll.qwe();

	MyDll2 dll2;
	dll2.qwe();

	testQt w;
	w.show();

	return myApp.exec();
}