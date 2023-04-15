#ifndef TOKEN_FUN_H_
#define TOKEN_FUN_H_

#include <iostream>

struct InputData {
    float velocity;
    bool enable;
};

struct OutputData {
    float deceleration;
};

class LongitudinalControl {
  public:
    LongitudinalControl();
    void Algorithm();
    void SetInput(InputData input_);
    InputData GetInputData();
    OutputData GetOutputData();

  private:
    InputData input_;
    OutputData output_;
};

#endif  // TOKEN_FUN_H_
