#ifndef CAMERA_H
#define CAMERA_H

#include "Utils/vectorf3d.h"
#include "ray.h"

using uint = unsigned int;

class Camera {
private:
    float m_width;
    float m_height;

    VectorF3D m_origin;

    Camera(const& VectorF3D, float, float);
public:
    virtual float getWidth() = 0;

    virtual float getHeight() = 0;

    virtual float getOrigin() = 0;

    virtual Ray getRay(int, int) = 0;
};

#endif // CAMERA_H
