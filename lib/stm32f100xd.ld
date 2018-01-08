MEMORY
{
    IROM    (r x) : ORIGIN = 0x08000000, LENGTH = 384k
    IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = 32k
}

INCLUDE cortex-m3.ld
