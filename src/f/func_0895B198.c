typedef int s32;

extern int sceKernelDeleteMsgPipe(s32);

void func_0895B198(char *arg0) {
    s32 temp_a0;

    temp_a0 = *(s32 *)(arg0 + 0);
    if (temp_a0 > 0) {
        sceKernelDeleteMsgPipe(temp_a0);
    }
    *(s32 *)(arg0 + 8) = 0;
    *(s32 *)(arg0 + 4) = 0;
    *(s32 *)(arg0 + 0) = 0;
}
