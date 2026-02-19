#ifndef EEZ_LVGL_UI_SCREENS_H
#define EEZ_LVGL_UI_SCREENS_H

#include <lvgl.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _objects_t {
    lv_obj_t *main;
    lv_obj_t *menue;
    lv_obj_t *symbols;
    lv_obj_t *obj0;
    lv_obj_t *obj0__action_led;
    lv_obj_t *obj0__bt_menue;
    lv_obj_t *obj0__lb_time;
    lv_obj_t *obj0__lb_akku;
    lv_obj_t *obj0__lb_call;
    lv_obj_t *obj0__lb_ip;
    lv_obj_t *obj0__call_icon;
    lv_obj_t *obj0__wifi_icon;
    lv_obj_t *obj0__batt_icon;
    lv_obj_t *obj0__time_icon;
    lv_obj_t *obj0__bt_home;
    lv_obj_t *info_out;
    lv_obj_t *obj1;
    lv_obj_t *obj1__action_led;
    lv_obj_t *obj1__bt_menue;
    lv_obj_t *obj1__lb_time;
    lv_obj_t *obj1__lb_akku;
    lv_obj_t *obj1__lb_call;
    lv_obj_t *obj1__lb_ip;
    lv_obj_t *obj1__call_icon;
    lv_obj_t *obj1__wifi_icon;
    lv_obj_t *obj1__batt_icon;
    lv_obj_t *obj1__time_icon;
    lv_obj_t *obj1__bt_home;
    lv_obj_t *obj2;
    lv_obj_t *bt_messages;
    lv_obj_t *bt_write;
    lv_obj_t *bt_ping_pong;
    lv_obj_t *bt_setup;
    lv_obj_t *bt_default;
    lv_obj_t *bt_default_1;
    lv_obj_t *bt_default_2;
    lv_obj_t *bt_default_3;
    lv_obj_t *obj3;
    lv_obj_t *obj3__action_led;
    lv_obj_t *obj3__bt_menue;
    lv_obj_t *obj3__lb_time;
    lv_obj_t *obj3__lb_akku;
    lv_obj_t *obj3__lb_call;
    lv_obj_t *obj3__lb_ip;
    lv_obj_t *obj3__call_icon;
    lv_obj_t *obj3__wifi_icon;
    lv_obj_t *obj3__batt_icon;
    lv_obj_t *obj3__time_icon;
    lv_obj_t *obj3__bt_home;
    lv_obj_t *bt_default_4;
} objects_t;

extern objects_t objects;

enum ScreensEnum {
    SCREEN_ID_MAIN = 1,
    SCREEN_ID_MENUE = 2,
    SCREEN_ID_SYMBOLS = 3,
};

void create_screen_main();
void tick_screen_main();

void create_screen_menue();
void tick_screen_menue();

void create_screen_symbols();
void tick_screen_symbols();

void create_user_widget_top_bar(lv_obj_t *parent_obj, int startWidgetIndex);
void tick_user_widget_top_bar(int startWidgetIndex);

void tick_screen_by_id(enum ScreensEnum screenId);
void tick_screen(int screen_index);

void create_screens();


#ifdef __cplusplus
}
#endif

#endif /*EEZ_LVGL_UI_SCREENS_H*/