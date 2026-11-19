#include "common.h"

extern "C" {

struct T {};

extern void func_08811A68(void *, void *, T);

void func_08811A4C(void *arg0, void *arg1) {
    T temp;
    func_08811A68(arg0, arg1, temp);
}

}
