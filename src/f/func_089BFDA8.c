#include "common.h"

typedef struct Elem {
    u8 pad_00[0x9D];
    u8 unk_9D;
} Elem;

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
} T0;

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14[0x2E8];
    s32 unk_2FC[0x100];
    u8 pad_6FC[0x700];
    T0 *unk_DFC;
} T;

Elem *func_088D6EBC(void *);
void func_0889BF08(Elem *, f32);
extern void func_0889B620(char *, s32);
extern int func_0889C514(s32, s32);
void func_0889C0A4(Elem *, f32, f32);
extern s32 func_0889B794(Elem *, s32);

void func_089BFDA8(T *arg0) {
    u32 temp2;
    u32 temp = arg0->unk_DFC->unk_08;
    Elem *temp1 = func_088D6EBC(arg0->unk_14);
    func_0889BF08(temp1, 0.0f);
    temp2 = (((temp >> 16) & 0xFF) - 1) * 4;
    func_0889B620((char *)temp1, ((T *)(temp2 + (u32)arg0))->unk_2FC[0]);
    temp1->unk_9D = 0;
    func_0889C514((s32)temp1, 5);
    func_0889C0A4(temp1, 1.0f + (f32)(s32)(temp & 0xFF) / 2.0f, (f32)(s32)((temp >> 8) & 0xFF) / 2.0f);
    func_0889B794(temp1, 0x50);
}
