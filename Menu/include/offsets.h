#pragma once
#ifndef _OFFSETS_H
#define _OFFSETS_H

#if GAME_VERSION == 100
    #define TEXT_INFO_POINTER 0x789C860
    #define GET_ENTITY_ADDR   0x87CCCE8
    #define SNPRINTF          0x5C2340
#elif GAME_VERSION == 113
    #define TEXT_INFO_POINTER 0x81A4CEC
    #define GET_ENTITY_ADDR   0x8FD26E0
    #define SNPRINTF          0x5C4500
#elif GAME_VERSION == 119
    #define TEXT_INFO_POINTER 0x8312E8C
    #define GET_ENTITY_ADDR   0x917C4E0
    #define SNPRINTF          0x5DB430
#elif GAME_VERSION == 124
    #define TEXT_INFO_POINTER 0x840C66C
    #define GET_ENTITY_ADDR   0x9298D28
    #define SNPRINTF          0x5DC880
#elif GAME_VERSION == 129
    #define TEXT_INFO_POINTER 0x886A00C
    #define GET_ENTITY_ADDR   0x96F4D20
    #define SNPRINTF          0x5DCC10
#endif

#endif // _OFFSETS_H
