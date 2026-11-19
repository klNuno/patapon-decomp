#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[7];
    u32 unk_08;
} Obj;

typedef struct {
    u8 pad_00[0x14];
    u32 unk_14;
    u8 pad_18[0x18];
} Entry;

void func_088D1938(Obj **arg0, Obj *arg1) {
    u32 i;
    u32 off;
    Obj *temp;
    Entry *entry;

    temp = (*arg0 = arg1);
    if (arg1->unk_00 != 0x23) {
        i = 0;
        if (i < temp->unk_08) {
            off = 0;
            do {
                entry = (Entry *)((u8 *)temp + off);
                ++i;
                entry->unk_14 = (u32)((u8 *)arg1 + entry->unk_14);
                temp = *arg0;
                off += sizeof(*entry);
            } while (i < temp->unk_08);
        }
        temp->unk_00 = 0x23;
    }
}
