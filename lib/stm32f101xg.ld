MEMORY
{
    IROM    (r x) : ORIGIN = 0x08000000, LENGTH = 1024k
    IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = 80k
}

INCLUDE cortex-m3.ld
