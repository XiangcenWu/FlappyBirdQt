//
// Created by wxian on 2024/10/10.
//


#include "pillaritem.h"



PillarItem::PillarItem() :
    topPillar(new QGraphicsPixmapItem(QPixmap(":images/Game Objects/pipe-green.png"))),
    bottomPillar(new QGraphicsPixmapItem(QPixmap(":images/Game Objects/pipe-green.png")))
{

    addToGroup(topPillar);
    addToGroup(bottomPillar);
}

