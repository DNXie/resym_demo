#include "/share/binary_recovery/clang-parser/defs.hh"
__int64 *__fastcall sub_41318F(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *result; // rax
  unsigned __int64 v18; // [rsp+10h] [rbp-A8h]
  __int64 v19; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v20; // [rsp+10h] [rbp-A8h]
  __int64 v21; // [rsp+10h] [rbp-A8h]
  __int64 v22; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v23; // [rsp+10h] [rbp-A8h]
  __int64 v24; // [rsp+10h] [rbp-A8h]
  __int64 v25; // [rsp+18h] [rbp-A0h]
  __int64 v26; // [rsp+18h] [rbp-A0h]
  __int64 v27; // [rsp+18h] [rbp-A0h]
  __int64 v28; // [rsp+18h] [rbp-A0h]
  __int64 v29; // [rsp+18h] [rbp-A0h]
  __int64 v30; // [rsp+18h] [rbp-A0h]
  __int64 v31; // [rsp+18h] [rbp-A0h]
  __int64 *v32; // [rsp+20h] [rbp-98h]
  __int64 v34; // [rsp+30h] [rbp-88h]
  __int64 v35; // [rsp+38h] [rbp-80h]
  __int64 v36; // [rsp+40h] [rbp-78h]
  __int64 v37; // [rsp+50h] [rbp-68h]
  __int64 v38; // [rsp+60h] [rbp-58h]
  __int64 v39; // [rsp+70h] [rbp-48h]
  __int64 v40; // [rsp+78h] [rbp-40h]
  __int64 v41; // [rsp+80h] [rbp-38h]
  __int64 v42; // [rsp+90h] [rbp-28h]
  __int64 v43; // [rsp+A0h] [rbp-18h]

  v18 = a1[256];
  v2 = a1[257];
  ++a1[258];
  v25 = v2 + a1[258];
  v32 = a1;
  do
  {
    v19 = v32[128] - (v18 ^ (v18 << 21)) - 1;
    v34 = *v32;
    v35 = sub_41316B((__int64)a1, *v32) + v19 + v25;
    *v32 = v35;
    v3 = sub_41316B((__int64)a1, (unsigned int)v35 >> 8);
    v26 = sub_41314E(v34 + v3);
    *a2 = v26;
    v20 = (v19 ^ ((unsigned __int64)sub_41314E(v19) >> 5)) + v32[129];
    v36 = v32[1];
    v4 = sub_41316B((__int64)a1, v36);
    v32[1] = v4 + v20 + v26;
    v5 = sub_41316B((__int64)a1, (unsigned int)(v4 + v20 + v26) >> 8);
    v27 = sub_41314E(v36 + v5);
    a2[1] = v27;
    v21 = (v20 ^ (v20 << 12)) + v32[130];
    v37 = v32[2];
    v6 = sub_41316B((__int64)a1, v37);
    v32[2] = v6 + v21 + v27;
    v7 = sub_41316B((__int64)a1, (unsigned int)(v6 + v21 + v27) >> 8);
    v28 = sub_41314E(v37 + v7);
    a2[2] = v28;
    v18 = (v21 ^ ((unsigned __int64)sub_41314E(v21) >> 33)) + v32[131];
    v38 = v32[3];
    v8 = sub_41316B((__int64)a1, v38);
    v32[3] = v8 + v18 + v28;
    v9 = sub_41316B((__int64)a1, (unsigned int)(v8 + v18 + v28) >> 8);
    v25 = sub_41314E(v38 + v9);
    a2[3] = v25;
    a2 += 4;
    v32 += 4;
  }
  while ( v32 < a1 + 128 );
  do
  {
    v22 = *(v32 - 128) - (v18 ^ (v18 << 21)) - 1;
    v39 = *v32;
    v40 = sub_41316B((__int64)a1, *v32) + v22 + v25;
    *v32 = v40;
    v10 = sub_41316B((__int64)a1, (unsigned int)v40 >> 8);
    v29 = sub_41314E(v39 + v10);
    *a2 = v29;
    v23 = (v22 ^ ((unsigned __int64)sub_41314E(v22) >> 5)) + *(v32 - 127);
    v41 = v32[1];
    v11 = sub_41316B((__int64)a1, v41);
    v32[1] = v11 + v23 + v29;
    v12 = sub_41316B((__int64)a1, (unsigned int)(v11 + v23 + v29) >> 8);
    v30 = sub_41314E(v41 + v12);
    a2[1] = v30;
    v24 = (v23 ^ (v23 << 12)) + *(v32 - 126);
    v42 = v32[2];
    v13 = sub_41316B((__int64)a1, v42);
    v32[2] = v13 + v24 + v30;
    v14 = sub_41316B((__int64)a1, (unsigned int)(v13 + v24 + v30) >> 8);
    v31 = sub_41314E(v42 + v14);
    a2[2] = v31;
    v18 = (v24 ^ ((unsigned __int64)sub_41314E(v24) >> 33)) + *(v32 - 125);
    v43 = v32[3];
    v15 = sub_41316B((__int64)a1, v43);
    v32[3] = v15 + v18 + v31;
    v16 = sub_41316B((__int64)a1, (unsigned int)(v15 + v18 + v31) >> 8);
    v25 = sub_41314E(v43 + v16);
    a2[3] = v25;
    a2 += 4;
    v32 += 4;
  }
  while ( v32 < a1 + 256 );
  a1[256] = v18;
  result = a1;
  a1[257] = v25;
  return result;
}
