#ifndef _VECTOR_H_
#define _VECTOR_H_

class Vector
{
public:
    float v[3];
    Vector();
    Vector(float x, float y, float z);
    Vector(const Vector& from, const Vector& to);
    float& operator[](const int _v)
    {
        return v[_v];
    }
    Vector operator - (const Vector& b) const;
    Vector operator + (const Vector& b) const;
    Vector operator * (const float b) const;
    Vector& zero();
    Vector& set(const Vector& to);
    Vector& set(const float x, const float y, const float z);
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
    Plane(const Vector& normal, const Vector& origine);
    float vertexOnPlane(Vector& vertex) const;
};

//���������Ļ�
float V_scalar_product(Vector& a,Vector& b);

//�����ʲô����???���ǵ���
Vector& V_vector_product(Vector& product,Vector& a,Vector& b);

//ʸ����λ��
Vector& V_unit_vector(Vector& vector,Vector& from,Vector& to);

#endif
