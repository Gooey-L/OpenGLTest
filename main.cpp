#include <GLFW/glfw3.h>
#include <iostream>

#define SCR_WIDTH 640
#define SCR_HEIGHT 480 

void processInput() {

}

int main() {
  GLFWwindow* window;

  if(!glfwInit()) { 
    std::cout << "Error initialising glew\n";
    return -1;
  }

  window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Hello World", NULL, NULL);
  if(!window) {
    std::cout << "Error creating window\n";
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(window);

  while(!glfwWindowShouldClose(window)) {
    glClear(GL_COLOR_BUFFER_BIT);

    processInput();

    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5f, -0.5);
    glVertex2f(0.0f, 0.5);
    glVertex2f(0.5f, -0.5);
    glEnd();

    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  glfwTerminate();
  return 0;
}
