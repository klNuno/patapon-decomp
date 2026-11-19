#include "common.h"

extern "C" {

struct T {};

extern void func_08811D98(void *, void *, T);

void func_08811D7C(void *arg0, void *arg1) {
    T temp;
    func_08811D98(arg0, arg1, temp);
}

}
