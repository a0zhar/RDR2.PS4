#pragma once
#ifndef _STRUCTS_H 
#define _STRUCTS_H 

struct fcolor {
    unsigned char r; 
    unsigned char g; 
    unsigned char b; 
    unsigned char a;
};
struct text_info {
    fcolor	color;
    float	text_scale;
    float	text_scale2;
    float	wrap_start;
    float	wrap_end;
    int		font;
    unsigned char padding[0x4];
    char	justification;
};

#endif // _STRUCTS_H 
