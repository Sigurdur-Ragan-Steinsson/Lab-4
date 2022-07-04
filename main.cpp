#include <iostream>

using namespace std;

int main(void) {
float pi = 3.14159265359;
float x,y;
cout << "Enter value for x: ";
cin >> x;
float xSquared = x * x;
float piSquared = pi * pi;

// tip for next time, break the denoms into vars, makes it cleaner and easier to fix

y = (xSquared / (piSquared * (xSquared + .5))) * (1 + (xSquared / (piSquared * (xSquared - .5) * (xSquared - .5)))); 

cout << "y = " << y;
return 0;
}