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
	T addsum2D;
	T subsum2D;
	T sum2D;
	Vector addition3D(T, T);
	Vector subtraction3D(T, T);
	T addsum3D;
	T subsum3D;
	T sum3D;
	Vector Magnitude2D(T, T);
	Vector Magnitude3D(T, T, T);
	Vector Normalizing2D(T, double);
	Vector Normalizing3D(T, double);

private:

};

template <typename T>
Vector<T> Vector<T>::addition2D(T one, T two)
{
	this->addsum2D.x = one.x + two.x;
	this->addsum2D.y = one.y + two.y;
	return *this;
}

template <typename T>
Vector<T> Vector<T>::subtraction2D(T one, T two)
{
	this->subsum2D.x = one.x - two.x;
	this->subsum2D.y = one.y - two.y;
	return *this;
}

template <typename T>
Vector<T> Vector<T>::addition3D(T one, T two)
{
	this->addsum3D.x = one.x + two.x;
	this->addsum3D.y = one.y + two.y;
	this->addsum3D.z = one.z + two.z;
	return *this;
}

template <typename T>
Vector<T> Vector<T>::subtraction3D(T one, T two)
{
	this->subsum3D.x = one.x - two.x;
	this->subsum3D.y = one.y - two.y;
	this->subsum3D.z = one.z - two.z;
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

template <typename T>
Vector<T> Vector<T>::Normalizing2D(T v, double l)
{
	this->addsum2D.x = v.x / l;
	this->addsum2D.y = v.y / l;
	this->sum2D<float> = 1;
	return *this;
}

template <typename T>
Vector<T> Vector<T>::Normalizing3D(T v, double l)
{
	this->addsum3D.x = v.x / l;
	this->addsum3D.y = v.y / l;
	this->addsum3D.z = v.z / l;
	this->sum3D<float> = 1;
	return *this;
}
#endif VECTOR_H