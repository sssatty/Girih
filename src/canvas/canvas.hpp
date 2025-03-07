#ifndef CANVAS_HPP
#define CANVAS_HPP

#include <vector>
#include "../object/obj.hpp"

#include <bits/stdc++.h> 

using namespace std;
struct RGBA {
    float r, g, b, a;
    RGBA() : r(255), g(255), b(255), a(255) {}
    RGBA(float _r, float _g, float _b, float _a)
      : r(_r), g(_g), b(_b), a(_a) {}

    RGBA operator+(const RGBA& other) const {
        return {r + other.r, g + other.g, b + other.b, a + other.a};
    }

    RGBA operator-(const RGBA& other) const {
        return {r - other.r, g - other.g, b - other.b, a - other.a};
    }

    RGBA operator*(float f) const {
        return {r*f, g*f, b*f, a*f};
    }

    RGBA operator/(float f) const {
        return {r/f, g/f, b/f, a*f};
    }
};

class canvas {
public:
  int SIZE, LINE_THICKNESS=2;
  std::vector<std::vector<RGBA>> pix;

  canvas(int s = 1000);
  void draw(vec2 p, const RGBA &color);
  void visl(vec2 p);
  void render(const char* filename);
};

#endif
