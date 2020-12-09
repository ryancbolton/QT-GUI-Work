#include <QApplication> //most important library in QT
#include <QLabel> //create Qlabel object

int main(int argc, char* argv[]) {
    //Builds application through the command line (I think?)
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello World");

    //Creates a title for the app at the top of the window
    label->setWindowTitle("MY APP");
    //Can resize the window (takes just w and h parameters)
    label->resize(400, 400);

    //corresponds to x, y, width, and height integers. x and y are the positions of the top-left corner of the widget on the screen,
    // w and h are the actual size parameters for the widget rectangle.
    //label->setGeometry(100,200,300,300);

    //displays the widget (kinda like plot.show() for matplotlib in python)
    label->show();
    return app.exec();
}
