#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 __fastcall sub_40372C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rdx
  __int64 *v13; // rdx
  __int64 *v14; // rdx
  __int64 *v15; // rdx
  __int64 *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rax
  unsigned int v20; // eax
  __int64 *v21; // rax
  unsigned int v22; // eax
  int v24; // [rsp+40h] [rbp-590h]
  int v25; // [rsp+44h] [rbp-58Ch]
  int v26; // [rsp+48h] [rbp-588h]
  int v27; // [rsp+48h] [rbp-588h]
  int v28; // [rsp+4Ch] [rbp-584h]
  int v29; // [rsp+50h] [rbp-580h]
  unsigned int v30; // [rsp+54h] [rbp-57Ch]
  unsigned int v31; // [rsp+58h] [rbp-578h]
  int v32; // [rsp+5Ch] [rbp-574h]
  void *src; // [rsp+60h] [rbp-570h]
  char *v34; // [rsp+68h] [rbp-568h]
  void *v35; // [rsp+70h] [rbp-560h]
  __int64 *v36; // [rsp+78h] [rbp-558h]
  unsigned __int64 v37; // [rsp+80h] [rbp-550h]
  __int64 v38; // [rsp+88h] [rbp-548h]
  void *ptr; // [rsp+90h] [rbp-540h]
  void *dest; // [rsp+98h] [rbp-538h]
  unsigned __int64 v41; // [rsp+A0h] [rbp-530h]
  unsigned __int64 v42; // [rsp+A8h] [rbp-528h]
  char v43[48]; // [rsp+B0h] [rbp-520h] BYREF
  __int64 v44; // [rsp+E0h] [rbp-4F0h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-4E8h]
  __int64 v46; // [rsp+F0h] [rbp-4E0h]
  __int64 v47; // [rsp+F8h] [rbp-4D8h]
  __int64 v48; // [rsp+100h] [rbp-4D0h]
  __int64 v49; // [rsp+108h] [rbp-4C8h]
  __int64 v50; // [rsp+110h] [rbp-4C0h]
  __int64 v51[8]; // [rsp+120h] [rbp-4B0h] BYREF
  char v52[1136]; // [rsp+160h] [rbp-470h] BYREF

  v32 = 0;
  v31 = 0;
  src = v43;
  v35 = v52;
  v37 = 20LL;
  v26 = 0;
  v28 = 0;
  v25 = 0;
  v24 = -2;
  v34 = v43;
  v36 = (__int64 *)v52;
  while ( 1 )
  {
    *(_WORD *)v34 = v26;
    if ( (char *)src + 2 * v37 - 2 > v34 )
      goto LABEL_11;
    v38 = ((v34 - (_BYTE *)src) >> 1) + 1;
    if ( v37 > 0x13 )
      break;
    v37 *= 2LL;
    if ( v37 > 0x14 )
      v37 = 20LL;
    ptr = src;
    dest = malloc(58 * v37 + 55);
    if ( !dest )
      break;
    memcpy(dest, src, 2 * v38);
    src = dest;
    v41 = 2 * v37 + 55;
    dest = (char *)dest + 56 * (v41 / 0x38);
    a2 = (__int64)v35;
    memcpy(dest, v35, 56 * v38);
    v35 = dest;
    v42 = 56 * v37 + 55;
    dest = (char *)dest + 56 * (v42 / 0x38);
    if ( ptr != v43 )
      free(ptr);
    v34 = (char *)src + 2 * v38 - 2;
    v36 = (__int64 *)((char *)v35 + 56 * v38 - 56);
    if ( (char *)src + 2 * v37 - 2 <= v34 )
    {
LABEL_224:
      v30 = 1;
      goto LABEL_226;
    }
LABEL_11:
    if ( v26 == 12 )
    {
      v30 = 0;
      goto LABEL_226;
    }
    v29 = byte_40D500[v26];
    if ( v29 == -93 )
      goto LABEL_30;
    if ( v24 == -2 )
    {
      a2 = a1;
      v24 = sub_405C3B(&v44, a1);
    }
    if ( v24 > 0 )
    {
      v6 = (unsigned int)v24 > 0x115 ? 2 : (unsigned __int8)byte_40D3E0[v24];
      v31 = v6;
    }
    else
    {
      v31 = 0;
      v24 = 0;
    }
    v29 += v31;
    if ( v29 < 0 || v29 > 112 || byte_40D6C0[v29] != v31 )
    {
LABEL_30:
      v29 = (unsigned __int8)byte_40D580[v26];
      if ( v29 )
        goto LABEL_33;
      if ( v24 == -2 )
      {
        v20 = -2;
      }
      else if ( (unsigned int)v24 > 0x115 )
      {
        v20 = 2;
      }
      else
      {
        v20 = (unsigned __int8)byte_40D3E0[v24];
      }
      v31 = v20;
      if ( !v28 )
      {
        ++v25;
        a2 = (__int64)"syntax error";
        sub_406196(a1, "syntax error");
      }
      if ( v28 == 3 )
      {
        if ( v24 > 0 )
        {
          a2 = v31;
          sub_403707();
          v24 = -2;
        }
        else if ( !v24 )
        {
          goto LABEL_224;
        }
      }
      v28 = 3;
      while ( 1 )
      {
        v29 = byte_40D500[v26];
        if ( v29 != -93 && ++v29 >= 0 && v29 <= 112 && byte_40D6C0[v29] == 1 )
        {
          v29 = (unsigned __int8)byte_40D640[v29];
          if ( v29 > 0 )
            break;
        }
        if ( v34 == src )
          goto LABEL_224;
        a2 = (unsigned __int8)byte_40D740[v26];
        sub_403707();
        v36 -= 7;
        v34 -= 2;
        v26 = *(__int16 *)v34;
      }
      v36 += 7;
      v21 = v36;
      *v36 = v44;
      v21[1] = v45;
      v21[2] = v46;
      v21[3] = v47;
      v21[4] = v48;
      v21[5] = v49;
      v21[6] = v50;
      v26 = v29;
    }
    else
    {
      v29 = (unsigned __int8)byte_40D640[v29];
      if ( v29 <= 0 )
      {
        v29 = -v29;
LABEL_33:
        v32 = (unsigned __int8)byte_40D820[v29];
        v8 = &v36[7 * (1 - v32)];
        v51[0] = *v8;
        v51[1] = v8[1];
        v51[2] = v8[2];
        v51[3] = v8[3];
        v51[4] = v8[4];
        v51[5] = v8[5];
        v51[6] = v8[6];
        if ( v29 == 50 )
        {
          v16 = v36 - 14;
          *(_QWORD *)(a1 + 40) = *(v36 - 14);
          *(_QWORD *)(a1 + 48) = v16[1];
          *(_QWORD *)(a1 + 56) = v16[2];
          *(_QWORD *)(a1 + 64) = -*(v36 - 6);
          *(_QWORD *)(a1 + 72) = -v36[1];
          goto LABEL_199;
        }
        if ( v29 <= 50 )
        {
          if ( v29 == 31 )
          {
            *(_QWORD *)(a1 + 24) = 420LL;
          }
          else if ( v29 > 31 )
          {
            if ( v29 == 40 )
            {
              *(_QWORD *)(a1 + 8) = *(v36 - 6);
              *(_DWORD *)(a1 + 16) = *v36;
            }
            else if ( v29 > 40 )
            {
              if ( v29 == 44 )
              {
                *(_QWORD *)(a1 + 64) = *(v36 - 14);
                *(_QWORD *)(a1 + 72) = -*(v36 - 6);
                *(_QWORD *)(a1 + 48) = -v36[1];
                *(_QWORD *)(a1 + 56) = v36[2];
              }
              else if ( v29 > 44 )
              {
                if ( v29 == 46 )
                {
                  *(_QWORD *)(a1 + 64) = *(v36 - 21);
                  *(_QWORD *)(a1 + 72) = *(v36 - 13);
                  v14 = v36;
                  *(_QWORD *)(a1 + 40) = *v36;
                  *(_QWORD *)(a1 + 48) = v14[1];
                  *(_QWORD *)(a1 + 56) = v14[2];
                }
                else if ( v29 < 46 )
                {
                  *(_QWORD *)(a1 + 64) = *(v36 - 7);
                  *(_QWORD *)(a1 + 72) = v36[1];
                }
                else if ( v29 == 47 )
                {
                  *(_QWORD *)(a1 + 72) = *(v36 - 6);
                  *(_QWORD *)(a1 + 64) = *v36;
                }
                else if ( v29 == 48 )
                {
                  *(_QWORD *)(a1 + 72) = *(v36 - 13);
                  *(_QWORD *)(a1 + 64) = *(v36 - 7);
                  v15 = v36;
                  *(_QWORD *)(a1 + 40) = *v36;
                  *(_QWORD *)(a1 + 48) = v15[1];
                  *(_QWORD *)(a1 + 56) = v15[2];
                }
              }
              else if ( v29 == 42 )
              {
                if ( (unsigned __int64)*(v36 - 26) <= 3 )
                {
                  *(_QWORD *)(a1 + 64) = *(v36 - 27);
                  *(_QWORD *)(a1 + 72) = *(v36 - 13);
                  v13 = v36;
                  *(_QWORD *)(a1 + 40) = *v36;
                  *(_QWORD *)(a1 + 48) = v13[1];
                  *(_QWORD *)(a1 + 56) = v13[2];
                }
                else
                {
                  v12 = v36 - 28;
                  *(_QWORD *)(a1 + 40) = *(v36 - 28);
                  *(_QWORD *)(a1 + 48) = v12[1];
                  *(_QWORD *)(a1 + 56) = v12[2];
                  *(_QWORD *)(a1 + 64) = *(v36 - 13);
                  *(_QWORD *)(a1 + 72) = v36[1];
                }
              }
              else if ( v29 > 42 )
              {
                *(_QWORD *)(a1 + 72) = *(v36 - 13);
                *(_QWORD *)(a1 + 64) = *(v36 - 7);
                *(_QWORD *)(a1 + 48) = -v36[1];
                *(_QWORD *)(a1 + 56) = v36[2];
              }
              else
              {
                *(_QWORD *)(a1 + 64) = *(v36 - 13);
                *(_QWORD *)(a1 + 72) = v36[1];
              }
            }
            else if ( v29 == 35 )
            {
              *(_QWORD *)(a1 + 24) = *v36 + 60;
            }
            else if ( v29 > 35 )
            {
              if ( v29 == 37 )
              {
                *(_QWORD *)(a1 + 8) = 0LL;
                *(_DWORD *)(a1 + 16) = *v36;
              }
              else if ( v29 < 37 )
              {
                *(_QWORD *)(a1 + 24) = *(v36 - 7) + 60;
              }
              else if ( v29 == 38 )
              {
                *(_QWORD *)(a1 + 8) = 0LL;
                *(_DWORD *)(a1 + 16) = *(v36 - 7);
              }
              else
              {
                *(_QWORD *)(a1 + 8) = *(v36 - 7);
                *(_DWORD *)(a1 + 16) = *v36;
              }
            }
            else if ( v29 == 33 )
            {
              *(_QWORD *)(a1 + 24) = 420LL;
              a2 = 1LL;
              sub_4035A0(a1, 1, a1, v36[5], a5, a6, *v36, v36[1], v36[2], v36[3], v36[4], v36[5], v36[6]);
            }
            else if ( v29 > 33 )
            {
              v11 = *(v36 - 14);
              a2 = *v36;
              *(_QWORD *)(a1 + 24) = v11 + sub_405646(a1, *v36, a1, *v36, a5, a6, *(v36 - 7), *(v36 - 6), *(v36 - 5));
            }
            else
            {
              *(_QWORD *)(a1 + 24) = *(v36 - 7);
              a2 = 1LL;
              sub_4035A0(a1, 1, a1, v36[5], a5, a6, *v36, v36[1], v36[2], v36[3], v36[4], v36[5], v36[6]);
            }
          }
          else if ( v29 == 19 )
          {
            a2 = *(v36 - 20);
            sub_4036BD((_QWORD *)a1, a2, *(v36 - 6), 0LL, 0LL);
            *(_DWORD *)(a1 + 32) = *v36;
          }
          else if ( v29 > 19 )
          {
            if ( v29 == 24 )
            {
              a2 = *(v36 - 34);
              sub_4036BD((_QWORD *)a1, a2, *(v36 - 20), *(v36 - 7), *(v36 - 6));
              *(_DWORD *)(a1 + 32) = 2;
            }
            else if ( v29 > 24 )
            {
              if ( v29 == 28 )
              {
                *(_DWORD *)(a1 + 20) = *v36;
                *(_QWORD *)(a1 + 200) += *v36 > 0;
              }
              else if ( v29 > 28 )
              {
                if ( v29 == 29 )
                {
                  *(_DWORD *)(a1 + 20) = 1;
                  if ( *(v36 - 7) <= 0 )
                    v10 = 1LL;
                  else
                    v10 = 2LL;
                  *(_QWORD *)(a1 + 200) += v10;
                }
                else
                {
                  *(_QWORD *)(a1 + 24) = *v36;
                }
              }
              else if ( v29 == 27 )
              {
                ++*(_QWORD *)(a1 + 216);
                a2 = *v36;
                *(_QWORD *)(a1 + 24) = sub_405646(a1, *v36, a1, *v36, a5, a6, *(v36 - 7), *(v36 - 6), *(v36 - 5));
              }
            }
            else if ( v29 == 22 )
            {
              a2 = *(v36 - 6);
              sub_4036BD((_QWORD *)a1, a2, 0LL, 0LL, 0LL);
              *(_DWORD *)(a1 + 32) = 2;
            }
            else if ( v29 > 22 )
            {
              a2 = *(v36 - 20);
              sub_4036BD((_QWORD *)a1, a2, *(v36 - 6), 0LL, 0LL);
              *(_DWORD *)(a1 + 32) = 2;
            }
            else if ( v29 == 20 )
            {
              a2 = *(v36 - 34);
              sub_4036BD((_QWORD *)a1, a2, *(v36 - 20), *(v36 - 7), *(v36 - 6));
              *(_DWORD *)(a1 + 32) = *v36;
            }
          }
          else if ( v29 == 9 )
          {
            ++*(_QWORD *)(a1 + 192);
          }
          else if ( v29 > 9 )
          {
            if ( v29 == 11 )
            {
              ++*(_QWORD *)(a1 + 176);
            }
            else if ( v29 < 11 )
            {
              ++*(_QWORD *)(a1 + 216);
            }
            else if ( v29 == 12 )
            {
              ++*(_QWORD *)(a1 + 184);
            }
            else if ( v29 == 18 )
            {
              a2 = *(v36 - 6);
              sub_4036BD((_QWORD *)a1, a2, 0LL, 0LL, 0LL);
              *(_DWORD *)(a1 + 32) = *v36;
            }
          }
          else if ( v29 == 7 )
          {
            ++*(_QWORD *)(a1 + 208);
            ++*(_QWORD *)(a1 + 176);
          }
          else if ( v29 > 7 )
          {
            ++*(_QWORD *)(a1 + 208);
          }
          else if ( v29 == 4 )
          {
            v9 = v36[1];
            *(_QWORD *)(a1 + 96) = *v36;
            *(_QWORD *)(a1 + 104) = v9;
            *(_BYTE *)(a1 + 168) = 1;
          }
          goto LABEL_199;
        }
        if ( v29 == 68 )
        {
          a2 = (__int64)v51;
          memset(v51, 0, 0x38uLL);
          v51[4] = 1LL;
          goto LABEL_199;
        }
        if ( v29 <= 68 )
        {
          if ( v29 == 59 )
          {
            a2 = (__int64)v51;
            memset(v51, 0, 0x38uLL);
            v51[1] = 1LL;
            goto LABEL_199;
          }
          if ( v29 <= 59 )
          {
            if ( v29 == 54 )
            {
              a2 = (__int64)v51;
              memset(v51, 0, 0x38uLL);
              v51[0] = *(v36 - 7);
              goto LABEL_199;
            }
            if ( v29 <= 54 )
            {
              if ( v29 == 52 || v29 > 52 )
              {
                a2 = 1LL;
                sub_4035A0(a1, 1, a1, v36[5], a5, a6, *v36, v36[1], v36[2], v36[3], v36[4], v36[5], v36[6]);
              }
              else
              {
                a2 = 0xFFFFFFFFLL;
                sub_4035A0(
                  a1,
                  -1,
                  a1,
                  *(v36 - 2),
                  a5,
                  a6,
                  *(v36 - 7),
                  *(v36 - 6),
                  *(v36 - 5),
                  *(v36 - 4),
                  *(v36 - 3),
                  *(v36 - 2),
                  *(v36 - 1));
              }
              goto LABEL_199;
            }
            if ( v29 == 56 )
            {
              a2 = (__int64)v51;
              memset(v51, 0, 0x38uLL);
              v51[0] = 1LL;
              goto LABEL_199;
            }
            if ( v29 >= 56 )
            {
              if ( v29 != 57 )
              {
LABEL_173:
                a2 = (__int64)v51;
                memset(v51, 0, 0x38uLL);
                v51[1] = *(v36 - 6);
                goto LABEL_199;
              }
              a2 = (__int64)v51;
              memset(v51, 0, 0x38uLL);
              v51[1] = *(v36 - 7);
LABEL_199:
              v36 -= 7 * v32;
              v34 -= 2 * v32;
              v32 = 0;
              v36 += 7;
              v19 = v36;
              *v36 = v51[0];
              v19[1] = v51[1];
              v19[2] = v51[2];
              v19[3] = v51[3];
              v19[4] = v51[4];
              v19[5] = v51[5];
              v19[6] = v51[6];
              v29 = (unsigned __int8)byte_40D7C0[v29];
              v27 = byte_40D600[v29 - 28] + *(__int16 *)v34;
              if ( v27 >= 0 && v27 <= 112 && byte_40D6C0[v27] == *(_WORD *)v34 )
                v26 = (unsigned __int8)byte_40D640[v27];
              else
                v26 = byte_40D620[v29 - 28];
              goto LABEL_2;
            }
LABEL_170:
            a2 = (__int64)v51;
            memset(v51, 0, 0x38uLL);
            v51[0] = *(v36 - 6);
            goto LABEL_199;
          }
          if ( v29 == 63 )
          {
            a2 = (__int64)v51;
            memset(v51, 0, 0x38uLL);
            v51[3] = *(v36 - 7);
            goto LABEL_199;
          }
          if ( v29 <= 63 )
          {
            if ( v29 != 61 )
            {
              if ( v29 <= 61 )
              {
                a2 = (__int64)v51;
                memset(v51, 0, 0x38uLL);
                v51[2] = *(v36 - 7) * *v36;
                goto LABEL_199;
              }
LABEL_176:
              a2 = (__int64)v51;
              memset(v51, 0, 0x38uLL);
              v51[2] = *v36;
              goto LABEL_199;
            }
LABEL_175:
            a2 = (__int64)v51;
            memset(v51, 0, 0x38uLL);
            v51[2] = *(v36 - 6) * *v36;
            goto LABEL_199;
          }
          if ( v29 == 65 )
          {
            a2 = (__int64)v51;
            memset(v51, 0, 0x38uLL);
            v51[3] = 1LL;
            goto LABEL_199;
          }
          if ( v29 >= 65 )
          {
            if ( v29 == 66 )
            {
              a2 = (__int64)v51;
              memset(v51, 0, 0x38uLL);
              v51[4] = *(v36 - 7);
              goto LABEL_199;
            }
            goto LABEL_181;
          }
LABEL_178:
          a2 = (__int64)v51;
          memset(v51, 0, 0x38uLL);
          v51[3] = *(v36 - 6);
          goto LABEL_199;
        }
        if ( v29 == 78 )
          goto LABEL_178;
        if ( v29 > 78 )
        {
          if ( v29 == 87 )
          {
            v51[0] = v36[1];
            v51[1] = 0LL;
            goto LABEL_199;
          }
          if ( v29 > 87 )
          {
            if ( v29 == 89 )
            {
              sub_403318(a1, a2, a1, *(v36 - 6), a5, a6, *(v36 - 7), *(v36 - 6), *(v36 - 5));
              a2 = 1LL;
              sub_4035A0(a1, 1, a1, v36[5], v17, v18, *v36, v36[1], v36[2], v36[3], v36[4], v36[5], v36[6]);
            }
            else if ( v29 < 89 )
            {
              sub_403318(a1, a2, a1, v36[1], a5, a6, *v36, v36[1], v36[2]);
            }
            else if ( v29 == 90 )
            {
              v51[0] = -1LL;
            }
            else if ( v29 == 91 )
            {
              v51[0] = v36[1];
            }
            goto LABEL_199;
          }
          if ( v29 != 80 )
          {
            if ( v29 >= 80 )
            {
              if ( v29 != 81 )
              {
                if ( v29 == 85 )
                {
                  v51[0] = v36[1];
                  v51[1] = 0LL;
                }
                goto LABEL_199;
              }
              goto LABEL_176;
            }
LABEL_181:
            a2 = (__int64)v51;
            memset(v51, 0, 0x38uLL);
            v51[4] = *(v36 - 6);
            goto LABEL_199;
          }
        }
        else
        {
          if ( v29 == 72 )
            goto LABEL_184;
          if ( v29 > 72 )
          {
            if ( v29 == 75 )
              goto LABEL_170;
            if ( v29 <= 75 )
            {
              if ( v29 == 73 )
              {
                a2 = (__int64)v51;
                memset(v51, 0, 0x38uLL);
                v51[5] = 1LL;
              }
              goto LABEL_199;
            }
            if ( v29 == 76 )
              goto LABEL_173;
            goto LABEL_175;
          }
          if ( v29 != 70 )
          {
            if ( v29 <= 70 )
            {
              a2 = (__int64)v51;
              memset(v51, 0, 0x38uLL);
              v51[5] = *(v36 - 7);
              goto LABEL_199;
            }
LABEL_184:
            a2 = (__int64)v51;
            memset(v51, 0, 0x38uLL);
            v51[5] = *(v36 - 7);
            v51[6] = *(v36 - 6);
            goto LABEL_199;
          }
        }
        a2 = (__int64)v51;
        memset(v51, 0, 0x38uLL);
        v51[5] = *(v36 - 6);
        goto LABEL_199;
      }
      if ( v28 )
        --v28;
      v24 = -2;
      v26 = v29;
      v36 += 7;
      v7 = v36;
      *v36 = v44;
      v7[1] = v45;
      v7[2] = v46;
      v7[3] = v47;
      v7[4] = v48;
      v7[5] = v49;
      v7[6] = v50;
    }
LABEL_2:
    v34 += 2;
  }
  sub_406196(a1, "memory exhausted");
  v30 = 2;
LABEL_226:
  if ( v24 != -2 )
  {
    if ( (unsigned int)v24 > 0x115 )
      v22 = 2;
    else
      v22 = (unsigned __int8)byte_40D3E0[v24];
    v31 = v22;
    sub_403707();
  }
  v36 -= 7 * v32;
  for ( v34 -= 2 * v32; v34 != src; v34 -= 2 )
  {
    sub_403707();
    v36 -= 7;
  }
  if ( src != v43 )
    free(src);
  return v30;
}
