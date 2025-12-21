#pragma once

#include "types.h"
#include "math.h"

namespace JGeometry {
    void negateInternal(const float *rSrc, float *rDest);

    template<typename T>
    class TVec2 {
    public:
        /* Constructors */
        inline TVec2() { }

        TVec2(const TVec2<T> &rOther)
        {
            this->x = rOther.x;
            this->y = rOther.y;
        }

        TVec2(T _x, T _y) {
            this->x = _x;
            this->y = _y;
        };

        /* Getters and setters */
        void set(const TVec2<T> &rOther)
        {
            this->x = rOther.x;
            this->y = rOther.y;
        }

        void set(T _x, T _y)
        {
            this->x = _x;
            this->y = _y;
        }

        void zero()
        {
            x = (T)0;
            y = (T)0;
        }

        /* Arithmetic and algebraic operations */
        void sub(const TVec2<T> &rOther)
        {
            x -= rOther.x;
            y -= rOther.y;
        }

        T distance(const TVec2<T> &rOther) const
        {
            T dx = x - rOther.x;
            T dy = y - rOther.y;
            return (T)sqrt(dx * dx + dy * dy);
        }

        T length() const
        {
            return (T)sqrt(x * x + y * y);
        }

        T squared(const TVec2<T> &rOther) const
        {
            T dx = x - rOther.x;
            T dy = y - rOther.y;
            return dx * dx + dy * dy;
        }

        T dot(const TVec2<T> &rOther) const
        {
            return x * rOther.x + y * rOther.y;
        }

        /* Operators */
        void operator=(const TVec2<T> &rhs) {
            this->x = rhs.x;
            this->y = rhs.y;
        }

        TVec2<T> operator+(const TVec2<T>& rhs) const {
            TVec2<T> ret = *this;
            ret.x = ret.x + rhs.x;
            ret.y = ret.y + rhs.y;
            return ret;
        }

        TVec2<T>& operator+=(const TVec2<T>& rhs) {
            this->x = this->x + rhs.x;
            this->y = this->y + rhs.y;
            return *this;
        }

        TVec2<T> operator-(const TVec2<T> &rhs) const {
            TVec2<T> ret = *this;
            ret.x = ret.x - rhs.x;
            ret.y = ret.y - rhs.y;
            return ret;
        }

        TVec2<T> operator-() const {
            TVec2<T> ret = *this;
            ret.x = ret.x * (T)-1;
            ret.y = ret.y * (T)-1;
            return ret;
        }

        TVec2<T>& operator-=(const TVec2<T>& rhs) {
            this->x = this->x - rhs.x;
            this->y = this->y - rhs.y;
            return *this;
        }

        TVec2<T> operator*(T val) const {
            TVec2<T> ret = *this;
            ret.x = ret.x * val;
            ret.y = ret.y * val;
            return ret;
        }

        TVec2<T>& operator*=(const TVec2<T>& rhs) {
            this->x = this->x * rhs.x;
            this->y = this->y * rhs.y;
            return *this;
        }

        TVec2<T> operator/(T rhs) const {
            TVec2<T> ret = *this;
            ret.x = ret.x / rhs;
            ret.y = ret.y / rhs;
            return ret;
        }

        TVec2<T>& operator/=(const TVec2<T>& rhs) {
            this->x = this->x / rhs.x;
            this->y = this->y / rhs.y;
            return *this;
        }

        bool operator==(const TVec2<T>& rhs) const { return x == rhs.x && x == rhs.y; }

        T x, y;
    };

    template <typename T>
    class TVec3 {
    public:
        /* Constructors */
        inline TVec3() { }

        TVec3(const TVec3<T> &rOther) {
            this->x = rOther.x;
            this->y = rOther.y;
            this->z = rOther.z;
        }

        TVec3(const Vec &rOther) {
            this->x = rOther.x;
            this->y = rOther.y;
            this->z = rOther.z;
        }

        TVec3(T val) {
            this->x = val;
            this->y = val;
            this->z = val;
        }

        TVec3(T _x, T _y, T _z) {
            this->x = _x;
            this->y = _y;
            this->z = _z;
        }

        /* Getters and setters */
        void set(const Vec &rOther) {
            this-> x = rOther.x;
            this->y = rOther.y;
            this->z = rOther.z;
        }

        void set(const TVec3<T> &rOther) {
            this->x = rOther.x;
            this->y = rOther.y;
            this->z = rOther.z;
        }

        void set(T _x, T _y, T _z) {
            this->x = _x;
            this->y = _y;
            this->z = _z;
        }

        void setAll(T val) {
            this->x = val;
            this->y = val;
            this->z = val;
        }

        void zero() {
            this->x = 0;
            this->y = 0;
            this->z = 0;
        }

        /* Arithmetic and algebraic operations */
        void add(const TVec3<T> &rOther) {
            this->x += rOther.x;
            this->y += rOther.y;
            this->z += rOther.z;
        }

        void sub(const TVec3<T> &rOther) {
            this->x -= rOther.x;
            this->y -= rOther.y;
            this->z -= rOther.z;
        }
    
        void mul(const TVec3<T> &rOther) {
            this->x *= rOther.x;
            this->y *= rOther.y;
            this->z *= rOther.z;
        }

        void div(const TVec3<T> &rOther) {
            this->x /= rOther.x;
            this->y /= rOther.y;
            this->z /= rOther.z;
        }

        void scale(T scalar) {
            this->x *= scalar;
            this->y *= scalar;
            this->z *= scalar;
        }

        // Implementation from HeadPenguin.
        // Works properly 99% of the time
        // Intended to be the Cubic function that was included in SMG1, but excluded from SMG2 since nothing used it
        void cubic(const TVec3<T>& rv1, const TVec3<T>& rv2, const TVec3<T>& rv3, const TVec3<T>& rv4, T a) {
            TVec3 StackA = rv3 * (a * a * a - a * a);
            TVec3 StackB = rv2 * (a + a * a * a - 2 * a * a);
            TVec3 StackC = rv1 * (1 + 2 * a * a * a - 3 * a * a);
            TVec3 StackD = rv4 * (3 * a * a - 2 * a * a * a);
            TVec3 Stack = StackA + StackB + StackC + StackD;

            set(Stack);
        }

        T squared() const {
            return (this->x * this->x) + (this->y * this->y) + (this->z * this->z);
        }

        T squared(const TVec3<T>& other) const {
            T dx = x - other.x;
            T dy = y - other.y;
            T dz = z - other.z;
            return dx * dx + dy * dy + dz * dz;
        }

        T dot(const TVec3<T>& other) const {
            return x * other.x + y * other.y + z * other.z;
        }

        T normalize(const TVec3<T>& v) {
            T len = (T)sqrt(v.x * v.x + v.y * v.y + v.z * v.z);
            if (len != 0) {
                x = v.x / len;
                y = v.y / len;
                z = v.z / len;
            } else {
                x = y = z = 0;
            }
            return len;
        }

        T angle(const TVec3<T>& other) const {
            T dotProd = this->dot(other);
            T len1 = (T)sqrt(x * x + y * y + z * z);
            T len2 = (T)sqrt(other.x * other.x + other.y * other.y + other.z * other.z);
            if (len1 == 0 || len2 == 0)
                return 0;
            T cosTheta = dotProd / (len1 * len2);

            if (cosTheta > 1) cosTheta = 1;
            else if (cosTheta < -1) cosTheta = -1;
            return (T)acos(cosTheta);
        }

        /* Operators */
        void operator=(const TVec3<T> &rhs) {
            this->x = rhs.x;
            this->y = rhs.y;
            this->z = rhs.z;
        }

        TVec3<T> operator+(const TVec3<T>& rhs) const {
            TVec3<T> ret = *this;
            ret.x = ret.x + rhs.x;
            ret.y = ret.y + rhs.y;
            ret.z = ret.z + rhs.z;
            return ret;
        }

        TVec3<T>& operator+=(const TVec3<T>& rhs) {
            this->x = this->x + rhs.x;
            this->y = this->y + rhs.y;
            this->z = this->z + rhs.z;
            return *this;
        }

        TVec3<T> operator-(const TVec3<T> &rhs) const {
            TVec3<T> ret = *this;
            ret.x = ret.x - rhs.x;
            ret.y = ret.y - rhs.y;
            ret.z = ret.z - rhs.z;
            return ret;
        }

        TVec3<T> operator-() const {
            TVec3<T> ret = *this;
            ret.x = ret.x * (T)-1;
            ret.y = ret.y * (T)-1;
            ret.z = ret.z * (T)-1;
            return ret;
        }

        TVec3<T>& operator-=(const TVec3<T>& rhs) {
            this->x = this->x - rhs.x;
            this->y = this->y - rhs.y;
            this->z = this->z - rhs.z;
            return *this;
        }

        TVec3<T> operator*(T val) const {
            TVec3<T> ret = *this;
            ret.x = ret.x * val;
            ret.y = ret.y * val;
            ret.z = ret.z * val;
            return ret;
        }

        TVec3<T>& operator*=(const TVec3<T>& rhs) {
            this->x = this->x * rhs.x;
            this->y = this->y * rhs.y;
            this->z = this->z * rhs.z;
            return *this;
        }

        TVec3<T> operator/(T rhs) const {
            TVec3<T> ret = *this;
            ret.x = ret.x / rhs;
            ret.y = ret.y / rhs;
            ret.z = ret.z / rhs;
            return ret;
        }

        TVec3<T>& operator/=(const TVec3<T>& rhs) {
            this->x = this->x / rhs.x;
            this->y = this->y / rhs.y;
            this->z = this->z / rhs.z;
            return *this;
        }

        bool operator==(const TVec3<T>& rhs) const { return x == rhs.x && x == rhs.y && z == rhs.z; }

        inline operator Vec*() { return (Vec*)&x; }
        inline operator const Vec*() const { return (Vec*)&x; }
        inline operator f32*() { return (f32*)&x; }
        inline operator const f32*() const { return (f32*)&x; }

        T x, y, z;
    };

    template<typename T>
    class TVec4 {
    public:
        /* Constructors */
        inline TVec4() { }

        TVec4(T _x, T _y, T _z, T _w)
        {
            x = _x;
            y = _y;
            z = _z;
            w = _w;
        }

        /* Getters and setters */
        void set(const TVec4<T> &rOther)
        {
            x = rOther.x;
            y = rOther.y;
            z = rOther.z;
            w = rOther.w;
        }

        void set(T _x, T _y, T _z, T _w)
        {
            x = _x;
            y = _y;
            z = _z;
            w = _w;
        }

        T x, y, z, w;
    };
};

typedef JGeometry::TVec2<s16> TVec2s;
static_assert(sizeof(TVec2s) == 0x4, "TVec2s Size");

typedef JGeometry::TVec2<f32> TVec2f;
static_assert(sizeof(TVec2f) == 0x8, "TVec2f Size");

typedef JGeometry::TVec3<s8> TVec3c;
static_assert(sizeof(TVec3c) == 0x3, "TVec3c Size");

typedef JGeometry::TVec3<f32> TVec3f;
static_assert(sizeof(TVec3f) == 0xC, "TVec3f Size");

typedef JGeometry::TVec3<s16> TVec3s;
static_assert(sizeof(TVec3s) == 0x6, "TVec3s Size");

typedef JGeometry::TVec4<f32> TVec4f;
static_assert(sizeof(TVec4f) == 0x10, "TVec4f Size");
