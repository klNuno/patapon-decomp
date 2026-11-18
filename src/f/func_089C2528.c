#include "common.h"

extern s32 func_08985828(s32, s32);
void func_0898ABB8(s32, s32, s32, f32);
s32 func_089BD3D4(void *);
s32 func_089BD3DC(void *);
s32 *func_089BD3EC(void *);
void func_089D3BB8(void *, const void *, s32);
extern char D_08A0917C[];
extern char D_08A09240[];

void func_089C2528(s32 arg0, s32 arg1, void *arg2) {
    s32 *temp = func_089BD3EC(arg2);

    if (temp != NULL) {
        if (func_089BD3D4(arg2) && *temp != 0) {
            func_0898ABB8(func_08985828(arg0, 2), 2, 0, 0.0f);
            func_0898ABB8(func_08985828(arg0, 2), 3, 0, 0.2f);
            func_0898ABB8(func_08985828(arg0, 2), 4, 1, 0.4f);
            func_0898ABB8(func_08985828(arg0, 0), 9, 0, 0.0f);
            func_0898ABB8(func_08985828(arg0, 0), 2, 1, 0.8f);
            func_089D3BB8((u8 *)arg0 + 0x420, D_08A09240, 11);
        }
        if (func_089BD3DC(arg2)) {
            if (*temp != 0) {
                func_0898ABB8(func_08985828(arg0, 2), 6, 1, 0.0f);
                func_0898ABB8(func_08985828(arg0, 0), 10, 0, 0.0f);
                func_0898ABB8(func_08985828(arg0, 0), 2, 1, 0.8f);
            } else {
                func_0898ABB8(func_08985828(arg0, 2), 2, 0, 0.0f);
                func_0898ABB8(func_08985828(arg0, 2), 3, 0, 0.2f);
                func_0898ABB8(func_08985828(arg0, 2), 6, 1, 0.4f);
                func_0898ABB8(func_08985828(arg0, 0), 10, 0, 0.2f);
                func_0898ABB8(func_08985828(arg0, 0), 2, 1, 1.0f);
                func_0898ABB8(func_08985828(arg0, 1), 16, 0, 0.2f);
                func_0898ABB8(func_08985828(arg0, 1), 11, 1, 1.0f);
                func_089D3BB8((u8 *)arg0 + 0x420, D_08A0917C, 7);
            }
        }
    }
}
