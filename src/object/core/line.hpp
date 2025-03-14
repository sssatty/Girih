#ifndef LINE
#define LINE

struct l_eqn {
  float a, b, c;
  l_eqn(float a, float b, float c) : a(a), b(b), c(c) {}
};

struct Line { 
  RGBA color;
  Line(RGBA color) : color(color) {}
  virtual ~Line() = default;
  virtual l_eqn eqn() const = 0;
};

#endif // !LINE
