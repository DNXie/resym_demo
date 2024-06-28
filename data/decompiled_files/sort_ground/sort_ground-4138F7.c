#include "/share/binary_recovery/clang-parser/defs.hh"
_QWORD *__fastcall sub_4138F7(_QWORD *a1)
{
  _QWORD *result; // rax
  int i; // [rsp+10h] [rbp-48h]
  int j; // [rsp+14h] [rbp-44h]
  __int64 v4; // [rsp+18h] [rbp-40h]
  unsigned __int64 v5; // [rsp+18h] [rbp-40h]
  unsigned __int64 v6; // [rsp+18h] [rbp-40h]
  unsigned __int64 v7; // [rsp+18h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-40h]
  unsigned __int64 v9; // [rsp+20h] [rbp-38h]
  unsigned __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+20h] [rbp-38h]
  unsigned __int64 v12; // [rsp+20h] [rbp-38h]
  unsigned __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+20h] [rbp-38h]
  unsigned __int64 v15; // [rsp+20h] [rbp-38h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]
  unsigned __int64 v19; // [rsp+28h] [rbp-30h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]
  unsigned __int64 v21; // [rsp+28h] [rbp-30h]
  unsigned __int64 v22; // [rsp+28h] [rbp-30h]
  unsigned __int64 v23; // [rsp+30h] [rbp-28h]
  unsigned __int64 v24; // [rsp+30h] [rbp-28h]
  __int64 v25; // [rsp+30h] [rbp-28h]
  unsigned __int64 v26; // [rsp+30h] [rbp-28h]
  unsigned __int64 v27; // [rsp+30h] [rbp-28h]
  __int64 v28; // [rsp+30h] [rbp-28h]
  unsigned __int64 v29; // [rsp+30h] [rbp-28h]
  unsigned __int64 v30; // [rsp+38h] [rbp-20h]
  unsigned __int64 v31; // [rsp+38h] [rbp-20h]
  unsigned __int64 v32; // [rsp+38h] [rbp-20h]
  unsigned __int64 v33; // [rsp+38h] [rbp-20h]
  unsigned __int64 v34; // [rsp+38h] [rbp-20h]
  unsigned __int64 v35; // [rsp+38h] [rbp-20h]
  unsigned __int64 v36; // [rsp+38h] [rbp-20h]
  __int64 v37; // [rsp+40h] [rbp-18h]
  __int64 v38; // [rsp+40h] [rbp-18h]
  unsigned __int64 v39; // [rsp+40h] [rbp-18h]
  __int64 v40; // [rsp+40h] [rbp-18h]
  __int64 v41; // [rsp+40h] [rbp-18h]
  unsigned __int64 v42; // [rsp+40h] [rbp-18h]
  __int64 v43; // [rsp+40h] [rbp-18h]
  unsigned __int64 v44; // [rsp+48h] [rbp-10h]
  unsigned __int64 v45; // [rsp+48h] [rbp-10h]
  unsigned __int64 v46; // [rsp+48h] [rbp-10h]
  unsigned __int64 v47; // [rsp+48h] [rbp-10h]
  unsigned __int64 v48; // [rsp+48h] [rbp-10h]
  unsigned __int64 v49; // [rsp+48h] [rbp-10h]
  unsigned __int64 v50; // [rsp+48h] [rbp-10h]
  unsigned __int64 v51; // [rsp+50h] [rbp-8h]
  __int64 v52; // [rsp+50h] [rbp-8h]
  unsigned __int64 v53; // [rsp+50h] [rbp-8h]
  unsigned __int64 v54; // [rsp+50h] [rbp-8h]
  __int64 v55; // [rsp+50h] [rbp-8h]
  unsigned __int64 v56; // [rsp+50h] [rbp-8h]
  unsigned __int64 v57; // [rsp+50h] [rbp-8h]

  v4 = 0x647C4677A2884B7CLL;
  v9 = 0xB9F8B322C73AC862LL;
  v16 = 0x8C0EA5053D4712A0LL;
  v23 = 0xB29B2E824A595524LL;
  v30 = 0x82F053DB8355E0CELL;
  v37 = 0x48FE4A0FA5A09315LL;
  v44 = 0xAE985BF2CBFC89EDLL;
  v51 = 0x98F5704F6C44C0ABLL;
  for ( i = 0; i <= 255; i += 8 )
  {
    v10 = a1[i + 1] + v9;
    v17 = a1[i + 2] + v16;
    v24 = a1[i + 3] + v23;
    v31 = a1[i + 4] + v30;
    v38 = a1[i + 5] + v37;
    v45 = a1[i + 6] + v44;
    v52 = a1[i + 7] + v51;
    v5 = a1[i] + v4 - v31;
    v39 = ((unsigned __int64)sub_41314E(v52) >> 9) ^ v38;
    v53 = v5 + v52;
    v11 = v10 - v39;
    v46 = (v5 << 9) ^ v45;
    v6 = v11 + v5;
    v18 = v17 - v46;
    v54 = ((unsigned __int64)sub_41314E(v11) >> 23) ^ v53;
    v12 = v18 + v11;
    v25 = v24 - v54;
    v4 = (v18 << 15) ^ v6;
    v19 = v25 + v18;
    v32 = v31 - v4;
    v9 = ((unsigned __int64)sub_41314E(v25) >> 14) ^ v12;
    v26 = v32 + v25;
    v40 = v39 - v9;
    v16 = (v32 << 20) ^ v19;
    v33 = v40 + v32;
    v47 = v46 - v16;
    v23 = ((unsigned __int64)sub_41314E(v40) >> 17) ^ v26;
    v37 = v47 + v40;
    v51 = v54 - v23;
    v30 = (v47 << 14) ^ v33;
    v44 = v51 + v47;
    a1[i] = v4;
    a1[i + 1] = v9;
    a1[i + 2] = v16;
    a1[i + 3] = v23;
    a1[i + 4] = v30;
    a1[i + 5] = v37;
    a1[i + 6] = v44;
    a1[i + 7] = v51;
  }
  for ( j = 0; j <= 255; j += 8 )
  {
    v13 = a1[j + 1] + v9;
    v20 = a1[j + 2] + v16;
    v27 = a1[j + 3] + v23;
    v34 = a1[j + 4] + v30;
    v41 = a1[j + 5] + v37;
    v48 = a1[j + 6] + v44;
    v55 = a1[j + 7] + v51;
    v7 = a1[j] + v4 - v34;
    v42 = ((unsigned __int64)sub_41314E(v55) >> 9) ^ v41;
    v56 = v7 + v55;
    v14 = v13 - v42;
    v49 = (v7 << 9) ^ v48;
    v8 = v14 + v7;
    v21 = v20 - v49;
    v57 = ((unsigned __int64)sub_41314E(v14) >> 23) ^ v56;
    v15 = v21 + v14;
    v28 = v27 - v57;
    v4 = (v21 << 15) ^ v8;
    v22 = v28 + v21;
    v35 = v34 - v4;
    v9 = ((unsigned __int64)sub_41314E(v28) >> 14) ^ v15;
    v29 = v35 + v28;
    v43 = v42 - v9;
    v16 = (v35 << 20) ^ v22;
    v36 = v43 + v35;
    v50 = v49 - v16;
    v23 = ((unsigned __int64)sub_41314E(v43) >> 17) ^ v29;
    v37 = v50 + v43;
    v51 = v57 - v23;
    v30 = (v50 << 14) ^ v36;
    v44 = v51 + v50;
    a1[j] = v4;
    a1[j + 1] = v9;
    a1[j + 2] = v16;
    a1[j + 3] = v23;
    a1[j + 4] = v30;
    a1[j + 5] = v37;
    a1[j + 6] = v44;
    a1[j + 7] = v51;
  }
  a1[258] = 0LL;
  a1[257] = a1[258];
  result = a1;
  a1[256] = a1[257];
  return result;
}
