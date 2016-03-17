
#ifndef RAY_H
#define RAY_H

#include "Utils/vectorf3d.h"

class Ray {
    VectorF3D m_origin;
    VectorF3D m_direction;

public:
    Ray(const VectorF3D& origin, const VectorF3D& direction);

    VectorF3D getDirection() const;

    VectorF3D getOrigin() const;
};

#endif
