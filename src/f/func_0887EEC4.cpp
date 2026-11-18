#include "common.h"

extern "C" {

class C_0887EEC4 {
public:
    u8 pad_00[0x100];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
};

typedef struct {
    u8 pad_00[0x100];
    void *unk_100;
    u8 pad_104[0xC];
    u8 unk_110[0x440];
    u8 unk_550[0x1450];
    u8 unk_19A0[0x60];
    u8 unk_1A00[0xD0];
    u8 unk_1AD0[4];
} Obj_0887EEC4;

void func_0880416C(void *);
void func_0885C534(void *, s32);
void func_08864BF8(void *, s32);
void func_0887F258(void *, s32);
void func_0887F6D8(void *, s32);
void func_089209A8(void *, s32);
void func_08925560(void *, s32);
extern u8 D_08A452EC[];

Obj_0887EEC4 *func_0887EEC4(Obj_0887EEC4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_100 = D_08A452EC;
        ((C_0887EEC4 *)arg0)->v18();
        func_089209A8(arg0->unk_1AD0, -1);
        func_0887F6D8(arg0->unk_1A00, -1);
        func_0887F258(arg0->unk_19A0, -1);
        func_0885C534(arg0->unk_550, -1);
        func_08925560(arg0->unk_110, 0);
        func_08864BF8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
