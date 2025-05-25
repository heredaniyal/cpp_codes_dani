#include <iostream>
using namespace std;
#if __cplusplus == 202002L
    #define CPP_VERSION "C++20"
#elif __cplusplus == 201703L
    #define CPP_VERSION "C++17"
#elif __cplusplus == 201402L
    #define CPP_VERSION "C++14"
#elif __cplusplus == 201103L
    #define CPP_VERSION "C++11"
#elif __cplusplus == 199711L
    #define CPP_VERSION "C++98"
#else
    #define CPP_VERSION "Unknown C++ version"
#endif

int main() {
    cout << "C++ Version: " << CPP_VERSION << endl;
    return 0;
}
