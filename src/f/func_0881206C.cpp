#include "common.h"

extern "C" {
struct T {
    s8 unk_00;
};

extern void func_0881208C(char *, T);

void func_0881206C(char *arg0)
{
    T temp = { 0 };
    func_0881208C(arg0, temp);
}
}
