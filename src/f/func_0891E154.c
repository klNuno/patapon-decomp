#include "common.h"

typedef struct {
    u8 pad_00[0x1C];
} Elem_0891E154;

typedef struct {
    Elem_0891E154 *unk_00;
    s32 unk_04;
} Vec_0891E154;

typedef struct {
    u8 pad_00[0x2890];
    s32 unk_2890;
    s32 unk_2894;
    u8 pad_2898[0x28C4 - 0x2898];
    s32 unk_28C4;
    s32 unk_28C8;
    s32 unk_28CC;
    s32 unk_28D0;
    u8 unk_28D4;
    u8 pad_28D5[0x44DC - 0x28D5];
    Vec_0891E154 unk_44DC;
    Elem_0891E154 *unk_44E4;
} Obj_0891E154;

void func_0891E154(Obj_0891E154 *arg0) {
    Vec_0891E154 *temp;
    Elem_0891E154 *temp2;
    s32 *size;

    size = &arg0->unk_44DC.unk_04;
    arg0->unk_44E4 = arg0->unk_44DC.unk_00 + arg0->unk_44DC.unk_04;
    temp = &arg0->unk_44DC;
    temp2 = arg0->unk_44DC.unk_00;
    if ((u32)temp2 != (u32)(temp2 + arg0->unk_44DC.unk_04)) {
        do {
            temp2++;
        } while (temp2 != temp->unk_00 + *size);
    }
    arg0->unk_44DC.unk_04 = 0;
    arg0->unk_28C4 = 0;
    arg0->unk_28D0 = 0;
    arg0->unk_28CC = 0;
    arg0->unk_28D4 = 0;
    arg0->unk_28C8 = 0;
    arg0->unk_2890 = 0;
    arg0->unk_2894 = 0;
}
