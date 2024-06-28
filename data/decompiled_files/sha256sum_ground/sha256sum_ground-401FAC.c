#include "/share/binary_recovery/clang-parser/defs.hh"
_BOOL8 __fastcall sub_401FAC(const char *a1)
{
  int v1; // eax
  int *v2; // rax
  _BOOL8 result; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rbx
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rax
  int *v11; // rax
  char *v12; // rax
  __int64 v13; // rax
  char *v14; // rax
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // rax
  char *v18; // rax
  bool v19; // al
  const char *s1; // [rsp+8h] [rbp-C8h]
  bool v21; // [rsp+12h] [rbp-BEh]
  int v22; // [rsp+14h] [rbp-BCh] BYREF
  char *lineptr; // [rsp+18h] [rbp-B8h] BYREF
  size_t n; // [rsp+20h] [rbp-B0h] BYREF
  char *v25; // [rsp+28h] [rbp-A8h] BYREF
  _BYTE *v26; // [rsp+30h] [rbp-A0h] BYREF
  FILE *stream; // [rsp+38h] [rbp-98h]
  __int64 v28; // [rsp+40h] [rbp-90h]
  __int64 v29; // [rsp+48h] [rbp-88h]
  __int64 v30; // [rsp+50h] [rbp-80h]
  __int64 v31; // [rsp+58h] [rbp-78h]
  __int64 v32; // [rsp+60h] [rbp-70h]
  __int64 v33; // [rsp+68h] [rbp-68h]
  signed __int64 v34; // [rsp+70h] [rbp-60h]
  unsigned __int64 i; // [rsp+78h] [rbp-58h]
  __int64 v36; // [rsp+80h] [rbp-50h]
  unsigned __int64 v37; // [rsp+88h] [rbp-48h]
  char v38[40]; // [rsp+90h] [rbp-40h] BYREF
  unsigned __int64 v39; // [rsp+B8h] [rbp-18h]

  s1 = a1;
  v39 = __readfsqword(0x28u);
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v36 = sub_40170B((__int64)v38, 4uLL);
  v1 = strcmp(a1, "-");
  v21 = v1 == 0;
  if ( v1 )
  {
    stream = (FILE *)sub_406D1E(a1, "r");
    if ( !stream )
    {
      v2 = __errno_location();
      error(0, *v2, "%s", a1);
      return 0LL;
    }
  }
  else
  {
    byte_60C280 = 1;
    s1 = gettext("standard input");
    stream = (FILE *)stdin;
  }
  v33 = 0LL;
  lineptr = 0LL;
  n = 0LL;
  do
  {
    if ( !++v33 )
    {
      v4 = gettext("%s: too many checksum lines");
      error(1, 0, v4, s1);
    }
    v34 = getline(&lineptr, &n, stream);
    if ( v34 <= 0 )
      break;
    if ( *lineptr != 35 )
    {
      if ( lineptr[v34 - 1] == 10 )
        lineptr[--v34] = 0;
      if ( (unsigned __int8)sub_401AE3((__int64)lineptr, v34, &v26, &v22, &v25) != 1
        || v21 && !strcmp(v25, "-")
        || !sub_401DF4(v26) )
      {
        ++v28;
        if ( byte_60C299 )
        {
          v5 = gettext("%s: %lu: improperly formatted %s checksum line");
          error(0, 0, v5, s1, v33, "SHA256");
        }
        ++v30;
      }
      else
      {
        ++v29;
        if ( (unsigned __int8)sub_401E5D(v25, (__int64)&v22, v36) != 1 )
        {
          ++v32;
          if ( byte_60C298 != 1 )
          {
            v6 = v25;
            v7 = gettext("%s: FAILED open or read\n");
            printf(v7, v6);
          }
        }
        else
        {
          v37 = (unsigned __int64)qword_60C290 >> 1;
          for ( i = 0LL;
                i < v37
             && tolower((unsigned __int8)v26[2 * i]) == byte_40A2D0[*(_BYTE *)(v36 + i) >> 4]
             && tolower((unsigned __int8)v26[2 * i + 1]) == byte_40A2D0[*(_BYTE *)(v36 + i) & 0xF];
                ++i )
          {
            ;
          }
          if ( i != v37 )
            ++v31;
          if ( byte_60C298 != 1 )
          {
            if ( i == v37 )
            {
              if ( byte_60C29A != 1 )
              {
                v9 = gettext("OK");
                printf("%s: %s\n", v25, v9);
              }
            }
            else
            {
              v8 = gettext("FAILED");
              printf("%s: %s\n", v25, v8);
            }
          }
        }
      }
    }
  }
  while ( !feof_unlocked(stream) && !ferror_unlocked(stream) );
  free(lineptr);
  if ( ferror_unlocked(stream) )
  {
    v10 = gettext("%s: read error");
    error(0, 0, v10, s1);
    result = 0LL;
  }
  else if ( !v21 && (unsigned int)sub_4091DB(stream) )
  {
    v11 = __errno_location();
    error(0, *v11, "%s", s1);
    result = 0LL;
  }
  else
  {
    if ( v29 )
    {
      if ( byte_60C298 != 1 )
      {
        if ( v28 )
        {
          v13 = sub_4016FD(v28);
          v14 = ngettext(
                  "WARNING: %lu line is improperly formatted",
                  "WARNING: %lu lines are improperly formatted",
                  v13);
          error(0, 0, v14, v28);
        }
        if ( v32 )
        {
          v15 = sub_4016FD(v32);
          v16 = ngettext(
                  "WARNING: %lu listed file could not be read",
                  "WARNING: %lu listed files could not be read",
                  v15);
          error(0, 0, v16, v32);
        }
        if ( v31 )
        {
          v17 = sub_4016FD(v31);
          v18 = ngettext(
                  "WARNING: %lu computed checksum did NOT match",
                  "WARNING: %lu computed checksums did NOT match",
                  v17);
          error(0, 0, v18, v31);
        }
      }
    }
    else
    {
      v12 = gettext("%s: no properly formatted %s checksum lines found");
      error(0, 0, v12, s1, "SHA256");
    }
    v19 = v29 && !v31 && !v32 && (byte_60C29B != 1 || !v30);
    result = v19;
  }
  return result;
}
