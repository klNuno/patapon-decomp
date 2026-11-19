#include "common.h"

typedef struct T T;
typedef struct S_0895D7FC S_0895D7FC;

extern S_0895D7FC *D_08AD9750[];
extern s32 D_08AD9754[];
s32 sceKernelGetThreadId(void);
s32 sceKernelChangeThreadPriority(s32, s32);
void *func_08827A50(s32, s32);
S_0895D7FC *func_0895D7FC(S_0895D7FC *, s32);
s32 func_0895BA60(T *);

s32 func_0893F3C8(void *arg0, s32 arg1)
{
    S_0895D7FC *p;

    sceKernelChangeThreadPriority(sceKernelGetThreadId(), 0x13);
    if (D_08AD9750[0] == NULL) {
        D_08AD9754[0] = arg1;
        p = (S_0895D7FC *)func_08827A50(0x434, arg1);
        if (p != NULL) {
            p = func_0895D7FC(p, arg1);
        }
        D_08AD9750[0] = p;
        func_0895BA60((T *)p);
    }
    return 1;
}
