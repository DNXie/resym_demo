#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_404B43(unsigned int a1, __int64 (__fastcall *a2)(char *, signed __int64, __int64), __int64 (__fastcall *a3)(_QWORD, const char *, __int64), __int64 a4)
{
  int v4; // eax
  __int64 result; // rax
  int v8; // [rsp+2Ch] [rbp-84h]
  char *inbuf; // [rsp+30h] [rbp-80h] BYREF
  size_t inbytesleft; // [rsp+38h] [rbp-78h] BYREF
  char *outbuf; // [rsp+40h] [rbp-70h] BYREF
  size_t outbytesleft; // [rsp+48h] [rbp-68h] BYREF
  char *s1; // [rsp+50h] [rbp-60h]
  size_t v14; // [rsp+58h] [rbp-58h]
  char v15[16]; // [rsp+60h] [rbp-50h] BYREF
  char v16[40]; // [rsp+70h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp-18h]

  v17 = __readfsqword(0x28u);
  if ( !dword_60F400 )
  {
    s1 = (char *)sub_406513();
    v4 = strcmp(s1, "UTF-8");
    dword_60F404 = v4 == 0;
    if ( v4 )
    {
      cd = iconv_open(s1, "UTF-8");
      if ( cd == (iconv_t)-1LL )
        cd = iconv_open("ASCII", "UTF-8");
    }
    dword_60F400 = 1;
  }
  if ( !dword_60F404 && cd == (iconv_t)-1LL )
    return a3(a1, "iconv function not usable", a4);
  v8 = sub_404F2A(v15, a1, 6LL);
  if ( v8 < 0 )
    return a3(a1, "character out of range", a4);
  if ( dword_60F404 )
    return a2(v15, v8, a4);
  inbuf = v15;
  inbytesleft = v8;
  outbuf = v16;
  outbytesleft = 25LL;
  v14 = iconv(cd, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
  if ( inbytesleft || v14 == -1LL || (v14 = iconv(cd, 0LL, 0LL, &outbuf, &outbytesleft), v14 == -1LL) )
    result = a3(a1, 0LL, a4);
  else
    result = a2(v16, outbuf - v16, a4);
  return result;
}
