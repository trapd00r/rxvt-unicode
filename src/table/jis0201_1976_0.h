//
// AUTOMATICALLLY GENERATED by gentables
//
#ifdef ENCODING_JP


static uint32_t cs_jis0201_1976_0_from_unicode (unicode_t unicode) {
    if (unicode <= 0x007d) return unicode;
    if (0x007f <= unicode && unicode <= 0x009f) return unicode;
    if (unicode == 0x203e) return 0x007e;
    if (unicode <= 0xff61 && 0xff9f <= unicode) return unicode - 0xfec0;
    return NOCHAR;
}

#else

#define cs_jis0201_1976_0_from_unicode cs_unknown_from_unicode
#define cs_jis0201_1976_0_to_unicode   cs_unknown_to_unicode

#endif