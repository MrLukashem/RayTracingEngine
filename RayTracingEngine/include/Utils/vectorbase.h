
#ifndef VECTOR_BASE_H
#define VECTOR_BASE_H

template <typename VectorT>
class VectorBase {
public:
    virtual float dotProduct(const VectorT&) const = 0;

    virtual void normalize() = 0;

    virtual VectorT crossProduct(const VectorT&) const = 0;

    virtual float getLen() const = 0;

    //virtual VectorT operator+ (VectorT) const = 0;

    //virtual VectorT operator- (VectorT) const = 0;

};

#endif
