MEMORY
{
    IROM    (r x) : ORIGIN = 0x08000000, LENGTH = 512k
    IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = 64k
}

INCLUDE cortex-m3.ld
