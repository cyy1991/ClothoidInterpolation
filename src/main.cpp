#include <iostream>
#include <Clothoid.hh>
#include <CubicRootsFlocke.hh>
#include <matplotlibcpp.h>
using namespace std;
namespace plt = matplotlibcpp;

int main(int argc, char *argv[])
{
    // intialize the points
    double x0 = 0, y0 = 0, theta0 = 0, x1 = 50, y1 = 3.6, theta1 = 0;
    double k, dk, L;
       Clothoid::buildClothoid(x0, y0, theta0, x1, y1, theta1, k, dk, L);
       std::cout<<k<<std::endl;
       std::cout<<dk<<std::endl;
       std::cout<<L<<std::endl;

    vector<double> xs, ys, ks;
    int npts = 50;
    Clothoid::PointsOnClothoid(x0, y0, theta0, x1,
                               y1, theta1, xs,
                               ys, ks, npts);

    // for (std::vector<double>::iterator itr = xs.begin(); itr != xs.end(); itr++)
    // {
    //     std::cout << *itr << std::endl;
    // }
    // std::cout << "another value" << std::endl;
    // for (std::vector<double>::iterator itr = ys.begin(); itr != ys.end(); itr++)
    // {
    //     std::cout << *itr << std::endl;
    // }
    // plt::plot(xs, ys);

    // plt::plot(ks);

    plt::subplot(2, 1, 1);
    plt::plot(xs, ys);
    plt::subplot(2, 1, 2);
    plt::plot(ks);
    plt::show();
    return 0;
}
