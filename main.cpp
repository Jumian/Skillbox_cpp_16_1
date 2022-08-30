#include <iostream>

int main() {
    double speed=0,deltaSpeed=0;
    double epsylon=0.01;
    char a[100];

    do {
        std::cout << "Input delta speed: ";
        std::cin >> deltaSpeed;
        speed += deltaSpeed;
        if (speed> 150) speed = 150.;
        else if (speed < 0) speed =0;
        std::sprintf(a, "%.1f", speed);
        std::cout << a << std::endl;
    } while (!(speed>-epsylon&&speed<epsylon));

}
