#include "/share/binary_recovery/clang-parser/defs.hh"
void sub_40F54E()
{
  unsigned int i; // [rsp+4h] [rbp-Ch]
  void **ptr; // [rsp+8h] [rbp-8h]

  ptr = (void **)off_61D3D0;
  for ( i = 1; i < dword_61D3B0; ++i )
    free(ptr[2 * i + 1]);
  if ( ptr[1] != &unk_61D960 )
  {
    free(ptr[1]);
    qword_61D3C0 = 256LL;
    off_61D3C8 = &unk_61D960;
  }
  if ( ptr != (void **)&qword_61D3C0 )
  {
    free(ptr);
    off_61D3D0 = &qword_61D3C0;
  }
  dword_61D3B0 = 1;
}
