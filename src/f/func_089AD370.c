#include "common.h"

typedef struct {
    u8 pad_00[0x1510];
    s32 unk_1510;
} Obj0_089AD370;

typedef struct {
    Obj0_089AD370 *unk_00;
    u8 pad_04[0x1C];
    s32 unk_20;
    void *unk_24;
} Obj_089AD370;

void *func_08827A50(s32, s32);
void *func_089ADAF0(void *, Obj0_089AD370 *);
void *func_089AD994(void *, Obj0_089AD370 *);
void *func_089AD800(void *, Obj0_089AD370 *);
void *func_089AD6C4(void *, Obj0_089AD370 *);

void func_089AD370(Obj_089AD370 *arg0, s32 arg1) {
    void *p;

    switch (arg1) {
    case 0:
        p = func_08827A50(8, arg0->unk_00->unk_1510);
        if (p != NULL) {
            p = func_089ADAF0(p, arg0->unk_00);
        }
        arg0->unk_24 = p;
        break;
    case 1:
        p = func_08827A50(8, arg0->unk_00->unk_1510);
        if (p != NULL) {
            p = func_089AD994(p, arg0->unk_00);
        }
        arg0->unk_24 = p;
        break;
    case 2:
        p = func_08827A50(8, arg0->unk_00->unk_1510);
        if (p != NULL) {
            p = func_089AD800(p, arg0->unk_00);
        }
        arg0->unk_24 = p;
        break;
    case 3:
        p = func_08827A50(8, arg0->unk_00->unk_1510);
        if (p != NULL) {
            p = func_089AD6C4(p, arg0->unk_00);
        }
        arg0->unk_24 = p;
        break;
    }
    arg0->unk_20 = arg1;
}
