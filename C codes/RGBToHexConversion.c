#include <stdio.h>

void rgb (int r, int g, int b, char hex[6 + 1])
{
  //Test if the colors in the range of [0.255]
    r = (r < 0) ? 0 : (r > 255) ? 255 : r;
    g = (g < 0) ? 0 : (g > 255) ? 255 : g;
    b = (b < 0) ? 0 : (b > 255) ? 255 : b;

  //Set RGB values with 2 hex values for each color in the output
  sprintf(hex, "%02X%02X%02X" , r, g, b);
}

int main()
{
  char hexad[7];
  rgb(270,128,-5,hexad);
  printf("HEXA: %s\n", hexad);
  return 0;
}