#include <iostream>

class Cli {
private:
  ~Cli() {}

public:
  int args;
};

using namespace std;

class Bingus {
public:
  virtual void fun() { std::cout << "hey" << std::endl; }
};

class Arg : public Bingus {
  void fun() override { cout << "meooow" << endl; }
};

int main() {
  Bingus *b = new Arg();

  b->fun();
  return 0;
};
