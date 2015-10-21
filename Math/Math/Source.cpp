#include <iostream>
#include "Vector.h"
using namespace std;


int main()
{
	VECT2D vec1;
	VECT2D vec2;
	Vector<VECT2D> insert;

	cout << "Type in the x and y values of the first point:\nx: ";
	cin >> vec1.x;
	cout << "y: ";
	cin >> vec1.y;

	cout << "\nNow type in the x and y values of the second point:\nx: ";
	cin >> vec2.x;
	cout << "y: ";
	cin >> vec2.y;

	insert.addition2D(vec1, vec2);
	cout << "\nAfter performing Vector addition using the two points this is the resulting vector: (" << insert.addsum2D.x << ", " << insert.addsum2D.y << ")\n\n";
	
	insert.subtraction2D(vec1, vec2);
	cout << "After performing Vector subtraction using the two points this is the resulting vector: (" << insert.subsum2D.x << ", " << insert.subsum2D.y << ")\n\n";

	VECT3D vecUno;
	VECT3D vecDos;
	Vector<VECT3D> newinsert;

	cout << "Type in the coordinate values for the first 3D vector:\nx: ";
	cin >> vecUno.x;
	cout << "y: ";
	cin >> vecUno.y;
	cout << "z: ";
	cin >> vecUno.z;

	cout << "\nType in the coordinate values for the second 3D vector:\nx: ";
	cin >> vecDos.x;
	cout << "y: ";
	cin >> vecDos.y;
	cout << "z: ";
	cin >> vecDos.z;

	newinsert.addition3D(vecUno, vecDos);
	cout << "\nAfter performing Vector addition using the two points this is the resulting vector: "
		<< "(" << newinsert.addsum3D.x << ", " << newinsert.addsum3D.y << ", " << newinsert.addsum3D.z << ")\n\n";

	newinsert.subtraction3D(vecUno, vecDos);
	cout << "After performing Vector subtraction using the two points this is the resulting vector: "
		<< "(" << newinsert.subsum3D.x << ", " << newinsert.subsum3D.y << ", " << newinsert.subsum3D.z << ")\n\n";

	Vector<double> maginsert;

	maginsert.Magnitude2D(insert.addsum2D.x, insert.addsum2D.y);
	cout << "The magnitude of the first 2D vector is " << maginsert.sum2D << ".\n\n";

	maginsert.Magnitude2D(insert.subsum2D.x, insert.subsum2D.y);
	cout << "The magnitude of the second 2D vector is " << maginsert.sum2D << ".\n\n";

	maginsert.Magnitude3D(newinsert.addsum3D.x, newinsert.addsum3D.y, newinsert.addsum3D.z);
	cout << "The magnitude of the first 3D vector is " << maginsert.sum3D << ".\n\n";

	maginsert.Magnitude3D(newinsert.subsum3D.x, newinsert.subsum3D.y, newinsert.subsum3D.z);
	cout << "The magnitude of the second 3D vector is " << maginsert.sum3D << ".\n\n";

	Vector<VECT2D> NormalVec2D;

	NormalVec2D.Normalizing2D(insert.addsum2D, maginsert.sum2D);
	cout << "The normalized values for the first 2D vector are as follows.\nx = "
		<< NormalVec2D.addsum2D.x << "\ny = " << NormalVec2D.addsum2D.y << "\nMagnitude = " << NormalVec2D.sum2D << "\n\n";

	system("pause");
	return 0;
}