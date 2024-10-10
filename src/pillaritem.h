//
// Created by wxian on 2024/10/10.
//

#ifndef PILLARITEM_H
#define PILLARITEM_H
#include <QGraphicsItemGroup>
#include <QGraphicsPixmapItem>


class PillarItem : public QObject, public QGraphicsItemGroup
{
    Q_OBJECT
public:
    explicit PillarItem();
signals:

public slots:

private:
    QGraphicsPixmapItem *topPillar, *bottomPillar;
};


#endif //PILLARITEM_H
