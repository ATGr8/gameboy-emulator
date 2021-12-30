#pragma once

#include <common.h>

typedef struct {
    bool paused;
    bool running;
    u64 ticks;
} emu_context; // context created so we do not have global variables everywhere

int emu_run(int argc, char **argv);

emu_context *emu_get_context();
