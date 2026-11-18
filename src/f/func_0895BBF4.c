#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Vec_0895BBF4;

typedef struct {
    u8 pad_00[0x44];
    Vec_0895BBF4 unk_44;
} M_0895BBF4;

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
    M_0895BBF4 unk_18;
    M_0895BBF4 unk_64;
} Obj_0895BBF4;

extern u8 D_08A479D4[];
void func_0895BE10(Obj_0895BBF4 *);
void func_0895B9E8(Obj_0895BBF4 *, s32);
void func_0880416C(void *);

Obj_0895BBF4 *func_0895BBF4(Obj_0895BBF4 *arg0, s16 arg1) {
    s32 *p;
    Vec_0895BBF4 *v;

    if (arg0 != NULL) {
        arg0->unk_14 = D_08A479D4;
        func_0895BE10(arg0);
        if (&arg0->unk_64 != NULL) {
            p = arg0->unk_64.unk_44.unk_00;
            v = &arg0->unk_64.unk_44;
            if ((u32)p != (u32)(p + arg0->unk_64.unk_44.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_64.unk_44.unk_04);
            }
            arg0->unk_64.unk_44.unk_04 = 0;
        }
        if (&arg0->unk_18 != NULL) {
            p = arg0->unk_18.unk_44.unk_00;
            v = &arg0->unk_18.unk_44;
            if ((u32)p != (u32)(p + arg0->unk_18.unk_44.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_18.unk_44.unk_04);
            }
            arg0->unk_18.unk_44.unk_04 = 0;
        }
        func_0895B9E8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
