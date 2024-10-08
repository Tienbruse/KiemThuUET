#include <iostream>
using namespace std;

int SoTienGui, ThoiGianGui;

int input(int SoTienGui, int ThoiGianGui) {
    float LaiSuat = 0;

    if (SoTienGui < 10) LaiSuat = 3;
    else if (SoTienGui >= 10 && SoTienGui < 50) LaiSuat = 4;
    else if (SoTienGui >= 50 && SoTienGui < 100) LaiSuat = 5;
    else LaiSuat = 6;

    if (ThoiGianGui >= 6 && ThoiGianGui < 12) LaiSuat = LaiSuat + 0.5;
    else if (ThoiGianGui >= 12) LaiSuat += 1;

    int TienLai = SoTienGui * (LaiSuat / 100) * (ThoiGianGui / 12) * 1000000;

    return TienLai;
}

int main() {
    int SoTienGui, ThoiGianGui;
    std::cin >> SoTienGui >> ThoiGianGui;
    std::cout << input(SoTienGui, ThoiGianGui) << '\n';
    return 0;
}