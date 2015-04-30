#include "destutterer_data.h"

namespace destutterer_data {

uint32_t DIGITS[] = {
    0x30,  // DIGIT ZERO
    0x31,  // DIGIT ONE
    0x32,  // DIGIT TWO
    0x33,  // DIGIT THREE
    0x34,  // DIGIT FOUR
    0x35,  // DIGIT FIVE
    0x36,  // DIGIT SIX
    0x37,  // DIGIT SEVEN
    0x38,  // DIGIT EIGHT
    0x39,  // DIGIT NINE
    0x660,  // ARABIC-INDIC DIGIT ZERO
    0x661,  // ARABIC-INDIC DIGIT ONE
    0x662,  // ARABIC-INDIC DIGIT TWO
    0x663,  // ARABIC-INDIC DIGIT THREE
    0x664,  // ARABIC-INDIC DIGIT FOUR
    0x665,  // ARABIC-INDIC DIGIT FIVE
    0x666,  // ARABIC-INDIC DIGIT SIX
    0x667,  // ARABIC-INDIC DIGIT SEVEN
    0x668,  // ARABIC-INDIC DIGIT EIGHT
    0x669,  // ARABIC-INDIC DIGIT NINE
    0x6f0,  // EXTENDED ARABIC-INDIC DIGIT ZERO
    0x6f1,  // EXTENDED ARABIC-INDIC DIGIT ONE
    0x6f2,  // EXTENDED ARABIC-INDIC DIGIT TWO
    0x6f3,  // EXTENDED ARABIC-INDIC DIGIT THREE
    0x6f4,  // EXTENDED ARABIC-INDIC DIGIT FOUR
    0x6f5,  // EXTENDED ARABIC-INDIC DIGIT FIVE
    0x6f6,  // EXTENDED ARABIC-INDIC DIGIT SIX
    0x6f7,  // EXTENDED ARABIC-INDIC DIGIT SEVEN
    0x6f8,  // EXTENDED ARABIC-INDIC DIGIT EIGHT
    0x6f9,  // EXTENDED ARABIC-INDIC DIGIT NINE
    0x7c0,  // NKO DIGIT ZERO
    0x7c1,  // NKO DIGIT ONE
    0x7c2,  // NKO DIGIT TWO
    0x7c3,  // NKO DIGIT THREE
    0x7c4,  // NKO DIGIT FOUR
    0x7c5,  // NKO DIGIT FIVE
    0x7c6,  // NKO DIGIT SIX
    0x7c7,  // NKO DIGIT SEVEN
    0x7c8,  // NKO DIGIT EIGHT
    0x7c9,  // NKO DIGIT NINE
    0x966,  // DEVANAGARI DIGIT ZERO
    0x967,  // DEVANAGARI DIGIT ONE
    0x968,  // DEVANAGARI DIGIT TWO
    0x969,  // DEVANAGARI DIGIT THREE
    0x96a,  // DEVANAGARI DIGIT FOUR
    0x96b,  // DEVANAGARI DIGIT FIVE
    0x96c,  // DEVANAGARI DIGIT SIX
    0x96d,  // DEVANAGARI DIGIT SEVEN
    0x96e,  // DEVANAGARI DIGIT EIGHT
    0x96f,  // DEVANAGARI DIGIT NINE
    0x9e6,  // BENGALI DIGIT ZERO
    0x9e7,  // BENGALI DIGIT ONE
    0x9e8,  // BENGALI DIGIT TWO
    0x9e9,  // BENGALI DIGIT THREE
    0x9ea,  // BENGALI DIGIT FOUR
    0x9eb,  // BENGALI DIGIT FIVE
    0x9ec,  // BENGALI DIGIT SIX
    0x9ed,  // BENGALI DIGIT SEVEN
    0x9ee,  // BENGALI DIGIT EIGHT
    0x9ef,  // BENGALI DIGIT NINE
    0xa66,  // GURMUKHI DIGIT ZERO
    0xa67,  // GURMUKHI DIGIT ONE
    0xa68,  // GURMUKHI DIGIT TWO
    0xa69,  // GURMUKHI DIGIT THREE
    0xa6a,  // GURMUKHI DIGIT FOUR
    0xa6b,  // GURMUKHI DIGIT FIVE
    0xa6c,  // GURMUKHI DIGIT SIX
    0xa6d,  // GURMUKHI DIGIT SEVEN
    0xa6e,  // GURMUKHI DIGIT EIGHT
    0xa6f,  // GURMUKHI DIGIT NINE
    0xae6,  // GUJARATI DIGIT ZERO
    0xae7,  // GUJARATI DIGIT ONE
    0xae8,  // GUJARATI DIGIT TWO
    0xae9,  // GUJARATI DIGIT THREE
    0xaea,  // GUJARATI DIGIT FOUR
    0xaeb,  // GUJARATI DIGIT FIVE
    0xaec,  // GUJARATI DIGIT SIX
    0xaed,  // GUJARATI DIGIT SEVEN
    0xaee,  // GUJARATI DIGIT EIGHT
    0xaef,  // GUJARATI DIGIT NINE
    0xb66,  // ORIYA DIGIT ZERO
    0xb67,  // ORIYA DIGIT ONE
    0xb68,  // ORIYA DIGIT TWO
    0xb69,  // ORIYA DIGIT THREE
    0xb6a,  // ORIYA DIGIT FOUR
    0xb6b,  // ORIYA DIGIT FIVE
    0xb6c,  // ORIYA DIGIT SIX
    0xb6d,  // ORIYA DIGIT SEVEN
    0xb6e,  // ORIYA DIGIT EIGHT
    0xb6f,  // ORIYA DIGIT NINE
    0xbe6,  // TAMIL DIGIT ZERO
    0xbe7,  // TAMIL DIGIT ONE
    0xbe8,  // TAMIL DIGIT TWO
    0xbe9,  // TAMIL DIGIT THREE
    0xbea,  // TAMIL DIGIT FOUR
    0xbeb,  // TAMIL DIGIT FIVE
    0xbec,  // TAMIL DIGIT SIX
    0xbed,  // TAMIL DIGIT SEVEN
    0xbee,  // TAMIL DIGIT EIGHT
    0xbef,  // TAMIL DIGIT NINE
    0xc66,  // TELUGU DIGIT ZERO
    0xc67,  // TELUGU DIGIT ONE
    0xc68,  // TELUGU DIGIT TWO
    0xc69,  // TELUGU DIGIT THREE
    0xc6a,  // TELUGU DIGIT FOUR
    0xc6b,  // TELUGU DIGIT FIVE
    0xc6c,  // TELUGU DIGIT SIX
    0xc6d,  // TELUGU DIGIT SEVEN
    0xc6e,  // TELUGU DIGIT EIGHT
    0xc6f,  // TELUGU DIGIT NINE
    0xce6,  // KANNADA DIGIT ZERO
    0xce7,  // KANNADA DIGIT ONE
    0xce8,  // KANNADA DIGIT TWO
    0xce9,  // KANNADA DIGIT THREE
    0xcea,  // KANNADA DIGIT FOUR
    0xceb,  // KANNADA DIGIT FIVE
    0xcec,  // KANNADA DIGIT SIX
    0xced,  // KANNADA DIGIT SEVEN
    0xcee,  // KANNADA DIGIT EIGHT
    0xcef,  // KANNADA DIGIT NINE
    0xd66,  // MALAYALAM DIGIT ZERO
    0xd67,  // MALAYALAM DIGIT ONE
    0xd68,  // MALAYALAM DIGIT TWO
    0xd69,  // MALAYALAM DIGIT THREE
    0xd6a,  // MALAYALAM DIGIT FOUR
    0xd6b,  // MALAYALAM DIGIT FIVE
    0xd6c,  // MALAYALAM DIGIT SIX
    0xd6d,  // MALAYALAM DIGIT SEVEN
    0xd6e,  // MALAYALAM DIGIT EIGHT
    0xd6f,  // MALAYALAM DIGIT NINE
    0xde6,  // SINHALA LITH DIGIT ZERO
    0xde7,  // SINHALA LITH DIGIT ONE
    0xde8,  // SINHALA LITH DIGIT TWO
    0xde9,  // SINHALA LITH DIGIT THREE
    0xdea,  // SINHALA LITH DIGIT FOUR
    0xdeb,  // SINHALA LITH DIGIT FIVE
    0xdec,  // SINHALA LITH DIGIT SIX
    0xded,  // SINHALA LITH DIGIT SEVEN
    0xdee,  // SINHALA LITH DIGIT EIGHT
    0xdef,  // SINHALA LITH DIGIT NINE
    0xe50,  // THAI DIGIT ZERO
    0xe51,  // THAI DIGIT ONE
    0xe52,  // THAI DIGIT TWO
    0xe53,  // THAI DIGIT THREE
    0xe54,  // THAI DIGIT FOUR
    0xe55,  // THAI DIGIT FIVE
    0xe56,  // THAI DIGIT SIX
    0xe57,  // THAI DIGIT SEVEN
    0xe58,  // THAI DIGIT EIGHT
    0xe59,  // THAI DIGIT NINE
    0xed0,  // LAO DIGIT ZERO
    0xed1,  // LAO DIGIT ONE
    0xed2,  // LAO DIGIT TWO
    0xed3,  // LAO DIGIT THREE
    0xed4,  // LAO DIGIT FOUR
    0xed5,  // LAO DIGIT FIVE
    0xed6,  // LAO DIGIT SIX
    0xed7,  // LAO DIGIT SEVEN
    0xed8,  // LAO DIGIT EIGHT
    0xed9,  // LAO DIGIT NINE
    0xf20,  // TIBETAN DIGIT ZERO
    0xf21,  // TIBETAN DIGIT ONE
    0xf22,  // TIBETAN DIGIT TWO
    0xf23,  // TIBETAN DIGIT THREE
    0xf24,  // TIBETAN DIGIT FOUR
    0xf25,  // TIBETAN DIGIT FIVE
    0xf26,  // TIBETAN DIGIT SIX
    0xf27,  // TIBETAN DIGIT SEVEN
    0xf28,  // TIBETAN DIGIT EIGHT
    0xf29,  // TIBETAN DIGIT NINE
    0x1040,  // MYANMAR DIGIT ZERO
    0x1041,  // MYANMAR DIGIT ONE
    0x1042,  // MYANMAR DIGIT TWO
    0x1043,  // MYANMAR DIGIT THREE
    0x1044,  // MYANMAR DIGIT FOUR
    0x1045,  // MYANMAR DIGIT FIVE
    0x1046,  // MYANMAR DIGIT SIX
    0x1047,  // MYANMAR DIGIT SEVEN
    0x1048,  // MYANMAR DIGIT EIGHT
    0x1049,  // MYANMAR DIGIT NINE
    0x1090,  // MYANMAR SHAN DIGIT ZERO
    0x1091,  // MYANMAR SHAN DIGIT ONE
    0x1092,  // MYANMAR SHAN DIGIT TWO
    0x1093,  // MYANMAR SHAN DIGIT THREE
    0x1094,  // MYANMAR SHAN DIGIT FOUR
    0x1095,  // MYANMAR SHAN DIGIT FIVE
    0x1096,  // MYANMAR SHAN DIGIT SIX
    0x1097,  // MYANMAR SHAN DIGIT SEVEN
    0x1098,  // MYANMAR SHAN DIGIT EIGHT
    0x1099,  // MYANMAR SHAN DIGIT NINE
    0x17e0,  // KHMER DIGIT ZERO
    0x17e1,  // KHMER DIGIT ONE
    0x17e2,  // KHMER DIGIT TWO
    0x17e3,  // KHMER DIGIT THREE
    0x17e4,  // KHMER DIGIT FOUR
    0x17e5,  // KHMER DIGIT FIVE
    0x17e6,  // KHMER DIGIT SIX
    0x17e7,  // KHMER DIGIT SEVEN
    0x17e8,  // KHMER DIGIT EIGHT
    0x17e9,  // KHMER DIGIT NINE
    0x1810,  // MONGOLIAN DIGIT ZERO
    0x1811,  // MONGOLIAN DIGIT ONE
    0x1812,  // MONGOLIAN DIGIT TWO
    0x1813,  // MONGOLIAN DIGIT THREE
    0x1814,  // MONGOLIAN DIGIT FOUR
    0x1815,  // MONGOLIAN DIGIT FIVE
    0x1816,  // MONGOLIAN DIGIT SIX
    0x1817,  // MONGOLIAN DIGIT SEVEN
    0x1818,  // MONGOLIAN DIGIT EIGHT
    0x1819,  // MONGOLIAN DIGIT NINE
    0x1946,  // LIMBU DIGIT ZERO
    0x1947,  // LIMBU DIGIT ONE
    0x1948,  // LIMBU DIGIT TWO
    0x1949,  // LIMBU DIGIT THREE
    0x194a,  // LIMBU DIGIT FOUR
    0x194b,  // LIMBU DIGIT FIVE
    0x194c,  // LIMBU DIGIT SIX
    0x194d,  // LIMBU DIGIT SEVEN
    0x194e,  // LIMBU DIGIT EIGHT
    0x194f,  // LIMBU DIGIT NINE
    0x19d0,  // NEW TAI LUE DIGIT ZERO
    0x19d1,  // NEW TAI LUE DIGIT ONE
    0x19d2,  // NEW TAI LUE DIGIT TWO
    0x19d3,  // NEW TAI LUE DIGIT THREE
    0x19d4,  // NEW TAI LUE DIGIT FOUR
    0x19d5,  // NEW TAI LUE DIGIT FIVE
    0x19d6,  // NEW TAI LUE DIGIT SIX
    0x19d7,  // NEW TAI LUE DIGIT SEVEN
    0x19d8,  // NEW TAI LUE DIGIT EIGHT
    0x19d9,  // NEW TAI LUE DIGIT NINE
    0x1a80,  // TAI THAM HORA DIGIT ZERO
    0x1a81,  // TAI THAM HORA DIGIT ONE
    0x1a82,  // TAI THAM HORA DIGIT TWO
    0x1a83,  // TAI THAM HORA DIGIT THREE
    0x1a84,  // TAI THAM HORA DIGIT FOUR
    0x1a85,  // TAI THAM HORA DIGIT FIVE
    0x1a86,  // TAI THAM HORA DIGIT SIX
    0x1a87,  // TAI THAM HORA DIGIT SEVEN
    0x1a88,  // TAI THAM HORA DIGIT EIGHT
    0x1a89,  // TAI THAM HORA DIGIT NINE
    0x1a90,  // TAI THAM THAM DIGIT ZERO
    0x1a91,  // TAI THAM THAM DIGIT ONE
    0x1a92,  // TAI THAM THAM DIGIT TWO
    0x1a93,  // TAI THAM THAM DIGIT THREE
    0x1a94,  // TAI THAM THAM DIGIT FOUR
    0x1a95,  // TAI THAM THAM DIGIT FIVE
    0x1a96,  // TAI THAM THAM DIGIT SIX
    0x1a97,  // TAI THAM THAM DIGIT SEVEN
    0x1a98,  // TAI THAM THAM DIGIT EIGHT
    0x1a99,  // TAI THAM THAM DIGIT NINE
    0x1b50,  // BALINESE DIGIT ZERO
    0x1b51,  // BALINESE DIGIT ONE
    0x1b52,  // BALINESE DIGIT TWO
    0x1b53,  // BALINESE DIGIT THREE
    0x1b54,  // BALINESE DIGIT FOUR
    0x1b55,  // BALINESE DIGIT FIVE
    0x1b56,  // BALINESE DIGIT SIX
    0x1b57,  // BALINESE DIGIT SEVEN
    0x1b58,  // BALINESE DIGIT EIGHT
    0x1b59,  // BALINESE DIGIT NINE
    0x1bb0,  // SUNDANESE DIGIT ZERO
    0x1bb1,  // SUNDANESE DIGIT ONE
    0x1bb2,  // SUNDANESE DIGIT TWO
    0x1bb3,  // SUNDANESE DIGIT THREE
    0x1bb4,  // SUNDANESE DIGIT FOUR
    0x1bb5,  // SUNDANESE DIGIT FIVE
    0x1bb6,  // SUNDANESE DIGIT SIX
    0x1bb7,  // SUNDANESE DIGIT SEVEN
    0x1bb8,  // SUNDANESE DIGIT EIGHT
    0x1bb9,  // SUNDANESE DIGIT NINE
    0x1c40,  // LEPCHA DIGIT ZERO
    0x1c41,  // LEPCHA DIGIT ONE
    0x1c42,  // LEPCHA DIGIT TWO
    0x1c43,  // LEPCHA DIGIT THREE
    0x1c44,  // LEPCHA DIGIT FOUR
    0x1c45,  // LEPCHA DIGIT FIVE
    0x1c46,  // LEPCHA DIGIT SIX
    0x1c47,  // LEPCHA DIGIT SEVEN
    0x1c48,  // LEPCHA DIGIT EIGHT
    0x1c49,  // LEPCHA DIGIT NINE
    0x1c50,  // OL CHIKI DIGIT ZERO
    0x1c51,  // OL CHIKI DIGIT ONE
    0x1c52,  // OL CHIKI DIGIT TWO
    0x1c53,  // OL CHIKI DIGIT THREE
    0x1c54,  // OL CHIKI DIGIT FOUR
    0x1c55,  // OL CHIKI DIGIT FIVE
    0x1c56,  // OL CHIKI DIGIT SIX
    0x1c57,  // OL CHIKI DIGIT SEVEN
    0x1c58,  // OL CHIKI DIGIT EIGHT
    0x1c59,  // OL CHIKI DIGIT NINE
    0xa620,  // VAI DIGIT ZERO
    0xa621,  // VAI DIGIT ONE
    0xa622,  // VAI DIGIT TWO
    0xa623,  // VAI DIGIT THREE
    0xa624,  // VAI DIGIT FOUR
    0xa625,  // VAI DIGIT FIVE
    0xa626,  // VAI DIGIT SIX
    0xa627,  // VAI DIGIT SEVEN
    0xa628,  // VAI DIGIT EIGHT
    0xa629,  // VAI DIGIT NINE
    0xa8d0,  // SAURASHTRA DIGIT ZERO
    0xa8d1,  // SAURASHTRA DIGIT ONE
    0xa8d2,  // SAURASHTRA DIGIT TWO
    0xa8d3,  // SAURASHTRA DIGIT THREE
    0xa8d4,  // SAURASHTRA DIGIT FOUR
    0xa8d5,  // SAURASHTRA DIGIT FIVE
    0xa8d6,  // SAURASHTRA DIGIT SIX
    0xa8d7,  // SAURASHTRA DIGIT SEVEN
    0xa8d8,  // SAURASHTRA DIGIT EIGHT
    0xa8d9,  // SAURASHTRA DIGIT NINE
    0xa900,  // KAYAH LI DIGIT ZERO
    0xa901,  // KAYAH LI DIGIT ONE
    0xa902,  // KAYAH LI DIGIT TWO
    0xa903,  // KAYAH LI DIGIT THREE
    0xa904,  // KAYAH LI DIGIT FOUR
    0xa905,  // KAYAH LI DIGIT FIVE
    0xa906,  // KAYAH LI DIGIT SIX
    0xa907,  // KAYAH LI DIGIT SEVEN
    0xa908,  // KAYAH LI DIGIT EIGHT
    0xa909,  // KAYAH LI DIGIT NINE
    0xa9d0,  // JAVANESE DIGIT ZERO
    0xa9d1,  // JAVANESE DIGIT ONE
    0xa9d2,  // JAVANESE DIGIT TWO
    0xa9d3,  // JAVANESE DIGIT THREE
    0xa9d4,  // JAVANESE DIGIT FOUR
    0xa9d5,  // JAVANESE DIGIT FIVE
    0xa9d6,  // JAVANESE DIGIT SIX
    0xa9d7,  // JAVANESE DIGIT SEVEN
    0xa9d8,  // JAVANESE DIGIT EIGHT
    0xa9d9,  // JAVANESE DIGIT NINE
    0xa9f0,  // MYANMAR TAI LAING DIGIT ZERO
    0xa9f1,  // MYANMAR TAI LAING DIGIT ONE
    0xa9f2,  // MYANMAR TAI LAING DIGIT TWO
    0xa9f3,  // MYANMAR TAI LAING DIGIT THREE
    0xa9f4,  // MYANMAR TAI LAING DIGIT FOUR
    0xa9f5,  // MYANMAR TAI LAING DIGIT FIVE
    0xa9f6,  // MYANMAR TAI LAING DIGIT SIX
    0xa9f7,  // MYANMAR TAI LAING DIGIT SEVEN
    0xa9f8,  // MYANMAR TAI LAING DIGIT EIGHT
    0xa9f9,  // MYANMAR TAI LAING DIGIT NINE
    0xaa50,  // CHAM DIGIT ZERO
    0xaa51,  // CHAM DIGIT ONE
    0xaa52,  // CHAM DIGIT TWO
    0xaa53,  // CHAM DIGIT THREE
    0xaa54,  // CHAM DIGIT FOUR
    0xaa55,  // CHAM DIGIT FIVE
    0xaa56,  // CHAM DIGIT SIX
    0xaa57,  // CHAM DIGIT SEVEN
    0xaa58,  // CHAM DIGIT EIGHT
    0xaa59,  // CHAM DIGIT NINE
    0xabf0,  // MEETEI MAYEK DIGIT ZERO
    0xabf1,  // MEETEI MAYEK DIGIT ONE
    0xabf2,  // MEETEI MAYEK DIGIT TWO
    0xabf3,  // MEETEI MAYEK DIGIT THREE
    0xabf4,  // MEETEI MAYEK DIGIT FOUR
    0xabf5,  // MEETEI MAYEK DIGIT FIVE
    0xabf6,  // MEETEI MAYEK DIGIT SIX
    0xabf7,  // MEETEI MAYEK DIGIT SEVEN
    0xabf8,  // MEETEI MAYEK DIGIT EIGHT
    0xabf9,  // MEETEI MAYEK DIGIT NINE
    0xff10,  // FULLWIDTH DIGIT ZERO
    0xff11,  // FULLWIDTH DIGIT ONE
    0xff12,  // FULLWIDTH DIGIT TWO
    0xff13,  // FULLWIDTH DIGIT THREE
    0xff14,  // FULLWIDTH DIGIT FOUR
    0xff15,  // FULLWIDTH DIGIT FIVE
    0xff16,  // FULLWIDTH DIGIT SIX
    0xff17,  // FULLWIDTH DIGIT SEVEN
    0xff18,  // FULLWIDTH DIGIT EIGHT
    0xff19,  // FULLWIDTH DIGIT NINE
    0x104a0,  // OSMANYA DIGIT ZERO
    0x104a1,  // OSMANYA DIGIT ONE
    0x104a2,  // OSMANYA DIGIT TWO
    0x104a3,  // OSMANYA DIGIT THREE
    0x104a4,  // OSMANYA DIGIT FOUR
    0x104a5,  // OSMANYA DIGIT FIVE
    0x104a6,  // OSMANYA DIGIT SIX
    0x104a7,  // OSMANYA DIGIT SEVEN
    0x104a8,  // OSMANYA DIGIT EIGHT
    0x104a9,  // OSMANYA DIGIT NINE
    0x11066,  // BRAHMI DIGIT ZERO
    0x11067,  // BRAHMI DIGIT ONE
    0x11068,  // BRAHMI DIGIT TWO
    0x11069,  // BRAHMI DIGIT THREE
    0x1106a,  // BRAHMI DIGIT FOUR
    0x1106b,  // BRAHMI DIGIT FIVE
    0x1106c,  // BRAHMI DIGIT SIX
    0x1106d,  // BRAHMI DIGIT SEVEN
    0x1106e,  // BRAHMI DIGIT EIGHT
    0x1106f,  // BRAHMI DIGIT NINE
    0x110f0,  // SORA SOMPENG DIGIT ZERO
    0x110f1,  // SORA SOMPENG DIGIT ONE
    0x110f2,  // SORA SOMPENG DIGIT TWO
    0x110f3,  // SORA SOMPENG DIGIT THREE
    0x110f4,  // SORA SOMPENG DIGIT FOUR
    0x110f5,  // SORA SOMPENG DIGIT FIVE
    0x110f6,  // SORA SOMPENG DIGIT SIX
    0x110f7,  // SORA SOMPENG DIGIT SEVEN
    0x110f8,  // SORA SOMPENG DIGIT EIGHT
    0x110f9,  // SORA SOMPENG DIGIT NINE
    0x11136,  // CHAKMA DIGIT ZERO
    0x11137,  // CHAKMA DIGIT ONE
    0x11138,  // CHAKMA DIGIT TWO
    0x11139,  // CHAKMA DIGIT THREE
    0x1113a,  // CHAKMA DIGIT FOUR
    0x1113b,  // CHAKMA DIGIT FIVE
    0x1113c,  // CHAKMA DIGIT SIX
    0x1113d,  // CHAKMA DIGIT SEVEN
    0x1113e,  // CHAKMA DIGIT EIGHT
    0x1113f,  // CHAKMA DIGIT NINE
    0x111d0,  // SHARADA DIGIT ZERO
    0x111d1,  // SHARADA DIGIT ONE
    0x111d2,  // SHARADA DIGIT TWO
    0x111d3,  // SHARADA DIGIT THREE
    0x111d4,  // SHARADA DIGIT FOUR
    0x111d5,  // SHARADA DIGIT FIVE
    0x111d6,  // SHARADA DIGIT SIX
    0x111d7,  // SHARADA DIGIT SEVEN
    0x111d8,  // SHARADA DIGIT EIGHT
    0x111d9,  // SHARADA DIGIT NINE
    0x112f0,  // KHUDAWADI DIGIT ZERO
    0x112f1,  // KHUDAWADI DIGIT ONE
    0x112f2,  // KHUDAWADI DIGIT TWO
    0x112f3,  // KHUDAWADI DIGIT THREE
    0x112f4,  // KHUDAWADI DIGIT FOUR
    0x112f5,  // KHUDAWADI DIGIT FIVE
    0x112f6,  // KHUDAWADI DIGIT SIX
    0x112f7,  // KHUDAWADI DIGIT SEVEN
    0x112f8,  // KHUDAWADI DIGIT EIGHT
    0x112f9,  // KHUDAWADI DIGIT NINE
    0x114d0,  // TIRHUTA DIGIT ZERO
    0x114d1,  // TIRHUTA DIGIT ONE
    0x114d2,  // TIRHUTA DIGIT TWO
    0x114d3,  // TIRHUTA DIGIT THREE
    0x114d4,  // TIRHUTA DIGIT FOUR
    0x114d5,  // TIRHUTA DIGIT FIVE
    0x114d6,  // TIRHUTA DIGIT SIX
    0x114d7,  // TIRHUTA DIGIT SEVEN
    0x114d8,  // TIRHUTA DIGIT EIGHT
    0x114d9,  // TIRHUTA DIGIT NINE
    0x11650,  // MODI DIGIT ZERO
    0x11651,  // MODI DIGIT ONE
    0x11652,  // MODI DIGIT TWO
    0x11653,  // MODI DIGIT THREE
    0x11654,  // MODI DIGIT FOUR
    0x11655,  // MODI DIGIT FIVE
    0x11656,  // MODI DIGIT SIX
    0x11657,  // MODI DIGIT SEVEN
    0x11658,  // MODI DIGIT EIGHT
    0x11659,  // MODI DIGIT NINE
    0x116c0,  // TAKRI DIGIT ZERO
    0x116c1,  // TAKRI DIGIT ONE
    0x116c2,  // TAKRI DIGIT TWO
    0x116c3,  // TAKRI DIGIT THREE
    0x116c4,  // TAKRI DIGIT FOUR
    0x116c5,  // TAKRI DIGIT FIVE
    0x116c6,  // TAKRI DIGIT SIX
    0x116c7,  // TAKRI DIGIT SEVEN
    0x116c8,  // TAKRI DIGIT EIGHT
    0x116c9,  // TAKRI DIGIT NINE
    0x118e0,  // WARANG CITI DIGIT ZERO
    0x118e1,  // WARANG CITI DIGIT ONE
    0x118e2,  // WARANG CITI DIGIT TWO
    0x118e3,  // WARANG CITI DIGIT THREE
    0x118e4,  // WARANG CITI DIGIT FOUR
    0x118e5,  // WARANG CITI DIGIT FIVE
    0x118e6,  // WARANG CITI DIGIT SIX
    0x118e7,  // WARANG CITI DIGIT SEVEN
    0x118e8,  // WARANG CITI DIGIT EIGHT
    0x118e9,  // WARANG CITI DIGIT NINE
    0x16a60,  // MRO DIGIT ZERO
    0x16a61,  // MRO DIGIT ONE
    0x16a62,  // MRO DIGIT TWO
    0x16a63,  // MRO DIGIT THREE
    0x16a64,  // MRO DIGIT FOUR
    0x16a65,  // MRO DIGIT FIVE
    0x16a66,  // MRO DIGIT SIX
    0x16a67,  // MRO DIGIT SEVEN
    0x16a68,  // MRO DIGIT EIGHT
    0x16a69,  // MRO DIGIT NINE
    0x16b50,  // PAHAWH HMONG DIGIT ZERO
    0x16b51,  // PAHAWH HMONG DIGIT ONE
    0x16b52,  // PAHAWH HMONG DIGIT TWO
    0x16b53,  // PAHAWH HMONG DIGIT THREE
    0x16b54,  // PAHAWH HMONG DIGIT FOUR
    0x16b55,  // PAHAWH HMONG DIGIT FIVE
    0x16b56,  // PAHAWH HMONG DIGIT SIX
    0x16b57,  // PAHAWH HMONG DIGIT SEVEN
    0x16b58,  // PAHAWH HMONG DIGIT EIGHT
    0x16b59,  // PAHAWH HMONG DIGIT NINE
    0x1d7ce,  // MATHEMATICAL BOLD DIGIT ZERO
    0x1d7cf,  // MATHEMATICAL BOLD DIGIT ONE
    0x1d7d0,  // MATHEMATICAL BOLD DIGIT TWO
    0x1d7d1,  // MATHEMATICAL BOLD DIGIT THREE
    0x1d7d2,  // MATHEMATICAL BOLD DIGIT FOUR
    0x1d7d3,  // MATHEMATICAL BOLD DIGIT FIVE
    0x1d7d4,  // MATHEMATICAL BOLD DIGIT SIX
    0x1d7d5,  // MATHEMATICAL BOLD DIGIT SEVEN
    0x1d7d6,  // MATHEMATICAL BOLD DIGIT EIGHT
    0x1d7d7,  // MATHEMATICAL BOLD DIGIT NINE
    0x1d7d8,  // MATHEMATICAL DOUBLE-STRUCK DIGIT ZERO
    0x1d7d9,  // MATHEMATICAL DOUBLE-STRUCK DIGIT ONE
    0x1d7da,  // MATHEMATICAL DOUBLE-STRUCK DIGIT TWO
    0x1d7db,  // MATHEMATICAL DOUBLE-STRUCK DIGIT THREE
    0x1d7dc,  // MATHEMATICAL DOUBLE-STRUCK DIGIT FOUR
    0x1d7dd,  // MATHEMATICAL DOUBLE-STRUCK DIGIT FIVE
    0x1d7de,  // MATHEMATICAL DOUBLE-STRUCK DIGIT SIX
    0x1d7df,  // MATHEMATICAL DOUBLE-STRUCK DIGIT SEVEN
    0x1d7e0,  // MATHEMATICAL DOUBLE-STRUCK DIGIT EIGHT
    0x1d7e1,  // MATHEMATICAL DOUBLE-STRUCK DIGIT NINE
    0x1d7e2,  // MATHEMATICAL SANS-SERIF DIGIT ZERO
    0x1d7e3,  // MATHEMATICAL SANS-SERIF DIGIT ONE
    0x1d7e4,  // MATHEMATICAL SANS-SERIF DIGIT TWO
    0x1d7e5,  // MATHEMATICAL SANS-SERIF DIGIT THREE
    0x1d7e6,  // MATHEMATICAL SANS-SERIF DIGIT FOUR
    0x1d7e7,  // MATHEMATICAL SANS-SERIF DIGIT FIVE
    0x1d7e8,  // MATHEMATICAL SANS-SERIF DIGIT SIX
    0x1d7e9,  // MATHEMATICAL SANS-SERIF DIGIT SEVEN
    0x1d7ea,  // MATHEMATICAL SANS-SERIF DIGIT EIGHT
    0x1d7eb,  // MATHEMATICAL SANS-SERIF DIGIT NINE
    0x1d7ec,  // MATHEMATICAL SANS-SERIF BOLD DIGIT ZERO
    0x1d7ed,  // MATHEMATICAL SANS-SERIF BOLD DIGIT ONE
    0x1d7ee,  // MATHEMATICAL SANS-SERIF BOLD DIGIT TWO
    0x1d7ef,  // MATHEMATICAL SANS-SERIF BOLD DIGIT THREE
    0x1d7f0,  // MATHEMATICAL SANS-SERIF BOLD DIGIT FOUR
    0x1d7f1,  // MATHEMATICAL SANS-SERIF BOLD DIGIT FIVE
    0x1d7f2,  // MATHEMATICAL SANS-SERIF BOLD DIGIT SIX
    0x1d7f3,  // MATHEMATICAL SANS-SERIF BOLD DIGIT SEVEN
    0x1d7f4,  // MATHEMATICAL SANS-SERIF BOLD DIGIT EIGHT
    0x1d7f5,  // MATHEMATICAL SANS-SERIF BOLD DIGIT NINE
    0x1d7f6,  // MATHEMATICAL MONOSPACE DIGIT ZERO
    0x1d7f7,  // MATHEMATICAL MONOSPACE DIGIT ONE
    0x1d7f8,  // MATHEMATICAL MONOSPACE DIGIT TWO
    0x1d7f9,  // MATHEMATICAL MONOSPACE DIGIT THREE
    0x1d7fa,  // MATHEMATICAL MONOSPACE DIGIT FOUR
    0x1d7fb,  // MATHEMATICAL MONOSPACE DIGIT FIVE
    0x1d7fc,  // MATHEMATICAL MONOSPACE DIGIT SIX
    0x1d7fd,  // MATHEMATICAL MONOSPACE DIGIT SEVEN
    0x1d7fe,  // MATHEMATICAL MONOSPACE DIGIT EIGHT
    0x1d7ff,  // MATHEMATICAL MONOSPACE DIGIT NINE
};

}  // namespace destutterer_data
