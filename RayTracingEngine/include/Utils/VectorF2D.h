
#ifndef VECTORF2D_H
#define VECTORF2D_H

#include "Utils/VectorBase.h"
#include <math.h>

class VectorF2D : public VectorBase<VectorF2D> {
    float m_x;
    float m_y;

    float m_len;

    void inline updateLen();
public:
    inline void setX(float);

    inline void setY(float);

    inline float getX() const;

    inline float getY() const;

    float dotProduct(const VectorF2D&) const;

    VectorF2D crossProduct(const VectorF2D&) const;

    void normalize();

    float getLen() const;
};

#endif
