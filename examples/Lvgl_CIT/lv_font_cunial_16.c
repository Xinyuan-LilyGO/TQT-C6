#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef LV_FONT_CUNIAL_16
#define LV_FONT_CUNIAL_16 1
#endif

#if LV_FONT_CUNIAL_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0041 "A" */
    0x0, 0x2, 0xef, 0xf8, 0x0, 0x0, 0x0, 0x8,
    0xff, 0xff, 0x0, 0x0, 0x0, 0xe, 0xff, 0xff,
    0x50, 0x0, 0x0, 0x4f, 0xf8, 0xff, 0xb0, 0x0,
    0x0, 0xaf, 0xf2, 0xbf, 0xf1, 0x0, 0x0, 0xff,
    0xc0, 0x5f, 0xf7, 0x0, 0x5, 0xff, 0x72, 0x7f,
    0xfd, 0x0, 0xb, 0xff, 0xff, 0xff, 0xff, 0x30,
    0x1f, 0xff, 0xff, 0xdb, 0xff, 0x90, 0x7f, 0xf6,
    0x20, 0x1, 0xff, 0xe0, 0xcf, 0xe2, 0x0, 0x0,
    0x9f, 0xf3,

    /* U+0042 "B" */
    0x7f, 0xff, 0xff, 0xea, 0x20, 0xef, 0xff, 0xff,
    0xff, 0xe1, 0xef, 0xd1, 0x13, 0xef, 0xf4, 0xef,
    0xf2, 0x2, 0xef, 0xf3, 0xef, 0xff, 0xff, 0xff,
    0x90, 0xef, 0xff, 0xff, 0xff, 0xb0, 0xef, 0xd0,
    0x2, 0xdf, 0xf6, 0xef, 0xf1, 0x0, 0x9f, 0xf9,
    0xef, 0xf3, 0x13, 0xdf, 0xf6, 0xef, 0xff, 0xff,
    0xff, 0xe1, 0xdf, 0xff, 0xff, 0xe9, 0x20,

    /* U+0043 "C" */
    0x0, 0x29, 0xdf, 0xec, 0x60, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xb0, 0xd, 0xff, 0xc6, 0x8f, 0xff,
    0x61, 0xff, 0xf1, 0x0, 0x7f, 0xfa, 0x4f, 0xfd,
    0x0, 0x0, 0x0, 0x4, 0xff, 0xd0, 0x0, 0x0,
    0x0, 0x4f, 0xfd, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xf1, 0x0, 0x7f, 0xfa, 0xd, 0xff, 0xc6, 0x8f,
    0xff, 0x60, 0x3f, 0xff, 0xff, 0xff, 0xb0, 0x0,
    0x29, 0xdf, 0xec, 0x60, 0x0,

    /* U+0044 "D" */
    0x6f, 0xff, 0xfe, 0xc5, 0x0, 0xef, 0xff, 0xff,
    0xff, 0xa0, 0xef, 0xd5, 0x58, 0xff, 0xf4, 0xef,
    0xf1, 0x0, 0xaf, 0xf8, 0xef, 0xf1, 0x0, 0x5f,
    0xfb, 0xef, 0xf1, 0x0, 0x4f, 0xfb, 0xef, 0xf1,
    0x0, 0x5f, 0xfb, 0xef, 0xf1, 0x0, 0x8f, 0xf8,
    0xef, 0xf6, 0x57, 0xff, 0xf5, 0xef, 0xff, 0xff,
    0xff, 0xb0, 0xdf, 0xff, 0xfe, 0xc6, 0x0,

    /* U+0045 "E" */
    0x6f, 0xff, 0xff, 0xff, 0x5d, 0xff, 0xff, 0xff,
    0xf6, 0xef, 0xc4, 0x44, 0x44, 0x1e, 0xff, 0x0,
    0x0, 0x0, 0xef, 0xf4, 0x33, 0x30, 0xe, 0xff,
    0xff, 0xff, 0x50, 0xef, 0xff, 0xff, 0xf4, 0xe,
    0xfd, 0x0, 0x0, 0x0, 0xef, 0xf6, 0x44, 0x44,
    0x1e, 0xff, 0xff, 0xff, 0xf8, 0xdf, 0xff, 0xff,
    0xff, 0x80,

    /* U+0046 "F" */
    0x6f, 0xff, 0xff, 0xff, 0x4d, 0xff, 0xff, 0xff,
    0xf5, 0xdf, 0xd6, 0x66, 0x66, 0x1d, 0xff, 0x0,
    0x0, 0x0, 0xdf, 0xf7, 0x66, 0x60, 0xd, 0xff,
    0xff, 0xff, 0x40, 0xdf, 0xff, 0xff, 0xf4, 0xd,
    0xfc, 0x0, 0x0, 0x0, 0xdf, 0xf0, 0x0, 0x0,
    0xd, 0xff, 0x0, 0x0, 0x0, 0xcf, 0xf0, 0x0,
    0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x29, 0xdf, 0xeb, 0x70, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0xc1, 0xd, 0xff, 0xc6, 0x7f, 0xff,
    0x80, 0xff, 0xf2, 0x0, 0x6b, 0xb8, 0x3f, 0xfd,
    0x0, 0x0, 0x0, 0x3, 0xff, 0xd0, 0x8, 0xff,
    0xf9, 0x3f, 0xfd, 0x0, 0xef, 0xff, 0xd2, 0xff,
    0xf0, 0x0, 0xa, 0xfb, 0xd, 0xff, 0xb5, 0x5a,
    0xff, 0x70, 0x3f, 0xff, 0xff, 0xff, 0xc0, 0x0,
    0x29, 0xef, 0xec, 0x60, 0x0,

    /* U+0048 "H" */
    0x6f, 0xf1, 0x0, 0x9, 0xfc, 0xdf, 0xf1, 0x0,
    0x1f, 0xfd, 0xdf, 0xf1, 0x0, 0x1f, 0xfd, 0xdf,
    0xf1, 0x0, 0x3f, 0xfd, 0xdf, 0xfa, 0x9c, 0xff,
    0xfd, 0xdf, 0xff, 0xff, 0xff, 0xfd, 0xdf, 0xea,
    0x86, 0x7f, 0xfd, 0xdf, 0xf1, 0x0, 0x1f, 0xfd,
    0xdf, 0xf1, 0x0, 0x1f, 0xfd, 0xdf, 0xf1, 0x0,
    0x1f, 0xfd, 0xcf, 0xf1, 0x0, 0x1f, 0xfd,

    /* U+0049 "I" */
    0x6f, 0xf1, 0xef, 0xf2, 0xef, 0xf2, 0xef, 0xf2,
    0xef, 0xf2, 0xef, 0xf2, 0xef, 0xf2, 0xef, 0xf2,
    0xef, 0xf2, 0xef, 0xf2, 0xdf, 0xf1,

    /* U+004A "J" */
    0x6, 0xef, 0xff, 0xff, 0xfa, 0xd, 0xff, 0xff,
    0xff, 0xfc, 0x4, 0x66, 0x66, 0x7e, 0xfc, 0x0,
    0x0, 0x0, 0x5f, 0xfc, 0x0, 0x0, 0x0, 0x5f,
    0xfc, 0x0, 0x0, 0x0, 0x5f, 0xfc, 0x0, 0x0,
    0x0, 0x5f, 0xfc, 0x8e, 0xe7, 0x0, 0x7f, 0xfa,
    0x5f, 0xff, 0x76, 0xef, 0xf6, 0xb, 0xff, 0xff,
    0xff, 0xb0, 0x0, 0x6c, 0xee, 0xc6, 0x0,

    /* U+004B "K" */
    0x6f, 0xe0, 0x5, 0xff, 0xf1, 0xef, 0xf0, 0x3f,
    0xff, 0x60, 0xef, 0xf1, 0xef, 0xf9, 0x0, 0xef,
    0xfc, 0xff, 0xc0, 0x0, 0xef, 0xff, 0xfd, 0x10,
    0x0, 0xef, 0xff, 0xf6, 0x0, 0x0, 0xef, 0xff,
    0xff, 0x60, 0x0, 0xef, 0xf7, 0xff, 0xf3, 0x0,
    0xef, 0xf0, 0xaf, 0xfe, 0x10, 0xef, 0xf0, 0xd,
    0xff, 0xb0, 0xdf, 0xf0, 0x2, 0xef, 0xf5,

    /* U+004C "L" */
    0x6f, 0xf1, 0x0, 0x0, 0xd, 0xff, 0x20, 0x0,
    0x0, 0xdf, 0xf2, 0x0, 0x0, 0xd, 0xff, 0x20,
    0x0, 0x0, 0xdf, 0xf2, 0x0, 0x0, 0xd, 0xff,
    0x20, 0x0, 0x0, 0xdf, 0xf2, 0x0, 0x0, 0xd,
    0xff, 0x20, 0x0, 0x0, 0xdf, 0xf9, 0x66, 0x66,
    0x1d, 0xff, 0xff, 0xff, 0xf5, 0xcf, 0xff, 0xff,
    0xff, 0x40,

    /* U+004D "M" */
    0x6f, 0xe1, 0x0, 0x0, 0x9f, 0xf2, 0xdf, 0xf9,
    0x0, 0x4, 0xff, 0xf3, 0xdf, 0xff, 0x20, 0xd,
    0xff, 0xf3, 0xdf, 0xff, 0xb0, 0x7f, 0xff, 0xf3,
    0xdf, 0xff, 0xf6, 0xff, 0xff, 0xf3, 0xdf, 0xfc,
    0xff, 0xff, 0xcf, 0xf3, 0xdf, 0xf4, 0xff, 0xf8,
    0x9f, 0xf3, 0xdf, 0xf1, 0x9f, 0xe0, 0x9f, 0xf3,
    0xdf, 0xf0, 0x5, 0x20, 0x9f, 0xf3, 0xdf, 0xf0,
    0x0, 0x0, 0x9f, 0xf3, 0xcf, 0xe0, 0x0, 0x0,
    0x8f, 0xf2,

    /* U+004E "N" */
    0x6f, 0xd0, 0x0, 0x1c, 0xf6, 0xdf, 0xf9, 0x0,
    0x6f, 0xf6, 0xef, 0xff, 0x30, 0x7f, 0xf6, 0xef,
    0xff, 0xd0, 0x7f, 0xf6, 0xef, 0xff, 0xf8, 0x8f,
    0xf6, 0xef, 0xfd, 0xff, 0xbf, 0xf6, 0xef, 0xf3,
    0xff, 0xff, 0xf6, 0xef, 0xf0, 0x6f, 0xff, 0xf6,
    0xef, 0xf0, 0xc, 0xff, 0xf6, 0xef, 0xf0, 0x2,
    0xff, 0xf6, 0xdf, 0xe0, 0x0, 0x6f, 0xf6,

    /* U+004F "O" */
    0x0, 0x29, 0xdf, 0xeb, 0x50, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0x90, 0xd, 0xff, 0xc6, 0x8f, 0xff,
    0x41, 0xff, 0xf1, 0x0, 0xaf, 0xf8, 0x4f, 0xfd,
    0x0, 0x6, 0xff, 0xb4, 0xff, 0xd0, 0x0, 0x6f,
    0xfb, 0x4f, 0xfd, 0x0, 0x6, 0xff, 0xa1, 0xff,
    0xf1, 0x0, 0xaf, 0xf9, 0xd, 0xff, 0xc6, 0x8f,
    0xff, 0x50, 0x3f, 0xff, 0xff, 0xff, 0xa0, 0x0,
    0x29, 0xdf, 0xec, 0x50, 0x0,

    /* U+0050 "P" */
    0x6f, 0xff, 0xff, 0xd7, 0x0, 0xcf, 0xff, 0xff,
    0xff, 0xc0, 0xdf, 0xe3, 0x36, 0xff, 0xf4, 0xdf,
    0xf3, 0x0, 0xbf, 0xf7, 0xdf, 0xf4, 0x2, 0xef,
    0xf5, 0xdf, 0xff, 0xff, 0xff, 0xe1, 0xdf, 0xff,
    0xff, 0xfb, 0x20, 0xdf, 0xf8, 0x32, 0x0, 0x0,
    0xdf, 0xf3, 0x0, 0x0, 0x0, 0xdf, 0xf3, 0x0,
    0x0, 0x0, 0xcf, 0xf2, 0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x29, 0xdf, 0xeb, 0x40, 0x0, 0x3f, 0xff,
    0xff, 0xff, 0x80, 0xd, 0xff, 0xb5, 0x8f, 0xff,
    0x31, 0xff, 0xf1, 0x0, 0xbf, 0xf7, 0x4f, 0xfd,
    0x0, 0x7, 0xff, 0xa4, 0xff, 0xd0, 0x0, 0x6f,
    0xfa, 0x4f, 0xfd, 0x0, 0x7, 0xff, 0xa1, 0xff,
    0xf1, 0x0, 0xbf, 0xf7, 0xe, 0xff, 0xb6, 0x8f,
    0xff, 0x30, 0x3f, 0xff, 0xff, 0xff, 0x80, 0x0,
    0x2a, 0xdf, 0xef, 0xfe, 0x20, 0x0, 0x0, 0x0,
    0x5b, 0xb7,

    /* U+0052 "R" */
    0x6f, 0xff, 0xfe, 0xc6, 0x0, 0xdf, 0xff, 0xff,
    0xff, 0xa0, 0xef, 0xc3, 0x37, 0xff, 0xf2, 0xef,
    0xf0, 0x0, 0xdf, 0xf5, 0xef, 0xf1, 0x3, 0xff,
    0xf2, 0xef, 0xff, 0xff, 0xff, 0xb0, 0xef, 0xff,
    0xff, 0xfc, 0x0, 0xef, 0xd4, 0x7f, 0xfd, 0x0,
    0xef, 0xf1, 0xb, 0xff, 0x70, 0xef, 0xf1, 0x3,
    0xff, 0xe1, 0xdf, 0xf1, 0x0, 0x9f, 0xf7,

    /* U+0053 "S" */
    0x0, 0x5c, 0xef, 0xc8, 0x0, 0x0, 0x9f, 0xff,
    0xff, 0xfe, 0x20, 0x1f, 0xff, 0x76, 0xcf, 0xfa,
    0x2, 0xff, 0xe1, 0x0, 0x55, 0x30, 0xe, 0xff,
    0xfb, 0x73, 0x0, 0x0, 0x2d, 0xff, 0xff, 0xfd,
    0x20, 0x0, 0x3, 0x7b, 0xff, 0xfe, 0x3, 0x66,
    0x20, 0x1, 0xff, 0xf1, 0x5f, 0xff, 0x75, 0x9f,
    0xfe, 0x0, 0xcf, 0xff, 0xff, 0xff, 0x60, 0x0,
    0x6c, 0xef, 0xea, 0x30, 0x0,

    /* U+0054 "T" */
    0x3e, 0xff, 0xff, 0xff, 0xfc, 0x9f, 0xff, 0xff,
    0xff, 0xfd, 0x48, 0x8d, 0xff, 0xa8, 0x85, 0x0,
    0x6, 0xff, 0x90, 0x0, 0x0, 0x6, 0xff, 0x90,
    0x0, 0x0, 0x6, 0xff, 0x90, 0x0, 0x0, 0x6,
    0xff, 0x90, 0x0, 0x0, 0x6, 0xff, 0x90, 0x0,
    0x0, 0x6, 0xff, 0x90, 0x0, 0x0, 0x6, 0xff,
    0x90, 0x0, 0x0, 0x6, 0xff, 0x90, 0x0,

    /* U+0055 "U" */
    0x8f, 0xe0, 0x0, 0x1c, 0xf9, 0xff, 0xf0, 0x0,
    0x5f, 0xfa, 0xff, 0xf0, 0x0, 0x5f, 0xfa, 0xff,
    0xf0, 0x0, 0x5f, 0xfa, 0xff, 0xf0, 0x0, 0x5f,
    0xfa, 0xff, 0xf0, 0x0, 0x5f, 0xfa, 0xff, 0xf0,
    0x0, 0x5f, 0xfa, 0xdf, 0xf4, 0x0, 0x9f, 0xf8,
    0x9f, 0xfd, 0x68, 0xff, 0xf4, 0x1e, 0xff, 0xff,
    0xff, 0xa0, 0x1, 0x8d, 0xfe, 0xc6, 0x0,

    /* U+0056 "V" */
    0x7f, 0xf6, 0x0, 0x3, 0xff, 0xb3, 0xff, 0xc0,
    0x0, 0x9f, 0xf6, 0xe, 0xff, 0x10, 0xe, 0xff,
    0x10, 0x9f, 0xf5, 0x3, 0xff, 0xc0, 0x4, 0xff,
    0xa0, 0x8f, 0xf7, 0x0, 0xf, 0xff, 0xd, 0xff,
    0x20, 0x0, 0xaf, 0xf6, 0xff, 0xd0, 0x0, 0x5,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0xf, 0xff, 0xff,
    0x20, 0x0, 0x0, 0xbf, 0xff, 0xd0, 0x0, 0x0,
    0x5, 0xff, 0xf7, 0x0, 0x0,

    /* U+0057 "W" */
    0x6f, 0xf6, 0x0, 0x0, 0x2, 0xff, 0xb4, 0xff,
    0xa0, 0x0, 0x0, 0x5f, 0xf9, 0x1f, 0xfd, 0x2,
    0x95, 0x8, 0xff, 0x60, 0xef, 0xf0, 0xbf, 0xf0,
    0xbf, 0xf4, 0xc, 0xff, 0x3f, 0xff, 0x5e, 0xff,
    0x10, 0x9f, 0xfc, 0xff, 0xfc, 0xff, 0xe0, 0x6,
    0xff, 0xff, 0xef, 0xff, 0xfc, 0x0, 0x4f, 0xff,
    0xf5, 0xdf, 0xff, 0x90, 0x1, 0xff, 0xfe, 0x8,
    0xff, 0xf6, 0x0, 0xe, 0xff, 0x80, 0x2f, 0xff,
    0x40, 0x0, 0xaf, 0xf2, 0x0, 0xbf, 0xf1, 0x0,

    /* U+0058 "X" */
    0x6f, 0xfc, 0x0, 0x9, 0xff, 0x80, 0xdf, 0xf8,
    0x5, 0xff, 0xe1, 0x3, 0xff, 0xf5, 0xff, 0xf4,
    0x0, 0x8, 0xff, 0xff, 0xfa, 0x0, 0x0, 0xd,
    0xff, 0xfe, 0x10, 0x0, 0x0, 0x8f, 0xff, 0x90,
    0x0, 0x0, 0x2f, 0xff, 0xff, 0x30, 0x0, 0xc,
    0xff, 0xff, 0xfd, 0x0, 0x7, 0xff, 0xe2, 0xef,
    0xf8, 0x2, 0xff, 0xf4, 0x5, 0xff, 0xf3, 0xbf,
    0xf8, 0x0, 0x9, 0xff, 0xc0,

    /* U+0059 "Y" */
    0x9f, 0xf5, 0x0, 0x5, 0xff, 0x92, 0xff, 0xd0,
    0x0, 0xef, 0xf2, 0xa, 0xff, 0x70, 0x8f, 0xf8,
    0x0, 0x1f, 0xff, 0x3f, 0xfe, 0x10, 0x0, 0x8f,
    0xff, 0xff, 0x70, 0x0, 0x0, 0xef, 0xff, 0xe0,
    0x0, 0x0, 0x7, 0xff, 0xf5, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0x0, 0x0, 0x0,
    0x0, 0xef, 0xe0, 0x0, 0x0,

    /* U+005A "Z" */
    0xa, 0xff, 0xff, 0xff, 0xfa, 0x2f, 0xff, 0xff,
    0xff, 0xfb, 0x7, 0x77, 0x7a, 0xff, 0xf7, 0x0,
    0x0, 0x2e, 0xff, 0xb0, 0x0, 0x0, 0xdf, 0xfe,
    0x10, 0x0, 0xb, 0xff, 0xf3, 0x0, 0x0, 0x8f,
    0xff, 0x50, 0x0, 0x6, 0xff, 0xf8, 0x0, 0x0,
    0x2f, 0xff, 0xf7, 0x77, 0x75, 0x5f, 0xff, 0xff,
    0xff, 0xfe, 0x5f, 0xff, 0xff, 0xff, 0xfd
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 184, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 181, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 181, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 182, .adv_w = 184, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 237, .adv_w = 164, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 159, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 185, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 191, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 453, .adv_w = 84, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 173, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 171, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 585, .adv_w = 154, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 213, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 701, .adv_w = 185, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 756, .adv_w = 183, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 817, .adv_w = 174, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 872, .adv_w = 183, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 938, .adv_w = 178, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 993, .adv_w = 170, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1054, .adv_w = 163, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1109, .adv_w = 186, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1164, .adv_w = 178, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1225, .adv_w = 213, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1297, .adv_w = 178, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1358, .adv_w = 175, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1419, .adv_w = 168, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 65, .range_length = 26, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 1, 2, 3, 4, 5, 6,
    0, 0, 7, 8, 9, 0, 0, 10,
    11, 10, 12, 13, 14, 7, 15, 16,
    17, 18, 19
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 1,
    0, 0, 2, 0, 0, 0, 0, 1,
    0, 1, 0, 3, 4, 5, 6, 7,
    8, 9, 10
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, -2, 0, -5, -1, -6,
    -6, 0, 0, 0, 0, 0, 0, -5,
    0, -6, -5, 0, 0, 0, 0, -3,
    0, -6, -2, -9, -8, -2, -2, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    -1, -1, -1, 0, 0, -1, 0, -1,
    0, 0, 0, 0, 0, -1, 0, -6,
    -1, -8, -7, -1, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, -9, -3,
    -5, 0, -1, 0, 0, 0, 0, 0,
    -2, 0, 0, -27, -3, -23, -9, 0,
    -26, 0, 0, 0, 0, -3, 0, -6,
    -2, -8, -8, -2, 0, -3, 0, 0,
    0, -6, -1, -10, -5, -2, -1, -2,
    0, -2, 0, -6, -2, 0, -7, 0,
    0, 0, 0, -2, 0, -6, -2, -6,
    -7, 0, -3, -2, -1, 0, 0, 0,
    0, 0, 0, 0, -6, -5, -6, 0,
    0, 0, 0, 0, 0, 0, -2, -2,
    -1, 0, 0, 0, 0, 0, 0, 0,
    -8, -3, -6, 0, -1, 0, 0, 0,
    0, 0, -8, -4, -6, 0, 0, 0,
    0, 0, 0, 0, -2, 0, 0, 0,
    0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 19,
    .right_class_cnt     = 10,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR >= 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR >= 8
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t lv_font_cunial_16 = {
#else
lv_font_t lv_font_cunial_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
    .fallback = NULL,
    .user_data = NULL
};



#endif /*#if LV_FONT_CUNIAL_16*/

