#include "common.h"

typedef struct A A;

typedef struct {
    u8 pad_00[0x380];
    u8 unk_380;
} T;

s32 func_08976100(s32, char *);
s32 func_089608FC(A *arg0, void *arg1);
extern s32 func_08893374(s32);
extern char D_089FA394[];

void func_08893328(T *arg0) {
    func_089608FC((A *)arg0, (void *)func_08976100(0, D_089FA394));
    func_08893374((s32)arg0);
    arg0->unk_380 = 1;
}
