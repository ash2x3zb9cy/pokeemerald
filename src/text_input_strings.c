#include "global.h"

// Easy Chat keyboard
const u8 gText_EasyChatKeyboard_ABCDEFothers[] = _("{CLEAR 11}A{CLEAR 6}B{CLEAR 6}C{CLEAR 26}D{CLEAR 6}E{CLEAR 6}F{CLEAR 26}others");
const u8 gText_EasyChatKeyboard_GHIJKL[] = _("{CLEAR 11}G{CLEAR 6}H{CLEAR 6}I{CLEAR 26}J{CLEAR 6}K{CLEAR 6}L");
const u8 gText_EasyChatKeyboard_MNOPQRS[] = _("{CLEAR 11}M{CLEAR 6}N{CLEAR 6}O{CLEAR 26}P{CLEAR 6}Q{CLEAR 6}R{CLEAR 6}S{CLEAR 26} ");
const u8 gText_EasyChatKeyboard_TUVWXYZ[] = _("{CLEAR 11}T{CLEAR 6}U{CLEAR 6}V{CLEAR 26}W{CLEAR 6}X{CLEAR 6}Y{CLEAR 6}Z{CLEAR 26} ");

// Naming Screen keyboard
// The values for the {CLEAR} control codes are equal to the key spacing (from sPageColumnXPos in src/naming_screen.c),
// minus the character's width (from gFontNormalLatinGlyphWidths in src/fonts.c).
// The char codes are detailed in char_map.txt.
// JS calculator: https://jsfiddle.net/ash2x3zb9cy/h9up0r5n/4/
const u8 gText_NamingScreenKeyboard_numbers[]    = _("{CLEAR 11}1{CLEAR 6}2{CLEAR 6}3{CLEAR 6}4{CLEAR 6}5{CLEAR 6}6{CLEAR 6}7{CLEAR 6}8{CLEAR 6}9{CLEAR 6}0{CLEAR 6}");
const u8 gText_NamingScreenKeyboard_qwertyuiop[] = _("{CLEAR 11}q{CLEAR 6}w{CLEAR 6}e{CLEAR 6}r{CLEAR 7}t{CLEAR 6}y{CLEAR 6}u{CLEAR 6}i{CLEAR 8}o{CLEAR 6}p{CLEAR 6}");
const u8 gText_NamingScreenKeyboard_asdfghjkl[]  = _("{CLEAR 11}a{CLEAR 6}s{CLEAR 6}d{CLEAR 6}f{CLEAR 6}g{CLEAR 6}h{CLEAR 6}j{CLEAR 7}k{CLEAR 6}l{CLEAR 8} ");
const u8 gText_NamingScreenKeyboard_zxcvbnm[]    = _("{CLEAR 11}z{CLEAR 6}x{CLEAR 6}c{CLEAR 6}v{CLEAR 6}b{CLEAR 6}n{CLEAR 6}m{CLEAR 6},{CLEAR 9}.{CLEAR 9} ");
const u8 gText_NamingScreenKeyboard_NUMBERS[]    = _("{CLEAR 11}♂{CLEAR 6}♀{CLEAR 6}/{CLEAR 6}-{CLEAR 6}…{CLEAR 6}“{CLEAR 6}”{CLEAR 6}‘{CLEAR 9}' ");
const u8 gText_NamingScreenKeyboard_QWERTYUIOP[] = _("{CLEAR 11}Q{CLEAR 6}W{CLEAR 6}E{CLEAR 6}R{CLEAR 6}T{CLEAR 6}Y{CLEAR 6}U{CLEAR 6}I{CLEAR 6}O{CLEAR 6}P{CLEAR 6}");
const u8 gText_NamingScreenKeyboard_ASDFGHJKL[]  = _("{CLEAR 11}A{CLEAR 6}S{CLEAR 6}D{CLEAR 6}F{CLEAR 6}G{CLEAR 6}H{CLEAR 6}J{CLEAR 6}K{CLEAR 6}L{CLEAR 6} ");
const u8 gText_NamingScreenKeyboard_ZXCVBNM[]    = _("{CLEAR 11}Z{CLEAR 6}X{CLEAR 6}C{CLEAR 6}V{CLEAR 6}B{CLEAR 6}N{CLEAR 6}M{CLEAR 6}?{CLEAR 6}!{CLEAR 8} ");

// Union Room Chat keyboard
const u8 gText_UnionRoomChatKeyboard_ABCDE[] = _("ABCDE");
const u8 gText_UnionRoomChatKeyboard_FGHIJ[] = _("FGHIJ");
const u8 gText_UnionRoomChatKeyboard_KLMNO[] = _("KLMNO");
const u8 gText_UnionRoomChatKeyboard_PQRST[] = _("PQRST");
const u8 gText_UnionRoomChatKeyboard_UVWXY[] = _("UVWXY");
const u8 gText_UnionRoomChatKeyboard_Z[] = _("Z    ");
const u8 gText_UnionRoomChatKeyboard_01234Upper[] = _("01234");
const u8 gText_UnionRoomChatKeyboard_56789Upper[] = _("56789");
const u8 gText_UnionRoomChatKeyboard_PunctuationUpper[] = _(".,!? ");
const u8 gText_UnionRoomChatKeyboard_SymbolsUpper[] = _("-/&… ");
const u8 gText_UnionRoomChatKeyboard_abcde[] = _("abcde");
const u8 gText_UnionRoomChatKeyboard_fghij[] = _("fghij");
const u8 gText_UnionRoomChatKeyboard_klmno[] = _("klmno");
const u8 gText_UnionRoomChatKeyboard_pqrst[] = _("pqrst");
const u8 gText_UnionRoomChatKeyboard_uvwxy[] = _("uvwxy");
const u8 gText_UnionRoomChatKeyboard_z[] = _("z    ");
const u8 gText_UnionRoomChatKeyboard_01234Lower[] = _("01234");
const u8 gText_UnionRoomChatKeyboard_56789Lower[] = _("56789");
const u8 gText_UnionRoomChatKeyboard_PunctuationLower[] = _(".,!? ");
const u8 gText_UnionRoomChatKeyboard_SymbolsLower[] = _("-/&… ");

const u8 gText_EmptyTextInput1[] = _("");
const u8 gText_EmptyTextInput2[] = _("");
const u8 gText_EmptyTextInput3[] = _("");
const u8 gText_EmptyTextInput4[] = _("");
const u8 gText_EmptyTextInput5[] = _("");
const u8 gText_EmptyTextInput6[] = _("");
const u8 gText_EmptyTextInput7[] = _("");
const u8 gText_EmptyTextInput8[] = _("");

// Union Room Chat keyboard emojis
const u8 gText_UnionRoomChatKeyboard_Emoji1[] = _("{EMOJI_MISCHIEVOUS}{EMOJI_HAPPY}{EMOJI_ANGRY}{EMOJI_SURPRISED}{EMOJI_BIGANGER}");
const u8 gText_UnionRoomChatKeyboard_Emoji2[] = _("{EMOJI_BIGSMILE}{EMOJI_EVIL}{EMOJI_NEUTRAL}{EMOJI_TIRED}{EMOJI_SHOCKED}");
const u8 gText_UnionRoomChatKeyboard_Emoji3[] = _("{EMOJI_LEAF}{EMOJI_FIRE}{EMOJI_WATER}{EMOJI_BOLT}{EMOJI_BALL}");
const u8 gText_UnionRoomChatKeyboard_Emoji4[] = _("♂♀{EMOJI_LEFT_PAREN}{EMOJI_RIGHT_PAREN}{EMOJI_TILDE}");
const u8 gText_UnionRoomChatKeyboard_Emoji5[] = _("{EMOJI_LEFT_EYE}{EMOJI_RIGHT_EYE}{EMOJI_SMALLWHEEL}{EMOJI_SPHERE}{EMOJI_IRRITATED}");
const u8 gText_UnionRoomChatKeyboard_Emoji6[] = _("{EMOJI_AT}{EMOJI_BIGWHEEL}{EMOJI_TONGUE}{EMOJI_ACUTE}{EMOJI_GRAVE}");
const u8 gText_UnionRoomChatKeyboard_Emoji7[] = _("{EMOJI_RIGHT_FIST}{EMOJI_LEFT_FIST}{EMOJI_TRIANGLE_OUTLINE}{EMOJI_UNION}{EMOJI_GREATER_THAN}");
const u8 gText_UnionRoomChatKeyboard_Emoji8[] = _("{EMOJI_CIRCLE}{EMOJI_TRIANGLE}{EMOJI_SQUARE}{EMOJI_HEART}{EMOJI_MOON}");
const u8 gText_UnionRoomChatKeyboard_Emoji9[] = _("{EMOJI_NOTE}{EMOJI_PLUS}{EMOJI_MINUS}{EMOJI_EQUALS}{EMOJI_PIPE}");
const u8 gText_UnionRoomChatKeyboard_Emoji10[] = _("{EMOJI_HIGHBAR}{EMOJI_UNDERSCORE};: ");
