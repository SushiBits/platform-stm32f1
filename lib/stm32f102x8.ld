MEMORY
{
    IROM    (r x) : ORIGIN = 0x08000000, LENGTH = 64k
    IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = 10k
}

INCLUDE cortex-m3.ld
