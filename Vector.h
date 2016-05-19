#ifndef _VECTOR_H_
#define _VECTOR_H_

//��άʸ�����Ǻ�
#define V_LNG_VECTOR 3                      /* X Y Z */

class Vector
{
private:
    float v[3];
public:
    Vector() {}
    Vector(float x, float y, float z)
    {
        v[0] = x; v[1] = y; v[2] = z;
    }
    float& operator[](const int _v)
    {
        return v[_v];
    }
};

class Plane
{
private:
    float v[4];
public:
    float& operator[](const int _v)
    {
        return v[_v];
    }
};

//��ʸ��
Vector& V_zero(Vector& vec);

//ʸ���ĸ�ֵ
Vector& V_vector_coordinates(Vector& vector,float x,float y,float z);

//ʸ���ļ���(from & to)
Vector& V_vector_points(Vector& vector,Vector& from,Vector& to);

//to what?����ʸ��V Set
Vector& V_set(Vector& what,Vector& to);

//ʸ������
Vector& V_multiply(Vector& result,Vector& vector,float m);

//���������Ļ�
float V_scalar_product(Vector& a,Vector& b);

//�����ʲô����???���ǵ���
Vector& V_vector_product(Vector& product,Vector& a,Vector& b);

//ʸ����
Vector& V_sum(Vector& sm,Vector& a,Vector& b);

//ʸ����
Vector& V_difference(Vector& differ,Vector& a,Vector& b);

//ʸ����λ��
Vector& V_unit_vector(Vector& vector,Vector& from,Vector& to);

//����һ��ƽ���ʽ��ϵ��
Plane& V_plane(Plane& plane,Vector& normal,Vector& origine);

//�����Ƿ���ƽ����
float V_vertex_on_plane(Plane& plane,Vector& vertex);

#endif
