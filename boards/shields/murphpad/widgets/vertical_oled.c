#include <lvgl.h>
#include <stdio.h>

static lv_obj_t *label;

void vertical_oled_init(lv_obj_t *parent)
{
    label = lv_label_create(parent);

    lv_label_set_text(label,
        "B\n"
        "T\n"
        "\n"
        "8\n"
        "7\n"
        "%");

    lv_obj_set_style_text_font(
        label,
        &lv_font_montserrat_18,
        LV_PART_MAIN
    );

    lv_obj_center(label);
}
