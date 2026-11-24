
#include <stdio.h>
#include <libdragon.h>

int main(void) {
    display_init(RESOLUTION_320x240, DEPTH_16_BPP,
                 2, GAMMA_NONE, FILTERS_RESAMPLE);

    console_init();
    console_set_render_mode(RENDER_MANUAL);

    while (1) {
        console_clear();
        printf("\n\n");
        printf("      MI JUEGO N64\n\n");
        printf("   MISION: ENCUENTRA AL\n");
        printf("       IMPOSTOR!\n\n");
        printf("       [  ROJO  ]\n\n");
        printf("   PROYECTO EN DESARROLLO\n");

        console_render();
        display_show(display_get());
    }

    return 0;
}

