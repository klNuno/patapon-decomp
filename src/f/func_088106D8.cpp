#include "common.h"

extern "C" {

typedef struct {
    s8 unk_00;
} S;

void func_088106F8(void *, void *, S);

void func_088106D8(void *arg0, void *arg1) {
    S temp = { 0 };
    func_088106F8(arg0, arg1, temp);
}

}
