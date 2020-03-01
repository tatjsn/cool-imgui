project(cool-imgui CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()
include_directories(/usr/local/Cellar/protobuf/3.11.3/include)
link_directories(/usr/local/Cellar/protobuf/3.11.3/lib)

add_executable(cool-imgui
                main.cpp
                bindings/imgui_impl_glfw.cpp
                bindings/imgui_impl_opengl3.cpp
                out/httplib.cc
                out/httplib.h
                out/foo.pb.cc
                out/foo.pb.h
                )
target_link_libraries(cool-imgui ${CONAN_LIBS} protobuf)
set_target_properties(cool-imgui PROPERTIES CXX_STANDARD 17)