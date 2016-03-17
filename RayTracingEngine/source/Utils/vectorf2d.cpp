
#include "Utils/vectorf2d.h"

void VectorF2D::setX(float x) {
    m_x = x;
    updateLen();
}

void VectorF2D::setY(float y) {
    m_y = y;
    updateLen();
}

float VectorF2D::getX() const {
    return m_x;
}

float VectorF2D::getY() const {
    return m_y;
}

void VectorF2D::updateLen() {
    auto tmp = m_x * m_x + m_y * m_y;
    m_len = static_cast<float>(
                sqrt(static_cast<double>(tmp)));
}

float VectorF2D::dotProduct(const VectorF2D& vec) const {
    return (m_x * vec.getX()) + (m_y * vec.getY());
}

VectorF2D VectorF2D::crossProduct(const VectorF2D& vec) const {
    return VectorF2D{};
}

void VectorF2D::normalize() {
    m_x /= m_len;
    m_y /= m_len;

    m_len = 1.0f;
}

float VectorF2D::getLen() const {
    return m_len;
}
