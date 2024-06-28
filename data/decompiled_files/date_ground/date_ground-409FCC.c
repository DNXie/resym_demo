#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_409FCC(time_t *a1, const char *a2, unsigned int a3)
{
  time_t timer; // [rsp+20h] [rbp-D0h] BYREF
  char v6[8]; // [rsp+28h] [rbp-C8h] BYREF
  struct tm *v7; // [rsp+30h] [rbp-C0h]
  char *v8; // [rsp+38h] [rbp-B8h]
  __int64 v9; // [rsp+40h] [rbp-B0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-A8h]
  __int64 v11; // [rsp+50h] [rbp-A0h]
  __int64 v12; // [rsp+58h] [rbp-98h]
  __int64 v13; // [rsp+60h] [rbp-90h]
  __int64 v14; // [rsp+68h] [rbp-88h]
  const char *v15; // [rsp+70h] [rbp-80h]
  struct tm tp; // [rsp+80h] [rbp-70h] BYREF
  char dest[24]; // [rsp+C0h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+D8h] [rbp-18h]

  v18 = __readfsqword(0x28u);
  if ( (unsigned int)sub_409CFB(&v9, a2, a3) )
    return 0LL;
  *(_QWORD *)&tp.tm_sec = v9;
  *(_QWORD *)&tp.tm_hour = v10;
  *(_QWORD *)&tp.tm_mon = v11;
  *(_QWORD *)&tp.tm_wday = v12;
  *(&tp.tm_isdst + 1) = HIDWORD(v13);
  tp.tm_gmtoff = v14;
  tp.tm_zone = v15;
  tp.tm_isdst = -1;
  timer = mktime(&tp);
  if ( timer == -1 )
  {
    v7 = localtime(&timer);
    if ( !v7 )
      return 0LL;
  }
  else
  {
    v7 = &tp;
  }
  if ( !(HIDWORD(v9) ^ v7->tm_min | (unsigned int)v10 ^ v7->tm_hour | HIDWORD(v10) ^ v7->tm_mday | (unsigned int)v11 ^ v7->tm_mon | v7->tm_year ^ HIDWORD(v11) | (unsigned int)v9 ^ v7->tm_sec) )
    goto LABEL_12;
  if ( (_DWORD)v9 != 60 )
    return 0LL;
  v8 = stpcpy(dest, a2);
  strcpy(v8 - 2, "59");
  if ( (unsigned __int8)sub_409FCC(v6, dest, a3) != 1 )
    return 0LL;
LABEL_12:
  *a1 = timer;
  return 1LL;
}
