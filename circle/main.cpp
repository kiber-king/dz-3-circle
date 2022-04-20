#include "circle.h"

int main()
{
    float rad = 5;
    Circle circle(rad);
    circle.set_r(rad);
    std::cout << "Radius: " << circle.get_r() << "\n" << "P: " << circle.get_perim() <<
        "\n" << "S: " << circle.get_pl() << "\n";
}

