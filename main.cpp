#include "widget.h"

#include <QApplication>
#include <QtCore>


void test()
{
    QTextStream cout(stdout, QIODevice::WriteOnly);
    QString s1 = "Hello";
    QString s2 = "Qt";
    QList<QString> list;
    // stream into containers
    list << s1 << s2;
    // Java and STL like iterators
    QListIterator<QString> iter(list);
    while(iter.hasNext()) 
    {
        cout << iter.next();
        if(iter.hasNext()) 
        {
            cout << " ";
        }
    }
    cout << "!" << Qt::endl;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    test();
    return a.exec();
}
