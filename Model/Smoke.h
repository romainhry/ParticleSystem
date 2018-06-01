/**
 * Project Untitled
 */


#ifndef _SMOKE_H
#define _SMOKE_H

#include "Particle.h"
#include <QVector3D>


class Smoke: public Particle {
public:

    static QVector3D getM_color()
    {
        return m_color;
    }

    /**
     * @param value
     */
    static void setM_color(QVector3D * value)
    {
        m_color = * value;
    }
private:
    static QVector3D m_color;
};

#endif //_SMOKE_H