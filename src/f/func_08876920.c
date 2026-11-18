#include "common.h"

typedef struct Elem_08876920 {
    u8 pad_00[0x104];
} Elem_08876920;

typedef struct Obj_08876920 {
    s32 unk_00;
    u8 unk_04[0x14];
    Elem_08876920 unk_18[400];
    u8 pad_19658[0x680];
    u8 unk_19CD8[4];
} Obj_08876920;

void func_08875F24(void *);
void func_08875F9C(void *);
void func_08876058(void *);
void func_088766F0(Elem_08876920 *);

Obj_08876920 *func_08876920(Obj_08876920 *arg0) {
    Elem_08876920 *p;

    p = arg0->unk_18;
    do {
        func_088766F0(p);
        p++;
    } while (p < arg0->unk_18 + 400);
    func_08876058(arg0->unk_04);
    arg0->unk_00 = 0x7B;
    func_08876058(arg0->unk_04);
    func_08875F9C(arg0->unk_19CD8);
    func_08875F24(arg0->unk_19CD8);
    return arg0;
}
