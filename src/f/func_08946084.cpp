#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
} U;

typedef struct {
    U *unk_00;
} T;

void func_089460F0(T *);
void func_089468C4(T *);
void func_089473C0(T *);

void func_08946084(T *arg0) {
    switch (arg0->unk_00->unk_00) {
    case 0:
        func_089460F0(arg0);
        return;
    case 1:
        func_089468C4(arg0);
        return;
    case 2:
        func_089473C0(arg0);
        return;
    }
}
}
