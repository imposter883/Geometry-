#include<bits/stdc++.h>
using namespace std;

struct point2D{
	double x,y;
};

struct point3D{
	double x,y,z;
};

using ftype = double;

ftype dot(point2D a, point2D b){
	return a.x*b.x+a.y*b.y;
}

ftype dot(point3D a, point3D b){
	return a.x*b.x+a.y*b.y+a.z*b.z;
}

int main(){

	point2D a = {3.0,4.0};
	point2D b = {5.0,6.0};

	point3D x = {3.0,4.0,5.0};
	point3D y = {6.0,7.0,8.0};

	cout<<"Dot product of 2D vector:"<<dot(a,b)<<endl;
	cout<<"Dot product of 2D vector:"<<dot(x,y)<<endl;

	return 0;

}