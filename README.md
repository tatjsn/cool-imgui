# Minimal Imgui Example using Conan

Port of [imgui official example](https://github.com/ocornut/imgui/tree/master/examples/example_glfw_opengl3) and [conan official example](https://github.com/conan-io/examples/tree/master/libraries/dear-imgui/basic) with smallest configuration as possible.

## How to build
```
mkdir build
cd build
conan install ..
cmake ..
cmake --build .
```

## Note
Requires remote repository to build:
```
conan remote add gl3w https://api.bintray.com/conan/tuebel/gl3w
```