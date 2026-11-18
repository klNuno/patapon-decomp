#include "common.h"

extern "C" {

class C_088095F8 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10(s32, u8);
    virtual void v14();
    virtual void v18();
    virtual s32 v1C();
    u8 pad_04[0x20];
    u32 unk_24;
    u8 pad_28[0x14];
    s32 unk_3C;
    u8 pad_40[0xA];
    u8 unk_4A;
    u8 unk_4B;
};

typedef struct {
    u8 pad_00[0xC];
} S_088095F8;

extern char D_089F5FA0[];
extern char D_089F5FF4[];
extern char D_089F6010[];
void func_0880B068(void);
void *func_0880B0D4(S_088095F8 *, char *);
void __throw(char *, void *, void (*)(void));
void func_0880BF44(C_088095F8 *, s32);
s32 func_0880975C(C_088095F8 *);
void func_0880BF94(C_088095F8 *);
s32 func_08809734(C_088095F8 *);
void func_0880C044(C_088095F8 *);

void func_088095F8(C_088095F8 *arg0, s32 arg1) {
    S_088095F8 e1;
    S_088095F8 e2;

    if (arg0->v1C() < 0) {
        __throw(D_089F5FA0, func_0880B0D4(&e1, D_089F5FF4), func_0880B068);
    }
    func_0880BF44(arg0, arg1);
    if (arg0->unk_3C <= 0 || (arg0->unk_24 >> 1) < arg0->unk_3C) {
        if (arg0->unk_3C > 0 && arg0->unk_4B != 0) {
            arg0->v10(0, arg0->unk_4A);
        } else {
            __throw(D_089F5FA0, func_0880B0D4(&e2, D_089F6010), func_0880B068);
        }
    }
    if (func_0880975C(arg0) != 0) {
        func_0880BF94(arg0);
    } else if (func_08809734(arg0) != 0) {
        func_0880C044(arg0);
    }
}

}
