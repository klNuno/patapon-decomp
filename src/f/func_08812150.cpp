#include "common.h"

extern "C" {

typedef struct {
    s8 unk_00;
} S;

void func_08812170(void *, void *, S);

void func_08812150(void *arg0, void *arg1) {
    S temp = { 0 };
    func_08812170(arg0, arg1, temp);
}

}
