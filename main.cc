
#include <utility>

struct S
{
    S();
    int i;
};

void foo(S&&);


int func()
{
    S s;
    foo(std::move(s));
    return s.i;
}

