cmake_minimum_required(VERSION 3.29.3)

project(OpenGLTest)
add_executable(OpenGLTest main.cpp)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)
target_link_libraries(OpenGLTest
  OpenGL::GL
  glfw
  GLEW::GLEW
)

