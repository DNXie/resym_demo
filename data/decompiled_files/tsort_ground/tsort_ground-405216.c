#include "/share/binary_recovery/clang-parser/defs.hh"
int __fastcall sub_405216(FILE *a1, __off_t a2, int a3)
{
  int v3; // eax
  __off_t v6; // [rsp+28h] [rbp-8h]

  if ( a1->_IO_read_end != a1->_IO_read_ptr || a1->_IO_write_ptr != a1->_IO_write_base || a1->_IO_save_base )
    return fseeko(a1, a2, a3);
  v3 = fileno(a1);
  v6 = lseek(v3, a2, a3);
  if ( v6 == -1 )
    return -1;
  a1->_flags &= 0xFFFFFFEF;
  a1->_offset = v6;
  return 0;
}
