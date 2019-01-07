# frc-utils
Collection of useful tools/functions for FRC

```cpp
double deadzone(double r, double v) { return (v<r?0:v-r+(v*(v-r))); } //if input (v) is less then range (r), return 0. else, proportionally scale v to from 0 to 1 starting at r
```