#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Vec_0895CCAC;

typedef struct {
    u8 pad_00[0x44];
    Vec_0895CCAC unk_44;
} Sub_0895CCAC;

typedef struct {
    u8 pad_00[0xC];
    Sub_0895CCAC unk_0C;
} Obj_0895CCAC;

void func_0880416C(void *);
void func_0895CE84(Obj_0895CCAC *);

Obj_0895CCAC *func_0895CCAC(Obj_0895CCAC *arg0, s16 arg1) {
    s32 *p;
    Vec_0895CCAC *v;
    Sub_0895CCAC *q;

    if (arg0 != NULL) {
        func_0895CE84(arg0);
        q = &arg0->unk_0C;
        if (q != NULL) {
            v = &arg0->unk_0C.unk_44;
            p = arg0->unk_0C.unk_44.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_0C.unk_44.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_0C.unk_44.unk_04);
            }
            arg0->unk_0C.unk_44.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
