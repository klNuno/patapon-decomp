#include "common.h"

extern "C" {

typedef struct {
    s8 unk_00;
} S;

void func_088127C4(void *, void *, void *, S);

void func_088127A4(void *arg0, void *arg1, void *arg2) {
    S temp = { 0 };
    func_088127C4(arg0, arg1, arg2, temp);
}

}
