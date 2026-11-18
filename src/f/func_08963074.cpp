#include "common.h"

extern "C" {

class B_08963074 {
public:
    u8 pad_00[8];
    virtual void v0();
    virtual void v1();
};

class O_08963074 : public B_08963074 {
public:
    u8 pad_0C[0x20 - 0xC];
    s32 unk_20;
    void *unk_24;
    u8 pad_28[8];
    u8 unk_30[0x160 - 0x30];
    u8 unk_160[0x290 - 0x160];
    s32 unk_290;
};

extern u8 D_08A47A38[];
extern u8 D_08A47B84[];
extern u8 D_08A47BA0[];
extern u8 D_08A47BF0[];
extern u8 D_08A47C08[];

void func_0880406C(void *, void *, void *, s32, s32);
void func_0885C520(void *);
void func_088D23FC(void);
void func_0895EFB8(O_08963074 *);
void func_08964290(void *);
void func_08964464(void *);
void func_089644A4(void *);
void func_08964564(void);
void func_089645D4(void);
void func_089645F8(void);
void func_089646B4(void);
void func_089646CC(void *);
void func_089646E4(void *);
void func_089648B8(void *);
void func_089648F8(void *);
void func_089649B8(void);
void func_08964A28(void);
void func_08964A4C(void);
void func_08964A64(void *);

O_08963074 *func_08963074(O_08963074 *arg0) {
    u8 *p;

    func_0895EFB8(arg0);
    arg0->unk_24 = D_08A47A38;
    arg0->unk_20 = 0;
    *(void **)((u8 *)arg0 + 8) = D_08A47B84;
    arg0->unk_24 = D_08A47BA0;
    p = arg0->unk_30;
    func_0885C520(p);
    *(void **)p = D_08A47C08;
    func_08964A64(p + 0x10);
    func_0880406C(p + 0x20, (void *)func_08964A4C, (void *)func_088D23FC, 0x10, 3);
    func_0880406C(p + 0x50, (void *)func_08964A28, (void *)func_089649B8, 0x20, 3);
    func_089648F8(p + 0xB0);
    func_089648F8(p + 0xD8);
    func_089648B8(p + 0x100);
    func_089646E4(p);
    *(s32 *)(p + 0x10) = 3;
    p = arg0->unk_160;
    func_0885C520(p);
    *(void **)p = D_08A47BF0;
    func_089646CC(p + 0x10);
    func_0880406C(p + 0x20, (void *)func_089646B4, (void *)func_089645F8, 0x10, 3);
    func_0880406C(p + 0x50, (void *)func_089645D4, (void *)func_08964564, 0x20, 3);
    func_089644A4(p + 0xB0);
    func_089644A4(p + 0xD8);
    func_08964464(p + 0x100);
    func_08964290(p);
    *(s32 *)(p + 0x10) = 3;
    arg0->unk_290 = 0;
    arg0->v1();
    return arg0;
}

}
