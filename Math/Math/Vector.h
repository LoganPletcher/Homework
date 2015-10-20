#ifndef VECTOR_H
#define VECTOR_H

struct VECT2D
{
	int x;
	int y;
};

struct VECT3D
{
	int x;
	int y;
	int z;
};

template <class T>
class Vector
{
public:
	Vector addition2D(T, T);
	Vector subtraction2D(T, T);
	T sum2D;
	Vector addition3D(T, T);
	Vector subtraction3D(T, T);
	T sum3D;
	Vector Magnitude2D(T, T);
	Vector Magnitude3D(T, T, T);

private:

};

template <typename T>
Vector<T> Vector<T>::addition2D(T one, T two)
{
	this->sum2D.x = one.x + two.x;
	this->sum2D.y = one.y + two.y;
	return *this;
}

template <typename T>
Vector<T> Vector<T>::subtraction2D(T one, T two)
{
	this->sum2D.x = one.x - two.x;
	this->sum2D.y = one.y - two.y;
	return *this;
}

template <typename T>
Vector<T> Vector<T>::addition3D(T one, T two)
{
	this->sum3D.x = one.x + two.x;
	this->sum3D.y = one.y + two.y;
	this->sum3D.z = one.z + two.z;
	return *this;
}

template <typename T>
Vector<T> Vector<T>::subtraction3D(T one, T two)
{
	this->sum3D.x = one.x - two.x;
	this->sum3D.y = one.y - two.y;
	this->sum3D.z = one.z - two.z;
	return *this;
}

template <typename T>
Vector<T> Vector<T>::Magnitude2D(T x, T y)
{
	T doubleX;
	T doubleY;
	doubleX = x * x;
	doubleY = y * y;
	this->sum2D = sqrt(doubleX + doubleY);
	return *this;
}

template <typename T>
Vector<T> Vector<T>::Magnitude3D(T x, T y, T z)
{
	T doubleX;
	T doubleY;
	T doubleZ;
	doubleX = x * x;
	doubleY = y * y;
	doubleZ = z * z;
	this->sum3D = sqrt(doubleX + doubleY + doubleZ);
	return *this;
}
#endif VECTOR_H