#include "/share/binary_recovery/clang-parser/defs.hh"
void __fastcall sub_4026DC(FILE *a1, FILE *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  void *v4; // rax
  void *v5; // rax
  char v6; // [rsp+11h] [rbp-7Fh]
  char v7; // [rsp+12h] [rbp-7Eh]
  char v8; // [rsp+13h] [rbp-7Dh]
  int v9; // [rsp+14h] [rbp-7Ch]
  void *ptr; // [rsp+18h] [rbp-78h] BYREF
  unsigned __int64 i; // [rsp+20h] [rbp-70h]
  unsigned __int64 j; // [rsp+28h] [rbp-68h]
  void *v13; // [rsp+30h] [rbp-60h]
  void *v14; // [rsp+38h] [rbp-58h]
  __int64 v15; // [rsp+40h] [rbp-50h]
  __int64 v16; // [rsp+48h] [rbp-48h]
  unsigned __int64 v17[2]; // [rsp+50h] [rbp-40h] BYREF
  __int64 *v18; // [rsp+60h] [rbp-30h]
  unsigned __int64 v19[2]; // [rsp+70h] [rbp-20h] BYREF
  __int64 *v20; // [rsp+80h] [rbp-10h]

  sub_403CDF(a1, 2LL);
  sub_403CDF(a2, 2LL);
  sub_40221E(v17);
  sub_40224B(a1, v17, 1);
  sub_40221E(v19);
  sub_40224B(a2, v19, 2);
  if ( byte_60A310 )
  {
    if ( v17[0] )
      v2 = *(_QWORD *)(*v18 + 24);
    else
      v2 = 0LL;
    qword_60A318 = v2;
    if ( v19[0] )
      v3 = *(_QWORD *)(*v20 + 24);
    else
      v3 = 0LL;
    qword_60A320 = v3;
  }
  if ( byte_60A391 && (v17[0] || v19[0]) )
  {
    if ( v17[0] )
      v4 = (void *)*v18;
    else
      v4 = &unk_60A360;
    v13 = v4;
    if ( v19[0] )
      v5 = (void *)*v20;
    else
      v5 = &unk_60A360;
    v14 = v5;
    sub_402560(v13, (__int64)v5);
    qword_60A2C0[0] = 0LL;
    qword_60A2C8 = 0LL;
    if ( v17[0] )
      sub_402321(a1, v17, 1, 1);
    if ( v19[0] )
      sub_402321(a2, v19, 1, 2);
  }
  while ( v17[0] && v19[0] )
  {
    v9 = sub_401D05(*v18, *v20, qword_60A200, qword_60A208);
    if ( v9 >= 0 )
    {
      if ( v9 <= 0 )
      {
        v6 = 0;
        while ( (unsigned __int8)sub_402321(a1, v17, 0, 1) == 1 )
        {
          if ( (unsigned int)sub_401D05(v18[v17[0] - 1], *v20, qword_60A200, qword_60A208) )
            goto LABEL_35;
        }
        v6 = 1;
        ++v17[0];
LABEL_35:
        v7 = 0;
        while ( (unsigned __int8)sub_402321(a2, v19, 0, 2) == 1 )
        {
          if ( (unsigned int)sub_401D05(*v18, v20[v19[0] - 1], qword_60A200, qword_60A208) )
            goto LABEL_39;
        }
        v7 = 1;
        ++v19[0];
LABEL_39:
        if ( byte_60A303 )
        {
          for ( i = 0LL; v17[0] - 1 > i; ++i )
          {
            for ( j = 0LL; v19[0] - 1 > j; ++j )
              sub_402560((void *)v18[i], v20[j]);
          }
        }
        if ( v6 != 1 )
        {
          v15 = *v18;
          *v18 = v18[v17[0] - 1];
          v18[v17[0] - 1] = v15;
          v17[0] = 1LL;
        }
        else
        {
          v17[0] = 0LL;
        }
        if ( v7 != 1 )
        {
          v16 = *v20;
          *v20 = v20[v19[0] - 1];
          v20[v19[0] - 1] = v16;
          v19[0] = 1LL;
        }
        else
        {
          v19[0] = 0LL;
        }
      }
      else
      {
        if ( byte_60A302 )
          sub_402560(&unk_60A360, *v20);
        sub_402321(a2, v19, 1, 2);
        byte_60A304 = 1;
      }
    }
    else
    {
      if ( byte_60A301 )
        sub_402560((void *)*v18, (__int64)&unk_60A360);
      sub_402321(a1, v17, 1, 1);
      byte_60A304 = 1;
    }
  }
  ptr = 0LL;
  v8 = 0;
  if ( dword_60A348 != 2 && (byte_60A305[0] != 1 || byte_60A306 != 1) )
    v8 = 1;
  if ( (byte_60A301 || v8) && v17[0] )
  {
    if ( byte_60A301 )
      sub_402560((void *)*v18, (__int64)&unk_60A360);
    if ( v19[0] )
      byte_60A304 = 1;
    do
    {
      if ( !(unsigned __int8)sub_40204B(a1, (__int64 *)&ptr, 1) )
        break;
      if ( byte_60A301 )
        sub_402560(ptr, (__int64)&unk_60A360);
    }
    while ( !byte_60A305[0] || byte_60A301 == 1 );
  }
  if ( (byte_60A302 || v8) && v19[0] )
  {
    if ( byte_60A302 )
      sub_402560(&unk_60A360, *v20);
    if ( v17[0] )
      byte_60A304 = 1;
    do
    {
      if ( !(unsigned __int8)sub_40204B(a2, (__int64 *)&ptr, 2) )
        break;
      if ( byte_60A302 )
        sub_402560(&unk_60A360, (__int64)ptr);
    }
    while ( !byte_60A306 || byte_60A302 == 1 );
  }
  sub_401CB6((__int64)ptr);
  free(ptr);
  sub_402362((__int64)v17);
  sub_402362((__int64)v19);
}
