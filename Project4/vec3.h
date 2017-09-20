#ifndef _VEC3_
#define _VEC3_

#include <iostream>
#include <math.h>

template <class T>
class vec3
{

public:
	vec3() : x(NULL), y(NULL), z(NULL) {};
	vec3(T _x, T _y, T _z) { x = _x; y = _y; z = _z; }
	~vec3() {};

	vec3 operator+(const vec3& vec)
	{
		vec3 sec_vec;
		sec_vec.x = x + vec.x;
		sec_vec.y = y + vec.y;
		sec_vec.z = z + vec.z;
		return sec_vec;
	}

	vec3 operator-(const vec3& vec)
	{
		vec3 sec_vec;
		sec_vec.x = x - vec.x;
		sec_vec.y = y - vec.y;
		sec_vec.z = z - vec.z;
		return sec_vec;
	}

	void operator+=(const vec3& vec) const
	{
		x += vec.x;
		y += vec.y;
		z += vec.z;
	}

	void operator-=(const vec3& vec) const
	{
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
	}

	void operator=(const vec3& vec) 
	{
		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	bool operator==(const vec3& vec) const
	{
		return x == vec.x && y == vec.y && z == vec.z;
	}

	vec3 normalise() const
	{
		vec3 new_vec;
		float vec_length = sqrt(x*x + y*y + z*z)
			if (vec_length != 0)
			{
				new_vec.x = x / vec_length;
				new_vec.y = y / vec_length;
				new_vec.z = z / vec_length;
			}
		
		return new_vec;
	}

	void zero() const
	{
		x = 0;	y = 0;	z = 0;
	}

	bool is_zero() const
	{
		return x == 0 && y == 0 && z == 0;
	}

	float distance_to(const vec3& vec1, const vec3& vec2)
	{
		float xcomp, ycomp, zcomp;
		xcomp = pow(vec2.x - vec1.x, 2);
		ycomp = pow(vec2.y - vec1.y, 2);
		zcomp = pow(vec2.z - vec1.z, 2);
		
		return sqrt(xcomp + ycomp + zcomp);

	}
private:
	T x, y, z;

};

#endif
