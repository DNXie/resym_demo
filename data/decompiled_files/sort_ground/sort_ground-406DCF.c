#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_406DCF(unsigned __int8 **a1, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // rax
  unsigned __int8 *v3; // rax
  size_t v4; // rax
  unsigned __int8 *v5; // rbx
  unsigned __int8 v6; // al
  size_t v7; // rax
  unsigned __int8 *v8; // rbx
  unsigned __int8 v9; // al
  int v10; // ebx
  unsigned __int8 v11; // al
  int v12; // ebx
  unsigned __int8 v13; // al
  int v14; // ebx
  unsigned __int8 *v15; // rax
  unsigned __int8 v16; // al
  int v17; // ebx
  unsigned __int8 *v18; // rax
  unsigned __int8 v19; // al
  size_t v20; // rax
  int v21; // eax
  __int64 result; // rax
  unsigned __int8 v23; // [rsp+1Ah] [rbp-1046h]
  unsigned __int8 v24; // [rsp+1Bh] [rbp-1045h]
  unsigned int v25; // [rsp+1Ch] [rbp-1044h]
  __int64 v26; // [rsp+20h] [rbp-1040h]
  unsigned __int8 *s1; // [rsp+28h] [rbp-1038h]
  unsigned __int8 *s2; // [rsp+30h] [rbp-1030h]
  unsigned __int8 *v29; // [rsp+38h] [rbp-1028h]
  unsigned __int8 *v30; // [rsp+38h] [rbp-1028h]
  unsigned __int8 *v31; // [rsp+40h] [rbp-1020h]
  unsigned __int64 v32; // [rsp+40h] [rbp-1020h]
  unsigned __int8 *v33; // [rsp+48h] [rbp-1018h]
  unsigned __int8 *v34; // [rsp+50h] [rbp-1010h]
  size_t v35; // [rsp+58h] [rbp-1008h]
  size_t v36; // [rsp+60h] [rbp-1000h]
  unsigned __int8 *ptr; // [rsp+68h] [rbp-FF8h]
  size_t v38; // [rsp+70h] [rbp-FF0h]
  size_t v39; // [rsp+70h] [rbp-FF0h]
  __int64 v40; // [rsp+78h] [rbp-FE8h]
  __int64 v41; // [rsp+80h] [rbp-FE0h]
  size_t v42; // [rsp+88h] [rbp-FD8h]
  size_t n; // [rsp+90h] [rbp-FD0h]
  unsigned __int64 v44; // [rsp+98h] [rbp-FC8h]
  char v45; // [rsp+A0h] [rbp-FC0h] BYREF
  unsigned __int64 v46; // [rsp+1048h] [rbp-18h]

  v46 = __readfsqword(0x28u);
  v26 = qword_61DA08;
  s1 = a1[2];
  s2 = a2[2];
  v29 = a1[3];
  v31 = a2[3];
  while ( 1 )
  {
    v40 = *(_QWORD *)(v26 + 40);
    v41 = *(_QWORD *)(v26 + 32);
    v2 = s1;
    if ( v29 >= s1 )
      v2 = v29;
    v30 = v2;
    v3 = s2;
    if ( v31 >= s2 )
      v3 = v31;
    v32 = (unsigned __int64)v3;
    v42 = v30 - s1;
    n = v3 - s2;
    if ( byte_61D5C8 || sub_40603C((_BYTE *)v26) || *(_BYTE *)(v26 + 54) || *(_BYTE *)(v26 + 51) || *(_BYTE *)(v26 + 56) )
    {
      if ( v41 || v40 )
      {
        v44 = v42 + n + 2;
        if ( v44 > 0xFA0 )
        {
          ptr = (unsigned __int8 *)sub_414F92(v44);
          v33 = ptr;
        }
        else
        {
          v33 = (unsigned __int8 *)&v45;
          ptr = 0LL;
        }
        v34 = &v33[v42 + 1];
        v38 = 0LL;
        v35 = 0LL;
        while ( v38 < v42 )
        {
          if ( !v41 || *(_BYTE *)((unsigned __int8)sub_402B35(s1[v38]) + v41) != 1 )
          {
            v4 = v35++;
            v5 = &v33[v4];
            if ( v40 )
              v6 = *(_BYTE *)((unsigned __int8)sub_402B35(s1[v38]) + v40);
            else
              v6 = s1[v38];
            *v5 = v6;
          }
          ++v38;
        }
        v33[v35] = 0;
        v39 = 0LL;
        v36 = 0LL;
        while ( v39 < n )
        {
          if ( !v41 || *(_BYTE *)((unsigned __int8)sub_402B35(s2[v39]) + v41) != 1 )
          {
            v7 = v36++;
            v8 = &v34[v7];
            if ( v40 )
              v9 = *(_BYTE *)((unsigned __int8)sub_402B35(s2[v39]) + v40);
            else
              v9 = s2[v39];
            *v8 = v9;
          }
          ++v39;
        }
        v34[v36] = 0;
      }
      else
      {
        v33 = s1;
        v35 = v30 - s1;
        v23 = *v30;
        *v30 = 0;
        v34 = s2;
        v36 = n;
        v24 = s2[n];
        s2[n] = 0;
      }
      if ( *(_BYTE *)(v26 + 50) )
      {
        v25 = sub_405428(v33, v34);
      }
      else if ( *(_BYTE *)(v26 + 52) )
      {
        v25 = sub_4054A6((const char *)v33, (const char *)v34);
      }
      else if ( *(_BYTE *)(v26 + 53) )
      {
        v25 = sub_405378(v33, v34);
      }
      else if ( *(_BYTE *)(v26 + 54) )
      {
        v10 = sub_4055B7(v33, 0LL);
        v25 = v10 - sub_4055B7(v34, 0LL);
      }
      else if ( *(_BYTE *)(v26 + 51) )
      {
        v25 = sub_4058C1((char *)v33, v35, (char *)v34, v36);
      }
      else if ( *(_BYTE *)(v26 + 56) )
      {
        v25 = sub_40EAFE(v33, v34);
      }
      else if ( v35 )
      {
        if ( v36 )
          v25 = sub_415281(v33, v35 + 1, v34, v36 + 1);
        else
          v25 = 1;
      }
      else
      {
        v25 = -(v36 != 0);
      }
      if ( v41 || v40 )
      {
        free(ptr);
      }
      else
      {
        v33[v35] = v23;
        v34[v36] = v24;
      }
      goto LABEL_102;
    }
    if ( v41 )
    {
      if ( v40 )
      {
        while ( 1 )
        {
          while ( s1 < v30 && *(_BYTE *)((unsigned __int8)sub_402B35(*s1) + v41) )
            ++s1;
          while ( (unsigned __int64)s2 < v32 && *(_BYTE *)((unsigned __int8)sub_402B35(*s2) + v41) )
            ++s2;
          if ( s1 >= v30 || (unsigned __int64)s2 >= v32 )
            break;
          v11 = sub_402B35(*s1);
          v12 = (unsigned __int8)sub_402B35(*(_BYTE *)(v11 + v40));
          v13 = sub_402B35(*s2);
          v25 = v12 - (unsigned __int8)sub_402B35(*(_BYTE *)(v13 + v40));
          if ( v25 )
            goto LABEL_120;
          ++s1;
          ++s2;
        }
        v25 = (s1 < v30) - ((unsigned __int64)s2 < v32);
      }
      else
      {
        while ( 1 )
        {
          while ( s1 < v30 && *(_BYTE *)((unsigned __int8)sub_402B35(*s1) + v41) )
            ++s1;
          while ( (unsigned __int64)s2 < v32 && *(_BYTE *)((unsigned __int8)sub_402B35(*s2) + v41) )
            ++s2;
          if ( s1 >= v30 || (unsigned __int64)s2 >= v32 )
            break;
          v14 = (unsigned __int8)sub_402B35(*s1);
          v25 = v14 - (unsigned __int8)sub_402B35(*s2);
          if ( v25 )
            goto LABEL_120;
          ++s1;
          ++s2;
        }
        v25 = (s1 < v30) - ((unsigned __int64)s2 < v32);
      }
      goto LABEL_102;
    }
    if ( !v42 )
    {
      v25 = -(n != 0);
      goto LABEL_102;
    }
    if ( !n )
      break;
    if ( v40 )
    {
      while ( s1 < v30 && (unsigned __int64)s2 < v32 )
      {
        v15 = s1++;
        v16 = sub_402B35(*v15);
        v17 = (unsigned __int8)sub_402B35(*(_BYTE *)(v16 + v40));
        v18 = s2++;
        v19 = sub_402B35(*v18);
        v25 = v17 - (unsigned __int8)sub_402B35(*(_BYTE *)(v19 + v40));
        if ( v25 )
          goto LABEL_120;
      }
    }
    else
    {
      v20 = v30 - s1;
      if ( n <= v42 )
        v20 = n;
      v25 = memcmp(s1, s2, v20);
      if ( v25 )
        goto LABEL_120;
    }
    if ( v42 < n )
      v21 = -1;
    else
      v21 = v42 != n;
    v25 = v21;
LABEL_102:
    if ( v25 )
      goto LABEL_120;
    v26 = *(_QWORD *)(v26 + 64);
    if ( !v26 )
      return 0LL;
    if ( *(_QWORD *)(v26 + 16) == -1LL )
    {
      v29 = &a1[1][(_QWORD)*a1 - 1];
      v31 = &a2[1][(_QWORD)*a2 - 1];
    }
    else
    {
      v29 = sub_404BF1((__int64)a1, v26);
      v31 = sub_404BF1((__int64)a2, v26);
    }
    if ( *(_QWORD *)v26 == -1LL )
    {
      s1 = *a1;
      s2 = *a2;
      if ( *(_BYTE *)(v26 + 48) )
      {
        while ( s1 < v29 && byte_61D5E0[(unsigned __int8)sub_402B35(*s1)] )
          ++s1;
        while ( s2 < v31 && byte_61D5E0[(unsigned __int8)sub_402B35(*s2)] )
          ++s2;
      }
    }
    else
    {
      s1 = sub_404A5B((__int64)a1, (__int64 *)v26);
      s2 = sub_404A5B((__int64)a2, (__int64 *)v26);
    }
  }
  v25 = 1;
LABEL_120:
  if ( *(_BYTE *)(v26 + 55) )
    result = -v25;
  else
    result = v25;
  return result;
}
