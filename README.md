# add-numbers
adding numbers like a toddler function in c++, 1+1=11, 2+2=22, 123+678= 123678

```cpp
#include <iostream>
#include <string>

int add(int num1, int num2) {
  return std::stoi(std::to_string(num1) + std::to_string(num2)); 
}
```

std::to_string(num1) converts the first number into a string, the plus sign (+) concatenates this string to std::to_string(num2). All of this is wrapped inside of an std::stoi (String To Integer) to turn it back into an integer.


these functions (std::stoi, std::to_string) are a c++ exclusive and so is the concatenation of strings by plus sign.
