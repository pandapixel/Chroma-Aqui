#pragma bank 5
#include "data_ptrs.h"
#include "banks.h"

#ifdef __EMSCRIPTEN__
const unsigned int bank_data_ptrs[] = {
0,0,0,0,0,0,&bank_6_data
};
#endif

const BankPtr tileset_bank_ptrs[] = {
{0x06,0x146F}
};

const BankPtr background_bank_ptrs[] = {
{0x06,0x1AD8},{0x06,0x1C43}
};

const BankPtr background_attr_bank_ptrs[] = {
{0x06,0x24C5},{0x06,0x262D}
};

const BankPtr palette_bank_ptrs[] = {
{0x06,0x1A70},{0x06,0x1A78},{0x06,0x1A80},{0x06,0x1AB0}
};

const BankPtr sprite_bank_ptrs[] = {
{0x06,0x1DAE},{0x06,0x1F2F},{0x06,0x20B0},{0x06,0x20F1},{0x06,0x2132},{0x06,0x2173},{0x06,0x21B4}
};

const BankPtr scene_bank_ptrs[] = {
{0x06,0x2795},{0x06,0x27D7}
};

const BankPtr collision_bank_ptrs[] = {
{0x06,0x21F5},{0x06,0x235D}
};

const BankPtr avatar_bank_ptrs[] = {
{0x00,0x0000}
};

const unsigned int music_tracks[] = {
0, 0
};

const unsigned char music_banks[] = {
0, 0
};

unsigned int start_scene_index = 0x0000;
int start_scene_x = 0x0008;
int start_scene_y = 0x0038;

char start_scene_dir_x = 1;
char start_scene_dir_y = 0;
unsigned int start_player_sprite = 0;
unsigned char start_player_move_speed = 1;
unsigned char start_player_anim_speed = 3;
unsigned char start_fade_style = 1;
unsigned char script_variables[500] = { 0 };
