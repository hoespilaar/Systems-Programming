#include "MainWindow.h"
#include <QtWidgets/QApplication>
#include "Identifier.h"

int main(int argc, char *argv[])
{
	test();

	QApplication a(argc, argv);
	MainWindow w;
	w.show();
	return a.exec();
}
