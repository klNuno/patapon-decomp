#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} E_088DD3B0;

typedef struct {
    u8 pad_00[0x104];
    E_088DD3B0 *unk_104;
    s32 unk_108;
} S_088DD3B0;

void *func_08807190(s32, void *);
void func_08853D70(void *, E_088DD3B0 *);
void func_088D8DEC(S_088DD3B0 *);
E_088DD3B0 *func_088DD44C(S_088DD3B0 *);

S_088DD3B0 *func_088DD3B0(S_088DD3B0 *arg0, S_088DD3B0 *arg1) {
    E_088DD3B0 *src;
    E_088DD3B0 *end;
    E_088DD3B0 *dst;
    void *p;

    if (arg0 != arg1) {
        src = arg1->unk_104;
        end = src + arg1->unk_108;
        func_088D8DEC(arg0);
        dst = func_088DD44C(arg0);
        for (; src != end; src++, dst++) {
            if ((p = func_08807190(0x10, dst)) != NULL) {
                func_08853D70(p, src);
            }
            arg0->unk_108++;
        }
    }
    return arg0;
}
