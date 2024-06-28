#include "/share/binary_recovery/clang-parser/defs.hh"
bool __fastcall sub_4061A9(_DWORD *a1, struct tm *a2, time_t a3)
{
  bool result; // al
  time_t timer; // [rsp+8h] [rbp-18h] BYREF
  struct tm *v5; // [rsp+10h] [rbp-10h]
  _DWORD *v6; // [rsp+18h] [rbp-8h]

  v6 = a1;
  v5 = a2;
  timer = a3;
  if ( a3 != -1 || (v5 = localtime(&timer)) != 0LL )
    result = (v6[4] ^ v5->tm_mon | v6[3] ^ v5->tm_mday | v6[2] ^ v5->tm_hour | v6[1] ^ v5->tm_min | v5->tm_sec ^ *v6 | v6[5] ^ v5->tm_year) == 0;
  else
    result = 0;
  return result;
}
