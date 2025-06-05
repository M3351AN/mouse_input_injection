#include "mouse_input_injection.h"

int main() {
  // Usuage is same as mouse_event function in Windows API
  // Example usage: Click the left mouse button down (but not up)
  my_mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);

  system("pause");
  return 0;
}