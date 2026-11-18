#include "common.h"

typedef struct {
    u8 pad_00[0x160];
    s32 unk_160;
} T;

extern s32 func_08985828(s32, s32);
void func_0898ABB8(s32, s32, s32, f32);
s32 func_089BD3DC(void *);

void func_089C2800(T *arg0, s32 arg1, void *arg2) {
    s32 temp;

    if (func_089BD3DC(arg2) != 0) {
        temp = func_08985828((s32)arg0, 2);
        func_0898ABB8(temp, 5, 0, 0.0f);
        temp = func_08985828((s32)arg0, 2);
        func_0898ABB8(temp, 6, 1, 2.0f);
        temp = func_08985828((s32)arg0, 0);
        func_0898ABB8(temp, 8, 0, 0.2f);
        temp = func_08985828((s32)arg0, 0);
        func_0898ABB8(temp, 2, 1, 1.46f);
        temp = func_08985828((s32)arg0, 1);
        func_0898ABB8(temp, 0x11, 0, 0.2f);
        func_0898ABB8(func_08985828((s32)arg0, 1), 2, 1, 1.46f);
        arg0->unk_160 = 6;
    }
}
