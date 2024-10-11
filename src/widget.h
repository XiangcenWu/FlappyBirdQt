#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "scene.h"
#include "pillaritem.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void SetUpBackground() const;

private:
    Ui::Widget *ui;
    Scene *scene;

    QGraphicsPixmapItem *pixItem;
    QGraphicsPixmapItem *baseItem;

    PillarItem *pillar;

    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rect;
    QGraphicsTextItem *text;
};
#endif // WIDGET_H
