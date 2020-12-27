/*
 * @Author: HisenZhang <zhangz29@rpi.edu>
 * @Date: 2020-12-26 21:40:24
 * @LastEditors: HisenZhang <zhangz29@rpi.edu>
 * @LastEditTime: 2020-12-26 22:32:57
 * @Description: file content
 */

#include <stdio.h>

typedef struct
{
    double x_;
    double y_;
    double z_;
} vec3D;


vec3D init(double x, double y, double z) {
    vec3D temp;
    temp.x_ = x;
    temp.y_ = y;
    temp.z_ = z;
    return temp;
}

vec3D add(vec3D v1, vec3D v2) {
    return init(v1.x_+v2.x_,
                v1.y_+v2.y_,
                v1.z_+v2.z_
            );
}

vec3D sub(vec3D v1, vec3D v2) {
    return init(v1.x_-v2.x_,
                v1.y_-v2.y_,
                v1.z_-v2.z_
    );
}

vec3D crx(vec3D v1, vec3D v2) {
    return init( (v1.y_*v2.z_) - (v1.z_*v2.y_),
                 (v1.z_*v2.x_) - (v1.x_*v2.z_),
                 (v1.x_*v2.y_) - (v1.y_*v2.x_)
    );
}

double dot(vec3D v1, vec3D v2) {
    return v1.x_*v2.x_+
                 v1.y_*v2.y_+
                 v1.z_*v1.z_;
}

void print(vec3D v) {
    printf("< %.3f, %.3f, %.3f >\r\n", v.x_, v.y_, v.z_);
}

int main(int argc, const char** argv) {
    vec3D a = init(1,0,0);
    vec3D b = init(0,1,0);
    print(add(a,b));
    print(sub(a,b));
    print(crx(a,b));
    printf("%.3f\r\n",dot(a,b));
    return 0;
}