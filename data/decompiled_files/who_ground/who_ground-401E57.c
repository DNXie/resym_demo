#include "/share/binary_recovery/clang-parser/defs.hh"
unsigned __int64 __fastcall sub_401E57(__int64 a1, time_t a2)
{
  char v2; // al
  char *v3; // rax
  const char *v4; // rax
  size_t v5; // rbx
  size_t v6; // rbx
  const char *v7; // rbx
  char *v8; // rax
  char v10; // [rsp+37h] [rbp-219h]
  __time_t v11; // [rsp+38h] [rbp-218h]
  char *v12; // [rsp+40h] [rbp-210h]
  const char *v13; // [rsp+48h] [rbp-208h]
  struct stat stat_buf; // [rsp+50h] [rbp-200h] BYREF
  char v15[16]; // [rsp+E0h] [rbp-170h] BYREF
  char s[16]; // [rsp+F0h] [rbp-160h] BYREF
  char dest[48]; // [rsp+100h] [rbp-150h] BYREF
  char v18[264]; // [rsp+130h] [rbp-120h] BYREF
  unsigned __int64 v19; // [rsp+238h] [rbp-18h]

  v19 = __readfsqword(0x28u);
  sprintf(s, "%ld", *(int *)(a1 + 4));
  if ( *(_BYTE *)(a1 + 8) == 47 )
  {
    strncpy(dest, (const char *)(a1 + 8), 0x20uLL);
    dest[32] = 0;
  }
  else
  {
    strcpy(dest, "/dev/");
    strncpy(&dest[5], (const char *)(a1 + 8), 0x20uLL);
    dest[37] = 0;
  }
  if ( (unsigned int)sub_40BB90(dest, &stat_buf) )
  {
    v10 = 63;
    v11 = 0LL;
  }
  else
  {
    if ( sub_401E3E((__int64)&stat_buf) )
      v2 = 43;
    else
      v2 = 45;
    v10 = v2;
    v11 = stat_buf.st_atim.tv_sec;
  }
  if ( v11 )
  {
    v3 = sub_401A2C(v11, a2);
    sprintf(v15, "%.*s", 6, v3);
  }
  else
  {
    *(_DWORD *)v15 = 4136992;
  }
  if ( *(_BYTE *)(a1 + 76) )
  {
    v12 = 0LL;
    strncpy(v18, (const char *)(a1 + 76), 0x100uLL);
    v18[256] = 0;
    v13 = strchr(v18, 58);
    if ( v13 )
    {
      v4 = v13++;
      *v4 = 0;
    }
    if ( v18[0] && byte_60F2C0 )
      v12 = (char *)sub_4034BC(v18);
    if ( !v12 )
      v12 = v18;
    if ( v13 )
    {
      v5 = strlen(v12);
      if ( v5 + strlen(v13) + 4 > qword_60F328 )
      {
        v6 = strlen(v12);
        qword_60F328 = v6 + strlen(v13) + 4;
        free(ptr);
        ptr = (char *)sub_405B39(qword_60F328);
      }
      sprintf(ptr, "(%s:%s)", v12, v13);
    }
    else
    {
      if ( strlen(v12) + 3 > qword_60F328 )
      {
        qword_60F328 = strlen(v12) + 3;
        free(ptr);
        ptr = (char *)sub_405B39(qword_60F328);
      }
      sprintf(ptr, "(%s)", v12);
    }
    if ( v12 != v18 )
      free(v12);
  }
  else
  {
    if ( !qword_60F328 )
    {
      qword_60F328 = 1LL;
      free(ptr);
      ptr = (char *)sub_405B39(qword_60F328);
    }
    *ptr = 0;
  }
  if ( ptr )
    v7 = ptr;
  else
    v7 = &locale;
  v8 = sub_401B3F(a1);
  sub_401BAC(32, a1 + 44, v10, 32, a1 + 8, (__int64)v8, v15, s, (__int64)v7, &locale);
  return __readfsqword(0x28u) ^ v19;
}
