#include "base/control.h"
#include "demo/demo.h"

int main() {
  runSFML(std::make_shared<Demo>());
}