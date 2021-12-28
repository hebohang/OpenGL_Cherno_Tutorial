#pragma once

#include <GL/glew.h>

#define ASSERT(x) if (!(x)) __debugbreak(); // 前面的 __ 是 compiler intrinsic
#define GLCall(x) GLClearError();\
    x;\
    ASSERT(GLLogCall(#x, __FILE__, __LINE__))

void GLClearError();

bool GLLogCall(const char* function, const char* file, int line);