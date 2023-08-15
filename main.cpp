#include <QApplication>
#include "miancalc.h"

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);

	miancalc m;
	m.show();

	return QApplication::exec();
}
