#pragma once

#include <drivers/screen.h>
#include <drivers/sound.h>
#include <drivers/time.h>
#include <drivers/keyboard.h>
#include <drivers/vga.h>
#include <drivers/serial.h>
#include "../cpu/type.h"
#include "../cpu/timer.h"
#include "../cpu/ports.h"
#include "../cpu/isr.h"
#include "../multiboot.h"
#include <string.h>
#include <mem.h>
#include <math.h>
#include <stddef.h>

void user_input(char* input);