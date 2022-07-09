/*
 * (a) Days in a month -- 31 = char
 * (b) Days in a year -- 365 = short
 * (c) Minutes in a day -- 1,440 = short
 * (d) Seconds in a day -- 86,400 = long
 *
 *
 * The only things the C standard mandates is that int must not be shorter than short,
 * and long must not be shorter than int. It’s possible, however, that short actually
 * represents the same range of values as int, and int actually represents the same
 * range as long.
 */
