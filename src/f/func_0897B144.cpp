#include "common.h"
extern "C" {
typedef struct Unk1 Unk1;
typedef struct Unk Unk;
void *func_0897B1D8(Unk1 *arg0, Unk *arg1);
void *func_08807190(s32, void *);
void *func_0897B18C(void *, void *);

struct A {};

static inline void unk_00(void *arg0, void *arg1, const A &) {
    void *temp = func_08807190(0x14, func_0897B1D8((Unk1 *)arg0, (Unk *)arg0));
    if (temp != NULL) {
        func_0897B18C(temp, arg1);
    }
}

void func_0897B144(void *arg0, void *arg1) {
    unk_00(arg0, arg1, A());
}
}
