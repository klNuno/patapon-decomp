#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    f32 unk_04;
    char unk_08[1];
} T;

void func_08822B3C(char *, const char *);
extern char D_089EBB64[];

T *func_08964464(T *arg0) {
    arg0->unk_04 = 1.0f;
    arg0->unk_00 = 0;
    func_08822B3C(arg0->unk_08, D_089EBB64);
    return arg0;
}
