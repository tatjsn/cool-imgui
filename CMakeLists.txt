project(cool-imgui CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(cool-imgui
                main.cpp
                app.cpp
                db-impl.cc
                bindings/imgui_impl_glfw.cpp
                bindings/imgui_impl_opengl3.cpp)
target_link_libraries(cool-imgui ${CONAN_LIBS})
set_target_properties(cool-imgui PROPERTIES CXX_STANDARD 17)