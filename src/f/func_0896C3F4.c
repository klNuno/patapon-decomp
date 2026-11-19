#include "common.h"

typedef struct {
    u8 unk_00[0x24];
} Temp;

typedef struct {
    s32 unk_00;
    Temp unk_04;
} Obj;

extern void func_0896C4E4(Temp *, Temp *);
extern void func_0896C460(Temp *, Temp *);
extern void func_0896BDBC(Temp *, s16);

void func_0896C3F4(Obj *arg0, Obj *arg1)
{
    Temp temp;
    s32 a = arg0->unk_00;
    s32 b = arg1->unk_00;
    arg0->unk_00 = b;
    arg1->unk_00 = a;
    func_0896C4E4(&temp, &arg0->unk_04);
    func_0896C460(&arg0->unk_04, &arg1->unk_04);
    func_0896C460(&arg1->unk_04, &temp);
    func_0896BDBC(&temp, -1);
}
