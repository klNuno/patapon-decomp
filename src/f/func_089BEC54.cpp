#include "common.h"

extern "C" {

class Mem_089BEC54 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
};

typedef struct {
    void *unk_00;
    u8 pad_04[0x8];
    Mem_089BEC54 unk_0C;
    u8 pad_10[0xA34];
    u8 unk_A44[0x4];
} Obj_089BEC54;

extern u8 D_08A48BA4[];
extern u8 D_08A48024[];
extern u8 D_08A478D8[];

void func_089BE34C(u8 *, s32);
void func_0886B11C(Mem_089BEC54 *, s32);
void func_0880416C(Obj_089BEC54 *);

Obj_089BEC54 *func_089BEC54(Obj_089BEC54 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_00 = D_08A48BA4;
        func_089BE34C(arg0->unk_A44, -1);
        if (&arg0->unk_0C != NULL) {
            *(void **)&arg0->unk_0C = D_08A48024;
            arg0->unk_0C.unk_14();
            func_0886B11C(&arg0->unk_0C, 0);
        }
        if (arg0 != NULL) {
            arg0->unk_00 = D_08A478D8;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
