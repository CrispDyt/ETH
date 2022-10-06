#include <iostream>

// Trafficlight class
class Trafficlight {
  // access declaration
  public: // the following is public
    // type member
    enum light {green, orange, red};
    // ctor (initialize state_ with ctor initializer list)
    Trafficlight(light l=red) : state_(l) {}
    // dtor (empty)
    ~Trafficlight() {}

    // function member declaration
    light state() const;
    void set_state(light);

  // access declaration
  private: // the following is hidden
    // data member
    light state_;
};

// function member definitions
Trafficlight::light Trafficlight::state() const {
  return state_;
}

void Trafficlight::set_state(Trafficlight::light l) {
  state_ = l;
}

int main() {

  // create Trafficlight object x with state green
  Trafficlight x(Trafficlight::green);

  // declare variable l of type Trafficlight::light (the enum!)
  Trafficlight::light l;

  // get state from Trafficlight object x and put it into l  
  l = x.state();

  // set state from Trafficlight object x to red
  x.set_state(Trafficlight::red);
  // or orange
  // x.set_state(Trafficlight::orange);
  // or green
  // x.set_state(Trafficlight::green);

  // let's query the state of the traffic light
  switch(x.state()) {
    case Trafficlight::red   : std::cout << "Stop it's red!\n";
                               break;
    case Trafficlight::orange: std::cout << "Stop if reasonable!\n";
                               break;
    case Trafficlight::green : std::cout << "Keep rollin!\n";
                               break;
    default: std::cout << "Broken?!\n";
             break;
  }

  return 0;

}
