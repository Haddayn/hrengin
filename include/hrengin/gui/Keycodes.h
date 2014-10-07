/*
   Copyright (C) 2014  absurdworlds

   License LGPLv3-only:
   GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
   This is free software: you are free to change and redistribute it.
   There is NO WARRANTY, to the extent permitted by law.
 */
#ifndef _hrengin_Keycodes_
#define _hrengin_Keycodes_

namespace hrengin {

//! Key code definitions (for future use)
enum class _KeyCode : u8 {
	Unknown = 0x00,
	Escape    = 0x01,
	ScrollLock = 0x02,
	CapsLock  = 0x03,
	NumLock   = 0x04,
	Pause     = 0x07,
	BackSpace = 0x08,
	Tab       = 0x09,
	Clear     = 0x0B,
	Return    = 0x0D,
	Enter     = 0x0D,
	Kana      = 0x10,
	Kanji     = 0x12,
	SysReq    = 0x15,
	PrintScr  = 0x16,
	Space = 0x20,
	BracketL = 0x21,
	BracketR = 0x22,
	Semicolon = 0x26,
	Apostrophe = 0x27,
	BackSlash = 0x2B,
	Comma = 0x2C,
	Slash = 0x2D,
	Zero  = 0x30,  /*< Digit Zero  */
	One   = 0x31,  /*< Digit One   */
	Two   = 0x32,  /*< Digit Two   */
	Three = 0x33,  /*< Digit Three */
	Four  = 0x34,  /*< Digit Four  */
	Five  = 0x35,  /*< Digit Five  */
	Six   = 0x36,  /*< Digit Six   */
	Seven = 0x37,  /*< Digit Seven */
	Eight = 0x38,  /*< Digit Eight */
	Nine  = 0x39,  /*< Digit Nine  */
	Minus  = 0x3A,
	Equals  = 0x3B,
	A = 0x41, /*< Latin letter A */
	B = 0x42, /*< Latin letter B */
	C = 0x43, /*< Latin letter C */
	D = 0x44, /*< Latin letter D */
	E = 0x45, /*< Latin letter E */
	F = 0x46, /*< Latin letter F */
	G = 0x47, /*< Latin letter G */
	H = 0x48, /*< Latin letter H */
	I = 0x49, /*< Latin letter I */
	J = 0x4A, /*< Latin letter J */
	K = 0x4B, /*< Latin letter K */
	L = 0x4C, /*< Latin letter L */
	M = 0x4D, /*< Latin letter M */
	N = 0x4E, /*< Latin letter N */
	O = 0x4F, /*< Latin letter O */
	P = 0x50, /*< Latin letter P */
	Q = 0x51, /*< Latin letter Q */
	R = 0x52, /*< Latin letter R */
	S = 0x53, /*< Latin letter S */
	T = 0x54, /*< Latin letter T */
	U = 0x55, /*< Latin letter U */
	V = 0x56, /*< Latin letter V */
	W = 0x57, /*< Latin letter W */
	X = 0x58, /*< Latin letter X */
	Y = 0x59, /*< Latin letter Y */
	Z = 0x5A, /*< Latin letter Z */
	KeyPad0 = 0xB0, /*< Numeric keypad 0 */
	KeyPad1 = 0xB1, /*< Numeric keypad 1 */
	KeyPad2 = 0xB2, /*< Numeric keypad 2 */
	KeyPad3 = 0xB3, /*< Numeric keypad 3 */
	KeyPad4 = 0xB4, /*< Numeric keypad 4 */
	KeyPad5 = 0xB5, /*< Numeric keypad 5 */
	KeyPad6 = 0xB6, /*< Numeric keypad 6 */
	KeyPad7 = 0xB7, /*< Numeric keypad 7 */
	KeyPad8 = 0xB8, /*< Numeric keypad 8 */
	KeyPad9 = 0xB9, /*< Numeric keypad 9 */
	KeyPadDivide    = 0xBA,
	KeyPadMultiply  = 0xBB,
	KeyPadMinus     = 0xBC,
	KeyPadPlus      = 0xBD,
	KeyPadEnter     = 0xBE,
	KeyPadDecimal   = 0xBF,
	F1  = 0xC0,
	F2  = 0xC1,
	F3  = 0xC2,
	F4  = 0xC3,
	F5  = 0xC4,
	F6  = 0xC5,
	F7  = 0xC6,
	F8  = 0xC7,
	F9  = 0xC8,
	F10 = 0xC9,
	F11 = 0xCA,
	F12 = 0xCB,
	F13 = 0xCC,
	F14 = 0xCD,
	F15 = 0xCE,
	F16 = 0xCF,
	ShiftL = 0xE1,
	ShiftR = 0xE2,
	ControlL = 0xE3,
	ControlR = 0xE4,
	AltL = 0xE5,
	AltR = 0xE6,
	MenuL = 0xE7,
	MenuR = 0xE8,
	Up = 0xEA,
	Down = 0xEB,
	Left = 0xEC,
	Right = 0xED,
	PgUp = 0xEE,
	PgDn = 0xEF,
	End = 0xF0,
	Home = 0xF1,
	Insert = 0xF2,
	Delete = 0xF3,
};

// temporary
enum KeyCode {
	KEY_LBUTTON          = 0x01,  // Left mouse button
	KEY_RBUTTON          = 0x02,  // Right mouse button
	KEY_CANCEL           = 0x03,  // Control-break processing
	KEY_MBUTTON          = 0x04,  // Middle mouse button (three-button mouse)
	KEY_XBUTTON1         = 0x05,  // Windows 2000/XP: X1 mouse button
	KEY_XBUTTON2         = 0x06,  // Windows 2000/XP: X2 mouse button
	KEY_BACK             = 0x08,  // BACKSPACE key
	KEY_TAB              = 0x09,  // TAB key
	KEY_CLEAR            = 0x0C,  // CLEAR key
	KEY_RETURN           = 0x0D,  // ENTER key
	KEY_SHIFT            = 0x10,  // SHIFT key
	KEY_CONTROL          = 0x11,  // CTRL key
	KEY_MENU             = 0x12,  // ALT key
	KEY_PAUSE            = 0x13,  // PAUSE key
	KEY_CAPITAL          = 0x14,  // CAPS LOCK key
	KEY_KANA             = 0x15,  // IME Kana mode
	KEY_HANGUEL          = 0x15,  // IME Hanguel mode (maintained for compatibility use KEY_HANGUL)
	KEY_HANGUL           = 0x15,  // IME Hangul mode
	KEY_JUNJA            = 0x17,  // IME Junja mode
	KEY_FINAL            = 0x18,  // IME final mode
	KEY_HANJA            = 0x19,  // IME Hanja mode
	KEY_KANJI            = 0x19,  // IME Kanji mode
	KEY_ESCAPE           = 0x1B,  // ESC key
	KEY_CONVERT          = 0x1C,  // IME convert
	KEY_NONCONVERT       = 0x1D,  // IME nonconvert
	KEY_ACCEPT           = 0x1E,  // IME accept
	KEY_MODECHANGE       = 0x1F,  // IME mode change request
	KEY_SPACE            = 0x20,  // SPACEBAR
	KEY_PRIOR            = 0x21,  // PAGE UP key
	KEY_NEXT             = 0x22,  // PAGE DOWN key
	KEY_END              = 0x23,  // END key
	KEY_HOME             = 0x24,  // HOME key
	KEY_LEFT             = 0x25,  // LEFT ARROW key
	KEY_UP               = 0x26,  // UP ARROW key
	KEY_RIGHT            = 0x27,  // RIGHT ARROW key
	KEY_DOWN             = 0x28,  // DOWN ARROW key
	KEY_SELECT           = 0x29,  // SELECT key
	KEY_PRINT            = 0x2A,  // PRINT key
	KEY_EXECUT           = 0x2B,  // EXECUTE key
	KEY_SNAPSHOT         = 0x2C,  // PRINT SCREEN key
	KEY_INSERT           = 0x2D,  // INS key
	KEY_DELETE           = 0x2E,  // DEL key
	KEY_KEY_0            = 0x30,  // 0 key
	KEY_KEY_1            = 0x31,  // 1 key
	KEY_KEY_2            = 0x32,  // 2 key
	KEY_KEY_3            = 0x33,  // 3 key
	KEY_KEY_4            = 0x34,  // 4 key
	KEY_KEY_5            = 0x35,  // 5 key
	KEY_KEY_6            = 0x36,  // 6 key
	KEY_KEY_7            = 0x37,  // 7 key
	KEY_KEY_8            = 0x38,  // 8 key
	KEY_KEY_9            = 0x39,  // 9 key
	KEY_KEY_A            = 0x41,  // A key
	KEY_KEY_B            = 0x42,  // B key
	KEY_KEY_C            = 0x43,  // C key
	KEY_KEY_D            = 0x44,  // D key
	KEY_KEY_E            = 0x45,  // E key
	KEY_KEY_F            = 0x46,  // F key
	KEY_KEY_G            = 0x47,  // G key
	KEY_KEY_H            = 0x48,  // H key
	KEY_KEY_I            = 0x49,  // I key
	KEY_KEY_J            = 0x4A,  // J key
	KEY_KEY_K            = 0x4B,  // K key
	KEY_KEY_L            = 0x4C,  // L key
	KEY_KEY_M            = 0x4D,  // M key
	KEY_KEY_N            = 0x4E,  // N key
	KEY_KEY_O            = 0x4F,  // O key
	KEY_KEY_P            = 0x50,  // P key
	KEY_KEY_Q            = 0x51,  // Q key
	KEY_KEY_R            = 0x52,  // R key
	KEY_KEY_S            = 0x53,  // S key
	KEY_KEY_T            = 0x54,  // T key
	KEY_KEY_U            = 0x55,  // U key
	KEY_KEY_V            = 0x56,  // V key
	KEY_KEY_W            = 0x57,  // W key
	KEY_KEY_X            = 0x58,  // X key
	KEY_KEY_Y            = 0x59,  // Y key
	KEY_KEY_Z            = 0x5A,  // Z key
	KEY_NUMPAD0          = 0x60,  // Numeric keypad 0 key
	KEY_NUMPAD1          = 0x61,  // Numeric keypad 1 key
	KEY_NUMPAD2          = 0x62,  // Numeric keypad 2 key
	KEY_NUMPAD3          = 0x63,  // Numeric keypad 3 key
	KEY_NUMPAD4          = 0x64,  // Numeric keypad 4 key
	KEY_NUMPAD5          = 0x65,  // Numeric keypad 5 key
	KEY_NUMPAD6          = 0x66,  // Numeric keypad 6 key
	KEY_NUMPAD7          = 0x67,  // Numeric keypad 7 key
	KEY_NUMPAD8          = 0x68,  // Numeric keypad 8 key
	KEY_NUMPAD9          = 0x69,  // Numeric keypad 9 key
	KEY_MULTIPLY         = 0x6A,  // Multiply key
	KEY_ADD              = 0x6B,  // Add key
	KEY_SEPARATOR        = 0x6C,  // Separator key
	KEY_SUBTRACT         = 0x6D,  // Subtract key
	KEY_DECIMAL          = 0x6E,  // Decimal key
	KEY_DIVIDE           = 0x6F,  // Divide key
	KEY_F1               = 0x70,  // F1 key
	KEY_F2               = 0x71,  // F2 key
	KEY_F3               = 0x72,  // F3 key
	KEY_F4               = 0x73,  // F4 key
	KEY_F5               = 0x74,  // F5 key
	KEY_F6               = 0x75,  // F6 key
	KEY_F7               = 0x76,  // F7 key
	KEY_F8               = 0x77,  // F8 key
	KEY_F9               = 0x78,  // F9 key
	KEY_F10              = 0x79,  // F10 key
	KEY_F11              = 0x7A,  // F11 key
	KEY_F12              = 0x7B,  // F12 key
	KEY_NUMLOCK          = 0x90,  // NUM LOCK key
	KEY_SCROLL           = 0x91,  // SCROLL LOCK key
	KEY_LSHIFT           = 0xA0,  // Left SHIFT key
	KEY_RSHIFT           = 0xA1,  // Right SHIFT key
	KEY_LCONTROL         = 0xA2,  // Left CONTROL key
	KEY_RCONTROL         = 0xA3,  // Right CONTROL key
	KEY_LMENU            = 0xA4,  // Left MENU key
	KEY_RMENU            = 0xA5,  // Right MENU key
	KEY_OEM_1            = 0xBA,  // for US    ";:"
	KEY_PLUS             = 0xBB,  // Plus Key   "+"
	KEY_COMMA            = 0xBC,  // Comma Key  ","
	KEY_MINUS            = 0xBD,  // Minus Key  "-"
	KEY_PERIOD           = 0xBE,  // Period Key "."
};

} // end namespace hrengin

#endif //_hrengin_Keycodes_

