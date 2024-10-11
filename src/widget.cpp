#include "widget.h"
#include "ui_widget.h"
#include <QGraphicsPixmapItem>
#include <QFile>
#include "pillaritem.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , pillar(new PillarItem())
// {
//     ui->setupUi(this);
//     scene = new Scene(this);
//     scene->setBackgroundBrush(QBrush(Qt::white));
//     ui->graphicsView->setScene(scene);
//
//
//     QBrush redBrush(Qt::red);
//     QBrush blueBrush(Qt::blue);
//     QPen blackPen(Qt::black);
//     blackPen.setWidth(10);
//
//     QFont font;
//     font.setBold(true);
//     font.setPointSize(20);
//     QPalette palette; //= label->palette();
//     palette.setColor(QPalette::WindowText, Qt::green); // Set text color to green
//     // label->setPalette(palette);
//
//     ellipse = scene->addEllipse(0, 0, 100, 100, blackPen, redBrush);
//     rect = scene->addRect(-100, -200, 50, 50, blackPen, blueBrush);
//     text = scene->addText("Hello World", font);
//     text->setDefaultTextColor(Qt::green);
//     text->setPos(100, -100);
//
//     text->setFlag(QGraphicsItem::ItemIsMovable);
//     rect->setFlag(QGraphicsItem::ItemIsMovable);
//
//     qInfo() << "Hellllll";
//
//
// }
{
    ui->setupUi(this);
    scene = new Scene(this);
    scene->setBackgroundBrush(QBrush(Qt::white));
    ui->graphicsView->setScene(scene);

    SetUpBackground();

    scene->addItem(pillar);

}

Widget::~Widget()
{
    delete ui;
}


void Widget::SetUpBackground() const
{
    // add backgrounds
    auto *pixItem = new QGraphicsPixmapItem(QPixmap(":/images/Game Objects/background-day.png"));
    scene->addItem(pixItem);
    // pixItem->setFlag(QGraphicsItem::ItemIsMovable);
    auto *baseItem = new QGraphicsPixmapItem(QPixmap(":/images/Game Objects/base.png"));
    scene->addItem(baseItem);

    // set base at bottom
    baseItem->setPos(0, pixItem->boundingRect().height());
    baseItem->setScale(pixItem->boundingRect().width() /
                       baseItem->boundingRect().width());


    // add lines
    scene->addLine(
        0, scene->itemsBoundingRect().height()/2,
        scene->itemsBoundingRect().width(), scene->itemsBoundingRect().height()/2,
        QPen(Qt::blue));
    scene->addLine(
        scene->itemsBoundingRect().width()/2, 0,
        scene->itemsBoundingRect().width()/2, scene->itemsBoundingRect().height(),
        QPen(Qt::blue));
}

