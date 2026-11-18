#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
} T_088F2F40;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

class O {
public:
    u8 pad_00[0x28];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual V2 *v28();
};

typedef struct {
    u8 pad_00[0x8];
    u8 unk_08[0x8];
    O *unk_10;
    u8 pad_14[4];
    V2 unk_18;
} S0;

void func_088F3FCC(S0 *);
void func_088F4040(u8 *);
char *func_088F3298(char *arg0, char *arg1);
void func_088F3028(T_088F2F40 *, void *);
void func_088E46C8(T_088F2F40 *, s32);
void func_088E249C(char *arg0, s8 arg1);
void func_088E24AC(char *arg0, s8 arg1);

void func_088F31F0(S0 *arg0, char *arg1) {
    T_088F2F40 sp10;
    O **p;

    func_088F3FCC(arg0);
    func_088F4040((u8 *)arg0);
    func_088F3298((char *)&sp10, arg1);
    func_088F3028(&sp10, arg0->unk_08);
    func_088E46C8(&sp10, -1);
    p = &arg0->unk_10;
    func_088E249C((char *)*p, 1);
    func_088E24AC((char *)*p, 1);
    if (arg0->unk_10 != NULL) {
        arg0->unk_18 = *(*p)->v28();
    }
}

}
