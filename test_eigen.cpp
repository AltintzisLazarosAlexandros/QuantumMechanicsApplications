#include <iostream>
#include <Eigen/Dense>

int main() {
    Eigen::Matrix2d A;
    A << 1, 2,
         3, 4;

    Eigen::Vector2d v(1, 1);

    std::cout << "A * v = \n" << A * v << std::endl;
    return 0;
}
