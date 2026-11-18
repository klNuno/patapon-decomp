typedef int s32;
typedef unsigned int u32;

extern s32 func_088A4838(s32, s32);
extern s32 func_088D71CC(s32, s32);

void func_0887953C(char *arg0, s32 arg1) {
    u32 temp_v1;

    func_088A4838((int) (arg0 + 0x18), arg1);
    func_088D71CC((int) (arg0 + 0x544), arg1);
    temp_v1 = *(u32 *)(arg0 + 0x830);
    if ((u32) arg1 < temp_v1) {
        *(u32 *)(arg0 + 0x830) = (u32) (temp_v1 - arg1);
        return;
    }
    *(u32 *)(arg0 + 0x830) = 0U;
}
