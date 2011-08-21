#include <QtGui/QApplication>

#include "paintwidget.h"
#include "musicsimulation.h"
#include "draglabel.h"

char* modelFile;

int main(int argc, char *argv[])
{
	if( argc != 2){
		cout << "must input model file!" << endl;
		return 1;
	}
	modelFile = argv[1];
    QApplication a(argc, argv);
    MusicSimulation w;
    w.show();

    return a.exec();
}
