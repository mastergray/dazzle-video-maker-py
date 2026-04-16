// Decompiled from: DAZZLE.unpacked
// Processor: x86
// Endian: false
// Address size: 21

// Function: FUN_1000_0154 @ 1000:0154

void __cdecl16far FUN_1000_0154(void)

{
  FUN_1000_01ea();
  return;
}



// Function: FUN_1000_0167 @ 1000:0167

void __cdecl16far FUN_1000_0167(void)

{
  return;
}



// Function: FUN_1000_0168 @ 1000:0168

void FUN_1000_0168(void)

{
  code *pcVar1;
  undefined2 uVar2;
  char cVar3;
  int in_BX;
  int unaff_SI;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar2 = uRam00010260;
  FUN_1000_0241();
  cVar3 = FUN_1000_11b7();
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  cVar3 = cVar3 + -0x40;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  out(0xa0,0x20);
  out(0x20,0x20);
  pcVar1 = (code *)swi(2);
  (*pcVar1)();
  return;
}



// Function: FUN_1000_017a @ 1000:017a

void __cdecl16near FUN_1000_017a(void)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *(undefined2 *)0x5b = in_BX;
  *(undefined2 *)0x5d = unaff_ES;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *(undefined2 *)0x5f = in_BX;
  *(undefined2 *)0x61 = unaff_ES;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *(undefined2 *)0x63 = in_BX;
  *(undefined2 *)0x65 = unaff_ES;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *(undefined2 *)0x67 = in_BX;
  *(undefined2 *)0x69 = unaff_ES;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_1000_01bd @ 1000:01bd

void __cdecl16far FUN_1000_01bd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_1000_01ea @ 1000:01ea

void __cdecl16near FUN_1000_01ea(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  char *unaff_SI;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  bool bVar6;
  
  while( true ) {
    pcVar4 = unaff_DI;
    pcVar5 = unaff_SI;
    if (unaff_SI == (char *)0x47fc) {
      bVar3 = 0xff;
    }
    else {
      bVar3 = 0;
    }
    for (; pcVar5 != unaff_DI; pcVar5 = pcVar5 + 6) {
      if (*pcVar5 != -1) {
        if (unaff_SI == (char *)0x47fc) {
          bVar1 = pcVar5[1];
          bVar6 = bVar1 < bVar3;
        }
        else {
          bVar1 = pcVar5[1];
          bVar6 = bVar3 < bVar1;
        }
        if (bVar6 || bVar3 == bVar1) {
          bVar3 = pcVar5[1];
          pcVar4 = pcVar5;
        }
      }
    }
    if (pcVar4 == unaff_DI) break;
    cVar2 = *pcVar4;
    *pcVar4 = -1;
    if (cVar2 == '\0') {
      unaff_CS = 0x1000;
      (**(code **)(pcVar4 + 2))();
    }
    else {
      (**(code **)(pcVar4 + 2))(unaff_CS);
    }
  }
  return;
}



// Function: FUN_1000_0241 @ 1000:0241

void __cdecl16near FUN_1000_0241(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_1000_0249 @ 1000:0249

void FUN_1000_0249(void)

{
  code *pcVar1;
  undefined2 uVar2;
  char cVar3;
  int in_BX;
  int unaff_SI;
  
  uVar2 = uRam00010260;
  FUN_1000_0241();
  cVar3 = FUN_1000_11b7(3);
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  cVar3 = cVar3 + -0x40;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + cVar3;
  out(0xa0,0x20);
  out(0x20,0x20);
  pcVar1 = (code *)swi(2);
  (*pcVar1)();
  return;
}



// Function: FUN_1000_04bc @ 1000:04bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00010521) overlaps instruction at (ram,0x00010520)
    */

uint FUN_1000_04bc(void)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  uint uVar5;
  undefined2 *puVar6;
  undefined1 *unaff_SI;
  int unaff_DI;
  undefined2 unaff_DS;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar10;
  int in_stack_0000000a;
  int in_stack_0000000c;
  undefined1 *in_stack_0000000e;
  int in_stack_00000010;
  uint in_stack_00000012;
  int in_stack_00000014;
  undefined2 local_6;
  uint local_4;
  
  uVar3 = 0x43fe;
  uVar5 = 0x3bcd;
  if (in_stack_00000014 == 0) {
    uVar3 = 0x407e;
    uVar5 = 0x3f6a;
  }
  uVar4 = (uint)((int)in_stack_00000012 < 0);
  in_stack_00000012 = in_stack_00000012 & 0x7fff;
  if (in_stack_00000012 == 0x7fff) {
LAB_1000_054c:
    pcVar1 = (code *)swi(0x37);
    (*pcVar1)();
    out(*unaff_SI,extraout_DX_01);
    uVar3 = in(0x5d);
    return uVar3;
  }
  cVar9 = SBORROW2(in_stack_00000012,uVar3);
  puVar6 = (undefined2 *)(in_stack_00000012 - uVar3);
  bVar7 = true;
  if (in_stack_00000012 == uVar3) {
LAB_1000_04f1:
    cVar8 = (int)puVar6 < 0;
    pcVar1 = (code *)swi(0x35);
    (*pcVar1)();
    do {
    } while (bVar7 || cVar9 != cVar8);
    pcVar1 = (code *)swi(0x3d);
    local_6 = (*pcVar1)();
    local_6 = local_6 | local_4;
    pcVar1 = (code *)swi(0x35);
    (*pcVar1)();
    out(*unaff_SI,extraout_DX);
    pcVar1 = (code *)swi(0x37);
    uVar10 = (*pcVar1)();
    out(unaff_SI[1],(int)((ulong)uVar10 >> 0x10));
    if ((char)((byte)uVar10 | 0x83) < '\x01') {
      return ((uint)uVar10 | 0x83) ^ 0xfe6e;
    }
    *(char *)(unaff_DI + 10) = *(char *)(unaff_DI + 10) + (char)((ulong)uVar10 >> 0x18);
  }
  else {
    if (uVar3 < in_stack_00000012) {
      pcVar1 = (code *)swi(0x39);
      (*pcVar1)();
      unaff_SI = unaff_SI + 1;
      cVar9 = SBORROW2((int)&local_6 + 1,1);
      puVar6 = &local_6;
      bVar7 = &stack0x0000 == (undefined1 *)0x6;
      goto LAB_1000_04f1;
    }
    if (((((in_stack_00000012 == 0 && in_stack_00000010 == 0) &&
          in_stack_0000000e == (undefined1 *)0x0) && in_stack_0000000c == 0) &&
         in_stack_0000000a == 0) || (uVar5 <= in_stack_00000012)) goto LAB_1000_054c;
    pcVar1 = (code *)swi(0x35);
    uVar10 = (*pcVar1)();
    out((int)((ulong)uVar10 >> 0x10),(char)uVar10);
    bVar7 = uVar4 == 0;
    if (bVar7) {
      *(undefined2 *)0x7f = 0x22;
      return (uint)uVar10;
    }
    pcVar1 = (code *)swi(0x35);
    bVar2 = (*pcVar1)();
    if (uVar4 == 1 || bVar7 != false) {
      return (uint)(bVar2 & unaff_SI[uVar5]);
    }
    if (!bVar7) {
      pcVar1 = (code *)swi(0x39);
      (*pcVar1)();
      goto LAB_1000_0520;
    }
  }
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
LAB_1000_0520:
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  out(*in_stack_0000000e,extraout_DX_00);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_0556 @ 1000:0556

void __cdecl16near FUN_1000_0556(void)

{
  uint in_CX;
  byte in_DL;
  uint in_BX;
  undefined2 unaff_ES;
  
  if ((in_DL & 0x5f) == 0x47) {
    do {
      if (*(char *)(in_BX - 1) != '0') {
        return;
      }
      in_BX = in_BX - 1;
    } while (in_CX < in_BX);
  }
  return;
}



// Function: FUN_1000_0579 @ 1000:0579

void FUN_1000_0579(undefined2 param_1,char param_2,byte param_3,byte *param_4,uint param_5)

{
  byte *pbVar1;
  ulong uVar2;
  int iVar3;
  undefined2 uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  byte local_32 [2];
  byte abStack_30 [42];
  uint local_6;
  int local_4;
  
  if (0x28 < param_5) {
    param_5 = 0x28;
  }
  local_6 = param_5;
  if ((param_3 & 0xdf) == 0x46) {
    if (0x7fff < param_5) {
      param_5 = 0;
    }
LAB_1000_05b2:
    if ((param_3 & 0xdf) == 0x45) {
      param_5 = param_5 + 1;
    }
  }
  else if (0 < (int)param_5) goto LAB_1000_05b2;
  pbVar10 = local_32;
  iVar3 = FUN_1000_0aa8(param_1,pbVar10);
  uVar13 = (undefined2)((ulong)param_4 >> 0x10);
  pbVar11 = (byte *)param_4;
  if (iVar3 == 0x7fff) {
    uVar4 = 0x492b;
    if (local_4 != 0) {
      uVar4 = 0x492d;
    }
    *(undefined2 *)param_4 = uVar4;
    pbVar9 = pbVar11 + 4;
    (pbVar11 + 2)[0] = 0x4e;
    (pbVar11 + 2)[1] = 0x46;
    goto LAB_1000_0702;
  }
  if (iVar3 == 0x7ffe) {
    uVar4 = 0x4e2b;
    if (local_4 != 0) {
      uVar4 = 0x4e2d;
    }
    *(undefined2 *)param_4 = uVar4;
    pbVar9 = pbVar11 + 4;
    *(uint *)(pbVar11 + 2) = CONCAT11((char)((uint)uVar4 >> 8),0x41);
    goto LAB_1000_0702;
  }
  pbVar12 = pbVar11;
  if ((char)local_4 != '\0') {
    pbVar12 = pbVar11 + 1;
    *param_4 = 0x2d;
  }
  if ((param_3 & 0x5f) == 0x46) {
LAB_1000_0635:
    if (iVar3 < 0x29) {
      if (iVar3 < 1) {
        pbVar1 = pbVar12;
        pbVar12 = pbVar12 + 2;
        pbVar1[0] = 0x30;
        pbVar1[1] = 0x2e;
        iVar7 = 1;
        iVar8 = iVar3;
        if (iVar3 != 0) {
          do {
            pbVar1 = pbVar12;
            pbVar12 = pbVar12 + 1;
            *pbVar1 = 0x30;
            iVar8 = iVar8 + 1;
            iVar3 = 0;
          } while (iVar8 != 0);
          goto LAB_1000_064d;
        }
      }
      else {
LAB_1000_064d:
        iVar7 = 0;
      }
      while( true ) {
        pbVar9 = pbVar12;
        pbVar1 = pbVar10;
        pbVar10 = pbVar10 + 1;
        if (*pbVar1 == 0) break;
        *pbVar9 = *pbVar1;
        iVar3 = iVar3 + -1;
        pbVar12 = pbVar9 + 1;
        if (iVar3 == 0) {
          pbVar9[1] = 0x2e;
          iVar7 = iVar7 + 1;
          pbVar12 = pbVar9 + 2;
        }
      }
      if (iVar7 + local_6 < param_5) {
        iVar8 = param_5 - (iVar7 + local_6);
        iVar3 = iVar3 + iVar8;
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          pbVar1 = pbVar9;
          pbVar9 = pbVar9 + 1;
          *pbVar1 = 0x30;
        }
        iVar3 = iVar3 + -1;
        if (iVar3 != 0) goto LAB_1000_0677;
      }
      else {
LAB_1000_0677:
        if ((iVar3 != 1) && (param_2 == '\0')) {
          FUN_1000_0556();
        }
      }
      if (pbVar9 == pbVar11) {
        pbVar1 = pbVar9;
        pbVar9 = pbVar9 + 1;
        *pbVar1 = 0x30;
      }
      goto LAB_1000_0702;
    }
  }
  else if (((param_3 & 0x5f) != 0x45) && (-4 < iVar3)) {
    uVar5 = param_5;
    if (param_5 == 0) {
      uVar5 = 1;
    }
    if (iVar3 <= (int)uVar5) goto LAB_1000_0635;
  }
  pbVar10 = abStack_30;
  pbVar11 = pbVar12 + 1;
  *pbVar12 = local_32[0];
  bVar6 = local_32[1];
  if (bVar6 == 0) {
    if (param_2 != '\0') {
      pbVar1 = pbVar11;
      pbVar11 = pbVar12 + 2;
      *pbVar1 = 0x2e;
    }
  }
  else {
    pbVar1 = pbVar11;
    pbVar11 = pbVar12 + 2;
    *pbVar1 = 0x2e;
    do {
      pbVar1 = pbVar11;
      pbVar11 = pbVar11 + 1;
      *pbVar1 = bVar6;
      pbVar1 = pbVar10;
      pbVar10 = pbVar10 + 1;
      bVar6 = *pbVar1;
    } while (bVar6 != 0);
    if (param_2 == '\0') {
      FUN_1000_0556();
    }
  }
  *pbVar11 = param_3 & 0x20 | 0x45;
  bVar6 = 0x2b;
  uVar5 = iVar3 - 1;
  if (iVar3 < 1) {
    bVar6 = 0x2d;
    uVar5 = -uVar5;
  }
  pbVar10 = pbVar11 + 2;
  pbVar11[1] = bVar6;
  if (99 < uVar5) {
    if (999 < uVar5) {
      uVar2 = (ulong)(int)uVar5;
      uVar5 = (uint)(uVar2 % 1000);
      pbVar1 = pbVar10;
      pbVar10 = pbVar11 + 3;
      *pbVar1 = (char)(uVar2 / 1000) + 0x30;
    }
    pbVar1 = pbVar10;
    pbVar10 = pbVar10 + 1;
    *pbVar1 = (char)(uVar5 / 100) + 0x30;
    uVar5 = (uint)(char)(uVar5 % 100);
  }
  pbVar9 = pbVar10 + 2;
  *(int *)pbVar10 = CONCAT11((char)(uVar5 % 10),(char)(uVar5 / 10)) + 0x3030;
LAB_1000_0702:
  *pbVar9 = 0;
  return;
}



// Function: FUN_1000_070e @ 1000:070e

void __cdecl16near FUN_1000_070e(void)

{
  return;
}



// Function: FUN_1000_0713 @ 1000:0713

/* WARNING: Instruction at (ram,0x00010986) overlaps instruction at (ram,0x00010984)
    */

uint __cdecl16near FUN_1000_0713(code *param_1,code *param_2,uint param_3,int *param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  undefined2 extraout_DX;
  uint uVar17;
  uint uVar18;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  uint in_BX;
  int *piVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  int *piVar23;
  int *piVar24;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 uVar25;
  bool bVar26;
  bool bVar27;
  char cVar28;
  char cVar29;
  undefined4 uVar30;
  uint local_1a;
  uint local_18;
  uint local_16;
  int *local_14;
  char local_b;
  int *local_4;
  
  puVar20 = (undefined2 *)&stack0xfffe;
  puVar21 = (undefined2 *)&stack0xfffe;
  puVar22 = (undefined2 *)&stack0xfffe;
  cVar29 = SBORROW2((int)&stack0xfffe,0x18);
  cVar28 = (int)&local_1a < 0;
  uVar25 = &stack0x0000 == (undefined1 *)0x1a;
  bVar27 = false;
  bVar26 = true;
  bVar8 = false;
  bVar9 = false;
  local_b = '\0';
  pcVar6 = (code *)swi(0x35);
  uVar10 = (*pcVar6)();
  out(extraout_DX,uVar10);
  pcVar6 = (code *)swi(0x37);
  (*pcVar6)();
  if ((bool)uVar25 || cVar29 != cVar28) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pcVar6 = (code *)swi(0x3d);
  (*pcVar6)();
  piVar23 = (int *)0x8000;
  piVar24 = (int *)0xfffe;
  do {
    uVar12 = in_BX;
    local_14 = param_4;
    local_16 = param_3;
    local_18 = 0x754;
    in_BX = (*param_1)();
    piVar16 = local_14;
    iVar14 = param_5;
    if ((int)in_BX < 0) goto LAB_1000_0852;
    cVar28 = (char)in_BX;
    in_BX = (uint)cVar28;
  } while (((in_BX & 0x80) == 0) && ((*(byte *)(in_BX + 0x42e7) & 1) != 0));
  iVar2 = param_5 + -1;
  if (0 < param_5) {
    if (cVar28 != '+') {
      piVar19 = piVar24;
      if (cVar28 != '-') goto LAB_1000_07ae;
      bVar27 = true;
    }
    bVar8 = true;
    param_5 = iVar2;
    while (iVar2 = param_5 + -1, 0 < param_5) {
      local_14 = param_4;
      local_16 = param_3;
      local_18 = 0x790;
      in_BX = (*param_1)();
      piVar19 = piVar24;
      if ((bVar26) && (bVar8)) {
        if ((char)in_BX == 'I') {
          local_14 = param_4;
          local_16 = param_3;
          local_18 = 0x996;
          in_BX = (*param_1)();
          iVar3 = param_5 + -2;
          piVar16 = local_14;
          iVar14 = iVar3;
          if ((iVar2 < 1) || ((char)in_BX != 'N')) goto LAB_1000_0852;
          local_14 = param_4;
          local_16 = param_3;
          local_18 = 0x9ad;
          in_BX = (*param_1)();
          piVar16 = local_14;
          iVar14 = param_5 + -3;
          if ((iVar3 < 1) || ((char)in_BX != 'F')) goto LAB_1000_0852;
          cVar29 = false;
          bVar27 = !bVar27;
          cVar28 = '\0';
          if (!bVar27) {
            pcVar6 = (code *)swi(0x35);
            (*pcVar6)();
            pcVar1 = (char *)((int)piVar24 + (uVar12 - 0x15));
            cVar29 = SCARRY1(*pcVar1,-0x50);
            *pcVar1 = *pcVar1 + -0x50;
            cVar28 = *pcVar1;
            bVar27 = *pcVar1 == '\0';
          }
          cVar28 = cVar28 < '\0';
          pcVar6 = (code *)swi(0x35);
          uVar15 = (*pcVar6)();
          if (!bVar27 && cVar29 == cVar28) goto LAB_1000_0975;
        }
        else {
          if ((char)in_BX != 'N') goto LAB_1000_07ae;
          local_14 = param_4;
          local_16 = param_3;
          local_18 = 0x9d8;
          in_BX = (*param_1)();
          iVar3 = param_5 + -2;
          piVar16 = local_14;
          iVar14 = iVar3;
          if ((iVar2 < 1) || ((char)in_BX != 'A')) goto LAB_1000_0852;
          local_14 = param_4;
          local_16 = param_3;
          local_18 = 0x9ef;
          in_BX = (*param_1)();
          piVar16 = local_14;
          iVar14 = param_5 + -3;
          if ((iVar3 < 1) || ((char)in_BX != 'N')) goto LAB_1000_0852;
          if (bVar27) {
            pcVar6 = (code *)swi(0x35);
            (*pcVar6)();
            bVar11 = *(byte *)((int)piVar24 + (uVar12 - 0x17));
            iVar14 = in(extraout_DX_02);
            *piVar24 = iVar14;
            puVar22 = (undefined2 *)((int)&local_4 + 1);
            uVar15 = bVar11 ^ 0x8606;
            goto LAB_1000_0975;
          }
          pcVar6 = (code *)swi(0x35);
          uVar15 = (*pcVar6)();
        }
        param_5 = param_5 + -3;
        LOCK();
        pcVar1 = (char *)((int)piVar24 + (uVar12 - 0x17));
        cVar28 = *pcVar1;
        *pcVar1 = (char)uVar15;
        in_BX = CONCAT11((char)(uVar15 >> 8),cVar28);
        UNLOCK();
        piVar24 = (int *)((int)piVar24 + 1);
        piVar23 = (int *)((int)piVar23 + 1);
        *(char *)(uVar12 + (int)piVar23) = *(char *)(uVar12 + (int)piVar23) + cVar28;
        iVar14 = param_5;
        goto LAB_1000_0852;
      }
LAB_1000_07ae:
      param_5 = iVar2;
      bVar26 = false;
      bVar11 = (byte)in_BX;
      piVar16 = local_14;
      if (bVar11 == 0x2e) {
        if (piVar23 != (int *)0x8000) goto LAB_1000_086e;
        piVar23 = (int *)0x0;
        piVar24 = piVar19;
        if (0 < (int)piVar19) {
          piVar23 = piVar19;
        }
      }
      else {
        if ((0x39 < bVar11) || (bVar11 < 0x30)) goto LAB_1000_086e;
        cVar28 = bVar11 - 0x30;
        uVar15 = (uint)cVar28;
        piVar24 = (int *)((int)piVar19 + 1);
        if (piVar24 == (int *)0x0 || (int)piVar19 < -1) {
          local_1a = CONCAT11(local_1a._1_1_,cVar28);
          in_BX = (uint)cVar28;
          piVar24 = (int *)0x1;
          if ((cVar28 == '\0') && (piVar24 = (int *)0xffff, piVar23 != (int *)0x8000)) {
            piVar23 = (int *)((int)piVar23 + -1);
          }
        }
        else if (piVar24 < (int *)0x6) {
          uVar12 = (uint)((ulong)local_1a * 10);
          in_BX = uVar12 + uVar15;
          local_18 = (uint)(byte)((char)((ulong)local_1a * 10 >> 0x10) + CARRY2(uVar12,uVar15));
          uVar12 = uVar15;
          local_1a = in_BX;
        }
        else {
          in_BX = uVar15;
          if (piVar24 < (int *)0x13) {
            uVar7 = (ulong)local_16;
            uVar17 = (uint)((ulong)local_18 * 10 >> 0x10);
            uVar13 = (uint)((ulong)local_18 * 10);
            uVar18 = (uint)((ulong)local_1a * 10 >> 0x10);
            uVar12 = (uint)((ulong)local_1a * 10);
            in_BX = uVar12 + uVar15;
            uVar12 = (uint)CARRY2(uVar12,uVar15);
            uVar5 = uVar13 + uVar18;
            local_18 = uVar5 + uVar12;
            uVar5 = (uint)(CARRY2(uVar13,uVar18) || CARRY2(uVar5,uVar12));
            local_16 = uVar17 * 2 + uVar5;
            uVar12 = uVar15;
            local_1a = in_BX;
            local_14 = (int *)((int)(uVar7 * 10 >> 0x10) * 2 +
                              (uint)(CARRY2(uVar17,uVar17) || CARRY2(uVar17 * 2,uVar5)));
          }
        }
      }
    }
  }
  param_5 = iVar2;
  in_BX = CONCAT11((char)(in_BX >> 8),0x65);
  piVar19 = piVar24;
LAB_1000_086e:
  piVar24 = piVar19;
  iVar14 = param_5;
  if (piVar19 == (int *)0xfffe) {
LAB_1000_0852:
    param_5 = iVar14;
    if (-1 < param_5) {
      local_14 = param_4;
      local_16 = param_3;
      local_1a = 0x862;
      local_18 = in_BX;
      (*param_2)();
    }
    pcVar6 = (code *)swi(0x35);
    uVar30 = (*pcVar6)();
    uVar15 = (uint)uVar30;
    out((int)((ulong)uVar30 >> 0x10),(char)uVar30);
    puVar22 = (undefined2 *)&stack0xfffe;
  }
  else {
    if (piVar23 == (int *)0x8000) {
      piVar23 = piVar19;
    }
    piVar24 = (int *)0x0;
    local_4 = piVar23;
    if (((char)in_BX == 'E') || ((char)in_BX == 'e')) {
      iVar14 = param_5 + -1;
      if (0 < param_5) {
        local_14 = param_4;
        local_16 = param_3;
        local_18 = 0x89c;
        in_BX = (*param_1)();
        param_5 = iVar14;
        if ((char)in_BX != '+') {
          if ((char)in_BX != '-') goto LAB_1000_08bc;
          bVar9 = true;
        }
        while (piVar16 = local_14, 0 < param_5) {
          local_14 = param_4;
          local_16 = param_3;
          local_18 = 0x8ba;
          in_BX = (*param_1)();
          param_5 = param_5 + -1;
LAB_1000_08bc:
          bVar11 = (byte)in_BX;
          piVar16 = local_14;
          if ((0x39 < bVar11) || (bVar11 < 0x30)) goto LAB_1000_08dd;
          piVar24 = (int *)((int)(char)(bVar11 - 0x30) + (int)piVar24 * 10);
          if (0x1344 < (int)piVar24) {
            piVar24 = (int *)0x0;
            local_b = '\x01';
          }
        }
      }
    }
    else {
LAB_1000_08dd:
      local_14 = param_4;
      local_16 = param_3;
      local_1a = 0x8e7;
      local_18 = in_BX;
      (*param_2)();
    }
    if (bVar9) {
      piVar24 = (int *)-(int)piVar24;
      local_b = -local_b;
    }
    if ((int)piVar19 < 0) {
      pcVar6 = (code *)swi(0x35);
      uVar30 = (*pcVar6)();
      uVar15 = (uint)uVar30;
      out((int)((ulong)uVar30 >> 0x10),(char)uVar30);
      puVar22 = (undefined2 *)&stack0xfffe;
    }
    else {
      piVar16 = local_4;
      if (local_b == '\x01') {
        local_1a = 0xffff;
        local_18 = 0xffff;
        local_16 = 0xffff;
        local_14 = (int *)0xffff;
        pcVar6 = (code *)swi(0x37);
        (*pcVar6)();
        piVar4 = piVar23;
        piVar23 = (int *)((int)piVar23 + 1);
        out((char)*piVar4,extraout_DX_00);
        cVar28 = func_0x00014ffd();
        uVar15 = (uint)(byte)(cVar28 + *(char *)((int)piVar19 + (int)piVar23));
        puVar22 = (undefined2 *)&stack0xfffe;
      }
      else {
        if (local_b != -1) {
          if (piVar19 < (int *)0x13) goto LAB_1000_0945;
          goto code_r0x00010942;
        }
        pcVar6 = (code *)swi(0x35);
        uVar30 = (*pcVar6)();
        uVar15 = (uint)uVar30;
        out((int)((ulong)uVar30 >> 0x10),(char)uVar30);
        puVar22 = (undefined2 *)&stack0xfffe;
      }
    }
  }
  do {
    cVar29 = '\0';
    cVar28 = *(char *)((int)puVar22 + -5) < '\0';
    bVar26 = *(char *)((int)puVar22 + -5) == '\0';
    if (bVar26) {
LAB_1000_0975:
      unaff_ES = (undefined2)((ulong)*(int **)(puVar22 + 7) >> 0x10);
      piVar24 = (int *)*(int **)(puVar22 + 7);
code_r0x00010978:
      *piVar24 = *piVar24 + puVar22[-6];
      **(undefined2 **)(puVar22 + 9) = puVar22[-7];
      return uVar15;
    }
    pcVar6 = (code *)swi(0x35);
    uVar15 = (*pcVar6)();
    piVar16 = (int *)((int)piVar16 + -1);
    if (piVar16 == (int *)0x0 || bVar26 != false) {
      if (bVar26 || cVar29 != cVar28) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      goto code_r0x00010978;
    }
    *(uint *)((undefined1 *)((int)puVar22 + (int)piVar24) + -0x7c3d) =
         *(uint *)((undefined1 *)((int)puVar22 + (int)piVar24) + -0x7c3d) ^ (uint)piVar16;
    puVar20 = puVar22;
code_r0x00010942:
    piVar19 = (int *)0x12;
    puVar21 = puVar20;
LAB_1000_0945:
    piVar16 = (int *)((int)piVar16 - (int)piVar19);
    piVar24 = (int *)((int)piVar24 + (int)piVar16);
    pcVar6 = (code *)swi(0x3b);
    (*pcVar6)();
    piVar4 = piVar23;
    piVar23 = (int *)((int)piVar23 + 1);
    out((char)*piVar4,extraout_DX_01);
    iVar14 = FUN_1000_d0dc();
    uVar15 = 0;
    puVar22 = puVar21;
    if (iVar14 != 0) {
      local_14 = (int *)0x95f;
      FUN_1000_0e28();
      if ((int)piVar24 < 0) {
        pcVar6 = (code *)swi(0x3a);
        uVar15 = (*pcVar6)();
      }
      else {
        pcVar6 = (code *)swi(0x3a);
        uVar15 = (*pcVar6)();
        puVar22 = (undefined2 *)*puVar21;
      }
    }
  } while( true );
}



// Function: FUN_1000_0a1e @ 1000:0a1e

/* WARNING: Instruction at (ram,0x00010a31) overlaps instruction at (ram,0x00010a30)
    */

void FUN_1000_0a1e(undefined2 param_1,longdouble *param_2,undefined2 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  byte bVar3;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  undefined2 extraout_DX_04;
  longdouble *in_BX;
  longdouble *plVar4;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  longdouble in_ST1;
  byte bStack_75;
  
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)();
  cVar8 = SBORROW2((int)&stack0x0000,10);
  cVar7 = (int)&stack0xfff6 < 0;
  bVar5 = &stack0x0000 == (undefined1 *)0xa;
code_r0x00010a30:
  do {
    pcVar2 = (code *)swi(0x37);
    (*pcVar2)();
    if (bVar5 || cVar8 != cVar7) {
      in(extraout_DX);
      cVar8 = false;
      bVar3 = (byte)extraout_DX | bStack_75;
      cVar7 = (char)bVar3 < '\0';
      bVar5 = false;
      bVar6 = true;
      if (bVar3 != 0) goto code_r0x00010a30;
    }
    else {
      bVar6 = ((uint)param_4 & 4) == 0;
    }
    if (bVar6) {
      plVar4 = param_2;
      if (((uint)param_4 & 8) == 0) {
        pcVar2 = (code *)swi(0x37);
        (*pcVar2)();
        puVar1 = param_4;
        param_4 = param_4 + 1;
        out(*puVar1,extraout_DX_03);
        plVar4 = in_BX;
        if ('\0' < (char)((&stack0x0aec)[unaff_DI] & 0xcd)) {
          pcVar2 = (code *)swi(0x39);
          (*pcVar2)();
          in(extraout_DX_04);
          pcVar2 = (code *)swi(0x3d);
          (*pcVar2)();
          FUN_1000_04bc();
          pcVar2 = (code *)swi(0x3c);
          (*pcVar2)();
          *(float *)param_2 = (float)in_ST1;
          goto LAB_1000_0a9c;
        }
      }
      pcVar2 = (code *)swi(0x37);
      (*pcVar2)();
      out(*param_4,extraout_DX_02);
      *plVar4 = in_ST1;
      goto LAB_1000_0a9c;
    }
    pcVar2 = (code *)swi(0x37);
    (*pcVar2)();
    puVar1 = param_4;
    param_4 = param_4 + 1;
    out(*puVar1,extraout_DX_00);
    cVar8 = false;
    bVar3 = (&stack0x0aec)[unaff_DI] & 0xcd;
    cVar7 = (char)bVar3 < '\0';
    bVar5 = bVar3 == 0;
    if ('\0' < (char)bVar3) {
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      in(extraout_DX_01);
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      FUN_1000_04bc();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *(double *)param_2 = (double)in_ST1;
LAB_1000_0a9c:
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      return;
    }
  } while( true );
}



// Function: FUN_1000_0a26 @ 1000:0a26

/* WARNING: Instruction at (ram,0x00010a31) overlaps instruction at (ram,0x00010a30)
    */

void __cdecl16near FUN_1000_0a26(longdouble *param_1,undefined2 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  byte bVar3;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  undefined2 extraout_DX_04;
  longdouble *in_BX;
  longdouble *plVar4;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  longdouble in_ST0;
  byte bStack_77;
  
  cVar8 = SBORROW2((int)&stack0xfffe,10);
  cVar7 = (int)&stack0xfff4 < 0;
  bVar5 = &stack0x0000 == (undefined1 *)0xc;
code_r0x00010a30:
  do {
    pcVar2 = (code *)swi(0x37);
    (*pcVar2)();
    if (bVar5 || cVar8 != cVar7) {
      in(extraout_DX);
      cVar8 = false;
      bVar3 = (byte)extraout_DX | bStack_77;
      cVar7 = (char)bVar3 < '\0';
      bVar5 = false;
      bVar6 = true;
      if (bVar3 != 0) goto code_r0x00010a30;
    }
    else {
      bVar6 = ((uint)param_3 & 4) == 0;
    }
    if (bVar6) {
      plVar4 = param_1;
      if (((uint)param_3 & 8) == 0) {
        pcVar2 = (code *)swi(0x37);
        (*pcVar2)();
        puVar1 = param_3;
        param_3 = param_3 + 1;
        out(*puVar1,extraout_DX_03);
        plVar4 = in_BX;
        if ('\0' < (char)((&stack0x0aea)[unaff_DI] & 0xcd)) {
          pcVar2 = (code *)swi(0x39);
          (*pcVar2)();
          in(extraout_DX_04);
          pcVar2 = (code *)swi(0x3d);
          (*pcVar2)();
          FUN_1000_04bc();
          pcVar2 = (code *)swi(0x3c);
          (*pcVar2)();
          *(float *)param_1 = (float)in_ST0;
          goto LAB_1000_0a9c;
        }
      }
      pcVar2 = (code *)swi(0x37);
      (*pcVar2)();
      out(*param_3,extraout_DX_02);
      *plVar4 = in_ST0;
      goto LAB_1000_0a9c;
    }
    pcVar2 = (code *)swi(0x37);
    (*pcVar2)();
    puVar1 = param_3;
    param_3 = param_3 + 1;
    out(*puVar1,extraout_DX_00);
    cVar8 = false;
    bVar3 = (&stack0x0aea)[unaff_DI] & 0xcd;
    cVar7 = (char)bVar3 < '\0';
    bVar5 = bVar3 == 0;
    if ('\0' < (char)bVar3) {
      pcVar2 = (code *)swi(0x39);
      (*pcVar2)();
      in(extraout_DX_01);
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      FUN_1000_04bc();
      pcVar2 = (code *)swi(0x3c);
      (*pcVar2)();
      *(double *)param_1 = (double)in_ST0;
LAB_1000_0a9c:
      pcVar2 = (code *)swi(0x3d);
      (*pcVar2)();
      return;
    }
  } while( true );
}



// Function: FUN_1000_0aa3 @ 1000:0aa3

void __cdecl16far FUN_1000_0aa3(void)

{
  return;
}



// Function: FUN_1000_0aa8 @ 1000:0aa8

void FUN_1000_0aa8(uint param_1)

{
  uint *puVar1;
  undefined4 in_stack_0000000e;
  
  puVar1 = (uint *)(param_1 + (int)in_stack_0000000e);
  *puVar1 = *puVar1 & 0x7fff;
                    /* WARNING: Could not recover jumptable at 0x00010ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)((param_1 >> 2) * 2 + 0xad8))();
  return;
}



// Function: FUN_1000_0cb0 @ 1000:0cb0

void __cdecl16near FUN_1000_0cb0(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  code *pcVar2;
  int local_8 [2];
  
  if (*(int *)0x77f8 != 0 || *(int *)0x77fa != 0) {
    pcVar2 = (code *)(*(code *)*(undefined2 *)0x77f8)();
    local_8[0] = (int)((ulong)pcVar2 >> 0x10);
    pcVar1 = (code *)pcVar2;
    (*(code *)*(undefined2 *)0x77f8)();
    if ((local_8[0] == 0) && (pcVar1 == (code *)0x1)) {
      return;
    }
    if (pcVar1 != (code *)0x0 || local_8[0] != 0) {
      (*(code *)*(undefined2 *)0x77f8)();
      (*pcVar1)();
      return;
    }
  }
  FUN_1000_45d4(0x441c);
  FUN_1000_0249();
  return;
}



// Function: FUN_1000_0d5f @ 1000:0d5f

/* WARNING: Instruction at (ram,0x00010e27) overlaps instruction at (ram,0x00010e25)
    */

uint FUN_1000_0d5f(int param_1)

{
  byte *pbVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char in_CL;
  int in_DX;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  byte *unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  
  puVar8 = (undefined2 *)&stack0xfffe;
  if (param_1 < -0x1344) {
    pcVar2 = (code *)swi(0x35);
    uVar3 = (*pcVar2)();
    out(in_DX,(char)uVar3);
  }
  else if (param_1 < 0x1345) {
    if (param_1 != 0) {
      unaff_SI = (byte *)0x7;
    }
    pcVar2 = (code *)swi(0x35);
    (*pcVar2)();
    uVar4 = FUN_1000_a970();
    (&stack0xfffe)[unaff_DI] = (&stack0xfffe)[unaff_DI] + in_CL;
    *(char *)(unaff_DI + 2) = *(char *)(unaff_DI + 2) >> 0x17;
    uVar4 = (uint)unaff_SI & uVar4;
    pcVar2 = (code *)swi(0x35);
    uVar5 = (*pcVar2)();
    uVar6 = in_DX + 1;
    uVar3 = uVar5 >> 4;
    uVar7 = uVar3;
    if ((uVar5 >> 3 & 1) != 0) {
      pcVar2 = (code *)swi(0x34);
      uVar3 = (*pcVar2)();
      uVar7 = uVar6 + 1;
      uVar6 = uVar7;
    }
    if (uVar7 != 0) {
      uVar7 = uVar3 >> 1;
      if ((uVar3 & 1) != 0) {
        pcVar2 = (code *)swi(0x38);
        uVar7 = (*pcVar2)();
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar7 >> 1;
      puVar8 = (undefined2 *)&stack0xfffe;
      if ((uVar7 & 1) != 0) {
        pcVar2 = (code *)swi(0x37);
        (*pcVar2)();
        uVar6 = uVar6 + 1;
        pcVar2 = (code *)swi(0x3a);
        uVar5 = (*pcVar2)();
        puVar8 = (undefined2 *)0xd87;
      }
      uVar7 = uVar5 >> 1;
      if ((uVar5 & 1) != 0) {
        pcVar2 = (code *)swi(0x37);
        (*pcVar2)();
        uVar6 = uVar6 + 1;
        pcVar2 = (code *)swi(0x3a);
        uVar7 = (*pcVar2)();
        puVar8 = (undefined2 *)*puVar8;
      }
      bVar9 = false;
      uVar5 = uVar7 >> 1;
      if ((uVar7 & 1) != 0) {
        pcVar2 = (code *)swi(0x37);
        uVar7 = (*pcVar2)();
        if (bVar9) {
          pbVar1 = (byte *)(uVar4 * 4 + 5);
          *pbVar1 = *pbVar1 ^ 0xcd;
          *(byte *)(puVar8 + uVar4 * 2 + 0x2f) =
               *(byte *)(puVar8 + uVar4 * 2 + 0x2f) ^ (byte)(uVar7 ^ 0x3e);
          return uVar7 ^ 0x3e;
        }
        pcVar2 = (code *)swi(0x3a);
        uVar5 = (*pcVar2)();
        puVar8 = (undefined2 *)*puVar8;
      }
      uVar7 = uVar5 >> 1;
      bVar9 = (POPCOUNT(uVar7 & 0xff) & 1U) == 0;
      if ((uVar5 & 1) != 0) {
        pcVar2 = (code *)swi(0x37);
        (*pcVar2)();
        if (bVar9) {
          *(char *)(unaff_DI + -0x75) = *(char *)(unaff_DI + -0x75) + (char)uVar6;
          in(uVar6);
          uVar7 = FUN_1000_0d5f();
          return uVar7;
        }
        pcVar2 = (code *)swi(0x3a);
        uVar7 = (*pcVar2)();
        puVar8 = (undefined2 *)*puVar8;
      }
      uVar6 = uVar7 >> 1;
      if ((uVar7 & 1) != 0) {
        pcVar2 = (code *)swi(0x37);
        uVar6 = (*pcVar2)();
      }
      uVar7 = uVar6 >> 1;
      if ((uVar6 & 1) != 0) {
        pcVar2 = (code *)swi(0x37);
        uVar7 = (*pcVar2)();
      }
      uVar6 = uVar7 >> 1;
      if ((uVar7 & 1) != 0) {
        pcVar2 = (code *)swi(0x37);
        (*pcVar2)();
        pcVar2 = (code *)swi(0x3a);
        uVar6 = (*pcVar2)();
        puVar8 = (undefined2 *)*puVar8;
      }
      uVar3 = uVar6 >> 1;
      if ((uVar6 & 1) != 0) {
        pcVar2 = (code *)swi(0x37);
        uVar3 = (*pcVar2)();
        DAT_1000_cd42 = (undefined1)uVar3;
      }
    }
    if ((*(byte *)((int)puVar8 + 5) & 0x80) != 0) {
      pcVar2 = (code *)swi(0x34);
      uVar3 = (*pcVar2)();
      *(byte *)(puVar8 + uVar4 * 2 + 0x2f) = *(byte *)(puVar8 + uVar4 * 2 + 0x2f) ^ (byte)uVar3;
    }
  }
  else {
    pcVar2 = (code *)swi(0x35);
    (*pcVar2)();
    uVar3 = (uint)*unaff_SI;
  }
  return uVar3;
}



// Function: FUN_1000_0e28 @ 1000:0e28

void __cdecl16far FUN_1000_0e28(undefined2 param_1)

{
  FUN_1000_0d5f(param_1);
  return;
}



// Function: FUN_1000_0e33 @ 1000:0e33

void __cdecl16far FUN_1000_0e33(void)

{
  code *pcVar1;
  uint in_stack_0000000a;
  
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  if ((in_stack_0000000a & 0x7fff) != 0) {
    if ((int)in_stack_0000000a < 0) {
      pcVar1 = (code *)swi(0x39);
      (*pcVar1)();
      pcVar1 = (code *)swi(0x39);
      (*pcVar1)();
      pcVar1 = (code *)swi(0x3d);
      (*pcVar1)(0);
      FUN_1000_0ec5();
    }
    else {
      pcVar1 = (code *)swi(0x35);
      (*pcVar1)();
    }
  }
  return;
}



// Function: FUN_1000_0e75 @ 1000:0e75

uint __cdecl16far FUN_1000_0e75(void)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 extraout_AH;
  undefined2 extraout_DX;
  undefined2 unaff_DS;
  unkbyte10 in_ST0;
  uint in_stack_0000000a;
  
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  in_stack_0000000a = in_stack_0000000a & 0x7ff0;
  if (in_stack_0000000a < 0x4340) {
    if (*(int *)0x4100 < 3) {
      pcVar1 = (code *)swi(0x3e);
      (*pcVar1)();
      uVar2 = in(extraout_DX);
      in_stack_0000000a = CONCAT11(extraout_AH,uVar2);
    }
    else {
      fsin(in_ST0);
    }
  }
  else {
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)(0);
    in_stack_0000000a = FUN_1000_0ec5();
  }
  return in_stack_0000000a;
}



// Function: FUN_1000_0ec5 @ 1000:0ec5

/* WARNING: Control flow encountered bad instruction data */

void FUN_1000_0ec5(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  int param_5,int param_6,int param_7,int param_8)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  
  if (param_5 == 0 && param_6 == 0) {
    pcVar1 = (code *)swi(0x35);
    uVar2 = (*pcVar1)();
    out(extraout_DX,uVar2);
  }
  else {
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)(param_2,param_3,param_4);
  }
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  FUN_1000_4cc5();
  if (param_7 == 0 && param_8 == 0) {
    pcVar1 = (code *)swi(0x35);
    uVar2 = (*pcVar1)();
    out(extraout_DX_00,uVar2);
  }
  else {
    pcVar1 = (code *)swi(0x3c);
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_0f6e @ 1000:0f6e

void __cdecl16far FUN_1000_0f6e(void)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 extraout_DX;
  undefined2 unaff_DS;
  unkbyte10 in_ST0;
  uint in_stack_0000000a;
  
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  if ((in_stack_0000000a & 0x7ff0) < 0x4340) {
    if (*(int *)0x4100 < 3) {
      pcVar1 = (code *)swi(0x3e);
      uVar2 = (*pcVar1)();
      out(extraout_DX,uVar2);
    }
    else {
      fcos(in_ST0);
    }
  }
  else {
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x39);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)(0);
    FUN_1000_0ec5();
  }
  return;
}



// Function: FUN_1000_0fbe @ 1000:0fbe

void __cdecl16far FUN_1000_0fbe(void)

{
  code *pcVar1;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined1 *unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar2;
  char cVar3;
  char cVar4;
  char acStack_9bc [2480];
  undefined1 local_c [9];
  byte local_3;
  
  cVar4 = SBORROW2((int)&stack0xfffe,10);
  cVar3 = (int)local_c < 0;
  bVar2 = &stack0x0000 == (undefined1 *)0xc;
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  do {
  } while (bVar2 || cVar4 != cVar3);
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  local_3 = local_3 | 0xc;
  pcVar1 = (code *)swi(0x35);
  local_3 = (*pcVar1)();
  out(*unaff_SI,extraout_DX);
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  out(unaff_SI[1],extraout_DX_00);
  acStack_9bc[unaff_DI] = acStack_9bc[unaff_DI] + -1;
  return;
}



// Function: FUN_1000_0fea @ 1000:0fea

bool __cdecl16far FUN_1000_0fea(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0x42e4;
  if (iVar1 != 0x20) {
    iVar2 = *(int *)0x42e4;
    *(undefined2 *)(iVar2 * 4 + 0x7768) = param_2;
    *(undefined2 *)(iVar2 * 4 + 0x7766) = param_1;
    *(int *)0x42e4 = *(int *)0x42e4 + 1;
  }
  return iVar1 == 0x20;
}



// Function: FUN_1000_1017 @ 1000:1017

undefined2 __cdecl16far FUN_1000_1017(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_1000_1454();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000_102f @ 1000:102f

void __cdecl16far FUN_1000_102f(undefined4 param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)((int)param_1 + 2);
  *puVar1 = *puVar1 & 0xffcf;
  return;
}



// Function: caseD_0 @ 1000:1076

void __cdecl16far switchD_1000:a960::caseD_0(void)

{
  char in_AL;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_DS;
  
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + in_AL;
  FUN_1000_12d3(0x23,0x103c);
  return;
}



// Function: FUN_1000_108b @ 1000:108b

undefined2 __cdecl16far FUN_1000_108b(undefined2 param_1,undefined2 param_2,undefined2 *param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 in_CX;
  bool bVar3;
  
  bVar3 = false;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (bVar3) {
    uVar2 = FUN_1000_148d();
  }
  else {
    *param_3 = in_CX;
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000_10ab @ 1000:10ab

undefined2 __cdecl16far FUN_1000_10ab(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_1000_148d();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000_10c8 @ 1000:10c8

undefined2 __cdecl16far FUN_1000_10c8(void)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  byte in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar3 = (uint)(in_CF & 1);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000_148d();
  }
  return uVar2;
}



// Function: FUN_1000_10fb @ 1000:10fb

undefined2 __cdecl16far FUN_1000_10fb(void)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  byte in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar3 = (uint)(in_CF & 1);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000_148d();
  }
  return uVar2;
}



// Function: FUN_1000_1128 @ 1000:1128

void __cdecl16far FUN_1000_1128(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  
  pcVar1 = (code *)swi(0x21);
  bVar2 = (*pcVar1)();
  *param_1 = bVar2 + 1;
  return;
}



// Function: FUN_1000_113a @ 1000:113a

void __cdecl16far FUN_1000_113a(undefined2 param_1,uint *param_2)

{
  code *pcVar1;
  byte bVar2;
  
  pcVar1 = (code *)swi(0x21);
  bVar2 = (*pcVar1)();
  *param_2 = (uint)bVar2;
  return;
}



// Function: FUN_1000_1151 @ 1000:1151

void FUN_1000_1151(undefined2 param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  if (param_3 == 0) {
    while (*(int *)0x42e4 != 0) {
      *(int *)0x42e4 = *(int *)0x42e4 + -1;
      puVar1 = (undefined2 *)(*(int *)0x42e4 * 4 + 0x7766);
      (*(code *)*puVar1)();
    }
    FUN_1000_0154();
    (*(code *)*(undefined2 *)0x43e8)();
  }
  FUN_1000_01bd();
  FUN_1000_0167();
  if (param_2 == 0) {
    if (param_3 == 0) {
      (*(code *)*(undefined2 *)0x43ec)();
      (*(code *)*(undefined2 *)0x43f0)();
    }
    FUN_1000_0168();
  }
  return;
}



// Function: FUN_1000_11a8 @ 1000:11a8

void __cdecl16far FUN_1000_11a8(undefined2 param_1)

{
  FUN_1000_1151(param_1,0,0);
  return;
}



// Function: FUN_1000_11b7 @ 1000:11b7

void __cdecl16far FUN_1000_11b7(undefined2 param_1)

{
  FUN_1000_1151(param_1,0,1);
  return;
}



// Function: FUN_1000_11fa @ 1000:11fa

void __stdcall16far FUN_1000_11fa(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint in_CX;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined2 *)param_1;
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  puVar5 = (undefined2 *)param_2;
  for (uVar3 = in_CX >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  for (uVar3 = (uint)((in_CX & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = (undefined2 *)((int)puVar5 + 1);
    puVar1 = puVar4;
    puVar4 = (undefined2 *)((int)puVar4 + 1);
    *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
  }
  return;
}



// Function: FUN_1000_1231 @ 1000:1231

undefined2 __cdecl16far FUN_1000_1231(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_1000_1454(uVar2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000_124e @ 1000:124e

void __cdecl16far FUN_1000_124e(undefined2 *param_1)

{
  code *pcVar1;
  undefined2 in_CX;
  undefined2 extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *param_1 = in_CX;
  ((undefined2 *)param_1)[1] = extraout_DX;
  return;
}



// Function: FUN_1000_1261 @ 1000:1261

void __cdecl16far FUN_1000_1261(undefined2 *param_1)

{
  code *pcVar1;
  undefined2 in_CX;
  undefined2 extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *param_1 = in_CX;
  ((undefined2 *)param_1)[1] = extraout_DX;
  return;
}



// Function: FUN_1000_1274 @ 1000:1274

int __cdecl16far FUN_1000_1274(void)

{
  int local_4;
  
  FUN_1000_1128(&local_4);
  return local_4 + -1;
}



// Function: FUN_1000_128e @ 1000:128e

undefined2 __cdecl16far FUN_1000_128e(int param_1)

{
  undefined2 local_4;
  
  FUN_1000_113a(param_1 + 1,&local_4);
  return local_4;
}



// Function: FUN_1000_12c4 @ 1000:12c4

undefined2 __cdecl16far FUN_1000_12c4(void)

{
  code *pcVar1;
  undefined2 in_BX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return in_BX;
}



// Function: FUN_1000_12d3 @ 1000:12d3

void __cdecl16far FUN_1000_12d3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_1000_12e4 @ 1000:12e4

void FUN_1000_12e4(void)

{
  FUN_1000_1301();
  return;
}



// Function: FUN_1000_12f3 @ 1000:12f3

void FUN_1000_12f3(void)

{
  FUN_1000_1301();
  return;
}



// Function: FUN_1000_1301 @ 1000:1301

undefined4 __stdcall16far FUN_1000_1301(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint in_CX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  if ((param_4 == 0) && ((param_2 == 0 || (param_3 == 0)))) {
    uVar1 = (uint)(CONCAT22(param_2,param_1) / (ulong)param_3);
    if ((in_CX & 2) != 0) {
      uVar1 = (uint)(CONCAT22(param_2,param_1) % (ulong)param_3);
    }
    param_2 = 0;
  }
  else {
    if ((in_CX & 1) == 0) {
      if ((int)param_2 < 0) {
        bVar5 = param_1 != 0;
        param_1 = -param_1;
        param_2 = -(uint)bVar5 - param_2;
        in_CX = in_CX | 0xc;
      }
      if ((int)param_4 < 0) {
        bVar5 = param_3 != 0;
        param_3 = -param_3;
        param_4 = -(uint)bVar5 - param_4;
        in_CX = in_CX ^ 4;
      }
    }
    iVar2 = 0x20;
    uVar4 = 0;
    uVar3 = 0;
    do {
      bVar5 = (int)param_1 < 0;
      param_1 = param_1 * 2;
      bVar6 = (int)param_2 < 0;
      param_2 = param_2 << 1 | (uint)bVar5;
      bVar5 = (int)uVar3 < 0;
      uVar3 = uVar3 << 1 | (uint)bVar6;
      uVar4 = uVar4 << 1 | (uint)bVar5;
      if ((param_4 <= uVar4) && ((param_4 < uVar4 || (param_3 <= uVar3)))) {
        bVar5 = uVar3 < param_3;
        uVar3 = uVar3 - param_3;
        uVar4 = (uVar4 - param_4) - (uint)bVar5;
        param_1 = param_1 + 1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar1 = param_1;
    if ((in_CX & 2) != 0) {
      in_CX = in_CX >> 1;
      uVar1 = uVar3;
      param_2 = uVar4;
    }
    if ((in_CX & 4) != 0) {
      bVar5 = uVar1 != 0;
      uVar1 = -uVar1;
      param_2 = -(uint)bVar5 - param_2;
    }
  }
  return CONCAT22(param_2,uVar1);
}



// Function: FUN_1000_1392 @ 1000:1392

int __cdecl16far FUN_1000_1392(void)

{
  int in_AX;
  byte in_CL;
  
  if (in_CL < 0x10) {
    return in_AX << (in_CL & 0x1f);
  }
  return 0;
}



// Function: FUN_1000_13f4 @ 1000:13f4

byte __cdecl16far FUN_1000_13f4(void)

{
  char in_AL;
  int in_CX;
  byte in_BL;
  
  if (in_CX < 0) {
    return in_AL - (~in_BL + 1) & 0xf;
  }
  return in_AL + in_BL & 0xf;
}



// Function: FUN_1000_1454 @ 1000:1454

undefined2 FUN_1000_1454(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if (param_1 < 0) {
    iVar1 = -param_1;
    if (param_1 == -0x23 || iVar1 < 0x23) {
      *(undefined2 *)0x45b4 = 0xffff;
      goto LAB_1000_1481;
    }
LAB_1000_1464:
    param_1 = 0x57;
  }
  else if (0x58 < param_1) goto LAB_1000_1464;
  *(int *)0x45b4 = param_1;
  iVar1 = (int)*(char *)(param_1 + 0x45b6);
LAB_1000_1481:
  *(int *)0x7f = iVar1;
  return 0xffff;
}



// Function: FUN_1000_148d @ 1000:148d

undefined2 FUN_1000_148d(undefined2 param_1)

{
  FUN_1000_1454(param_1);
  return param_1;
}



// Function: FUN_1000_149f @ 1000:149f

uint __cdecl16far FUN_1000_149f(void)

{
  code *pcVar1;
  uint extraout_DX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return extraout_DX & 0x80;
}



// Function: FUN_1000_14b0 @ 1000:14b0

char * FUN_1000_14b0(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  bool bVar9;
  byte local_24 [34];
  
  uVar8 = (undefined2)((ulong)param_4 >> 0x10);
  pcVar7 = (char *)param_4;
  if ((param_3 < 0x25) && (1 < (byte)param_3)) {
    if (((int)param_6 < 0) && (param_2 != '\0')) {
      *param_4 = '-';
      pcVar7 = pcVar7 + 1;
      bVar9 = param_5 != 0;
      param_5 = -param_5;
      param_6 = -(uint)bVar9 - param_6;
    }
    pbVar6 = local_24;
    if (param_6 == 0) goto LAB_1000_14fa;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_14fa:
      *pbVar6 = (byte)(param_5 % param_3);
      pbVar6 = pbVar6 + 1;
      param_5 = param_5 / param_3;
    }
    iVar5 = (int)pbVar6 - (int)local_24;
    do {
      pbVar6 = pbVar6 + -1;
      bVar2 = *pbVar6;
      if (bVar2 < 10) {
        cVar4 = bVar2 + 0x30;
      }
      else {
        cVar4 = (bVar2 - 10) + param_1;
      }
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar1 = cVar4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *pcVar7 = '\0';
  return param_4;
}



// Function: FUN_1000_1532 @ 1000:1532

void FUN_1000_1532(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_14b0(0x61,0,10,param_1,param_2,param_3,0);
  return;
}



// Function: FUN_1000_1552 @ 1000:1552

void __cdecl16far FUN_1000_1552(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 unaff_DS;
  bool bVar3;
  
  puVar1 = (uint *)(param_1 * 2 + 0x4586);
  bVar3 = false;
  *puVar1 = *puVar1 & 0xfdff;
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (bVar3) {
    FUN_1000_1454();
  }
  return;
}



// Function: FUN_1000_157b @ 1000:157b

undefined4 FUN_1000_157b(undefined2 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  int unaff_DS;
  
  if (param_4 == 0 && param_5 == 0) {
    param_4 = 0x77ea;
    param_5 = unaff_DS;
  }
  if (param_2 == 0 && param_3 == 0) {
    param_2 = 0x4610;
    param_3 = unaff_DS;
  }
  uVar1 = FUN_1000_251f(param_4,param_5,param_2,param_3,param_1);
  FUN_1000_1532(uVar1,param_3,param_1);
  FUN_1000_5950(param_4,param_5,0x4614);
  return CONCAT22(param_5,param_4);
}



// Function: FUN_1000_15d8 @ 1000:15d8

undefined4 FUN_1000_15d8(int *param_1,undefined2 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_4 [2];
  
  uVar2 = CONCAT22(param_3,param_2);
  do {
    if (*param_1 == -1) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
    *param_1 = *param_1 + iVar1;
    uVar2 = FUN_1000_157b(*param_1,0,0,uVar2);
    iVar1 = FUN_1000_108b(uVar2,local_4);
  } while (iVar1 == 0);
  return uVar2;
}



// Function: FUN_1000_162f @ 1000:162f

undefined4 __cdecl16near FUN_1000_162f(void)

{
  uint in_AX;
  int iVar1;
  int in_CX;
  int in_DX;
  uint in_BX;
  
  iVar1 = 0;
  if (in_DX != 0) {
    iVar1 = in_DX * in_BX;
  }
  if (in_CX != 0) {
    iVar1 = in_CX * in_AX + iVar1;
  }
  return CONCAT22((int)((ulong)in_AX * (ulong)in_BX >> 0x10) + iVar1,
                  (int)((ulong)in_AX * (ulong)in_BX));
}



// Function: FUN_1000_1646 @ 1000:1646

uint __cdecl16near FUN_1000_1646(void)

{
  uint in_AX;
  
  return in_AX & 0xf;
}



// Function: FUN_1000_1667 @ 1000:1667

void FUN_1000_1667(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint in_CX;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined2 *)param_1;
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  puVar5 = (undefined2 *)param_2;
  for (uVar3 = in_CX >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  for (uVar3 = (uint)((in_CX & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = (undefined2 *)((int)puVar5 + 1);
    puVar1 = puVar4;
    puVar4 = (undefined2 *)((int)puVar4 + 1);
    *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
  }
  return;
}



// Function: FUN_1000_1683 @ 1000:1683

void __cdecl16far FUN_1000_1683(undefined2 param_1)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x461c = 0;
  *(undefined2 *)0x461a = param_1;
  return;
}



// Function: FUN_1000_16ba @ 1000:16ba

void __cdecl16far FUN_1000_16ba(int param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  undefined2 uVar3;
  
  bVar2 = false;
  if ((*(uint *)(param_1 * 2 + 0x4586) & 2) == 0) {
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
    if (!bVar2) {
      return;
    }
  }
  else {
    uVar3 = 5;
  }
  FUN_1000_1454(uVar3);
  return;
}



// Function: FUN_1000_16e9 @ 1000:16e9

void FUN_1000_16e9(void)

{
  FUN_1000_1718();
  return;
}



// Function: FUN_1000_16fd @ 1000:16fd

void __cdecl16near FUN_1000_16fd(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  
  if ((*(byte *)(unaff_BP + -1) & 0x20) != 0) {
    *(int *)(unaff_BP + 0x10) = *(int *)(unaff_BP + 0x10) + 4;
    return;
  }
  *(int *)(unaff_BP + 0x10) = *(int *)(unaff_BP + 0x10) + 2;
  return;
}



// Function: FUN_1000_1718 @ 1000:1718

void FUN_1000_1718(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  int unaff_BP;
  undefined2 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined2 uVar14;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar15;
  char cVar16;
  undefined4 uVar17;
  
LAB_1000_171a:
  pbVar12 = (byte *)*(undefined2 *)(unaff_BP + 0xc);
LAB_1000_171d:
  pbVar1 = pbVar12;
  pbVar12 = pbVar12 + 1;
  bVar8 = *pbVar1;
  if (bVar8 == 0) {
switchD_1000_17be_caseD_0:
    FUN_1000_1ba5();
    return;
  }
  if (bVar8 != 0x25) goto LAB_1000_172a;
  *(undefined2 *)(unaff_BP + -10) = 0xffff;
  uVar14 = *(undefined2 *)(unaff_BP + 0xe);
  *(undefined1 *)(unaff_BP + -1) = 0x20;
  pbVar13 = pbVar12;
LAB_1000_17a3:
  pbVar12 = pbVar13 + 1;
  bVar8 = *pbVar13;
  puVar6 = (undefined2 *)(int)(char)bVar8;
  *(int *)(unaff_BP + 0xc) = (int)pbVar12;
  if ((int)puVar6 < 0) goto switchD_1000_17be_caseD_0;
  switch(*(undefined1 *)(puVar6 + 0x230f)) {
  case 0:
  case 1:
  case 2:
    goto switchD_1000_17be_caseD_0;
  case 3:
    goto switchD_1000_17be_caseD_3;
  case 4:
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 1;
    pbVar13 = pbVar12;
    goto LAB_1000_17a3;
  case 5:
    LOCK();
    iVar4 = *(int *)(unaff_BP + -10);
    *(int *)(unaff_BP + -10) = (int)(puVar6 + -0x18);
    UNLOCK();
    pbVar13 = pbVar12;
    if (-1 < iVar4) {
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + iVar4 * 10;
    }
    goto LAB_1000_17a3;
  case 6:
    goto switchD_1000_17be_caseD_6;
  case 7:
  case 8:
    uVar10 = 10;
    break;
  case 9:
    uVar10 = 0;
    break;
  case 10:
    FUN_1000_346d(*(undefined2 *)(unaff_BP + 4),*(undefined2 *)(unaff_BP + 6),
                  *(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),
                  *(uint *)(unaff_BP + -10) & 0x7fff,unaff_BP + -6);
    cVar16 = '\0';
    cVar3 = *(int *)(unaff_BP + -8) < 0;
    if (*(int *)(unaff_BP + -8) < 1) {
      FUN_1000_3475();
      if (cVar16 != cVar3) goto code_r0x00011af8;
      goto switchD_1000_17be_caseD_0;
    }
    if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
      FUN_1000_16fd();
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
      if ((*(byte *)(unaff_BP + -1) & 4) == 0) {
        if ((*(byte *)(unaff_BP + -1) & 8) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = 8;
        }
      }
      else {
        uVar10 = 4;
      }
      FUN_1000_3471(puVar6,uVar14,uVar10);
    }
    else {
      FUN_1000_3475();
    }
    goto LAB_1000_171a;
  case 0xb:
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 8;
    pbVar13 = pbVar12;
    goto LAB_1000_17a3;
  case 0xc:
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 2;
    pbVar13 = pbVar12;
    goto LAB_1000_17a3;
  case 0xd:
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 4;
    pbVar13 = pbVar12;
    goto LAB_1000_17a3;
  case 0xe:
    uVar10 = 8;
    break;
  case 0xf:
    FUN_1000_1b17();
    return;
  case 0x10:
    goto switchD_1000_17be_caseD_10;
  case 0x11:
    pbVar13 = pbVar12;
    if ((*(byte *)(unaff_BP + -1) & 1) == 0) goto LAB_1000_1862;
    goto LAB_1000_17a3;
  case 0x12:
    uVar10 = 0x10;
    break;
  case 0x13:
    FUN_1000_1b17();
    return;
  case 0x14:
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) & 0xdf;
    pbVar13 = pbVar12;
    goto LAB_1000_17a3;
  case 0x15:
    goto switchD_1000_17be_caseD_15;
  default:
    FUN_1000_1af8();
    return;
  }
  if ((((uint)puVar6 & 0x20) == 0) && (puVar6 != (undefined2 *)0x58)) {
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 4;
  }
  FUN_1000_1c02(*(undefined2 *)(unaff_BP + 4),*(undefined2 *)(unaff_BP + 6),
                *(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),uVar10,
                *(uint *)(unaff_BP + -10) & 0x7fff,unaff_BP + -6);
  if (0 < *(int *)(unaff_BP + -8)) {
    if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
LAB_1000_1862:
      uVar17 = FUN_1000_16fd();
      *puVar6 = (int)uVar17;
      if ((*(byte *)(unaff_BP + -1) & 4) != 0) {
        puVar6[1] = (int)((ulong)uVar17 >> 0x10);
      }
    }
    goto LAB_1000_171a;
  }
  if (*(int *)(unaff_BP + -8) < 0) {
    FUN_1000_1af8();
    return;
  }
  goto switchD_1000_17be_caseD_0;
switchD_1000_17be_caseD_15:
  *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 0x20;
  pbVar13 = pbVar12;
  goto LAB_1000_17a3;
switchD_1000_17be_caseD_10:
  puVar6 = (undefined2 *)(unaff_BP + -0x2a);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = 0;
  }
  pbVar11 = pbVar13 + 2;
  bVar8 = *pbVar12;
  *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) & 0xef;
  if (bVar8 == 0x5e) {
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 0x10;
    pbVar1 = pbVar11;
    pbVar11 = pbVar13 + 3;
    bVar8 = *pbVar1;
  }
  uVar7 = (uint)bVar8;
LAB_1000_1a24:
  pbVar12 = pbVar11;
  pbVar13 = (byte *)(uVar7 >> 3);
  bVar8 = '\x01' << ((byte)uVar7 & 7);
  iVar4 = (uint)bVar8 << 8;
  pbVar13[unaff_BP + -0x2a] = pbVar13[unaff_BP + -0x2a] | bVar8;
  uVar9 = uVar7;
  while( true ) {
    pbVar11 = pbVar12 + 1;
    bVar8 = *pbVar12;
    uVar7 = (uint)bVar8;
    if (bVar8 == 0) goto switchD_1000_17be_caseD_0;
    if (bVar8 == 0x5d) break;
    if (((bVar8 != 0x2d) || (bVar8 = (byte)uVar9, *pbVar11 < bVar8)) || (*pbVar11 == 0x5d))
    goto LAB_1000_1a24;
    pbVar12 = pbVar12 + 2;
    cVar3 = *pbVar11 - bVar8;
    if (cVar3 != '\0') {
      uVar9 = (uint)(byte)(bVar8 + cVar3);
      do {
        bVar15 = iVar4 < 0;
        bVar8 = (char)((uint)iVar4 >> 8) << 1 | bVar15;
        iVar4 = (uint)bVar8 << 8;
        pbVar13 = pbVar13 + bVar15;
        pbVar13[unaff_BP + -0x2a] = pbVar13[unaff_BP + -0x2a] | bVar8;
        cVar3 = cVar3 + -1;
      } while (cVar3 != '\0');
    }
  }
  *(int *)(unaff_BP + 0xc) = (int)pbVar11;
  *(uint *)(unaff_BP + -10) = *(uint *)(unaff_BP + -10) & 0x7fff;
  iVar4 = *(int *)(unaff_BP + -10);
  if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
    FUN_1000_16fd();
  }
  while (iVar5 = iVar4 + -1, 0 < iVar4) {
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    uVar7 = (*(code *)*(undefined2 *)(unaff_BP + 4))
                      (*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
    if ((int)uVar7 < 0) {
      if ((iVar4 < *(int *)(unaff_BP + -10)) && ((*(byte *)(unaff_BP + -1) & 1) == 0)) {
        *pbVar13 = 0;
        *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
      }
code_r0x00011af8:
      (*(code *)*(undefined2 *)(unaff_BP + 6))
                (0xffff,*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) - (uint)(*(int *)(unaff_BP + -4) == 0);
      goto switchD_1000_17be_caseD_0;
    }
    if ((*(byte *)(unaff_BP + (uVar7 >> 3) + -0x2a) & '\x01' << ((byte)uVar7 & 7)) == 0) {
      if ((*(byte *)(unaff_BP + -1) & 0x10) == 0) goto LAB_1000_1abf;
    }
    else if ((*(byte *)(unaff_BP + -1) & 0x10) != 0) {
LAB_1000_1abf:
      (*(code *)*(undefined2 *)(unaff_BP + 6))
                (uVar7,*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + -1;
      if (iVar4 < *(int *)(unaff_BP + -10)) break;
      goto LAB_1000_1ae0;
    }
    iVar4 = iVar5;
    if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
      pbVar1 = pbVar13;
      pbVar13 = pbVar13 + 1;
      *pbVar1 = (byte)uVar7;
    }
  }
  if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
LAB_1000_1ae0:
    *pbVar13 = 0;
  }
  goto LAB_1000_171a;
switchD_1000_17be_caseD_6:
  if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
    FUN_1000_16fd();
  }
  iVar4 = *(int *)(unaff_BP + -10);
  bVar15 = iVar4 != 0;
  if (iVar4 < 0) {
    iVar4 = 1;
  }
  if (bVar15) {
    do {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      iVar5 = (*(code *)*(undefined2 *)(unaff_BP + 4))
                        (*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
      if (iVar5 < 0) {
        FUN_1000_1af8();
        return;
      }
      if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
        puVar2 = puVar6;
        puVar6 = (undefined2 *)((int)puVar6 + 1);
        *(char *)puVar2 = (char)iVar5;
      }
      iVar5 = iVar4 + -1;
      bVar15 = 0 < iVar4;
      iVar4 = iVar5;
    } while (iVar5 != 0 && bVar15);
  }
  if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  goto LAB_1000_171a;
switchD_1000_17be_caseD_3:
LAB_1000_172a:
  iVar4 = (int)(char)bVar8;
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  iVar5 = (*(code *)*(undefined2 *)(unaff_BP + 4))
                    (*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
  if (iVar5 < 0) {
LAB_1000_1768:
    FUN_1000_1af8();
    return;
  }
  iVar5 = (int)(char)iVar5;
  if ((iVar4 < 0) || (*(char *)(iVar4 + 0x461e) != '\x01')) {
    if (iVar5 != iVar4) {
      (*(code *)*(undefined2 *)(unaff_BP + 6))
                (iVar5,*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + -1;
      goto switchD_1000_17be_caseD_0;
    }
  }
  else {
    while ((-1 < (char)iVar5 && (*(char *)(iVar5 + 0x461e) == '\x01'))) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      iVar5 = (*(code *)*(undefined2 *)(unaff_BP + 4))
                        (*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
      if (iVar5 < 1) goto LAB_1000_1768;
    }
    (*(code *)*(undefined2 *)(unaff_BP + 6))
              (iVar5,*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + -1;
  }
  goto LAB_1000_171d;
}



// Function: FUN_1000_1919 @ 1000:1919

/* WARNING: Instruction at (ram,0x0001191a) overlaps instruction at (ram,0x00011919)
    */

void FUN_1000_1919(void)

{
  byte *pbVar1;
  undefined2 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  undefined2 in_BX;
  int unaff_BP;
  undefined2 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined2 *unaff_DI;
  undefined2 *puVar13;
  byte *pbVar14;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar15;
  char cVar16;
  undefined4 uVar17;
  
  *(char *)(unaff_BP + 0x39) = *(char *)(unaff_BP + 0x39) + (char)((uint)in_BX >> 8);
code_r0x0001191c:
  if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
    FUN_1000_16fd();
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
    if ((*(byte *)(unaff_BP + -1) & 4) == 0) {
      if ((*(byte *)(unaff_BP + -1) & 8) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 8;
      }
    }
    else {
      uVar6 = 4;
    }
    FUN_1000_3471(unaff_DI,unaff_ES,uVar6);
  }
  else {
    uVar6 = 0x1952;
    FUN_1000_3475();
  }
LAB_1000_171a:
  pbVar12 = (byte *)*(undefined2 *)(unaff_BP + 0xc);
LAB_1000_171d:
  pbVar1 = pbVar12;
  pbVar12 = pbVar12 + 1;
  bVar8 = *pbVar1;
  if (bVar8 == 0) {
switchD_1000_17be_caseD_0:
    FUN_1000_1ba5();
    return;
  }
  if (bVar8 != 0x25) goto LAB_1000_172a;
  *(undefined2 *)(unaff_BP + -10) = 0xffff;
  unaff_ES = *(undefined2 *)(unaff_BP + 0xe);
  *(undefined1 *)(unaff_BP + -1) = 0x20;
  pbVar14 = pbVar12;
LAB_1000_17a3:
  pbVar12 = pbVar14 + 1;
  bVar8 = *pbVar14;
  unaff_DI = (undefined2 *)(int)(char)bVar8;
  *(int *)(unaff_BP + 0xc) = (int)pbVar12;
  if ((int)unaff_DI < 0) goto switchD_1000_17be_caseD_0;
  switch(*(undefined1 *)(unaff_DI + 0x230f)) {
  case 0:
  case 1:
  case 2:
    goto switchD_1000_17be_caseD_0;
  case 3:
    goto switchD_1000_17be_caseD_3;
  case 4:
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 1;
    pbVar14 = pbVar12;
    goto LAB_1000_17a3;
  case 5:
    LOCK();
    iVar4 = *(int *)(unaff_BP + -10);
    *(int *)(unaff_BP + -10) = (int)(unaff_DI + -0x18);
    UNLOCK();
    pbVar14 = pbVar12;
    if (-1 < iVar4) {
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + iVar4 * 10;
    }
    goto LAB_1000_17a3;
  case 6:
    goto switchD_1000_17be_caseD_6;
  case 7:
  case 8:
    uVar10 = 10;
    break;
  case 9:
    uVar10 = 0;
    break;
  case 10:
    FUN_1000_346d(*(undefined2 *)(unaff_BP + 4),*(undefined2 *)(unaff_BP + 6),
                  *(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),
                  *(uint *)(unaff_BP + -10) & 0x7fff,unaff_BP + -6);
    cVar16 = '\0';
    cVar3 = *(int *)(unaff_BP + -8) < 0;
    if (0 < *(int *)(unaff_BP + -8)) goto code_r0x0001191c;
    uVar6 = 0x1958;
    FUN_1000_3475();
    if (cVar16 != cVar3) goto code_r0x00011af8;
    goto switchD_1000_17be_caseD_0;
  case 0xb:
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 8;
    pbVar14 = pbVar12;
    goto LAB_1000_17a3;
  case 0xc:
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 2;
    pbVar14 = pbVar12;
    goto LAB_1000_17a3;
  case 0xd:
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 4;
    pbVar14 = pbVar12;
    goto LAB_1000_17a3;
  case 0xe:
    uVar10 = 8;
    break;
  case 0xf:
    FUN_1000_1b17(uVar6);
    return;
  case 0x10:
    goto switchD_1000_17be_caseD_10;
  case 0x11:
    pbVar14 = pbVar12;
    if ((*(byte *)(unaff_BP + -1) & 1) == 0) goto LAB_1000_1862;
    goto LAB_1000_17a3;
  case 0x12:
    uVar10 = 0x10;
    break;
  case 0x13:
    FUN_1000_1b17(uVar6);
    return;
  case 0x14:
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) & 0xdf;
    pbVar14 = pbVar12;
    goto LAB_1000_17a3;
  case 0x15:
    goto switchD_1000_17be_caseD_15;
  default:
    FUN_1000_1af8();
    return;
  }
  if ((((uint)unaff_DI & 0x20) == 0) && (unaff_DI != (undefined2 *)0x58)) {
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 4;
  }
  FUN_1000_1c02(*(undefined2 *)(unaff_BP + 4),*(undefined2 *)(unaff_BP + 6),
                *(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),uVar10,
                *(uint *)(unaff_BP + -10) & 0x7fff,unaff_BP + -6);
  if (0 < *(int *)(unaff_BP + -8)) {
    if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
LAB_1000_1862:
      uVar17 = FUN_1000_16fd();
      *unaff_DI = (int)uVar17;
      if ((*(byte *)(unaff_BP + -1) & 4) != 0) {
        unaff_DI[1] = (int)((ulong)uVar17 >> 0x10);
      }
    }
    goto LAB_1000_171a;
  }
  if (*(int *)(unaff_BP + -8) < 0) {
    FUN_1000_1af8();
    return;
  }
  goto switchD_1000_17be_caseD_0;
switchD_1000_17be_caseD_15:
  *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 0x20;
  pbVar14 = pbVar12;
  goto LAB_1000_17a3;
switchD_1000_17be_caseD_10:
  puVar13 = (undefined2 *)(unaff_BP + -0x2a);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar2 = 0;
  }
  pbVar11 = pbVar14 + 2;
  bVar8 = *pbVar12;
  *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) & 0xef;
  if (bVar8 == 0x5e) {
    *(byte *)(unaff_BP + -1) = *(byte *)(unaff_BP + -1) | 0x10;
    pbVar1 = pbVar11;
    pbVar11 = pbVar14 + 3;
    bVar8 = *pbVar1;
  }
  uVar7 = (uint)bVar8;
LAB_1000_1a24:
  pbVar12 = pbVar11;
  pbVar14 = (byte *)(uVar7 >> 3);
  bVar8 = '\x01' << ((byte)uVar7 & 7);
  iVar4 = (uint)bVar8 << 8;
  pbVar14[unaff_BP + -0x2a] = pbVar14[unaff_BP + -0x2a] | bVar8;
  uVar9 = uVar7;
  while( true ) {
    pbVar11 = pbVar12 + 1;
    bVar8 = *pbVar12;
    uVar7 = (uint)bVar8;
    if (bVar8 == 0) goto switchD_1000_17be_caseD_0;
    if (bVar8 == 0x5d) break;
    if (((bVar8 != 0x2d) || (bVar8 = (byte)uVar9, *pbVar11 < bVar8)) || (*pbVar11 == 0x5d))
    goto LAB_1000_1a24;
    pbVar12 = pbVar12 + 2;
    cVar3 = *pbVar11 - bVar8;
    if (cVar3 != '\0') {
      uVar9 = (uint)(byte)(bVar8 + cVar3);
      do {
        bVar15 = iVar4 < 0;
        bVar8 = (char)((uint)iVar4 >> 8) << 1 | bVar15;
        iVar4 = (uint)bVar8 << 8;
        pbVar14 = pbVar14 + bVar15;
        pbVar14[unaff_BP + -0x2a] = pbVar14[unaff_BP + -0x2a] | bVar8;
        cVar3 = cVar3 + -1;
      } while (cVar3 != '\0');
    }
  }
  *(int *)(unaff_BP + 0xc) = (int)pbVar11;
  *(uint *)(unaff_BP + -10) = *(uint *)(unaff_BP + -10) & 0x7fff;
  iVar4 = *(int *)(unaff_BP + -10);
  if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
    FUN_1000_16fd();
  }
  while (iVar5 = iVar4 + -1, 0 < iVar4) {
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    uVar7 = (*(code *)*(undefined2 *)(unaff_BP + 4))
                      (*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
    if ((int)uVar7 < 0) {
      if ((iVar4 < *(int *)(unaff_BP + -10)) && ((*(byte *)(unaff_BP + -1) & 1) == 0)) {
        *pbVar14 = 0;
        *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
      }
code_r0x00011af8:
      (*(code *)*(undefined2 *)(unaff_BP + 6))
                (0xffff,*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10),uVar6);
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) - (uint)(*(int *)(unaff_BP + -4) == 0);
      goto switchD_1000_17be_caseD_0;
    }
    if ((*(byte *)(unaff_BP + (uVar7 >> 3) + -0x2a) & '\x01' << ((byte)uVar7 & 7)) == 0) {
      if ((*(byte *)(unaff_BP + -1) & 0x10) == 0) goto LAB_1000_1abf;
    }
    else if ((*(byte *)(unaff_BP + -1) & 0x10) != 0) {
LAB_1000_1abf:
      (*(code *)*(undefined2 *)(unaff_BP + 6))
                (uVar7,*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + -1;
      if (iVar4 < *(int *)(unaff_BP + -10)) break;
      goto LAB_1000_1ae0;
    }
    iVar4 = iVar5;
    if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
      pbVar1 = pbVar14;
      pbVar14 = pbVar14 + 1;
      *pbVar1 = (byte)uVar7;
    }
  }
  if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
LAB_1000_1ae0:
    *pbVar14 = 0;
  }
  goto LAB_1000_171a;
switchD_1000_17be_caseD_6:
  if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
    FUN_1000_16fd();
  }
  iVar4 = *(int *)(unaff_BP + -10);
  bVar15 = iVar4 != 0;
  if (iVar4 < 0) {
    iVar4 = 1;
  }
  if (bVar15) {
    do {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      iVar5 = (*(code *)*(undefined2 *)(unaff_BP + 4))
                        (*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
      if (iVar5 < 0) {
        FUN_1000_1af8();
        return;
      }
      if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
        puVar2 = unaff_DI;
        unaff_DI = (undefined2 *)((int)unaff_DI + 1);
        *(char *)puVar2 = (char)iVar5;
      }
      iVar5 = iVar4 + -1;
      bVar15 = 0 < iVar4;
      iVar4 = iVar5;
    } while (iVar5 != 0 && bVar15);
  }
  if ((*(byte *)(unaff_BP + -1) & 1) == 0) {
    *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  }
  goto LAB_1000_171a;
switchD_1000_17be_caseD_3:
LAB_1000_172a:
  iVar4 = (int)(char)bVar8;
  *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  iVar5 = (*(code *)*(undefined2 *)(unaff_BP + 4))
                    (*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
  if (iVar5 < 0) {
LAB_1000_1768:
    FUN_1000_1af8();
    return;
  }
  iVar5 = (int)(char)iVar5;
  if ((iVar4 < 0) || (*(char *)(iVar4 + 0x461e) != '\x01')) {
    if (iVar5 != iVar4) {
      (*(code *)*(undefined2 *)(unaff_BP + 6))
                (iVar5,*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + -1;
      goto switchD_1000_17be_caseD_0;
    }
  }
  else {
    while ((-1 < (char)iVar5 && (*(char *)(iVar5 + 0x461e) == '\x01'))) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
      iVar5 = (*(code *)*(undefined2 *)(unaff_BP + 4))
                        (*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
      if (iVar5 < 1) goto LAB_1000_1768;
    }
    (*(code *)*(undefined2 *)(unaff_BP + 6))
              (iVar5,*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + -1;
  }
  goto LAB_1000_171d;
}



// Function: FUN_1000_1af8 @ 1000:1af8

void FUN_1000_1af8(void)

{
  int unaff_BP;
  undefined2 unaff_SS;
  
  (*(code *)*(undefined2 *)(unaff_BP + 6))
            (0xffff,*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) - (uint)(*(int *)(unaff_BP + -4) == 0);
  FUN_1000_1ba5();
  return;
}



// Function: FUN_1000_1b17 @ 1000:1b17

void FUN_1000_1b17(void)

{
  int iVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int in_stack_00000000;
  
  while( true ) {
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    iVar1 = (*(code *)*(undefined2 *)(unaff_BP + 4))
                      (*(undefined2 *)(unaff_BP + 8),*(undefined2 *)(unaff_BP + 10));
    if (iVar1 < 1) break;
    if (((char)iVar1 < '\0') || (*(char *)(iVar1 + 0x461e) != '\x01')) goto LAB_1000_1b36;
  }
  if (iVar1 != 0) {
    FUN_1000_1af8();
    return;
  }
LAB_1000_1b36:
                    /* WARNING: Could not recover jumptable at 0x00011b3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(in_stack_00000000 + 3))();
  return;
}



// Function: FUN_1000_1ba5 @ 1000:1ba5

void __cdecl16near FUN_1000_1ba5(void)

{
  return;
}



// Function: FUN_1000_1bd7 @ 1000:1bd7

void __cdecl16near FUN_1000_1bd7(void)

{
  return;
}



// Function: FUN_1000_1c02 @ 1000:1c02

undefined4 __cdecl16near
FUN_1000_1c02(code *param_1,code *param_2,undefined2 param_3,undefined2 param_4,uint param_5,
             int param_6,int *param_7,undefined2 *param_8)

{
  int iVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined2 unaff_DS;
  undefined1 uVar14;
  bool bVar15;
  undefined2 local_8;
  int local_6;
  char local_3;
  
  local_3 = '\0';
  local_6 = 0;
  local_8 = 1;
  iVar1 = local_6;
  do {
    local_6 = iVar1;
    iVar1 = local_6 + 1;
    uVar6 = (*param_1)(param_3,param_4);
    if ((int)uVar6 < 0) goto LAB_1000_1c9b;
    cVar4 = (char)uVar6;
    uVar6 = (uint)cVar4;
  } while (((uVar6 & 0x80) == 0) && ((*(byte *)(uVar6 + 0x42e7) & 1) != 0));
  if (param_6 < 1) {
LAB_1000_1ca2:
    local_6 = iVar1;
    local_8 = 0;
  }
  else {
    if (cVar4 != '+') {
      iVar3 = param_6 + -1;
      if (cVar4 == '-') {
        local_3 = '\x01';
        goto LAB_1000_1c4a;
      }
LAB_1000_1c61:
      local_6 = iVar1;
      param_6 = iVar3;
      uVar12 = 0;
      uVar13 = 0;
      bVar5 = (byte)uVar6;
      iVar1 = local_6;
      if (param_5 == 0) {
        param_5 = 10;
        if (bVar5 != 0x30) {
LAB_1000_1cf0:
          uVar14 = bVar5 < 0x30;
          FUN_1000_1bd7();
          uVar12 = uVar6;
          if (!(bool)uVar14) goto LAB_1000_1d07;
          goto LAB_1000_1ca2;
        }
        iVar1 = param_6 + -1;
        if (0 < param_6) {
          local_6 = local_6 + 1;
          uVar6 = (*param_1)(param_3,param_4);
          param_5 = 8;
          bVar5 = (byte)uVar6;
          uVar14 = bVar5 < 0x78;
          param_6 = iVar1;
          if ((bVar5 == 0x78) || (uVar14 = bVar5 < 0x58, bVar5 == 0x58)) {
            param_5 = 0x10;
            goto LAB_1000_1d07;
          }
LAB_1000_1d1a:
          while (FUN_1000_1bd7(), !(bool)uVar14) {
            uVar9 = (uint)((ulong)uVar12 * (ulong)param_5 >> 0x10);
            uVar7 = (uint)((ulong)uVar12 * (ulong)param_5);
            uVar12 = uVar6 + uVar7;
            uVar6 = (uint)CARRY2(uVar6,uVar7);
            uVar7 = uVar13 + uVar9;
            uVar14 = CARRY2(uVar13,uVar9) || CARRY2(uVar7,uVar6);
            uVar13 = uVar7 + uVar6;
            if (uVar13 != 0) goto LAB_1000_1d37;
LAB_1000_1d07:
            if (param_6 < 1) goto LAB_1000_1d64;
            local_6 = local_6 + 1;
            uVar6 = (*param_1)(param_3,param_4);
            param_6 = param_6 + -1;
          }
LAB_1000_1d54:
          (*param_2)(uVar6,param_3,param_4);
          local_6 = local_6 + -1;
        }
      }
      else {
        if ((0x24 < param_5) || (bVar8 = (byte)param_5, bVar8 < 2)) goto LAB_1000_1ca2;
        if (bVar5 != 0x30) goto LAB_1000_1cf0;
        uVar14 = bVar8 < 0x10;
        if (bVar8 != 0x10) goto LAB_1000_1d07;
        iVar1 = param_6 + -1;
        if (0 < param_6) {
          local_6 = local_6 + 1;
          uVar6 = (*param_1)(param_3,param_4);
          bVar5 = (byte)uVar6;
          uVar14 = bVar5 < 0x78;
          param_6 = iVar1;
          if (bVar5 == 0x78) goto LAB_1000_1d07;
          uVar14 = bVar5 < 0x58;
          if (bVar5 == 0x58) goto LAB_1000_1d07;
          goto LAB_1000_1d1a;
        }
      }
LAB_1000_1d64:
      if (local_3 != '\0') {
        bVar15 = uVar12 != 0;
        uVar12 = -uVar12;
        uVar13 = -(uint)bVar15 - uVar13;
      }
      goto LAB_1000_1d74;
    }
LAB_1000_1c4a:
    if (param_6 + -1 < 1) goto LAB_1000_1ca2;
    uVar6 = (*param_1)(param_3,param_4);
    iVar3 = param_6 + -2;
    iVar1 = local_6 + 2;
    if (-1 < (int)uVar6) goto LAB_1000_1c61;
LAB_1000_1c9b:
    local_6 = iVar1;
    local_8 = 0xffff;
  }
  (*param_2)(uVar6,param_3,param_4);
  local_6 = local_6 + -1;
  uVar12 = 0;
  uVar13 = 0;
LAB_1000_1d74:
  *param_7 = *param_7 + local_6;
  *param_8 = local_8;
  return CONCAT22(uVar13,uVar12);
  while( true ) {
    local_6 = local_6 + 1;
    uVar6 = (*param_1)(param_3,param_4);
    uVar7 = param_5;
    FUN_1000_1bd7();
    if ((bool)uVar14) goto LAB_1000_1d54;
    uVar10 = (uint)((ulong)uVar12 * (ulong)uVar7 >> 0x10);
    uVar9 = (uint)((ulong)uVar12 * (ulong)uVar7);
    lVar2 = (ulong)uVar13 * (ulong)uVar7;
    uVar12 = uVar6 + uVar9;
    uVar6 = (uint)CARRY2(uVar6,uVar9);
    uVar13 = (uint)lVar2 + uVar10;
    bVar15 = CARRY2((uint)lVar2,uVar10) || CARRY2(uVar13,uVar6);
    uVar13 = uVar13 + uVar6;
    bVar8 = (byte)((ulong)lVar2 >> 0x10);
    bVar11 = (byte)((ulong)lVar2 >> 0x18);
    bVar5 = bVar8 + bVar11;
    uVar14 = CARRY1(bVar8,bVar11) || CARRY1(bVar5,bVar15);
    param_6 = param_6 + -1;
    if ((byte)(bVar5 + bVar15) != '\0') break;
LAB_1000_1d37:
    if (param_6 < 1) goto LAB_1000_1d64;
  }
  uVar12 = CONCAT11((local_3 != '\0') + -1,local_3 + -1);
  uVar13 = (local_3 != '\0') + 0x7fff;
  local_8 = 2;
  goto LAB_1000_1d74;
}



// Function: FUN_1000_1da4 @ 1000:1da4

void __cdecl16far FUN_1000_1da4(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_ES;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined2 in_stack_00000002;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined2 *)param_1;
  *param_1 = unaff_ES;
  puVar1[1] = in_stack_00000002;
  puVar1[2] = unaff_SS;
  puVar1[3] = unaff_DS;
  return;
}



// Function: FUN_1000_1dc4 @ 1000:1dc4

void __cdecl16far FUN_1000_1dc4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_1000_1dd9 @ 1000:1dd9

void __cdecl16far FUN_1000_1dd9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_1000_1ea4 @ 1000:1ea4

void __cdecl16far FUN_1000_1ea4(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_664f(1,param_1,param_2);
  return;
}



// Function: FUN_1000_1eb6 @ 1000:1eb6

undefined2 __cdecl16far FUN_1000_1eb6(undefined2 *param_1)

{
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  FUN_1000_5c66(*param_1,((undefined2 *)param_1)[1],local_6);
  FUN_1000_1dc4(local_6);
  FUN_1000_1dd9(local_a);
  return 0;
}



// Function: FUN_1000_1ef6 @ 1000:1ef6

undefined2 __cdecl16far FUN_1000_1ef6(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined2 in_DX;
  undefined1 local_a [4];
  undefined1 local_6 [4];
  
  FUN_1000_124e(local_6);
  FUN_1000_1261(local_a);
  uVar1 = FUN_1000_5b3c(local_6);
  if ((undefined2 *)param_1 != (undefined2 *)0x0 || param_1._2_2_ != 0) {
    ((undefined2 *)param_1)[1] = in_DX;
    *param_1 = uVar1;
  }
  return uVar1;
}



// Function: FUN_1000_1f4e @ 1000:1f4e

void __cdecl16far FUN_1000_1f4e(undefined2 param_1)

{
  FUN_1000_1552(param_1,0,0,1);
  return;
}



// Function: FUN_1000_1f66 @ 1000:1f66

uint __cdecl16far FUN_1000_1f66(uint param_1)

{
  undefined2 unaff_DS;
  
  if (param_1 == 0xffff) {
    param_1 = 0xffff;
  }
  else if ((*(byte *)((param_1 & 0xff) + 0x42e7) & 4) == 0) {
    param_1 = param_1 & 0xff;
  }
  else {
    param_1 = (param_1 & 0xff) + 0x20;
  }
  return param_1;
}



// Function: FUN_1000_1f92 @ 1000:1f92

undefined2 __cdecl16far FUN_1000_1f92(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_1000_1454();
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000_1faa @ 1000:1faa

void FUN_1000_1faa(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte extraout_AH;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  
  FUN_1000_1fb1();
  FUN_1000_1fba();
  in_AF = 9 < (extraout_AH + 0x90 & 0xf) | in_AF;
  bVar3 = extraout_AH + 0x90 + in_AF * '\x06';
  bVar2 = 0x90 < (bVar3 & 0xf0) | 0x6f < extraout_AH | in_AF * (0xf9 < bVar3);
  bVar3 = bVar3 + bVar2 * '`';
  bVar1 = bVar3 + 0x40;
  bVar4 = bVar1 + bVar2;
  in_AF = 9 < (bVar4 & 0xf) | in_AF;
  bVar4 = bVar4 + in_AF * '\x06';
  *unaff_DI = bVar4 + (0x90 < (bVar4 & 0xf0) |
                      (0xbf < bVar3 || CARRY1(bVar1,bVar2)) | in_AF * (0xf9 < bVar4)) * '`';
  return;
}



// Function: FUN_1000_1fb1 @ 1000:1fb1

void FUN_1000_1fb1(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte extraout_AH;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  
  FUN_1000_1fba();
  in_AF = 9 < (extraout_AH + 0x90 & 0xf) | in_AF;
  bVar3 = extraout_AH + 0x90 + in_AF * '\x06';
  bVar2 = 0x90 < (bVar3 & 0xf0) | 0x6f < extraout_AH | in_AF * (0xf9 < bVar3);
  bVar3 = bVar3 + bVar2 * '`';
  bVar1 = bVar3 + 0x40;
  bVar4 = bVar1 + bVar2;
  in_AF = 9 < (bVar4 & 0xf) | in_AF;
  bVar4 = bVar4 + in_AF * '\x06';
  *unaff_DI = bVar4 + (0x90 < (bVar4 & 0xf0) |
                      (0xbf < bVar3 || CARRY1(bVar1,bVar2)) | in_AF * (0xf9 < bVar4)) * '`';
  return;
}



// Function: FUN_1000_1fba @ 1000:1fba

void __cdecl16near FUN_1000_1fba(void)

{
  byte bVar1;
  byte bVar2;
  byte in_AL;
  byte bVar4;
  byte bVar5;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  byte bVar3;
  
  bVar2 = 9 < (in_AL + 0x90 & 0xf) | in_AF;
  bVar4 = in_AL + 0x90 + bVar2 * '\x06';
  bVar3 = 0x90 < (bVar4 & 0xf0) | 0x6f < in_AL | bVar2 * (0xf9 < bVar4);
  bVar4 = bVar4 + bVar3 * '`';
  bVar1 = bVar4 + 0x40;
  bVar5 = bVar1 + bVar3;
  bVar2 = 9 < (bVar5 & 0xf) | bVar2;
  bVar5 = bVar5 + bVar2 * '\x06';
  *unaff_DI = bVar5 + (0x90 < (bVar5 & 0xf0) |
                      (0xbf < bVar4 || CARRY1(bVar1,bVar3)) | bVar2 * (0xf9 < bVar5)) * '`';
  return;
}



// Function: FUN_1000_1fc2 @ 1000:1fc2

void FUN_1000_1fc2(void)

{
  undefined2 unaff_SI;
  
  FUN_1000_2026(unaff_SI);
  return;
}



// Function: FUN_1000_1fdc @ 1000:1fdc

void __cdecl16near FUN_1000_1fdc(void)

{
  char *pcVar1;
  int iVar2;
  char *unaff_DI;
  undefined2 unaff_ES;
  
  iVar2 = -1;
  do {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = iVar2 + -1;
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
  } while (*pcVar1 != '\0');
  return;
}



// Function: FUN_1000_1fe9 @ 1000:1fe9

void __cdecl16near FUN_1000_1fe9(void)

{
  char *pcVar1;
  undefined1 in_AL;
  int iVar2;
  int unaff_BP;
  undefined1 *unaff_DI;
  undefined2 unaff_SS;
  
  *unaff_DI = in_AL;
  pcVar1 = (char *)(unaff_BP + -0x14);
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 == '\0') {
    iVar2 = (*(code *)*(undefined2 *)(unaff_BP + 0xe))
                      (*(undefined2 *)(unaff_BP + 10),*(undefined2 *)(unaff_BP + 0xc),
                       unaff_DI + (1 - (unaff_BP + -0x96)),unaff_BP + -0x96);
    if (iVar2 == 0) {
      *(undefined2 *)(unaff_BP + -0x16) = 1;
    }
    *(undefined2 *)(unaff_BP + -0x14) = 0x50;
    *(int *)(unaff_BP + -0x12) =
         (int)(unaff_DI + (1 - (unaff_BP + -0x96)) + *(int *)(unaff_BP + -0x12));
  }
  return;
}



// Function: FUN_1000_1ff2 @ 1000:1ff2

void __cdecl16near FUN_1000_1ff2(void)

{
  int iVar1;
  int unaff_BP;
  int unaff_DI;
  int iVar2;
  undefined2 unaff_SS;
  
  iVar2 = unaff_DI - (unaff_BP + -0x96);
  iVar1 = (*(code *)*(undefined2 *)(unaff_BP + 0xe))
                    (*(undefined2 *)(unaff_BP + 10),*(undefined2 *)(unaff_BP + 0xc),iVar2,
                     unaff_BP + -0x96);
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_BP + -0x16) = 1;
  }
  *(undefined2 *)(unaff_BP + -0x14) = 0x50;
  *(int *)(unaff_BP + -0x12) = *(int *)(unaff_BP + -0x12) + iVar2;
  return;
}



// Function: FUN_1000_2026 @ 1000:2026

/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined2 FUN_1000_2026(void)

{
  char *pcVar1;
  uint *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined2 *puVar5;
  uint uVar6;
  int *piVar7;
  char cVar8;
  uint uVar9;
  byte bVar12;
  int iVar10;
  int iVar11;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  char cVar13;
  int iVar14;
  int unaff_BP;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  int *piVar18;
  undefined1 *puVar19;
  uint *puVar20;
  int *piVar21;
  undefined2 uVar22;
  int iVar23;
  int unaff_SS;
  int unaff_DS;
  bool bVar24;
  
  *(int *)(unaff_BP + -4) = unaff_BP + -0x96;
LAB_1000_202f:
  pcVar17 = (char *)*(undefined2 *)(unaff_BP + -4);
LAB_1000_2032:
  uVar22 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10);
  pcVar15 = (char *)(char *)*(undefined4 *)(unaff_BP + 6);
LAB_1000_2035:
  pcVar16 = pcVar15 + 1;
  cVar8 = *pcVar15;
  if (cVar8 == '\0') goto LAB_1000_2430;
  if (cVar8 == '%') {
    *(int *)(unaff_BP + -0x10) = (int)pcVar16;
    pcVar1 = pcVar16;
    pcVar16 = pcVar15 + 2;
    cVar8 = *pcVar1;
    if (cVar8 != '%') goto code_r0x00012059;
  }
  *pcVar17 = cVar8;
  pcVar17 = pcVar17 + 1;
  pcVar1 = (char *)(unaff_BP + -0x14);
  cVar8 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  pcVar15 = pcVar16;
  if (*pcVar1 == '\0' || SBORROW1(cVar8,'\x01') != *pcVar1 < '\0') {
    FUN_1000_1ff2();
  }
  goto LAB_1000_2035;
code_r0x00012059:
  *(undefined2 *)(unaff_BP + -4) = pcVar17;
  uVar9 = 0;
  *(undefined2 *)(unaff_BP + -0xe) = 0;
  *(undefined2 *)(unaff_BP + -2) = 0x20;
  *(undefined1 *)(unaff_BP + -0xb) = 0;
  *(undefined2 *)(unaff_BP + -8) = 0xffff;
  *(undefined2 *)(unaff_BP + -10) = 0xffff;
  do {
    if (0x5f < (byte)(cVar8 - 0x20U)) {
LAB_1000_2098:
      uVar22 = switchD_1000:2093::caseD_13();
      return uVar22;
    }
    cVar4 = *(char *)((byte)(cVar8 - 0x20U) + 0x46a5);
    cVar13 = cVar4 * '\x02';
    bVar12 = (byte)(uVar9 >> 8);
    iVar23 = unaff_SS;
    switch(cVar4) {
    case '\0':
      if (bVar12 != 0) goto LAB_1000_2098;
      if (*(char *)(unaff_BP + -0xb) != '+') {
        *(char *)(unaff_BP + -0xb) = cVar8;
      }
      break;
    case '\x01':
      if (bVar12 != 0) goto LAB_1000_2098;
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 1;
      break;
    case '\x02':
      iVar23 = *(int *)*(undefined2 *)(unaff_BP + 4);
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
      if (bVar12 < 2) {
        if (iVar23 < 0) {
          iVar23 = -iVar23;
          *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 2;
        }
        *(int *)(unaff_BP + -8) = iVar23;
        uVar9 = 0x300;
      }
      else {
        if (bVar12 != 4) goto LAB_1000_20e3;
        *(int *)(unaff_BP + -10) = iVar23;
        uVar9 = 0x500;
      }
      break;
    case '\x03':
      if (bVar12 != 0) goto LAB_1000_2098;
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 2;
      break;
    case '\x04':
      if (3 < bVar12) goto LAB_1000_20e3;
      uVar9 = 0x400;
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
      break;
    case '\x05':
switchD_1000_2093_caseD_5:
      if (bVar12 < 3) {
        uVar9 = 0x200;
        LOCK();
        iVar23 = *(int *)(unaff_BP + -8);
        *(int *)(unaff_BP + -8) = (int)(char)(cVar8 + -0x30);
        UNLOCK();
        if (-1 < iVar23) {
          *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + iVar23 * 10;
          uVar22 = FUN_1000_2075();
          return uVar22;
        }
      }
      else {
        if (bVar12 != 4) {
LAB_1000_20e3:
          uVar22 = switchD_1000:2093::caseD_13();
          return uVar22;
        }
        LOCK();
        iVar23 = *(int *)(unaff_BP + -10);
        *(int *)(unaff_BP + -10) = (int)(char)(cVar8 + -0x30);
        UNLOCK();
        if (iVar23 != 0) {
          *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + iVar23 * 10;
        }
      }
      break;
    case '\x06':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x10;
      goto LAB_1000_20cb;
    case '\a':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x100;
    case '\b':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) & 0xffef;
      goto LAB_1000_20cb;
    case '\t':
      if (bVar12 != 0) goto switchD_1000_2093_caseD_5;
      if ((*(uint *)(unaff_BP + -2) & 2) == 0) {
        *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 8;
        uVar9 = 0x100;
      }
      break;
    case '\n':
      goto switchD_1000_2093_caseD_a;
    case '\v':
      uVar22 = CONCAT11(8,cVar13);
      goto LAB_1000_2180;
    case '\f':
      uVar22 = CONCAT11(10,cVar13);
      goto LAB_1000_2184;
    case '\r':
      uVar22 = CONCAT11(0x10,cVar8 + -0x17);
LAB_1000_2180:
      *(undefined1 *)(unaff_BP + -0xb) = 0;
LAB_1000_2184:
      *(char *)(unaff_BP + -5) = cVar8;
      iVar10 = 0;
      *(undefined1 *)(unaff_BP + -6) = 0;
      piVar21 = (int *)*(undefined2 *)(unaff_BP + 4);
      iVar14 = *piVar21;
      goto LAB_1000_21a4;
    case '\x0e':
      *(char *)(unaff_BP + -5) = cVar8;
      *(undefined2 *)(unaff_BP + 6) = pcVar16;
      puVar19 = (undefined1 *)(unaff_BP + -0x46);
      puVar5 = (undefined2 *)*(int *)(unaff_BP + 4);
      uVar22 = *puVar5;
      *(undefined2 *)(unaff_BP + 4) = puVar5 + 1;
      if ((*(uint *)(unaff_BP + -2) & 0x20) != 0) {
        *(undefined2 *)(unaff_BP + 4) = puVar5 + 2;
        FUN_1000_1faa(uVar22);
        puVar3 = puVar19;
        puVar19 = (undefined1 *)(unaff_BP + -0x45);
        *puVar3 = 0x3a;
      }
      FUN_1000_1faa();
      *puVar19 = 0;
      *(undefined1 *)(unaff_BP + -6) = 0;
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) & 0xfffb;
      puVar20 = (uint *)(unaff_BP + -0x46);
      uVar9 = (int)puVar19 - (int)puVar20;
      goto LAB_1000_22e0;
    case '\x0f':
      *(undefined2 *)(unaff_BP + 6) = pcVar16;
      *(char *)(unaff_BP + -5) = cVar8;
      uVar9 = *(uint *)(unaff_BP + -10);
      if ((int)uVar9 < 0) {
        uVar9 = 6;
      }
      uVar6 = *(uint *)(unaff_BP + -2);
      if ((*(uint *)(unaff_BP + -2) & 0x100) == 0) {
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 8;
        uVar22 = 6;
      }
      else {
        uVar22 = 8;
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 10;
      }
      FUN_1000_3469(uVar22,uVar6 & 1,cVar8,unaff_BP + -0x45);
      puVar20 = (uint *)(unaff_BP + -0x45);
      goto LAB_1000_22e0;
    case '\x10':
      *(undefined2 *)(unaff_BP + 6) = pcVar16;
      *(char *)(unaff_BP + -5) = cVar8;
      uVar9 = *(uint *)*(undefined2 *)(unaff_BP + 4);
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
      puVar20 = (uint *)(unaff_BP + -0x45);
      *puVar20 = uVar9 & 0xff;
      uVar9 = 1;
      goto LAB_1000_2323;
    case '\x11':
      *(undefined2 *)(unaff_BP + 6) = pcVar16;
      *(char *)(unaff_BP + -5) = cVar8;
      if ((*(uint *)(unaff_BP + -2) & 0x20) == 0) {
        puVar20 = *(uint **)(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
        bVar24 = puVar20 == (uint *)0x0;
        iVar23 = unaff_DS;
      }
      else {
        puVar2 = (uint *)*(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        iVar23 = (int)((ulong)puVar2 >> 0x10);
        puVar20 = (uint *)puVar2;
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 4;
        bVar24 = iVar23 == 0 && puVar20 == (uint *)0x0;
      }
      if (bVar24) {
        puVar20 = (uint *)0x469e;
        iVar23 = unaff_DS;
      }
      FUN_1000_1fdc();
      if (*(uint *)(unaff_BP + -10) < uVar9) {
        uVar9 = *(uint *)(unaff_BP + -10);
      }
      goto LAB_1000_2323;
    case '\x12':
      *(undefined2 *)(unaff_BP + 6) = pcVar16;
      if ((*(uint *)(unaff_BP + -2) & 0x20) == 0) {
        piVar21 = *(int **)(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
        iVar23 = unaff_DS;
      }
      else {
        piVar7 = (int *)*(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        iVar23 = (int)((ulong)piVar7 >> 0x10);
        piVar21 = (int *)piVar7;
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 4;
      }
      *piVar21 = (uint)(byte)(0x50 - *(char *)(unaff_BP + -0x14)) + *(int *)(unaff_BP + -0x12);
      if ((*(uint *)(unaff_BP + -2) & 0x10) != 0) {
        piVar21[1] = 0;
      }
      goto LAB_1000_202f;
    case '\x13':
    case '\x14':
    case '\x15':
      pcVar17 = (char *)*(undefined2 *)(unaff_BP + -0x10);
      uVar22 = *(undefined2 *)(unaff_BP + 8);
      do {
        FUN_1000_1fe9();
        pcVar1 = pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (*pcVar1 != '\0');
LAB_1000_2430:
      if (*(char *)(unaff_BP + -0x14) < 'P') {
        FUN_1000_1ff2();
      }
      if (*(int *)(unaff_BP + -0x16) == 0) {
        uVar22 = *(undefined2 *)(unaff_BP + -0x12);
      }
      else {
        uVar22 = 0xffff;
      }
      return uVar22;
    case '\x16':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) & 0xffdf;
      goto LAB_1000_20cb;
    case '\x17':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x20;
LAB_1000_20cb:
      uVar9 = 0x500;
      break;
    default:
      uVar22 = switchD_1000:2093::caseD_13();
      return uVar22;
    }
    pcVar1 = pcVar16;
    pcVar16 = pcVar16 + 1;
    cVar8 = *pcVar1;
  } while( true );
switchD_1000_2093_caseD_a:
  uVar22 = CONCAT11(10,cVar13);
  *(undefined1 *)(unaff_BP + -6) = 1;
  *(char *)(unaff_BP + -5) = cVar8;
  piVar21 = (int *)*(undefined2 *)(unaff_BP + 4);
  iVar14 = *piVar21;
  iVar10 = iVar14 >> 0xf;
LAB_1000_21a4:
  piVar18 = piVar21 + 1;
  *(undefined2 *)(unaff_BP + 6) = pcVar16;
  if ((*(uint *)(unaff_BP + -2) & 0x10) != 0) {
    iVar10 = *piVar18;
    piVar18 = piVar21 + 2;
  }
  *(undefined2 *)(unaff_BP + 4) = piVar18;
  puVar20 = (uint *)(unaff_BP + -0x45);
  if ((iVar14 == 0) && (iVar10 == 0)) {
    if (*(int *)(unaff_BP + -10) == 0) goto LAB_1000_202f;
  }
  else {
    *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 4;
  }
  FUN_1000_14b0(uVar22,*(undefined1 *)(unaff_BP + -6),(char)((uint)uVar22 >> 8),puVar20,unaff_SS,
                iVar14,iVar10);
  if (*(int *)(unaff_BP + -10) < 0) {
LAB_1000_22e0:
    if (((*(uint *)(unaff_BP + -2) & 8) != 0) && (0 < *(int *)(unaff_BP + -8))) goto LAB_1000_22ee;
  }
  else {
LAB_1000_22ee:
    FUN_1000_1fdc();
    if ((char)*puVar20 == '-') {
      uVar9 = uVar9 - 1;
    }
    if (extraout_DX - uVar9 != 0 && (int)uVar9 <= extraout_DX) {
      *(int *)(unaff_BP + -0xe) = extraout_DX - uVar9;
    }
  }
  if ((char)*puVar20 != '-') {
    if (*(char *)(unaff_BP + -0xb) == '\0') goto LAB_1000_2320;
    puVar20 = (uint *)((int)puVar20 + -1);
    *(char *)puVar20 = *(char *)(unaff_BP + -0xb);
  }
  if ((0 < *(int *)(unaff_BP + -0xe)) && (uVar9 = *(uint *)(unaff_BP + -10), (int)uVar9 < 0)) {
    *(int *)(unaff_BP + -0xe) = *(int *)(unaff_BP + -0xe) + -1;
  }
LAB_1000_2320:
  FUN_1000_1fdc();
LAB_1000_2323:
  pcVar17 = (char *)*(undefined2 *)(unaff_BP + -4);
  iVar14 = *(int *)(unaff_BP + -8);
  if ((*(uint *)(unaff_BP + -2) & 5) == 5) {
    cVar8 = *(char *)(unaff_BP + -5);
    if (cVar8 == 'o') {
      if (*(int *)(unaff_BP + -0xe) < 1) {
        *(undefined2 *)(unaff_BP + -0xe) = 1;
      }
    }
    else if ((cVar8 == 'x') || (cVar8 == 'X')) {
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x40;
      iVar14 = iVar14 + -2;
      piVar7 = (int *)(unaff_BP + -0xe);
      iVar10 = *piVar7;
      *piVar7 = *piVar7 + -2;
      if (SBORROW2(iVar10,2) != *piVar7 < 0) {
        *(undefined2 *)(unaff_BP + -0xe) = 0;
      }
    }
  }
  iVar10 = uVar9 + *(int *)(unaff_BP + -0xe);
  if ((*(uint *)(unaff_BP + -2) & 2) == 0) {
    for (; iVar10 < iVar14; iVar14 = iVar14 + -1) {
      FUN_1000_1fe9();
    }
  }
  if ((*(uint *)(unaff_BP + -2) & 0x40) != 0) {
    FUN_1000_1fe9();
    FUN_1000_1fe9();
  }
  iVar11 = *(int *)(unaff_BP + -0xe);
  if (0 < iVar11) {
    iVar10 = iVar10 - iVar11;
    iVar14 = iVar14 - iVar11;
    cVar8 = (char)*puVar20;
    if (((cVar8 == '-') || (cVar8 == ' ')) || (cVar8 == '+')) {
      puVar20 = (uint *)((int)puVar20 + 1);
      FUN_1000_1fe9();
      iVar10 = iVar10 + -1;
      iVar14 = iVar14 + -1;
      iVar11 = extraout_DX_00;
    }
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      FUN_1000_1fe9();
      iVar10 = extraout_DX_01;
    }
  }
  if (iVar10 != 0) {
    iVar14 = iVar14 - iVar10;
    do {
      puVar2 = puVar20;
      puVar20 = (uint *)((int)puVar20 + 1);
      *pcVar17 = (char)*puVar2;
      pcVar17 = pcVar17 + 1;
      pcVar1 = (char *)(unaff_BP + -0x14);
      cVar8 = *pcVar1;
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0' || SBORROW1(cVar8,'\x01') != *pcVar1 < '\0') {
        FUN_1000_1ff2();
      }
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (0 < iVar14) {
    do {
      FUN_1000_1fe9();
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  goto LAB_1000_2032;
}



// Function: FUN_1000_2075 @ 1000:2075

undefined2 FUN_1000_2075(void)

{
  char *pcVar1;
  uint *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined2 *puVar5;
  uint uVar6;
  int *piVar7;
  char cVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  uint in_CX;
  byte bVar13;
  int iVar11;
  int iVar12;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  char cVar14;
  int iVar15;
  int unaff_BP;
  char *pcVar16;
  char *unaff_SI;
  char *pcVar17;
  int *piVar18;
  undefined1 *puVar19;
  uint *puVar20;
  int *piVar21;
  undefined2 unaff_ES;
  int iVar22;
  int unaff_SS;
  int unaff_DS;
  bool bVar23;
  
code_r0x00012075:
  pcVar1 = unaff_SI;
  unaff_SI = unaff_SI + 1;
  cVar8 = *pcVar1;
LAB_1000_2077:
  if (0x5f < (byte)(cVar8 - 0x20U)) goto LAB_1000_2098;
  cVar4 = *(char *)((byte)(cVar8 - 0x20U) + 0x46a5);
  cVar14 = cVar4 * '\x02';
  uVar10 = (undefined1)in_CX;
  bVar13 = (byte)(in_CX >> 8);
  iVar22 = unaff_SS;
  switch(cVar4) {
  case '\0':
    goto switchD_1000_2093_caseD_0;
  case '\x01':
    if (bVar13 != 0) goto LAB_1000_2098;
    *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 1;
    goto code_r0x00012075;
  case '\x02':
    iVar22 = *(int *)*(undefined2 *)(unaff_BP + 4);
    *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
    if (bVar13 < 2) {
      if (iVar22 < 0) {
        iVar22 = -iVar22;
        *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 2;
      }
      *(int *)(unaff_BP + -8) = iVar22;
      in_CX = CONCAT11(3,uVar10);
    }
    else {
      if (bVar13 != 4) goto LAB_1000_20e3;
      *(int *)(unaff_BP + -10) = iVar22;
      in_CX = CONCAT11(5,uVar10);
    }
    goto code_r0x00012075;
  case '\x03':
    if (bVar13 != 0) goto LAB_1000_2098;
    *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 2;
    goto code_r0x00012075;
  case '\x04':
    if (3 < bVar13) goto LAB_1000_20e3;
    in_CX = CONCAT11(4,uVar10);
    *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
    goto code_r0x00012075;
  case '\x05':
    goto switchD_1000_2093_caseD_5;
  case '\x06':
    *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x10;
    break;
  case '\a':
    *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x100;
  case '\b':
    *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) & 0xffef;
    break;
  case '\t':
    if (bVar13 == 0) {
      if ((*(uint *)(unaff_BP + -2) & 2) == 0) {
        *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 8;
        in_CX = CONCAT11(1,uVar10);
      }
    }
    else {
switchD_1000_2093_caseD_5:
      if (bVar13 < 3) {
        in_CX = CONCAT11(2,uVar10);
        LOCK();
        iVar22 = *(int *)(unaff_BP + -8);
        *(int *)(unaff_BP + -8) = (int)(char)(cVar8 + -0x30);
        UNLOCK();
        if (-1 < iVar22) {
          *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + iVar22 * 10;
          uVar9 = FUN_1000_2075();
          return uVar9;
        }
      }
      else {
        if (bVar13 != 4) {
LAB_1000_20e3:
          uVar9 = switchD_1000:2093::caseD_13();
          return uVar9;
        }
        LOCK();
        iVar22 = *(int *)(unaff_BP + -10);
        *(int *)(unaff_BP + -10) = (int)(char)(cVar8 + -0x30);
        UNLOCK();
        if (iVar22 != 0) {
          *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + iVar22 * 10;
        }
      }
    }
    goto code_r0x00012075;
  case '\n':
    uVar9 = CONCAT11(10,cVar14);
    *(undefined1 *)(unaff_BP + -6) = 1;
    *(char *)(unaff_BP + -5) = cVar8;
    piVar21 = (int *)*(undefined2 *)(unaff_BP + 4);
    iVar15 = *piVar21;
    iVar11 = iVar15 >> 0xf;
    goto LAB_1000_21a4;
  case '\v':
    uVar9 = CONCAT11(8,cVar14);
    goto LAB_1000_2180;
  case '\f':
    uVar9 = CONCAT11(10,cVar14);
    goto LAB_1000_2184;
  case '\r':
    uVar9 = CONCAT11(0x10,cVar8 + -0x17);
LAB_1000_2180:
    *(undefined1 *)(unaff_BP + -0xb) = 0;
LAB_1000_2184:
    *(char *)(unaff_BP + -5) = cVar8;
    iVar11 = 0;
    *(undefined1 *)(unaff_BP + -6) = 0;
    piVar21 = (int *)*(undefined2 *)(unaff_BP + 4);
    iVar15 = *piVar21;
LAB_1000_21a4:
    piVar18 = piVar21 + 1;
    *(int *)(unaff_BP + 6) = (int)unaff_SI;
    if ((*(uint *)(unaff_BP + -2) & 0x10) != 0) {
      iVar11 = *piVar18;
      piVar18 = piVar21 + 2;
    }
    *(undefined2 *)(unaff_BP + 4) = piVar18;
    puVar20 = (uint *)(unaff_BP + -0x45);
    if ((iVar15 == 0) && (iVar11 == 0)) {
      if (*(int *)(unaff_BP + -10) == 0) {
LAB_1000_202f:
        pcVar17 = (char *)*(undefined2 *)(unaff_BP + -4);
        goto LAB_1000_2032;
      }
    }
    else {
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 4;
    }
    FUN_1000_14b0(uVar9,*(undefined1 *)(unaff_BP + -6),(char)((uint)uVar9 >> 8),puVar20,unaff_SS,
                  iVar15,iVar11);
    if (*(int *)(unaff_BP + -10) < 0) goto LAB_1000_22e0;
    goto LAB_1000_22ee;
  case '\x0e':
    *(char *)(unaff_BP + -5) = cVar8;
    *(int *)(unaff_BP + 6) = (int)unaff_SI;
    puVar19 = (undefined1 *)(unaff_BP + -0x46);
    puVar5 = (undefined2 *)*(int *)(unaff_BP + 4);
    uVar9 = *puVar5;
    *(undefined2 *)(unaff_BP + 4) = puVar5 + 1;
    if ((*(uint *)(unaff_BP + -2) & 0x20) != 0) {
      *(undefined2 *)(unaff_BP + 4) = puVar5 + 2;
      FUN_1000_1faa(uVar9);
      puVar3 = puVar19;
      puVar19 = (undefined1 *)(unaff_BP + -0x45);
      *puVar3 = 0x3a;
    }
    FUN_1000_1faa();
    *puVar19 = 0;
    *(undefined1 *)(unaff_BP + -6) = 0;
    *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) & 0xfffb;
    puVar20 = (uint *)(unaff_BP + -0x46);
    in_CX = (int)puVar19 - (int)puVar20;
    goto LAB_1000_22e0;
  case '\x0f':
    *(int *)(unaff_BP + 6) = (int)unaff_SI;
    *(char *)(unaff_BP + -5) = cVar8;
    in_CX = *(uint *)(unaff_BP + -10);
    if ((int)in_CX < 0) {
      in_CX = 6;
    }
    uVar6 = *(uint *)(unaff_BP + -2);
    if ((*(uint *)(unaff_BP + -2) & 0x100) == 0) {
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 8;
      uVar9 = 6;
    }
    else {
      uVar9 = 8;
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 10;
    }
    FUN_1000_3469(uVar9,uVar6 & 1,cVar8,unaff_BP + -0x45);
    puVar20 = (uint *)(unaff_BP + -0x45);
LAB_1000_22e0:
    if (((*(uint *)(unaff_BP + -2) & 8) != 0) && (0 < *(int *)(unaff_BP + -8))) {
LAB_1000_22ee:
      FUN_1000_1fdc();
      if ((char)*puVar20 == '-') {
        in_CX = in_CX - 1;
      }
      if (extraout_DX - in_CX != 0 && (int)in_CX <= extraout_DX) {
        *(int *)(unaff_BP + -0xe) = extraout_DX - in_CX;
      }
    }
    if ((char)*puVar20 == '-') {
LAB_1000_2310:
      if ((0 < *(int *)(unaff_BP + -0xe)) && (in_CX = *(uint *)(unaff_BP + -10), (int)in_CX < 0)) {
        *(int *)(unaff_BP + -0xe) = *(int *)(unaff_BP + -0xe) + -1;
      }
    }
    else if (*(char *)(unaff_BP + -0xb) != '\0') {
      puVar20 = (uint *)((int)puVar20 + -1);
      *(char *)puVar20 = *(char *)(unaff_BP + -0xb);
      goto LAB_1000_2310;
    }
    FUN_1000_1fdc();
    goto LAB_1000_2323;
  case '\x10':
    *(int *)(unaff_BP + 6) = (int)unaff_SI;
    *(char *)(unaff_BP + -5) = cVar8;
    uVar6 = *(uint *)*(undefined2 *)(unaff_BP + 4);
    *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
    puVar20 = (uint *)(unaff_BP + -0x45);
    *puVar20 = uVar6 & 0xff;
    in_CX = 1;
    goto LAB_1000_2323;
  case '\x11':
    *(int *)(unaff_BP + 6) = (int)unaff_SI;
    *(char *)(unaff_BP + -5) = cVar8;
    if ((*(uint *)(unaff_BP + -2) & 0x20) == 0) {
      puVar20 = *(uint **)(undefined4 *)*(undefined2 *)(unaff_BP + 4);
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
      bVar23 = puVar20 == (uint *)0x0;
      iVar22 = unaff_DS;
    }
    else {
      puVar2 = (uint *)*(undefined4 *)*(undefined2 *)(unaff_BP + 4);
      iVar22 = (int)((ulong)puVar2 >> 0x10);
      puVar20 = (uint *)puVar2;
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 4;
      bVar23 = iVar22 == 0 && puVar20 == (uint *)0x0;
    }
    if (bVar23) {
      puVar20 = (uint *)0x469e;
      iVar22 = unaff_DS;
    }
    FUN_1000_1fdc();
    if (*(uint *)(unaff_BP + -10) < in_CX) {
      in_CX = *(uint *)(unaff_BP + -10);
    }
LAB_1000_2323:
    pcVar17 = (char *)*(undefined2 *)(unaff_BP + -4);
    iVar15 = *(int *)(unaff_BP + -8);
    if ((*(uint *)(unaff_BP + -2) & 5) == 5) {
      cVar8 = *(char *)(unaff_BP + -5);
      if (cVar8 == 'o') {
        if (*(int *)(unaff_BP + -0xe) < 1) {
          *(undefined2 *)(unaff_BP + -0xe) = 1;
        }
      }
      else if ((cVar8 == 'x') || (cVar8 == 'X')) {
        *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x40;
        iVar15 = iVar15 + -2;
        piVar7 = (int *)(unaff_BP + -0xe);
        iVar11 = *piVar7;
        *piVar7 = *piVar7 + -2;
        if (SBORROW2(iVar11,2) != *piVar7 < 0) {
          *(undefined2 *)(unaff_BP + -0xe) = 0;
        }
      }
    }
    iVar11 = in_CX + *(int *)(unaff_BP + -0xe);
    if ((*(uint *)(unaff_BP + -2) & 2) == 0) {
      for (; iVar11 < iVar15; iVar15 = iVar15 + -1) {
        FUN_1000_1fe9();
      }
    }
    if ((*(uint *)(unaff_BP + -2) & 0x40) != 0) {
      FUN_1000_1fe9();
      FUN_1000_1fe9();
    }
    iVar12 = *(int *)(unaff_BP + -0xe);
    if (0 < iVar12) {
      iVar11 = iVar11 - iVar12;
      iVar15 = iVar15 - iVar12;
      cVar8 = (char)*puVar20;
      if (((cVar8 == '-') || (cVar8 == ' ')) || (cVar8 == '+')) {
        puVar20 = (uint *)((int)puVar20 + 1);
        FUN_1000_1fe9();
        iVar11 = iVar11 + -1;
        iVar15 = iVar15 + -1;
        iVar12 = extraout_DX_00;
      }
      for (; iVar12 != 0; iVar12 = iVar12 + -1) {
        FUN_1000_1fe9();
        iVar11 = extraout_DX_01;
      }
    }
    if (iVar11 != 0) {
      iVar15 = iVar15 - iVar11;
      do {
        puVar2 = puVar20;
        puVar20 = (uint *)((int)puVar20 + 1);
        *pcVar17 = (char)*puVar2;
        pcVar17 = pcVar17 + 1;
        pcVar1 = (char *)(unaff_BP + -0x14);
        cVar8 = *pcVar1;
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0' || SBORROW1(cVar8,'\x01') != *pcVar1 < '\0') {
          FUN_1000_1ff2();
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if (0 < iVar15) {
      do {
        FUN_1000_1fe9();
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
    }
LAB_1000_2032:
    unaff_ES = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10);
    pcVar16 = (char *)(char *)*(undefined4 *)(unaff_BP + 6);
LAB_1000_2035:
    unaff_SI = pcVar16 + 1;
    cVar8 = *pcVar16;
    if (cVar8 == '\0') goto LAB_1000_2430;
    if (cVar8 == '%') {
      *(int *)(unaff_BP + -0x10) = (int)unaff_SI;
      pcVar1 = unaff_SI;
      unaff_SI = pcVar16 + 2;
      cVar8 = *pcVar1;
      if (cVar8 != '%') goto code_r0x00012059;
    }
    *pcVar17 = cVar8;
    pcVar17 = pcVar17 + 1;
    pcVar1 = (char *)(unaff_BP + -0x14);
    cVar8 = *pcVar1;
    *pcVar1 = *pcVar1 + -1;
    pcVar16 = unaff_SI;
    if (*pcVar1 == '\0' || SBORROW1(cVar8,'\x01') != *pcVar1 < '\0') {
      FUN_1000_1ff2();
    }
    goto LAB_1000_2035;
  case '\x12':
    *(int *)(unaff_BP + 6) = (int)unaff_SI;
    if ((*(uint *)(unaff_BP + -2) & 0x20) == 0) {
      piVar21 = *(int **)(undefined4 *)*(undefined2 *)(unaff_BP + 4);
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
      iVar22 = unaff_DS;
    }
    else {
      piVar7 = (int *)*(undefined4 *)*(undefined2 *)(unaff_BP + 4);
      iVar22 = (int)((ulong)piVar7 >> 0x10);
      piVar21 = (int *)piVar7;
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 4;
    }
    *piVar21 = (uint)(byte)(0x50 - *(char *)(unaff_BP + -0x14)) + *(int *)(unaff_BP + -0x12);
    if ((*(uint *)(unaff_BP + -2) & 0x10) != 0) {
      piVar21[1] = 0;
    }
    goto LAB_1000_202f;
  case '\x13':
  case '\x14':
  case '\x15':
    pcVar17 = (char *)*(undefined2 *)(unaff_BP + -0x10);
    uVar9 = *(undefined2 *)(unaff_BP + 8);
    do {
      FUN_1000_1fe9();
      pcVar1 = pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (*pcVar1 != '\0');
LAB_1000_2430:
    if (*(char *)(unaff_BP + -0x14) < 'P') {
      FUN_1000_1ff2();
    }
    if (*(int *)(unaff_BP + -0x16) == 0) {
      uVar9 = *(undefined2 *)(unaff_BP + -0x12);
    }
    else {
      uVar9 = 0xffff;
    }
    return uVar9;
  case '\x16':
    *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) & 0xffdf;
    break;
  case '\x17':
    *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x20;
    break;
  default:
    uVar9 = switchD_1000:2093::caseD_13();
    return uVar9;
  }
  in_CX = CONCAT11(5,uVar10);
  goto code_r0x00012075;
code_r0x00012059:
  *(undefined2 *)(unaff_BP + -4) = pcVar17;
  in_CX = 0;
  *(undefined2 *)(unaff_BP + -0xe) = 0;
  *(undefined2 *)(unaff_BP + -2) = 0x20;
  *(undefined1 *)(unaff_BP + -0xb) = 0;
  *(undefined2 *)(unaff_BP + -8) = 0xffff;
  *(undefined2 *)(unaff_BP + -10) = 0xffff;
  goto LAB_1000_2077;
switchD_1000_2093_caseD_0:
  if (bVar13 != 0) {
LAB_1000_2098:
    uVar9 = switchD_1000:2093::caseD_13();
    return uVar9;
  }
  if (*(char *)(unaff_BP + -0xb) != '+') {
    *(char *)(unaff_BP + -0xb) = cVar8;
  }
  goto code_r0x00012075;
}



// Function: thunk_FUN_1000_2075 @ 1000:213f

void thunk_FUN_1000_2075(void)

{
  FUN_1000_2075();
  return;
}



// Function: FUN_1000_21d3 @ 1000:21d3

/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined2 FUN_1000_21d3(void)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  undefined1 *puVar4;
  char cVar5;
  uint uVar6;
  byte bVar9;
  uint in_CX;
  int iVar7;
  int iVar8;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  char cVar10;
  undefined2 in_BX;
  char cVar12;
  int iVar11;
  int unaff_BP;
  char *pcVar13;
  char *pcVar14;
  int *piVar15;
  uint *unaff_DI;
  undefined1 *puVar16;
  char *pcVar17;
  int *piVar18;
  undefined2 uVar19;
  int iVar20;
  int unaff_SS;
  int unaff_DS;
  bool bVar21;
  
code_r0x000121d3:
  cVar12 = (char)((uint)in_BX >> 8);
  FUN_1000_14b0(in_BX,CONCAT11(cVar12 >> 7,*(undefined1 *)(unaff_BP + -6)),(int)cVar12,unaff_DI);
  if (-1 < *(int *)(unaff_BP + -10)) goto LAB_1000_22ee;
LAB_1000_22e0:
  if (((*(uint *)(unaff_BP + -2) & 8) != 0) && (0 < *(int *)(unaff_BP + -8))) {
LAB_1000_22ee:
    FUN_1000_1fdc();
    if ((char)*unaff_DI == '-') {
      in_CX = in_CX - 1;
    }
    if (extraout_DX - in_CX != 0 && (int)in_CX <= extraout_DX) {
      *(int *)(unaff_BP + -0xe) = extraout_DX - in_CX;
    }
  }
  if ((char)*unaff_DI != '-') {
    if (*(char *)(unaff_BP + -0xb) == '\0') goto LAB_1000_2320;
    unaff_DI = (uint *)((int)unaff_DI + -1);
    *(char *)unaff_DI = *(char *)(unaff_BP + -0xb);
  }
  if ((0 < *(int *)(unaff_BP + -0xe)) && (in_CX = *(uint *)(unaff_BP + -10), (int)in_CX < 0)) {
    *(int *)(unaff_BP + -0xe) = *(int *)(unaff_BP + -0xe) + -1;
  }
LAB_1000_2320:
  FUN_1000_1fdc();
  iVar20 = unaff_SS;
LAB_1000_2323:
  pcVar17 = (char *)*(undefined2 *)(unaff_BP + -4);
  iVar11 = *(int *)(unaff_BP + -8);
  if ((*(uint *)(unaff_BP + -2) & 5) == 5) {
    cVar12 = *(char *)(unaff_BP + -5);
    if (cVar12 == 'o') {
      if (*(int *)(unaff_BP + -0xe) < 1) {
        *(undefined2 *)(unaff_BP + -0xe) = 1;
      }
    }
    else if ((cVar12 == 'x') || (cVar12 == 'X')) {
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x40;
      iVar11 = iVar11 + -2;
      piVar1 = (int *)(unaff_BP + -0xe);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -2;
      if (SBORROW2(iVar7,2) != *piVar1 < 0) {
        *(undefined2 *)(unaff_BP + -0xe) = 0;
      }
    }
  }
  iVar7 = in_CX + *(int *)(unaff_BP + -0xe);
  if ((*(uint *)(unaff_BP + -2) & 2) == 0) {
    for (; iVar7 < iVar11; iVar11 = iVar11 + -1) {
      FUN_1000_1fe9();
    }
  }
  if ((*(uint *)(unaff_BP + -2) & 0x40) != 0) {
    FUN_1000_1fe9();
    FUN_1000_1fe9();
  }
  iVar8 = *(int *)(unaff_BP + -0xe);
  if (0 < iVar8) {
    iVar7 = iVar7 - iVar8;
    iVar11 = iVar11 - iVar8;
    cVar12 = (char)*unaff_DI;
    if (((cVar12 == '-') || (cVar12 == ' ')) || (cVar12 == '+')) {
      unaff_DI = (uint *)((int)unaff_DI + 1);
      FUN_1000_1fe9();
      iVar7 = iVar7 + -1;
      iVar11 = iVar11 + -1;
      iVar8 = extraout_DX_00;
    }
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      FUN_1000_1fe9();
      iVar7 = extraout_DX_01;
    }
  }
  if (iVar7 != 0) {
    iVar11 = iVar11 - iVar7;
    do {
      puVar3 = unaff_DI;
      unaff_DI = (uint *)((int)unaff_DI + 1);
      *pcVar17 = (char)*puVar3;
      pcVar17 = pcVar17 + 1;
      pcVar2 = (char *)(unaff_BP + -0x14);
      cVar12 = *pcVar2;
      *pcVar2 = *pcVar2 + -1;
      if (*pcVar2 == '\0' || SBORROW1(cVar12,'\x01') != *pcVar2 < '\0') {
        FUN_1000_1ff2();
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (0 < iVar11) {
    do {
      FUN_1000_1fe9();
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
LAB_1000_2032:
  uVar19 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10);
  pcVar13 = (char *)(char *)*(undefined4 *)(unaff_BP + 6);
LAB_1000_2035:
  pcVar14 = pcVar13 + 1;
  cVar12 = *pcVar13;
  if (cVar12 == '\0') goto LAB_1000_2430;
  if (cVar12 == '%') {
    *(int *)(unaff_BP + -0x10) = (int)pcVar14;
    pcVar2 = pcVar14;
    pcVar14 = pcVar13 + 2;
    cVar12 = *pcVar2;
    if (cVar12 != '%') goto code_r0x00012059;
  }
  *pcVar17 = cVar12;
  pcVar17 = pcVar17 + 1;
  pcVar2 = (char *)(unaff_BP + -0x14);
  cVar12 = *pcVar2;
  *pcVar2 = *pcVar2 + -1;
  pcVar13 = pcVar14;
  if (*pcVar2 == '\0' || SBORROW1(cVar12,'\x01') != *pcVar2 < '\0') {
    FUN_1000_1ff2();
  }
  goto LAB_1000_2035;
code_r0x00012059:
  *(undefined2 *)(unaff_BP + -4) = pcVar17;
  in_CX = 0;
  *(undefined2 *)(unaff_BP + -0xe) = 0;
  *(undefined2 *)(unaff_BP + -2) = 0x20;
  *(undefined1 *)(unaff_BP + -0xb) = 0;
  *(undefined2 *)(unaff_BP + -8) = 0xffff;
  *(undefined2 *)(unaff_BP + -10) = 0xffff;
  do {
    if (0x5f < (byte)(cVar12 - 0x20U)) {
LAB_1000_2098:
      uVar19 = switchD_1000:2093::caseD_13();
      return uVar19;
    }
    cVar5 = *(char *)((byte)(cVar12 - 0x20U) + 0x46a5);
    cVar10 = cVar5 * '\x02';
    bVar9 = (byte)(in_CX >> 8);
    switch(cVar5) {
    case '\0':
      if (bVar9 != 0) goto LAB_1000_2098;
      if (*(char *)(unaff_BP + -0xb) != '+') {
        *(char *)(unaff_BP + -0xb) = cVar12;
      }
      break;
    case '\x01':
      if (bVar9 != 0) goto LAB_1000_2098;
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 1;
      break;
    case '\x02':
      iVar20 = *(int *)*(undefined2 *)(unaff_BP + 4);
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
      if (bVar9 < 2) {
        if (iVar20 < 0) {
          iVar20 = -iVar20;
          *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 2;
        }
        *(int *)(unaff_BP + -8) = iVar20;
        in_CX = 0x300;
      }
      else {
        if (bVar9 != 4) goto LAB_1000_20e3;
        *(int *)(unaff_BP + -10) = iVar20;
        in_CX = 0x500;
      }
      break;
    case '\x03':
      if (bVar9 != 0) goto LAB_1000_2098;
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 2;
      break;
    case '\x04':
      if (3 < bVar9) goto LAB_1000_20e3;
      in_CX = 0x400;
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
      break;
    case '\x05':
switchD_1000_2093_caseD_5:
      if (bVar9 < 3) {
        in_CX = 0x200;
        LOCK();
        iVar20 = *(int *)(unaff_BP + -8);
        *(int *)(unaff_BP + -8) = (int)(char)(cVar12 + -0x30);
        UNLOCK();
        if (-1 < iVar20) {
          *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + iVar20 * 10;
          uVar19 = FUN_1000_2075();
          return uVar19;
        }
      }
      else {
        if (bVar9 != 4) {
LAB_1000_20e3:
          uVar19 = switchD_1000:2093::caseD_13();
          return uVar19;
        }
        LOCK();
        iVar20 = *(int *)(unaff_BP + -10);
        *(int *)(unaff_BP + -10) = (int)(char)(cVar12 + -0x30);
        UNLOCK();
        if (iVar20 != 0) {
          *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + iVar20 * 10;
        }
      }
      break;
    case '\x06':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x10;
      goto LAB_1000_20cb;
    case '\a':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x100;
    case '\b':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) & 0xffef;
      goto LAB_1000_20cb;
    case '\t':
      if (bVar9 != 0) goto switchD_1000_2093_caseD_5;
      if ((*(uint *)(unaff_BP + -2) & 2) == 0) {
        *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 8;
        in_CX = 0x100;
      }
      break;
    case '\n':
      goto switchD_1000_2093_caseD_a;
    case '\v':
      in_BX = CONCAT11(8,cVar10);
      goto LAB_1000_2180;
    case '\f':
      in_BX = CONCAT11(10,cVar10);
      goto LAB_1000_2184;
    case '\r':
      in_BX = CONCAT11(0x10,cVar12 + -0x17);
LAB_1000_2180:
      *(undefined1 *)(unaff_BP + -0xb) = 0;
LAB_1000_2184:
      *(char *)(unaff_BP + -5) = cVar12;
      iVar11 = 0;
      *(undefined1 *)(unaff_BP + -6) = 0;
      piVar18 = (int *)*(undefined2 *)(unaff_BP + 4);
      iVar20 = *piVar18;
      goto LAB_1000_21a4;
    case '\x0e':
      *(char *)(unaff_BP + -5) = cVar12;
      *(undefined2 *)(unaff_BP + 6) = pcVar14;
      puVar16 = (undefined1 *)(unaff_BP + -0x46);
      iVar20 = *(int *)(unaff_BP + 4);
      *(int *)(unaff_BP + 4) = iVar20 + 2;
      if ((*(uint *)(unaff_BP + -2) & 0x20) != 0) {
        *(int *)(unaff_BP + 4) = iVar20 + 4;
        FUN_1000_1faa();
        puVar4 = puVar16;
        puVar16 = (undefined1 *)(unaff_BP + -0x45);
        *puVar4 = 0x3a;
      }
      FUN_1000_1faa();
      *puVar16 = 0;
      *(undefined1 *)(unaff_BP + -6) = 0;
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) & 0xfffb;
      unaff_DI = (uint *)(unaff_BP + -0x46);
      in_CX = (int)puVar16 - (int)unaff_DI;
      goto LAB_1000_22e0;
    case '\x0f':
      *(undefined2 *)(unaff_BP + 6) = pcVar14;
      *(char *)(unaff_BP + -5) = cVar12;
      in_CX = *(uint *)(unaff_BP + -10);
      if ((int)in_CX < 0) {
        in_CX = 6;
      }
      uVar6 = *(uint *)(unaff_BP + -2);
      if ((*(uint *)(unaff_BP + -2) & 0x100) == 0) {
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 8;
        uVar19 = 6;
      }
      else {
        uVar19 = 8;
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 10;
      }
      FUN_1000_3469(uVar19,uVar6 & 1,cVar12,unaff_BP + -0x45);
      unaff_DI = (uint *)(unaff_BP + -0x45);
      goto LAB_1000_22e0;
    case '\x10':
      *(undefined2 *)(unaff_BP + 6) = pcVar14;
      *(char *)(unaff_BP + -5) = cVar12;
      uVar6 = *(uint *)*(undefined2 *)(unaff_BP + 4);
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
      unaff_DI = (uint *)(unaff_BP + -0x45);
      *unaff_DI = uVar6 & 0xff;
      in_CX = 1;
      iVar20 = unaff_SS;
      goto LAB_1000_2323;
    case '\x11':
      *(undefined2 *)(unaff_BP + 6) = pcVar14;
      *(char *)(unaff_BP + -5) = cVar12;
      if ((*(uint *)(unaff_BP + -2) & 0x20) == 0) {
        unaff_DI = *(uint **)(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
        bVar21 = unaff_DI == (uint *)0x0;
        iVar20 = unaff_DS;
      }
      else {
        puVar3 = (uint *)*(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        iVar20 = (int)((ulong)puVar3 >> 0x10);
        unaff_DI = (uint *)puVar3;
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 4;
        bVar21 = iVar20 == 0 && unaff_DI == (uint *)0x0;
      }
      if (bVar21) {
        unaff_DI = (uint *)0x469e;
        iVar20 = unaff_DS;
      }
      FUN_1000_1fdc();
      if (*(uint *)(unaff_BP + -10) < in_CX) {
        in_CX = *(uint *)(unaff_BP + -10);
      }
      goto LAB_1000_2323;
    case '\x12':
      *(undefined2 *)(unaff_BP + 6) = pcVar14;
      if ((*(uint *)(unaff_BP + -2) & 0x20) == 0) {
        piVar18 = *(int **)(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
        iVar20 = unaff_DS;
      }
      else {
        piVar1 = (int *)*(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        iVar20 = (int)((ulong)piVar1 >> 0x10);
        piVar18 = (int *)piVar1;
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 4;
      }
      *piVar18 = (uint)(byte)(0x50 - *(char *)(unaff_BP + -0x14)) + *(int *)(unaff_BP + -0x12);
      if ((*(uint *)(unaff_BP + -2) & 0x10) != 0) {
        piVar18[1] = 0;
      }
      goto LAB_1000_202f;
    case '\x13':
    case '\x14':
    case '\x15':
      pcVar17 = (char *)*(undefined2 *)(unaff_BP + -0x10);
      uVar19 = *(undefined2 *)(unaff_BP + 8);
      do {
        FUN_1000_1fe9();
        pcVar2 = pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (*pcVar2 != '\0');
LAB_1000_2430:
      if (*(char *)(unaff_BP + -0x14) < 'P') {
        FUN_1000_1ff2();
      }
      if (*(int *)(unaff_BP + -0x16) == 0) {
        uVar19 = *(undefined2 *)(unaff_BP + -0x12);
      }
      else {
        uVar19 = 0xffff;
      }
      return uVar19;
    case '\x16':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) & 0xffdf;
      goto LAB_1000_20cb;
    case '\x17':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x20;
LAB_1000_20cb:
      in_CX = 0x500;
      break;
    default:
      uVar19 = switchD_1000:2093::caseD_13();
      return uVar19;
    }
    pcVar2 = pcVar14;
    pcVar14 = pcVar14 + 1;
    cVar12 = *pcVar2;
  } while( true );
switchD_1000_2093_caseD_a:
  in_BX = CONCAT11(10,cVar10);
  *(undefined1 *)(unaff_BP + -6) = 1;
  *(char *)(unaff_BP + -5) = cVar12;
  piVar18 = (int *)*(undefined2 *)(unaff_BP + 4);
  iVar20 = *piVar18;
  iVar11 = iVar20 >> 0xf;
LAB_1000_21a4:
  piVar15 = piVar18 + 1;
  *(undefined2 *)(unaff_BP + 6) = pcVar14;
  if ((*(uint *)(unaff_BP + -2) & 0x10) != 0) {
    iVar11 = *piVar15;
    piVar15 = piVar18 + 2;
  }
  *(undefined2 *)(unaff_BP + 4) = piVar15;
  unaff_DI = (uint *)(unaff_BP + -0x45);
  if ((iVar20 != 0) || (iVar11 != 0)) {
    *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 4;
    goto code_r0x000121d3;
  }
  if (*(int *)(unaff_BP + -10) != 0) goto code_r0x000121d3;
LAB_1000_202f:
  pcVar17 = (char *)*(undefined2 *)(unaff_BP + -4);
  goto LAB_1000_2032;
}



// Function: caseD_13 @ 1000:241c

undefined2 switchD_1000:2093::caseD_13(void)

{
  char *pcVar1;
  undefined2 uVar2;
  int unaff_BP;
  char *pcVar3;
  undefined2 unaff_SS;
  
  pcVar3 = (char *)*(undefined2 *)(unaff_BP + -0x10);
  uVar2 = *(undefined2 *)(unaff_BP + 8);
  do {
    FUN_1000_1fe9();
    pcVar1 = pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (*pcVar1 != '\0');
  if (*(char *)(unaff_BP + -0x14) < 'P') {
    FUN_1000_1ff2();
  }
  if (*(int *)(unaff_BP + -0x16) == 0) {
    uVar2 = *(undefined2 *)(unaff_BP + -0x12);
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}



// Function: FUN_1000_2480 @ 1000:2480

undefined4 FUN_1000_2480(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  return CONCAT22(*(undefined2 *)0x4715,
                  (*(int *)0x4713 + (uint)*(byte *)0x4710 * (param_1 + -1) + param_2 + -1) * 2);
}



// Function: FUN_1000_24a5 @ 1000:24a5

uint FUN_1000_24a5(int param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined2 unaff_DS;
  uint uVar10;
  bool bVar11;
  
  uVar4 = (uint)*(byte *)0x4712;
  uVar6 = uVar4;
  if (param_1 != 0) {
    uVar9 = (uint)((ulong)param_3 >> 0x10);
    puVar8 = (uint *)param_3;
    uVar10 = (uint)((ulong)param_2 >> 0x10);
    puVar7 = (uint *)param_2;
    bVar11 = puVar7 < puVar8;
    if (bVar11) {
      iVar5 = param_1 + -1;
      uVar6 = iVar5 * 2;
      puVar7 = puVar7 + iVar5;
      puVar8 = puVar8 + iVar5;
    }
    if (uVar4 == 0) {
      for (; param_1 != 0; param_1 = param_1 + -1) {
        puVar2 = puVar8;
        puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
        puVar1 = puVar7;
        puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
        *puVar2 = *puVar1;
      }
    }
    else {
      uVar6 = uVar9;
      if (uVar9 == uVar10) {
        do {
          do {
            bVar3 = in(0x3da);
          } while ((bool)(bVar3 & 1));
          do {
            bVar3 = in(0x3da);
          } while (!(bool)(bVar3 & 1));
          puVar1 = puVar7;
          puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
          uVar6 = *puVar1;
          do {
            bVar3 = in(0x3da);
          } while ((bool)(bVar3 & 1));
          do {
            bVar3 = in(0x3da);
          } while (!(bool)(bVar3 & 1));
          puVar1 = puVar8;
          puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
          *puVar1 = uVar6;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      else {
        do {
          do {
            bVar3 = in(0x3da);
            uVar6 = uVar6 & 0xff00;
          } while ((bool)(bVar3 & 1));
          do {
            bVar3 = in(0x3da);
            uVar6 = CONCAT11((char)(uVar6 >> 8),bVar3 >> 1 | (bVar3 & 1) << 7);
          } while (!(bool)(bVar3 & 1));
          puVar2 = puVar8;
          puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
          puVar1 = puVar7;
          puVar7 = puVar7 + (uint)bVar11 * -2 + 1;
          *puVar2 = *puVar1;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
    }
  }
  return uVar6;
}



// Function: FUN_1000_251f @ 1000:251f

int __cdecl16far FUN_1000_251f(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = FUN_1000_5a36(param_3,param_4);
  FUN_1000_4cee(param_1,param_2,param_3,param_4,iVar1 + 1);
  return param_1 + iVar1;
}



// Function: FUN_1000_2553 @ 1000:2553

int __cdecl16far FUN_1000_2553(byte param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  pcVar1 = (code *)swi(0x16);
  iVar2 = (*pcVar1)();
  if (bVar3) {
    if ((param_1 & 1) != 0) {
      iVar2 = 0;
    }
  }
  else if (((param_1 & 1) != 0) && (iVar2 == 0)) {
    iVar2 = -1;
  }
  return iVar2;
}



// Function: FUN_1000_2578 @ 1000:2578

int __cdecl16far FUN_1000_2578(byte param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = true;
  pcVar1 = (code *)swi(0x16);
  iVar2 = (*pcVar1)();
  if (bVar3) {
    if ((param_1 & 1) != 0) {
      iVar2 = 0;
    }
  }
  else if (((param_1 & 1) == 0) && (iVar2 == 0)) {
    iVar2 = -1;
  }
  return iVar2;
}



// Function: FUN_1000_259d @ 1000:259d

uint __cdecl16far FUN_1000_259d(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_1000_162f();
  uVar2 = (uint)((ulong)uVar3 >> 0x10);
  if (uVar2 == 0) {
    uVar1 = FUN_1000_2c51((int)uVar3);
  }
  else {
    uVar2 = 0;
    uVar1 = 0;
  }
  if ((uVar1 | uVar2) != 0) {
    FUN_1000_4d12(uVar1,uVar2,(int)uVar3,(uVar1 | uVar2) & 0xff00);
  }
  return uVar1;
}



// Function: FUN_1000_25fc @ 1000:25fc

void __cdecl16far FUN_1000_25fc(byte param_1)

{
  undefined2 unaff_DS;
  
  *(byte *)0x470c = *(byte *)0x470c & 0x70 | param_1 & 0x8f;
  return;
}



// Function: FUN_1000_2611 @ 1000:2611

void __cdecl16far FUN_1000_2611(byte param_1)

{
  undefined2 unaff_DS;
  
  *(byte *)0x470c = *(byte *)0x470c & 0x8f | (param_1 & 7) << 4;
  return;
}



// Function: FUN_1000_262a @ 1000:262a

void __cdecl16far FUN_1000_262a(undefined1 param_1)

{
  undefined2 unaff_DS;
  
  *(undefined1 *)0x470c = param_1;
  return;
}



// Function: FUN_1000_2648 @ 1000:2648

undefined1 FUN_1000_2648(undefined2 param_1,undefined2 param_2,int param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined2 local_a;
  undefined1 local_7;
  uint local_6;
  uint local_4;
  
  local_7 = 0;
  bVar2 = FUN_1000_3e12();
  local_4 = (uint)bVar2;
  local_6 = FUN_1000_3e12();
  local_6 = local_6 >> 8;
  while (puVar1 = param_4, iVar3 = param_3 + -1, param_3 != 0) {
    param_4 = (undefined1 *)CONCAT22(param_4._2_2_,(undefined1 *)param_4 + 1);
    local_7 = *puVar1;
    switch(local_7) {
    case 7:
      FUN_1000_27cf();
      break;
    case 8:
      if ((int)(uint)*(byte *)0x4708 < (int)local_4) {
        local_4 = local_4 - 1;
      }
      break;
    default:
      if ((*(char *)0x4711 == '\0') && (*(int *)0x4717 != 0)) {
        local_a = CONCAT11(*(undefined1 *)0x470c,local_7);
        uVar4 = FUN_1000_2480(local_6 + 1,local_4 + 1);
        FUN_1000_24a5(1,&local_a,unaff_SS,uVar4);
      }
      else {
        FUN_1000_27cf();
        FUN_1000_27cf();
      }
      local_4 = local_4 + 1;
      break;
    case 10:
      local_6 = local_6 + 1;
      break;
    case 0xd:
      local_4 = (uint)*(byte *)0x4708;
    }
    if ((int)(uint)*(byte *)0x470a < (int)local_4) {
      local_4 = (uint)*(byte *)0x4708;
      local_6 = local_6 + *(int *)0x4706;
    }
    param_3 = iVar3;
    if ((int)(uint)*(byte *)0x470b < (int)local_6) {
      FUN_1000_3650(1,*(undefined1 *)0x470b,*(undefined1 *)0x470a,*(undefined1 *)0x4709,
                    *(undefined1 *)0x4708,6);
      local_6 = local_6 - 1;
    }
  }
  FUN_1000_27cf();
  return local_7;
}



// Function: FUN_1000_2794 @ 1000:2794

undefined2 FUN_1000_2794(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  do {
    pcVar2 = param_2;
    pcVar1 = param_1;
    if (*param_1 == '\0') {
      return 1;
    }
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
  } while (*pcVar1 == *pcVar2);
  return 0;
}



// Function: FUN_1000_27c1 @ 1000:27c1

char __cdecl16near FUN_1000_27c1(void)

{
  char cVar1;
  
  cVar1 = '\x10';
  FUN_1000_27cf();
  return cVar1 + -0x10;
}



// Function: FUN_1000_27cf @ 1000:27cf

char __cdecl16near FUN_1000_27cf(void)

{
  code *pcVar1;
  char cVar2;
  undefined2 in_AX;
  char cVar3;
  
  cVar2 = (char)((uint)in_AX >> 8);
  if (cVar2 == '\0') {
    if ((char)in_AX == '\x03') {
      pcVar1 = (code *)swi(0x10);
      cVar2 = (*pcVar1)();
      if (cVar2 != '\x1a') {
        DAT_0000_0487 = DAT_0000_0487 & 0xfe;
      }
      pcVar1 = (code *)swi(0x10);
      (*pcVar1)();
    }
    else if ((char)in_AX == '@') {
      cVar3 = '\x10';
      pcVar1 = (code *)swi(0x10);
      cVar2 = (*pcVar1)();
      if (cVar3 == '\x10') {
        return cVar2;
      }
      pcVar1 = (code *)swi(0x10);
      (*pcVar1)();
      pcVar1 = (code *)swi(0x10);
      (*pcVar1)();
      pcVar1 = (code *)swi(0x10);
      cVar2 = (*pcVar1)();
      if (cVar2 == '\x1a') {
        return '\x1a';
      }
      DAT_0000_0487 = DAT_0000_0487 | 1;
      pcVar1 = (code *)swi(0x10);
      cVar2 = (*pcVar1)();
      return cVar2;
    }
  }
  else if (cVar2 == '\x0f') {
    pcVar1 = (code *)swi(0x10);
    cVar2 = (*pcVar1)();
    if (cVar2 != '\x03') {
      return cVar2;
    }
    cVar2 = FUN_1000_27c1();
    if (cVar2 == '\0') {
      return '\x03';
    }
    if (DAT_0000_0484 == '\x18') {
      return '\x03';
    }
    return '@';
  }
  pcVar1 = (code *)swi(0x10);
  cVar2 = (*pcVar1)();
  return cVar2;
}



// Function: FUN_1000_2870 @ 1000:2870

void __cdecl16near FUN_1000_2870(undefined1 param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x470e = param_1;
  uVar3 = FUN_1000_27cf();
  *(undefined1 *)0x4710 = (char)((uint)uVar3 >> 8);
  if ((char)uVar3 != *(char *)0x470e) {
    FUN_1000_27cf();
    uVar3 = FUN_1000_27cf();
    *(undefined1 *)0x470e = (char)uVar3;
    *(undefined1 *)0x4710 = (char)((uint)uVar3 >> 8);
    if ((*(char *)0x470e == '\x03') && ('\x18' < DAT_0000_0484)) {
      *(undefined1 *)0x470e = 0x40;
    }
  }
  if (((*(byte *)0x470e < 4) || (0x3f < *(byte *)0x470e)) || (*(char *)0x470e == '\a')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)0x4711 = uVar1;
  if (*(char *)0x470e == '@') {
    cVar2 = DAT_0000_0484 + '\x01';
  }
  else {
    cVar2 = '\x19';
  }
  *(char *)0x470f = cVar2;
  if (*(char *)0x470e != '\a') {
    iVar4 = FUN_1000_2794(0x4719,unaff_DS,0xffea,0xf000);
    if (iVar4 == 0) {
      iVar4 = FUN_1000_27c1();
      if (iVar4 == 0) {
        uVar1 = 1;
        goto LAB_1000_2916;
      }
    }
  }
  uVar1 = 0;
LAB_1000_2916:
  *(undefined1 *)0x4712 = uVar1;
  if (*(char *)0x470e == '\a') {
    uVar3 = 0xb000;
  }
  else {
    uVar3 = 0xb800;
  }
  *(undefined2 *)0x4715 = uVar3;
  *(undefined2 *)0x4713 = 0;
  *(undefined1 *)0x4709 = 0;
  *(undefined1 *)0x4708 = 0;
  *(char *)0x470a = *(char *)0x4710 + -1;
  *(char *)0x470b = *(char *)0x470f + -1;
  return;
}



// Function: FUN_1000_2956 @ 1000:2956

void FUN_1000_2956(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_0249();
  return;
}



// Function: FUN_1000_296a @ 1000:296a

void __cdecl16near FUN_1000_296a(void)

{
  return;
}



// Function: FUN_1000_296b @ 1000:296b

uint __cdecl16near FUN_1000_296b(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte in_CF;
  byte in_PF;
  byte in_AF;
  byte in_ZF;
  byte in_SF;
  byte in_TF;
  byte in_IF;
  byte in_OF;
  byte in_NT;
  
  out(0x43,0);
  FUN_1000_296a((uint)(in_NT & 1) * 0x4000 | (uint)(in_OF & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
                (uint)(in_TF & 1) * 0x100 | (uint)(in_SF & 1) * 0x80 | (uint)(in_ZF & 1) * 0x40 |
                (uint)(in_AF & 1) * 0x10 | (uint)(in_PF & 1) * 4 | (uint)(in_CF & 1));
  uVar1 = in(0x40);
  FUN_1000_296a();
  uVar2 = in(0x40);
  return ~CONCAT11(uVar2,uVar1);
}



// Function: FUN_1000_29a6 @ 1000:29a6

void __cdecl16far FUN_1000_29a6(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  uint local_4;
  
  uVar1 = FUN_1000_296b();
  lVar5 = FUN_1000_162f();
  local_4 = (uint)(lVar5 + (ulong)uVar1 >> 0x10);
  uVar3 = uVar1;
  while( true ) {
    do {
      uVar2 = FUN_1000_296b();
      if ((local_4 == 0) && ((uint)(lVar5 + (ulong)uVar1) <= uVar2)) {
        return;
      }
      bVar4 = uVar3 <= uVar2;
      uVar3 = uVar2;
    } while (bVar4);
    if ((local_4 < 2) && (local_4 == 0)) break;
    local_4 = local_4 - 1;
  }
  return;
}



// Function: FUN_1000_2a13 @ 1000:2a13

void __cdecl16near FUN_1000_2a13(void)

{
  int in_DX;
  undefined2 uVar1;
  int iVar2;
  
  if (in_DX == DAT_1000_2a07) {
LAB_1000_2a51:
    DAT_1000_2a07 = 0;
    DAT_1000_2a09 = 0;
    DAT_1000_2a0b = 0;
  }
  else {
    iVar2 = *(int *)0x2;
    DAT_1000_2a09 = iVar2;
    if (*(int *)0x2 == 0) {
      in_DX = DAT_1000_2a07;
      if (iVar2 != DAT_1000_2a07) {
        DAT_1000_2a09 = *(int *)0x8;
        uVar1 = 0;
        FUN_1000_2ae7(0,iVar2);
        goto LAB_1000_2a6f;
      }
      goto LAB_1000_2a51;
    }
  }
  uVar1 = 0;
  iVar2 = in_DX;
LAB_1000_2a6f:
  FUN_1000_2eaf(uVar1,iVar2);
  return;
}



// Function: FUN_1000_2a3a @ 1000:2a3a

void __cdecl16near FUN_1000_2a3a(void)

{
  undefined2 in_AX;
  
  DAT_1000_2a09 = in_AX;
  FUN_1000_2ae7(0);
  FUN_1000_2eaf();
  return;
}



// Function: FUN_1000_2a76 @ 1000:2a76

void __cdecl16near FUN_1000_2a76(void)

{
  undefined2 uVar1;
  int in_DX;
  int iVar2;
  undefined2 uStack_2;
  
  uStack_2 = *(int *)0x2;
  *(undefined2 *)0x2 = 0;
  *(int *)0x8 = uStack_2;
  if ((in_DX == DAT_1000_2a07) || (*(int *)0x2 != 0)) {
    FUN_1000_2b10();
    uStack_2 = in_DX;
  }
  else {
    iVar2 = *(int *)0x0;
    *(int *)0x0 = *(int *)0x0 + iVar2;
    iVar2 = in_DX + iVar2;
    if (*(int *)0x2 == 0) {
      *(int *)0x8 = uStack_2;
    }
    else {
      *(int *)0x2 = uStack_2;
    }
  }
  iVar2 = uStack_2 + *(int *)0x0;
  if (*(int *)0x2 != 0) {
    return;
  }
  *(int *)0x0 = *(int *)0x0 + *(int *)0x0;
  *(int *)0x2 = uStack_2;
  if (iVar2 != *(int *)0x6) {
    uVar1 = *(undefined2 *)0x6;
    DAT_1000_2a0b = *(undefined2 *)0x4;
    *(undefined2 *)0x6 = uVar1;
    *(undefined2 *)0x4 = DAT_1000_2a0b;
    return;
  }
  DAT_1000_2a0b = 0;
  return;
}



// Function: FUN_1000_2ae7 @ 1000:2ae7

void __cdecl16near FUN_1000_2ae7(void)

{
  undefined2 uVar1;
  int unaff_DS;
  
  if (unaff_DS != *(int *)0x6) {
    uVar1 = *(undefined2 *)0x6;
    DAT_1000_2a0b = *(undefined2 *)0x4;
    *(undefined2 *)0x6 = uVar1;
    *(undefined2 *)0x4 = DAT_1000_2a0b;
    return;
  }
  DAT_1000_2a0b = 0;
  return;
}



// Function: FUN_1000_2b10 @ 1000:2b10

void __cdecl16near FUN_1000_2b10(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = DAT_1000_2a0b;
  if (DAT_1000_2a0b != 0) {
    uVar1 = *(undefined2 *)0x6;
    *(undefined2 *)0x6 = unaff_DS;
    *(int *)0x4 = iVar2;
    *(undefined2 *)0x4 = unaff_DS;
    *(undefined2 *)0x6 = uVar1;
    return;
  }
  DAT_1000_2a0b = unaff_DS;
  *(undefined2 *)0x4 = unaff_DS;
  *(undefined2 *)0x6 = unaff_DS;
  return;
}



// Function: FUN_1000_2b47 @ 1000:2b47

void __cdecl16far FUN_1000_2b47(undefined2 param_1,int param_2)

{
  undefined2 unaff_DS;
  
  DAT_1000_2a0d = unaff_DS;
  if (param_2 != 0) {
    if (param_2 == DAT_1000_2a09) {
      FUN_1000_2a13();
    }
    else {
      FUN_1000_2a76();
    }
  }
  return;
}



// Function: FUN_1000_2b70 @ 1000:2b70

undefined2 __cdecl16near FUN_1000_2b70(void)

{
  uint in_AX;
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_1000_2eee(0,0);
  if ((uVar1 & 0xf) != 0) {
    FUN_1000_2eee(0x10 - (uVar1 & 0xf),0);
  }
  uVar3 = FUN_1000_2eee(in_AX << 4,in_AX >> 0xc);
  uVar2 = (undefined2)((ulong)uVar3 >> 0x10);
  if ((int)uVar3 != -1) {
    DAT_1000_2a07 = uVar2;
    DAT_1000_2a09 = uVar2;
    *(uint *)0x0 = in_AX;
    *(undefined2 *)0x2 = uVar2;
    return 4;
  }
  return 0;
}



// Function: FUN_1000_2bd4 @ 1000:2bd4

undefined2 __cdecl16near FUN_1000_2bd4(void)

{
  undefined2 uVar1;
  uint in_AX;
  int iVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = FUN_1000_2eee(in_AX << 4,in_AX >> 0xc);
  iVar3 = (int)(uVar4 >> 0x10);
  if ((uint)uVar4 == 0xffff) {
    return 0;
  }
  if ((uVar4 & 0xf) != 0) {
    iVar2 = FUN_1000_2eee(0x10 - ((uint)uVar4 & 0xf),0);
    if (iVar2 == -1) {
      return 0;
    }
    iVar3 = iVar3 + 1;
  }
  uVar1 = DAT_1000_2a09;
  DAT_1000_2a09 = iVar3;
  *(uint *)0x0 = in_AX;
  *(undefined2 *)0x2 = uVar1;
  return 4;
}



// Function: FUN_1000_2c2e @ 1000:2c2e

undefined2 __cdecl16near FUN_1000_2c2e(void)

{
  int in_AX;
  int in_DX;
  int iVar1;
  undefined2 unaff_DS;
  
  *(int *)0x0 = *(int *)0x0 - in_AX;
  iVar1 = in_DX + *(int *)0x0;
  *(int *)0x0 = in_AX;
  *(int *)0x2 = in_DX;
  *(int *)0x2 = iVar1;
  return 4;
}



// Function: FUN_1000_2c51 @ 1000:2c51

/* WARNING: Removing unreachable block (ram,0x00012cba) */

undefined2 __cdecl16far FUN_1000_2c51(uint param_1)

{
  int *piVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  uVar3 = 0;
  DAT_1000_2a0d = unaff_DS;
  if (param_1 != 0) {
    uVar2 = CONCAT11((byte)(param_1 + 0x13 >> 0xc) | (0xffec < param_1) << 4,
                     (char)(param_1 + 0x13 >> 4));
    if (DAT_1000_2a07 == 0) {
      uVar3 = FUN_1000_2b70();
    }
    else {
      iVar4 = DAT_1000_2a0b;
      if (DAT_1000_2a0b != 0) {
        do {
          if (uVar2 <= *(uint *)0x0) {
            if (*(uint *)0x0 <= uVar2) {
              FUN_1000_2ae7();
              *(undefined2 *)0x2 = *(undefined2 *)0x8;
              return 4;
            }
            uVar3 = FUN_1000_2c2e();
            return uVar3;
          }
          piVar1 = (int *)0x6;
          iVar4 = *piVar1;
        } while (*piVar1 != DAT_1000_2a0b);
      }
      uVar3 = FUN_1000_2bd4();
    }
  }
  return uVar3;
}



// Function: FUN_1000_2c5b @ 1000:2c5b

uint __cdecl16far FUN_1000_2c5b(uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  DAT_1000_2a0d = unaff_DS;
  if (param_1 != 0 || param_2 != 0) {
    uVar2 = param_2 + (0xffec < param_1);
    if ((CARRY2(param_2,(uint)(0xffec < param_1))) || ((uVar2 & 0xfff0) != 0)) {
      param_1 = 0;
    }
    else {
      uVar2 = CONCAT11((byte)(param_1 + 0x13 >> 0xc) | (char)uVar2 * '\x10',
                       (char)(param_1 + 0x13 >> 4));
      if (DAT_1000_2a07 == 0) {
        param_1 = FUN_1000_2b70();
      }
      else {
        iVar3 = DAT_1000_2a0b;
        if (DAT_1000_2a0b != 0) {
          do {
            if (uVar2 <= *(uint *)0x0) {
              if (*(uint *)0x0 <= uVar2) {
                FUN_1000_2ae7();
                *(undefined2 *)0x2 = *(undefined2 *)0x8;
                return 4;
              }
              uVar2 = FUN_1000_2c2e();
              return uVar2;
            }
            piVar1 = (int *)0x6;
            iVar3 = *piVar1;
          } while (*piVar1 != DAT_1000_2a0b);
        }
        param_1 = FUN_1000_2bd4();
      }
    }
  }
  return param_1;
}



// Function: FUN_1000_2cd8 @ 1000:2cd8

ulong __cdecl16near FUN_1000_2cd8(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int in_DX;
  int in_BX;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  bool bVar11;
  
  iVar8 = in_BX;
  uVar3 = FUN_1000_2c5b(DAT_1000_2a11,DAT_1000_2a0f);
  if (in_DX == 0) {
    return (ulong)uVar3;
  }
  uVar3 = *(int *)0x0 - 1;
  puVar10 = (undefined2 *)0x4;
  puVar9 = (undefined2 *)0x4;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar10;
    puVar10 = puVar10 + 1;
    puVar1 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar2 = *puVar1;
  }
  if (uVar3 != 0) {
    iVar5 = in_DX + 1;
    iVar4 = in_BX + 1;
    while( true ) {
      puVar10 = (undefined2 *)0x0;
      puVar9 = (undefined2 *)0x0;
      uVar6 = uVar3;
      if (0x1000 < uVar3) {
        uVar6 = 0x1000;
      }
      for (iVar7 = uVar6 << 3; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2 = puVar10;
        puVar10 = puVar10 + 1;
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar1;
      }
      bVar11 = uVar3 < 0x1000;
      uVar3 = uVar3 - 0x1000;
      if (bVar11 || uVar3 == 0) break;
      iVar5 = iVar5 + 0x1000;
      iVar4 = iVar4 + 0x1000;
    }
  }
  FUN_1000_2b47(iVar8,in_BX);
  return CONCAT22(in_DX,4);
}



// Function: FUN_1000_2d54 @ 1000:2d54

undefined4 __cdecl16near FUN_1000_2d54(void)

{
  int in_AX;
  int in_CX;
  int iVar1;
  int in_BX;
  int iVar2;
  
  if (in_BX != DAT_1000_2a09) {
    iVar2 = in_BX + in_AX;
    *(int *)0x0 = in_CX - in_AX;
    *(int *)0x2 = in_BX;
    *(int *)0x0 = in_AX;
    iVar1 = in_BX + in_CX;
    if (*(int *)0x2 == 0) {
      *(int *)0x8 = iVar2;
    }
    else {
      *(int *)0x2 = iVar2;
    }
    FUN_1000_2b47();
    return CONCAT22(in_BX,4);
  }
  *(int *)0x0 = in_AX;
  FUN_1000_2eaf(0,in_BX + in_AX);
  return CONCAT22(in_BX,4);
}



// Function: FUN_1000_2db8 @ 1000:2db8

undefined2 __cdecl16far FUN_1000_2db8(undefined2 param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  DAT_1000_2a0f = 0;
  DAT_1000_2a11 = param_3;
  DAT_1000_2a0d = unaff_DS;
  if (param_2 == 0) {
    uVar2 = FUN_1000_2c5b(param_3,0);
  }
  else if (param_3 == 0) {
    FUN_1000_2b47(0,param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = CONCAT11((byte)(param_3 + 0x13 >> 0xc) | (0xffec < param_3) << 4,
                     (char)(param_3 + 0x13 >> 4));
    if (*(uint *)0x0 < uVar1) {
      uVar2 = FUN_1000_2cd8();
    }
    else if (*(uint *)0x0 == uVar1) {
      uVar2 = 4;
    }
    else {
      uVar2 = FUN_1000_2d54();
    }
  }
  return uVar2;
}



// Function: FUN_1000_2e39 @ 1000:2e39

undefined2 FUN_1000_2e39(undefined2 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = (param_2 - *(int *)0x7b) + 0x40U >> 6;
  if (uVar2 != *(uint *)0x4756) {
    uVar2 = uVar2 * 0x40;
    if (*(uint *)0x91 < uVar2 + *(int *)0x7b) {
      uVar2 = *(uint *)0x91 - *(int *)0x7b;
    }
    iVar1 = FUN_1000_38e3(*(undefined2 *)0x7b,uVar2);
    if (iVar1 != -1) {
      *(int *)0x91 = *(int *)0x7b + iVar1;
      *(undefined2 *)0x8f = 0;
      return 0;
    }
    *(uint *)0x4756 = uVar2 >> 6;
  }
  *(int *)0x8d = param_2;
  *(undefined2 *)0x8b = param_1;
  return 1;
}



// Function: FUN_1000_2eaf @ 1000:2eaf

undefined2 __cdecl16near FUN_1000_2eaf(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined1 in_CF;
  undefined1 in_ZF;
  
  FUN_1000_1646();
  if (((!(bool)in_CF) && (FUN_1000_1646(), (bool)in_CF || (bool)in_ZF)) &&
     (iVar1 = FUN_1000_2e39(param_1,param_2), iVar1 != 0)) {
    return 0;
  }
  return 0xffff;
}



// Function: FUN_1000_2eee @ 1000:2eee

undefined4 __cdecl16near FUN_1000_2eee(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  undefined1 uVar7;
  undefined1 uVar8;
  
  iVar5 = 0;
  uVar1 = FUN_1000_1392();
  uVar2 = uVar1 + *(uint *)0x8b;
  iVar3 = uVar2 + param_1;
  uVar1 = iVar5 + (uint)CARRY2(uVar1,*(uint *)0x8b) + param_2 + (uint)CARRY2(uVar2,param_1);
  uVar7 = uVar1 < 0xf;
  uVar8 = uVar1 == 0xf;
  if ((int)uVar1 < 0xf) {
LAB_1000_2f1f:
    uVar6 = *(undefined2 *)0x8d;
    uVar4 = FUN_1000_13f4();
    FUN_1000_1646();
    if (((!(bool)uVar7) && (FUN_1000_1646(), (bool)uVar7 || (bool)uVar8)) &&
       (iVar3 = FUN_1000_2e39(uVar4,uVar6), iVar3 != 0)) goto LAB_1000_2f78;
  }
  else if ((int)uVar1 < 0x10) {
    uVar7 = iVar3 != -1;
    uVar8 = iVar3 == -1;
    goto LAB_1000_2f1f;
  }
  uVar6 = 0xffff;
  uVar4 = 0xffff;
LAB_1000_2f78:
  return CONCAT22(uVar6,uVar4);
}



// Function: FUN_1000_2fd8 @ 1000:2fd8

void __cdecl16far FUN_1000_2fd8(char param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 unaff_DS;
  
  bVar2 = param_2 + -1 + *(char *)0x4709;
  bVar1 = param_1 + -1 + *(char *)0x4708;
  if ((((*(byte *)0x4709 <= bVar2) && (bVar2 <= *(byte *)0x470b)) && (*(byte *)0x4708 <= bVar1)) &&
     (bVar1 <= *(byte *)0x470a)) {
    FUN_1000_27cf();
  }
  return;
}



// Function: FUN_1000_3021 @ 1000:3021

undefined2 __cdecl16far
FUN_1000_3021(int param_1,int param_2,int param_3,int param_4,int param_5,undefined2 param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_1000_35eb(param_4,param_3,param_2,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (param_3 - param_1) + 1;
    for (; param_2 <= param_4; param_2 = param_2 + 1) {
      iVar4 = param_5;
      uVar2 = param_6;
      uVar3 = FUN_1000_2480(param_2,param_1);
      FUN_1000_35af(iVar1,uVar3,iVar4,uVar2);
      param_5 = param_5 + iVar1 * 2;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_1000_3077 @ 1000:3077

undefined2 __cdecl16far
FUN_1000_3077(int param_1,int param_2,int param_3,int param_4,int param_5,undefined2 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (param_3 - param_1) + 1;
  for (; param_2 <= param_4; param_2 = param_2 + 1) {
    uVar2 = FUN_1000_2480(param_2,param_1);
    FUN_1000_35af(iVar1,param_5,param_6,uVar2);
    param_5 = param_5 + iVar1 * 2;
  }
  return 1;
}



// Function: FUN_1000_30ba @ 1000:30ba

void __cdecl16far FUN_1000_30ba(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_313c(param_1,param_2);
  return;
}



// Function: FUN_1000_30cc @ 1000:30cc

void __cdecl16far FUN_1000_30cc(void)

{
  FUN_1000_3194();
  return;
}



// Function: FUN_1000_30da @ 1000:30da

void __cdecl16far FUN_1000_30da(void)

{
  FUN_1000_31af();
  return;
}



// Function: FUN_1000_313c @ 1000:313c

void __cdecl16far FUN_1000_313c(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x7804 = param_2;
  *(undefined2 *)0x7802 = param_1;
  *(undefined2 *)0x77fc = 0;
  FUN_1000_12d3(0x24,0x30e8,0);
  return;
}



// Function: FUN_1000_3168 @ 1000:3168

void __cdecl16far FUN_1000_3168(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x7800 = param_2;
  *(undefined2 *)0x77fe = param_1;
  *(undefined2 *)0x77fc = 1;
  FUN_1000_12d3(0x24,0x30e8,0);
  return;
}



// Function: FUN_1000_3194 @ 1000:3194

/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_1000_3194(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  return CONCAT22(*(undefined2 *)(*(int *)0x7806 + 10),param_2);
}



// Function: FUN_1000_31af @ 1000:31af

/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_1000_31af(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  byte bVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_1000_3ec4(0x54,0,0);
  iVar1 = *(int *)0x7806;
  bVar2 = (byte)((uint)*(undefined2 *)(iVar1 + 0x18) >> 8);
  if (bVar2 < 0x38) {
    if ((((0xe < bVar2) && (bVar2 < 0x14)) || (bVar2 == 0x16)) ||
       (((bVar2 == 0x17 || (bVar2 == 0x23)) ||
        (param_2 = *(undefined2 *)(iVar1 + 0x18), bVar2 == 0x29)))) {
      param_2 = CONCAT11(bVar2,0xff);
    }
  }
  else {
    *(byte *)(iVar1 + 0x2e) = *(byte *)(iVar1 + 0x2e) | 1;
  }
  return CONCAT22(*(undefined2 *)(iVar1 + 0x1e),param_2);
}



// Function: FUN_1000_320e @ 1000:320e

void __cdecl16far
FUN_1000_320e(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined1 local_a [8];
  
  FUN_1000_1da4(local_a);
  FUN_1000_323f(param_1,param_2,param_3,param_4,param_5,local_a);
  return;
}



// Function: FUN_1000_323f @ 1000:323f

undefined2 __cdecl16far
FUN_1000_323f(byte param_1,undefined4 param_2,undefined2 *param_3,undefined2 *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char cVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  byte bVar14;
  byte bVar15;
  byte in_AF;
  byte bVar16;
  byte bVar17;
  byte in_TF;
  byte in_IF;
  byte bVar18;
  byte in_NT;
  undefined4 uVar19;
  undefined1 local_10;
  undefined1 local_f;
  byte local_e;
  undefined3 local_d;
  code *local_a;
  undefined2 local_8;
  code *local_6;
  
  local_6 = (code *)&local_10;
  local_10 = (code)0x55;
  local_f = 0xcd;
  local_e = param_1;
  local_d = CONCAT12(local_d._2_1_,0xcb5d);
  bVar14 = param_1 < 0x25;
  bVar18 = SBORROW1(param_1,'%');
  cVar5 = param_1 - 0x25;
  bVar17 = cVar5 < '\0';
  bVar16 = cVar5 == '\0';
  bVar15 = (POPCOUNT(cVar5) & 1U) == 0;
  if (!(bool)bVar14) {
    bVar14 = param_1 < 0x26;
    bVar18 = SBORROW1(param_1,'&');
    cVar5 = param_1 - 0x26;
    bVar17 = cVar5 < '\0';
    bVar16 = cVar5 == '\0';
    bVar15 = (POPCOUNT(cVar5) & 1U) == 0;
    if ((bool)bVar14 || (bool)bVar16) {
      local_d = 0x68f36;
      local_8 = 0xcb5d;
      local_a = local_6;
    }
  }
  uVar11 = (undefined2)((ulong)param_4 >> 0x10);
  uVar13 = *param_4;
  uVar3 = ((undefined2 *)param_4)[3];
  uVar12 = (undefined2)((ulong)param_2 >> 0x10);
  iVar9 = (int)param_2;
  uVar8 = *(undefined2 *)(iVar9 + 2);
  uVar7 = *(undefined2 *)(iVar9 + 4);
  uVar4 = *(undefined2 *)(iVar9 + 10);
  uVar12 = *(undefined2 *)(iVar9 + 8);
  uVar19 = (*local_6)();
  uVar6 = (undefined2)uVar19;
  *param_4 = uVar13;
  ((undefined2 *)param_4)[3] = uVar3;
  uVar13 = (undefined2)((ulong)param_3 >> 0x10);
  puVar10 = (undefined2 *)param_3;
  puVar10[4] = uVar12;
  puVar10[7] = (uint)(in_NT & 1) * 0x4000 | (uint)(bVar18 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
               (uint)(in_TF & 1) * 0x100 | (uint)(bVar17 & 1) * 0x80 | (uint)(bVar16 & 1) * 0x40 |
               (uint)(in_AF & 1) * 0x10 | (uint)(bVar15 & 1) * 4 | (uint)(bVar14 & 1);
  puVar10[6] = (uint)(in_NT & 1) * 0x4000 | (uint)(bVar18 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
               (uint)(in_TF & 1) * 0x100 | (uint)(bVar17 & 1) * 0x80 | (uint)(bVar16 & 1) * 0x40 |
               (uint)(in_AF & 1) * 0x10 | (uint)(bVar15 & 1) * 4 | (uint)(bVar14 & 1);
  puVar1 = puVar10 + 6;
  *puVar1 = *puVar1 & 1;
  uVar2 = *puVar1;
  puVar10[5] = uVar4;
  puVar10[3] = (int)((ulong)uVar19 >> 0x10);
  puVar10[2] = uVar7;
  puVar10[1] = uVar8;
  *param_3 = uVar6;
  if (uVar2 != 0) {
    FUN_1000_1454(uVar6);
  }
  return uVar6;
}



// Function: FUN_1000_32d8 @ 1000:32d8

void __cdecl16far FUN_1000_32d8(byte param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 uVar9;
  byte bVar10;
  byte bVar11;
  byte in_AF;
  byte bVar12;
  byte bVar13;
  byte in_TF;
  byte in_IF;
  byte bVar14;
  byte in_NT;
  undefined4 uVar15;
  undefined2 local_14;
  undefined1 local_12;
  undefined1 local_11;
  byte local_10;
  undefined1 local_f;
  undefined2 local_e;
  code *local_c;
  undefined1 local_a;
  undefined2 local_9;
  code *local_6;
  
  local_6 = (code *)&local_14;
  local_14 = 0x6e8b;
  local_12 = 0xde;
  local_11 = 0xcd;
  local_10 = param_1;
  bVar10 = param_1 < 0x25;
  bVar14 = SBORROW1(param_1,'%');
  cVar4 = param_1 - 0x25;
  bVar13 = cVar4 < '\0';
  bVar12 = cVar4 == '\0';
  bVar11 = (POPCOUNT(cVar4) & 1U) == 0;
  if (!(bool)bVar10) {
    bVar10 = param_1 < 0x26;
    bVar14 = SBORROW1(param_1,'&');
    cVar4 = param_1 - 0x26;
    bVar13 = cVar4 < '\0';
    bVar12 = cVar4 == '\0';
    bVar11 = (POPCOUNT(cVar4) & 1U) == 0;
    if ((bool)bVar10 || (bool)bVar12) {
      local_f = 0x36;
      local_e = 0x68f;
      local_a = 0xca;
      local_9 = 2;
      local_c = local_6;
      goto LAB_1000_3328;
    }
  }
  local_f = 0xca;
  local_e = 2;
LAB_1000_3328:
  uVar9 = (undefined2)((ulong)param_2 >> 0x10);
  iVar8 = (int)param_2;
  uVar7 = *(undefined2 *)(iVar8 + 2);
  uVar6 = *(undefined2 *)(iVar8 + 4);
  puVar1 = (undefined2 *)*(int *)(iVar8 + 8);
  uVar2 = *(undefined2 *)(iVar8 + 10);
  uVar3 = *(undefined2 *)(iVar8 + 0x10);
  uVar5 = *(undefined4 *)(iVar8 + 0xc);
  uVar9 = (undefined2)((ulong)uVar5 >> 0x10);
  uVar15 = (*local_6)();
  *(int *)CONCAT22(iVar8,puVar1) = (int)uVar15;
  puVar1[1] = uVar7;
  puVar1[2] = uVar6;
  puVar1[3] = (int)((ulong)uVar15 >> 0x10);
  puVar1[5] = uVar2;
  puVar1[8] = uVar3;
  puVar1[9] = (uint)(in_NT & 1) * 0x4000 | (uint)(bVar14 & 1) * 0x800 | (uint)(in_IF & 1) * 0x200 |
              (uint)(in_TF & 1) * 0x100 | (uint)(bVar13 & 1) * 0x80 | (uint)(bVar12 & 1) * 0x40 |
              (uint)(in_AF & 1) * 0x10 | (uint)(bVar11 & 1) * 4 | (uint)(bVar10 & 1);
  puVar1[4] = &stack0xfffe;
  puVar1[6] = (int)uVar5;
  puVar1[7] = uVar9;
  FUN_1000_331e();
  return;
}



// Function: FUN_1000_331e @ 1000:331e

void FUN_1000_331e(void)

{
  return;
}



// Function: FUN_1000_337c @ 1000:337c

undefined2 __cdecl16far FUN_1000_337c(undefined2 param_1,int param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  undefined4 uVar3;
  
  pcVar1 = (code *)swi(0x21);
  uVar3 = (*pcVar1)();
  uVar2 = (undefined2)uVar3;
  if ((bool)in_CF) {
    uVar2 = FUN_1000_1454();
  }
  else if (param_2 == 0) {
    uVar2 = (int)((ulong)uVar3 >> 0x10);
  }
  return uVar2;
}



// Function: FUN_1000_33b7 @ 1000:33b7

undefined2 __cdecl16far
FUN_1000_33b7(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_6;
  int local_4;
  
  iVar1 = FUN_1000_35eb(param_4,param_3,param_2,param_1);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_1000_35eb(param_6 + (param_4 - param_2),param_5 + (param_3 - param_1),param_6,
                            param_5), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    local_4 = param_4;
    local_6 = 1;
    iVar1 = param_2;
    if (param_2 < param_6) {
      local_4 = param_2;
      local_6 = -1;
      iVar1 = param_4;
    }
    for (; local_4 + local_6 != iVar1; iVar1 = iVar1 + local_6) {
      uVar3 = FUN_1000_2480(param_6 + (iVar1 - param_2),param_5);
      uVar4 = FUN_1000_2480(iVar1,param_1);
      FUN_1000_35af((param_3 - param_1) + 1,uVar4,uVar3);
    }
    uVar2 = 1;
  }
  return uVar2;
}



// Function: FUN_1000_3454 @ 1000:3454

void __cdecl16far FUN_1000_3454(void)

{
  undefined2 unaff_SS;
  
  FUN_1000_2648(0,0,1,&stack0x0004,unaff_SS);
  return;
}



// Function: FUN_1000_3469 @ 1000:3469

void FUN_1000_3469(void)

{
  undefined2 unaff_DS;
  
                    /* WARNING: Could not recover jumptable at 0x00013469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)0x47ec)();
  return;
}



// Function: FUN_1000_346d @ 1000:346d

void FUN_1000_346d(void)

{
  undefined2 unaff_DS;
  
                    /* WARNING: Could not recover jumptable at 0x0001346d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)0x47f0)();
  return;
}



// Function: FUN_1000_3471 @ 1000:3471

void FUN_1000_3471(void)

{
  undefined2 unaff_DS;
  
                    /* WARNING: Could not recover jumptable at 0x00013471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)0x47f2)();
  return;
}



// Function: FUN_1000_3475 @ 1000:3475

void FUN_1000_3475(void)

{
  undefined2 unaff_DS;
  
                    /* WARNING: Could not recover jumptable at 0x00013475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*(undefined2 *)&SUB_0000_47f4)();
  return;
}



// Function: FUN_1000_3479 @ 1000:3479

undefined2 FUN_1000_3479(uint param_1)

{
  char cVar1;
  undefined2 unaff_DS;
  
  cVar1 = (char)((param_1 >> 1) / (uint)*(byte *)0x4710);
  return CONCAT11(cVar1,(char)(param_1 >> 1) - cVar1 * *(char *)0x4710);
}



// Function: FUN_1000_34b1 @ 1000:34b1

void FUN_1000_34b1(int *param_1,int *param_2)

{
  byte bVar1;
  int extraout_DX;
  char cVar3;
  undefined2 unaff_DS;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 != *param_1) {
    FUN_1000_27cf();
    *param_1 = extraout_DX;
    iVar2 = extraout_DX;
  }
  cVar3 = (char)((uint)iVar2 >> 8);
  bVar1 = (char)iVar2 + 1;
  iVar2 = CONCAT11(cVar3,bVar1);
  if (*(byte *)0x4710 <= bVar1) {
    iVar2 = (uint)(byte)(cVar3 + 1) << 8;
  }
  *param_2 = iVar2;
  return;
}



// Function: FUN_1000_34e5 @ 1000:34e5

void FUN_1000_34e5(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined2 uVar1;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar2;
  bool bVar3;
  undefined2 local_8;
  undefined2 local_6;
  undefined2 local_4;
  
  local_8 = FUN_1000_3e12();
  bVar2 = param_3._2_2_ == *(int *)0x4715;
  if (bVar2) {
    local_4 = FUN_1000_3479((undefined2 *)param_3,param_3._2_2_);
  }
  bVar3 = param_2._2_2_ == *(int *)0x4715;
  if (bVar3) {
    local_6 = FUN_1000_3479((undefined2 *)param_2,param_2._2_2_);
  }
  while (param_1 != 0) {
    if (bVar3) {
      FUN_1000_34b1(&local_8,unaff_SS,&local_6,unaff_SS);
      uVar1 = FUN_1000_27cf();
    }
    else {
      uVar1 = *param_2;
      param_2 = (undefined2 *)CONCAT22(param_2._2_2_,(undefined2 *)param_2 + 1);
    }
    if (bVar2) {
      FUN_1000_34b1(&local_8,unaff_SS,&local_4,unaff_SS);
      FUN_1000_27cf();
      param_1 = param_1 + -1;
    }
    else {
      *param_3 = uVar1;
      param_3 = (undefined2 *)CONCAT22(param_3._2_2_,(undefined2 *)param_3 + 1);
      param_1 = param_1 + -1;
    }
  }
  FUN_1000_27cf();
  return;
}



// Function: FUN_1000_35af @ 1000:35af

void FUN_1000_35af(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                  undefined2 param_5)

{
  undefined2 unaff_DS;
  
  if ((*(char *)0x4711 == '\0') && (*(int *)0x4717 != 0)) {
    FUN_1000_24a5(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    FUN_1000_34e5(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}



// Function: FUN_1000_35eb @ 1000:35eb

undefined2 FUN_1000_35eb(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if ((((*(byte *)0x4710 < param_4) || (*(byte *)0x4710 < param_2)) || ((int)param_2 < (int)param_4)
      ) || (((*(byte *)0x470f < param_3 || (*(byte *)0x470f < param_1)) ||
            ((int)param_1 < (int)param_3)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// Function: FUN_1000_362e @ 1000:362e

void FUN_1000_362e(int param_1,int param_2,undefined2 *param_3)

{
  undefined1 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined1 *)0x470c;
  for (; param_2 <= param_1; param_2 = param_2 + 1) {
    *param_3 = CONCAT11(uVar1,0x20);
    param_3 = (undefined2 *)CONCAT22(param_3._2_2_,(undefined2 *)param_3 + 1);
  }
  return;
}



// Function: FUN_1000_3650 @ 1000:3650

void FUN_1000_3650(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6)

{
  byte bVar1;
  byte bVar2;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_a2 [160];
  
  if (((*(char *)0x4711 == '\0') && (*(int *)0x4717 != 0)) && (param_1 == '\x01')) {
    param_5 = param_5 + '\x01';
    bVar1 = param_4 + 1;
    param_3 = param_3 + '\x01';
    bVar2 = param_2 + 1;
    if (param_6 == '\x06') {
      FUN_1000_33b7(param_5,bVar1 + 1,param_3,bVar2,param_5,bVar1);
      FUN_1000_3021(param_5,bVar2,param_5,bVar2,local_a2);
      FUN_1000_362e(param_3,param_5,local_a2,unaff_SS);
    }
    else {
      FUN_1000_33b7(param_5,bVar1,param_3,bVar2 - 1,param_5,bVar1 + 1);
      FUN_1000_3021(param_5,bVar1,param_5,bVar1,local_a2);
      FUN_1000_362e(param_3,param_5,local_a2,unaff_SS);
      bVar2 = bVar1;
    }
    FUN_1000_3077(param_5,bVar2,param_3,bVar2,local_a2);
  }
  else {
    FUN_1000_27cf();
  }
  return;
}



// Function: FUN_1000_38e3 @ 1000:38e3

undefined2 __cdecl16far FUN_1000_38e3(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1000_1454(uVar2);
  }
  else {
    param_2 = 0xffff;
  }
  return param_2;
}



// Function: FUN_1000_3b39 @ 1000:3b39

/* WARNING: Instruction at (ram,0x00013b8c) overlaps instruction at (ram,0x00013b8a)
    */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_1000_3b39(void)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  undefined2 in_AX;
  int iVar4;
  undefined2 in_DX;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  longdouble in_ST0;
  
  *(sqword *)(unaff_BP + 0x1215) = (sqword)in_ST0;
  bVar3 = in(in_DX);
  iVar4 = CONCAT11((char)((uint)in_AX >> 8),bVar3 + 0xa1);
  if (bVar3 < 0x5f) {
    pcVar1 = (char *)(in_BX + unaff_SI + -0x70);
    *pcVar1 = *pcVar1 + (char)in_DX;
  }
  else {
    iVar2 = *(int *)0x4771;
    *(int *)(unaff_BP + -2) = iVar4;
    *(int *)(unaff_BP + -4) = iVar2;
    if ((iVar4 == 0) && (iVar2 == 1)) goto LAB_1000_3b9e;
    if ((*(int *)(unaff_BP + -4) == 0 && *(int *)(unaff_BP + -2) == 0) ||
       ((*(int *)(unaff_BP + -2) == -1 && (*(int *)(unaff_BP + -4) == -1)))) {
      FUN_1000_11b7(1);
    }
    *(undefined2 *)0x4773 = 0;
    *(undefined2 *)0x4771 = 0;
  }
  FUN_1000_12d3();
  (*(code *)*(undefined2 *)(unaff_BP + -4))();
LAB_1000_3b9e:
  return CONCAT22(*(undefined2 *)(unaff_BP + 10),*(undefined2 *)(unaff_BP + 0x10));
}



// Function: FUN_1000_3baa @ 1000:3baa

int __cdecl16far FUN_1000_3baa(uint param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0;
  do {
    if (*(byte *)(iVar1 + 0x4789) == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return -1;
}



// Function: FUN_1000_3bcb @ 1000:3bcb

undefined2 __cdecl16far FUN_1000_3bcb(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined2 uVar5;
  
  if (*(char *)0x4770 == '\0') {
    *(undefined2 *)0x77fa = 0;
    *(undefined2 *)0x77f8 = (undefined1 *)&SUB_0000_3bcb;
    *(undefined1 *)0x4770 = 1;
  }
  iVar2 = FUN_1000_3baa(param_1);
  if (iVar2 == -1) {
    *(undefined2 *)0x7f = 0x13;
    return 0xffff;
  }
  uVar1 = *(undefined2 *)(iVar2 * 4 + 0x4771);
  *(int *)(iVar2 * 4 + 0x4773) = param_3;
  *(int *)(iVar2 * 4 + 0x4771) = param_2;
  if (param_1 == 2) {
    if (*(char *)0x476f == '\0') {
      iVar2 = param_2;
      uVar3 = FUN_1000_12c4(0x23);
      *(int *)0x780a = iVar2;
      *(undefined2 *)0x7808 = uVar3;
      *(undefined1 *)0x476f = 1;
    }
    if (param_2 == 0 && param_3 == 0) {
      uVar3 = *(undefined2 *)0x780a;
      uVar5 = *(undefined2 *)0x7808;
    }
    else {
      uVar3 = 0;
      uVar5 = 0x3b2f;
    }
    uVar4 = 0x23;
  }
  else if (param_1 == 8) {
    FUN_1000_12d3(0,0x3a4b,0);
    uVar3 = 0;
    uVar5 = 0x3abd;
    uVar4 = 4;
  }
  else {
    if (param_1 == 0xb) {
      if (*(char *)0x476e != '\0') {
        return uVar1;
      }
      uVar3 = FUN_1000_12c4(5);
      *(int *)0x780e = param_2;
      *(undefined2 *)0x780c = uVar3;
      FUN_1000_12d3(5,0x3957,0);
      *(undefined1 *)0x476e = 1;
      return uVar1;
    }
    if (param_1 != 4) {
      return uVar1;
    }
    uVar3 = 0;
    uVar5 = 0x39d9;
    uVar4 = 6;
  }
  FUN_1000_12d3(uVar4,uVar5,uVar3);
  return uVar1;
}



// Function: FUN_1000_3cf6 @ 1000:3cf6

undefined2 __cdecl16far FUN_1000_3cf6(int param_1)

{
  code *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = FUN_1000_3baa(param_1);
  if (iVar3 == -1) {
    return 1;
  }
  local_4 = *(int *)(iVar3 * 4 + 0x4773);
  pcVar1 = (code *)*(int *)(iVar3 * 4 + 0x4771);
  if ((local_4 == 0) && (pcVar1 == (code *)0x1)) {
    return 0;
  }
  if (pcVar1 != (code *)0x0 || local_4 != 0) {
    *(undefined2 *)(iVar3 * 4 + 0x4773) = 0;
    *(undefined2 *)(iVar3 * 4 + 0x4771) = 0;
    (*pcVar1)();
    return 0;
  }
  if (param_1 != 2) {
    if (param_1 != 0x16) goto LAB_1000_3d55;
    FUN_1000_11b7(3);
  }
  pcVar2 = (code *)swi(0x23);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
LAB_1000_3d55:
  FUN_1000_11b7(1);
  return 0;
}



// Function: FUN_1000_3d88 @ 1000:3d88

undefined2 __cdecl16far FUN_1000_3d88(uint param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  
  uVar2 = 0x34dd;
  if (0x12 < param_1) {
    uVar3 = (undefined1)(0x1234dd / (ulong)param_1 >> 8);
    bVar1 = in(0x61);
    if ((bVar1 & 3) == 0) {
      out(0x61,bVar1 | 3);
      out(0x43,0xb6);
    }
    out(0x42,(char)(0x1234dd / (ulong)param_1));
    uVar2 = CONCAT11(uVar3,uVar3);
    out(0x42,uVar3);
  }
  return uVar2;
}



// Function: FUN_1000_3db6 @ 1000:3db6

byte __cdecl16far FUN_1000_3db6(void)

{
  byte in_AL;
  
  out(0x61,in_AL & 0xfc);
  return in_AL & 0xfc;
}



// Function: FUN_1000_3e12 @ 1000:3e12

undefined2 __cdecl16near FUN_1000_3e12(void)

{
  undefined2 extraout_DX;
  
  FUN_1000_27cf();
  return extraout_DX;
}



// Function: FUN_1000_3e3e @ 1000:3e3e

uint __cdecl16far FUN_1000_3e3e(byte *param_1)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte *pbVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  pbVar6 = (byte *)param_1;
  uVar3 = 0;
  do {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while ((*(byte *)(bVar5 + 0x42e7) & 1) != 0);
  bVar2 = false;
  if (bVar5 != 0x2b) {
    if (bVar5 != 0x2d) goto LAB_1000_3e6f;
    bVar2 = true;
  }
  do {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + 1;
LAB_1000_3e6f:
    if ((0x39 < bVar5) || (bVar5 < 0x30)) goto LAB_1000_3ea3;
    uVar1 = (ulong)uVar3;
    uVar4 = (uint)(uVar1 * 10);
    uVar3 = uVar4 + (byte)(bVar5 - 0x30);
  } while ((char)((char)(uVar1 * 10 >> 0x10) + CARRY2(uVar4,(uint)(byte)(bVar5 - 0x30))) == '\0');
  while( true ) {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if ((0x39 < bVar5) || (bVar5 < 0x30)) break;
    uVar3 = uVar3 * 10 + (uint)(byte)(bVar5 - 0x30);
  }
LAB_1000_3ea3:
  if (bVar2) {
    uVar3 = -uVar3;
  }
  return uVar3;
}



// Function: FUN_1000_3eb3 @ 1000:3eb3

void __cdecl16far FUN_1000_3eb3(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_3e3e(param_1,param_2);
  return;
}



// Function: FUN_1000_3ec4 @ 1000:3ec4

void __cdecl16far FUN_1000_3ec4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_1000_3ed4 @ 1000:3ed4

undefined2 __cdecl16far FUN_1000_3ed4(void)

{
  code *pcVar1;
  undefined1 in_CF;
  undefined2 in_stack_0000000a;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    in_stack_0000000a = FUN_1000_1454();
  }
  return in_stack_0000000a;
}



// Function: FUN_1000_3ef1 @ 1000:3ef1

void __cdecl16far FUN_1000_3ef1(uint param_1)

{
  undefined2 unaff_DS;
  
  if (param_1 < *(uint *)0x4584) {
    *(undefined2 *)(param_1 * 2 + 0x4586) = 0;
    FUN_1000_3f19(param_1);
  }
  else {
    FUN_1000_1454(6);
  }
  return;
}



// Function: FUN_1000_3f19 @ 1000:3f19

undefined2 __cdecl16far FUN_1000_3f19(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_1000_1454();
  }
  else {
    *(undefined2 *)(param_1 * 2 + 0x4586) = 0;
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000_3f37 @ 1000:3f37

int __cdecl16far FUN_1000_3f37(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  int local_6;
  
  uVar3 = 5;
  local_6 = 0x4458;
  iVar2 = 0;
  if (5 < *(uint *)0x4584) {
    do {
      if (-1 < *(char *)(local_6 + 4)) {
        iVar1 = FUN_1000_407f();
        if (iVar1 == 0) {
          iVar2 = iVar2 + 1;
        }
        else {
          iVar2 = -9999;
        }
      }
      local_6 = local_6 + 0x14;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)0x4584);
  }
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



// Function: FUN_1000_3f8d @ 1000:3f8d

int FUN_1000_3f8d(undefined2 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_BP;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  iVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    iVar2 = FUN_1000_1454(iVar2);
  }
  else {
    *(undefined2 *)(iVar2 * 2 + 0x4586) = param_1;
  }
  return iVar2;
}



// Function: FUN_1000_3fba @ 1000:3fba

void __cdecl16far FUN_1000_3fba(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  FUN_1000_3f8d(0x8004,0x3c,param_3,param_1,param_2);
  return;
}



// Function: FUN_1000_3fd2 @ 1000:3fd2

void __cdecl16far FUN_1000_3fd2(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  
  FUN_1000_3f8d(*(uint *)0x45ae | 4,0x5a,param_3,param_1,param_2);
  return;
}



// Function: FUN_1000_3fed @ 1000:3fed

void __cdecl16far FUN_1000_3fed(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  
  FUN_1000_3f8d(*(uint *)0x45ae | 4,0x5b,param_3,param_1,param_2);
  return;
}



// Function: FUN_1000_4008 @ 1000:4008

/* WARNING: Removing unreachable block (ram,0x0001406c) */

undefined2 __cdecl16far FUN_1000_4008(uint param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  bool bVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined2 uVar6;
  
  if (param_1 < *(uint *)0x4584) {
    bVar2 = false;
    if ((*(uint *)(param_1 * 2 + 0x4586) & 0x200) != 0) {
      return 1;
    }
    pcVar1 = (code *)swi(0x21);
    uVar3 = (*pcVar1)();
    uVar6 = (undefined2)uVar3;
    if (!bVar2) {
      if ((uVar3 & 0x800000) != 0) {
        return 0;
      }
      bVar2 = false;
      pcVar1 = (code *)swi(0x21);
      uVar4 = (*pcVar1)();
      uVar6 = (undefined2)uVar4;
      if (!bVar2) {
        bVar2 = false;
        pcVar1 = (code *)swi(0x21);
        uVar3 = (*pcVar1)((int)((ulong)uVar4 >> 0x10));
        uVar6 = (undefined2)uVar3;
        if (!bVar2) {
          pcVar1 = (code *)swi(0x21);
          uVar5 = (*pcVar1)();
          uVar6 = (undefined2)uVar5;
          if (!bVar2) {
            if (uVar5 < uVar3) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
  }
  else {
    uVar6 = 6;
  }
  uVar6 = FUN_1000_1454(uVar6);
  return uVar6;
}



// Function: FUN_1000_407f @ 1000:407f

undefined2 FUN_1000_407f(undefined2 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  uVar3 = 0xffff;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  piVar2 = (int *)param_2;
  if ((int *)piVar2[9] != piVar2) {
    uVar3 = FUN_1000_4125();
    return uVar3;
  }
  if (piVar2[3] != 0) {
    if ((*param_2 < 0) && (iVar1 = FUN_1000_4169(piVar2,uVar4), iVar1 != 0)) {
      return 0xffff;
    }
    if ((piVar2[1] & 4U) != 0) {
      FUN_1000_2b47(piVar2[4],piVar2[5]);
    }
  }
  if (-1 < (char)piVar2[2]) {
    uVar3 = FUN_1000_3ef1((int)(char)piVar2[2]);
  }
  piVar2[1] = 0;
  piVar2[3] = 0;
  *param_2 = 0;
  *(undefined1 *)(piVar2 + 2) = 0xff;
  if (piVar2[8] != 0) {
    uVar5 = FUN_1000_157b(piVar2[8],0,0,0,0);
    FUN_1000_1f92(uVar5);
    piVar2[8] = 0;
  }
  return uVar3;
}



// Function: FUN_1000_4125 @ 1000:4125

void __cdecl16far FUN_1000_4125(void)

{
  return;
}



// Function: FUN_1000_412a @ 1000:412a

undefined2 __cdecl16far FUN_1000_412a(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  long lVar2;
  
  if (-1 < param_1) {
    lVar2 = FUN_1000_4555();
    if (lVar2 != 0) {
      *(undefined1 *)((int)lVar2 + 4) = (undefined1)param_1;
      uVar1 = FUN_1000_4486(0,param_2,param_3,0,0,lVar2);
      return uVar1;
    }
  }
  return 0;
}



// Function: FUN_1000_4169 @ 1000:4169

undefined2 __cdecl16far FUN_1000_4169(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((int *)param_1 == (int *)0x0 && param_1._2_2_ == 0) {
    FUN_1000_4332();
  }
  else {
    if ((int *)((int *)param_1)[9] != (int *)param_1) {
      return 0xffff;
    }
    if (*param_1 < 0) {
      iVar2 = ((int *)param_1)[3] + *param_1 + 1;
      *param_1 = *param_1 - iVar2;
      iVar3 = ((int *)param_1)[5];
      iVar1 = ((int *)param_1)[4];
      ((int *)param_1)[7] = iVar3;
      ((int *)param_1)[6] = iVar1;
      iVar3 = FUN_1000_6135((int)(char)((int *)param_1)[2],iVar1,iVar3,iVar2);
      if ((iVar3 != iVar2) && ((((int *)param_1)[1] & 0x200U) == 0)) {
        ((int *)param_1)[1] = ((int *)param_1)[1] | 0x10;
        return 0xffff;
      }
    }
    else if (((((int *)param_1)[1] & 8U) != 0) ||
            ((((int *)param_1)[7] == param_1._2_2_ &&
             (((int *)param_1)[6] == (int)(int *)param_1 + 5)))) {
      *param_1 = 0;
      if ((((int *)param_1)[7] == param_1._2_2_) && (((int *)param_1)[6] == (int)(int *)param_1 + 5)
         ) {
        iVar3 = ((int *)param_1)[4];
        ((int *)param_1)[7] = ((int *)param_1)[5];
        ((int *)param_1)[6] = iVar3;
      }
    }
  }
  return 0;
}



// Function: FUN_1000_4236 @ 1000:4236

undefined1 * __cdecl16far FUN_1000_4236(undefined1 *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int *piVar4;
  undefined2 uVar5;
  undefined4 local_6;
  
  uVar3 = 0;
  local_6 = (undefined1 *)CONCAT22(param_2,param_1);
  while( true ) {
    piVar4 = (int *)param_4;
    uVar5 = (undefined2)((ulong)param_4 >> 0x10);
    if ((uVar3 == 10) || (param_3 + -1 == 0 || param_3 < 1)) break;
    iVar1 = *param_4;
    *param_4 = *param_4 + -1;
    if (SBORROW2(iVar1,1) == *param_4 < 0) {
      iVar1 = piVar4[7];
      pbVar2 = (byte *)piVar4[6];
      piVar4[6] = piVar4[6] + 1;
      uVar3 = (uint)*pbVar2;
    }
    else {
      uVar3 = FUN_1000_4a0d(piVar4,uVar5);
    }
    if (uVar3 == 0xffff) break;
    *local_6 = (char)uVar3;
    local_6 = (undefined1 *)CONCAT22(local_6._2_2_,(undefined1 *)local_6 + 1);
    param_3 = param_3 + -1;
  }
  if (((uVar3 == 0xffff) && (local_6._2_2_ == param_2)) && ((undefined1 *)local_6 == param_1)) {
    param_1 = (undefined1 *)0x0;
  }
  else {
    *local_6 = 0;
    if ((piVar4[1] & 0x10U) != 0) {
      param_1 = (undefined1 *)0x0;
    }
  }
  return param_1;
}



// Function: FUN_1000_42d2 @ 1000:42d2

undefined2 __cdecl16far FUN_1000_42d2(void)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  byte in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar3 = (uint)(in_CF & 1);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000_1454();
  }
  return uVar2;
}



// Function: FUN_1000_4305 @ 1000:4305

undefined2 __cdecl16far FUN_1000_4305(void)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  byte in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  uVar3 = (uint)(in_CF & 1);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000_1454();
  }
  return uVar2;
}



// Function: FUN_1000_4332 @ 1000:4332

int __cdecl16far FUN_1000_4332(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  iVar2 = 0;
  local_6 = 0x43f4;
  iVar1 = *(int *)0x4584;
  while (iVar1 != 0) {
    if ((*(uint *)(local_6 + 2) & 3) != 0) {
      FUN_1000_4169(local_6,unaff_DS);
      iVar2 = iVar2 + 1;
    }
    local_6 = local_6 + 0x14;
    iVar1 = iVar1 + -1;
  }
  return iVar2;
}



// Function: FUN_1000_4374 @ 1000:4374

void __cdecl16far
FUN_1000_4374(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,
             undefined2 param_9,undefined2 param_10)

{
  FUN_1000_4c1d(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



// Function: FUN_1000_439f @ 1000:439f

void __cdecl16far FUN_1000_439f(void)

{
  FUN_1000_5633();
  return;
}



// Function: FUN_1000_43ca @ 1000:43ca

uint FUN_1000_43ca(undefined2 *param_1,uint *param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  
  pcVar2 = param_3;
  uVar6 = 0;
  pcVar1 = (char *)param_3;
  param_3 = (char *)CONCAT22(param_3._2_2_,(char *)param_3 + 1);
  cVar3 = *pcVar2;
  if (cVar3 == 'r') {
    uVar4 = 1;
    uVar5 = 1;
  }
  else {
    if (cVar3 == 'w') {
      uVar4 = 0x302;
    }
    else {
      if (cVar3 != 'a') {
        return 0;
      }
      uVar4 = 0x902;
    }
    uVar6 = 0x80;
    uVar5 = 2;
  }
  cVar3 = *param_3;
  param_3 = (char *)CONCAT22(param_3._2_2_,pcVar1 + 2);
  if ((cVar3 == '+') || ((*param_3 == '+' && ((cVar3 == 't' || (cVar3 == 'b')))))) {
    if (cVar3 == '+') {
      cVar3 = *param_3;
    }
    uVar4 = uVar4 & 0xfffc | 4;
    uVar6 = 0x180;
    uVar5 = 3;
  }
  if (cVar3 == 't') {
    uVar4 = uVar4 | 0x4000;
  }
  else {
    if (cVar3 == 'b') {
      uVar4 = uVar4 | 0x8000;
    }
    else {
      uVar4 = uVar4 | *(uint *)0x45ae & 0xc000;
      if ((*(uint *)0x45ae & 0x8000) == 0) goto LAB_1000_4466;
    }
    uVar5 = uVar5 | 0x40;
  }
LAB_1000_4466:
  *(undefined2 *)0x43ee = 0;
  *(undefined2 *)0x43ec = 0x62c0;
  *param_2 = uVar4;
  *param_1 = uVar6;
  return uVar5;
}



// Function: FUN_1000_4486 @ 1000:4486

undefined4
FUN_1000_4486(uint param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined2 local_6;
  uint local_4;
  
  iVar2 = FUN_1000_43ca(&local_6,unaff_SS,&local_4,unaff_SS,param_2,param_3);
  uVar4 = (undefined2)((ulong)param_6 >> 0x10);
  iVar3 = (int)param_6;
  *(int *)(iVar3 + 2) = iVar2;
  if (iVar2 == 0) {
LAB_1000_44d4:
    *(undefined1 *)(iVar3 + 4) = 0xff;
    *(undefined2 *)(iVar3 + 2) = 0;
  }
  else {
    if (*(char *)(iVar3 + 4) < '\0') {
      cVar1 = FUN_1000_4df5(param_4,param_5,local_4 | param_1,local_6);
      *(char *)(iVar3 + 4) = cVar1;
      if (cVar1 < '\0') goto LAB_1000_44d4;
    }
    iVar2 = FUN_1000_149f((int)*(char *)(iVar3 + 4));
    if (iVar2 != 0) {
      *(uint *)(iVar3 + 2) = *(uint *)(iVar3 + 2) | 0x200;
    }
    iVar2 = FUN_1000_5461(iVar3,uVar4,0,0,(*(uint *)(iVar3 + 2) & 0x200) != 0,0x200);
    if (iVar2 == 0) {
      *(undefined2 *)(iVar3 + 0x10) = 0;
      goto LAB_1000_454f;
    }
    FUN_1000_407f();
  }
  uVar4 = 0;
  iVar3 = 0;
LAB_1000_454f:
  return CONCAT22(uVar4,iVar3);
}



// Function: FUN_1000_4555 @ 1000:4555

undefined4 __cdecl16near FUN_1000_4555(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  bool bVar2;
  uint local_6;
  
  local_6 = 0x43f4;
  do {
    if (*(char *)(local_6 + 4) < '\0') break;
    uVar1 = local_6 + 0x14;
    bVar2 = local_6 < *(int *)0x4584 * 0x14 + 0x43f4U;
    local_6 = uVar1;
  } while (bVar2);
  if (-1 < *(char *)(local_6 + 4)) {
    unaff_DS = 0;
    local_6 = 0;
  }
  return CONCAT22(unaff_DS,local_6);
}



// Function: FUN_1000_459f @ 1000:459f

undefined2 __cdecl16far
FUN_1000_459f(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  long lVar2;
  
  lVar2 = FUN_1000_4555();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1000_4486(0,param_3,param_4,param_1,param_2,lVar2);
  }
  return uVar1;
}



// Function: FUN_1000_45d4 @ 1000:45d4

void __cdecl16far
FUN_1000_45d4(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_1000_1fc2(&stack0x000c,param_3,param_4,param_1,param_2,0x5191);
  return;
}



// Function: FUN_1000_45f0 @ 1000:45f0

uint FUN_1000_45f0(int *param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;
  byte *pbVar2;
  uint in_DX;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  
  do {
    while( true ) {
      if (param_2 == 0) {
        return 0;
      }
      uVar4 = param_2 + 1;
      uVar6 = (undefined2)((ulong)param_1 >> 0x10);
      piVar3 = (int *)param_1;
      uVar5 = uVar4;
      if ((uint)piVar3[3] <= uVar4) {
        uVar5 = piVar3[3];
      }
      if (((((piVar3[1] & 0x40U) == 0) || (piVar3[3] == 0)) || (uVar4 <= (uint)piVar3[3])) ||
         (*param_1 != 0)) break;
      uVar4 = 0;
      for (; (uint)piVar3[3] <= param_2; param_2 = param_2 - piVar3[3]) {
        uVar4 = uVar4 + piVar3[3];
      }
      in_DX = FUN_1000_16ba((int)(char)piVar3[2],(undefined1 *)param_3,param_3._2_2_,uVar4);
      param_3 = (undefined1 *)CONCAT22(param_3._2_2_,(undefined1 *)param_3 + in_DX);
      if (in_DX != uVar4) {
        param_2 = param_2 + (uVar4 - in_DX);
        goto LAB_1000_467c;
      }
    }
    while ((param_2 = uVar4, param_2 = param_2 - 1, param_2 != 0 && (uVar5 = uVar5 - 1, uVar5 != 0))
          ) {
      iVar1 = *param_1;
      *param_1 = *param_1 + -1;
      if (SBORROW2(iVar1,1) == *param_1 < 0) {
        iVar1 = piVar3[7];
        pbVar2 = (byte *)piVar3[6];
        piVar3[6] = piVar3[6] + 1;
        in_DX = (uint)*pbVar2;
      }
      else {
        in_DX = FUN_1000_4a0d(piVar3,uVar6);
      }
      if (in_DX == 0xffff) break;
      *param_3 = (char)in_DX;
      param_3 = (undefined1 *)CONCAT22(param_3._2_2_,(undefined1 *)param_3 + 1);
      uVar4 = param_2;
    }
  } while (in_DX != 0xffff);
LAB_1000_467c:
  piVar3[1] = piVar3[1] | 0x20;
  return param_2;
}



// Function: FUN_1000_46e4 @ 1000:46e4

uint __cdecl16far
FUN_1000_46e4(undefined2 param_1,undefined2 param_2,uint param_3,int param_4,undefined2 param_5,
             undefined2 param_6)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    uVar3 = FUN_1000_162f();
    if ((uVar3 < 0x20000) && ((int)(uVar3 >> 0x10) == 0)) {
      iVar1 = FUN_1000_45f0(param_5,param_6,(int)uVar3,param_1,param_2);
      param_3 = (uint)((int)uVar3 - iVar1) / param_3;
    }
    else {
      iVar1 = param_4 + 1;
      while ((iVar1 = iVar1 + -1, iVar1 != 0 &&
             (iVar2 = FUN_1000_45f0(param_5,param_6,param_3,param_1,param_2), iVar2 == 0))) {
        param_1 = FUN_1000_13f4();
      }
      param_3 = param_4 - iVar1;
    }
  }
  return param_3;
}



// Function: FUN_1000_4772 @ 1000:4772

int FUN_1000_4772(uint *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  undefined2 uVar8;
  undefined4 local_6;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (uint *)param_1;
  if ((int)*param_1 < 0) {
    iVar2 = puVar6[3] + *param_1 + 1;
  }
  else {
    uVar5 = (int)*param_1 >> 0xf;
    iVar2 = (*param_1 ^ uVar5) - uVar5;
  }
  iVar7 = iVar2;
  if ((puVar6[1] & 0x40) == 0) {
    local_6 = (char *)CONCAT22(puVar6[7],(char *)puVar6[6]);
    iVar3 = iVar2;
    if ((int)*param_1 < 0) {
      while (iVar3 = iVar2 + -1, iVar2 != 0) {
        local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + -1);
        iVar2 = iVar3;
        if (*local_6 == '\n') {
          iVar7 = iVar7 + 1;
        }
      }
    }
    else {
      while (pcVar1 = local_6, iVar4 = iVar3 + -1, iVar7 = iVar2, iVar3 != 0) {
        local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
        iVar3 = iVar4;
        if (*pcVar1 == '\n') {
          iVar2 = iVar2 + 1;
        }
      }
    }
  }
  return iVar7;
}



// Function: FUN_1000_47f4 @ 1000:47f4

undefined2 __cdecl16far FUN_1000_47f4(int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = FUN_1000_4169((int *)param_1,param_1._2_2_);
  if (iVar1 == 0) {
    if ((param_4 == 1) && (0 < *param_1)) {
      uVar3 = FUN_1000_4772((int *)param_1,param_1._2_2_);
      bVar5 = param_2 < uVar3;
      param_2 = param_2 - uVar3;
      param_3 = (param_3 - ((int)uVar3 >> 0xf)) - (uint)bVar5;
    }
    ((int *)param_1)[1] = ((int *)param_1)[1] & 0xfe5f;
    *param_1 = 0;
    iVar1 = ((int *)param_1)[4];
    ((int *)param_1)[7] = ((int *)param_1)[5];
    ((int *)param_1)[6] = iVar1;
    iVar4 = FUN_1000_1552((int)(char)((int *)param_1)[2],param_2,param_3,param_4);
    if ((iVar1 == -1) && (iVar4 == -1)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}



// Function: FUN_1000_4874 @ 1000:4874

int __cdecl16far FUN_1000_4874(int *param_1)

{
  int iVar1;
  int in_DX;
  int *piVar2;
  undefined2 uVar3;
  int local_6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  piVar2 = (int *)param_1;
  local_6 = FUN_1000_1f4e((int)(char)piVar2[2]);
  if ((in_DX != -1) || (local_6 != -1)) {
    if (*param_1 < 0) {
      iVar1 = FUN_1000_4772(piVar2,uVar3);
      local_6 = local_6 + iVar1;
    }
    else {
      iVar1 = FUN_1000_4772(piVar2,uVar3);
      local_6 = local_6 - iVar1;
    }
  }
  return local_6;
}



// Function: FUN_1000_48cc @ 1000:48cc

uint __cdecl16far
FUN_1000_48cc(undefined2 param_1,undefined2 param_2,uint param_3,uint param_4,undefined2 param_5,
             undefined2 param_6)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    uVar3 = FUN_1000_162f();
    if ((uVar3 < 0x20000) && ((int)(uVar3 >> 0x10) == 0)) {
      param_4 = FUN_1000_5191(param_5,param_6,(int)uVar3,param_1,param_2);
      param_4 = param_4 / param_3;
    }
    else {
      uVar2 = 0;
      if (param_4 != 0) {
        do {
          uVar1 = FUN_1000_5191(param_5,param_6,param_3,param_1,param_2);
          if (uVar1 != param_3) {
            return uVar2;
          }
          param_1 = FUN_1000_13f4();
          uVar2 = uVar2 + 1;
        } while (uVar2 < param_4);
      }
    }
  }
  return param_4;
}



// Function: FUN_1000_4957 @ 1000:4957

void __cdecl16near FUN_1000_4957(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  local_6 = 0x43f4;
  iVar1 = 0x14;
  while (iVar1 != 0) {
    if ((*(uint *)(local_6 + 2) & 0x300) == 0x300) {
      FUN_1000_4169(local_6,unaff_DS);
    }
    local_6 = local_6 + 0x14;
    iVar1 = iVar1 + -1;
  }
  return;
}



// Function: FUN_1000_4995 @ 1000:4995

undefined2 FUN_1000_4995(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  piVar4 = (int *)param_1;
  if ((piVar4[1] & 0x200U) != 0) {
    FUN_1000_4957();
  }
  iVar3 = piVar4[3];
  iVar1 = piVar4[5];
  iVar2 = piVar4[4];
  piVar4[7] = iVar1;
  piVar4[6] = iVar2;
  iVar3 = FUN_1000_5390((int)(char)piVar4[2],iVar2,iVar1,iVar3);
  *param_1 = iVar3;
  if (iVar3 < 1) {
    if (*param_1 == 0) {
      piVar4[1] = piVar4[1] & 0xfe7fU | 0x20;
    }
    else {
      *param_1 = 0;
      piVar4[1] = piVar4[1] | 0x10;
    }
    uVar5 = 0xffff;
  }
  else {
    piVar4[1] = piVar4[1] & 0xffdf;
    uVar5 = 0;
  }
  return uVar5;
}



// Function: FUN_1000_4a0d @ 1000:4a0d

void __cdecl16far FUN_1000_4a0d(int *param_1)

{
  *param_1 = *param_1 + 1;
  FUN_1000_4a25((int *)param_1,param_1._2_2_);
  return;
}



// Function: FUN_1000_4a25 @ 1000:4a25

uint __cdecl16far FUN_1000_4a25(int *param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if ((int *)param_1 == (int *)0x0 && param_1._2_2_ == 0) {
    return 0xffff;
  }
  if (*param_1 < 1) {
    if (((*param_1 < 0) || ((((int *)param_1)[1] & 0x110U) != 0)) ||
       ((((int *)param_1)[1] & 1U) == 0)) {
LAB_1000_4ad2:
      ((int *)param_1)[1] = ((int *)param_1)[1] | 0x10;
      return 0xffff;
    }
    ((int *)param_1)[1] = ((int *)param_1)[1] | 0x80;
    if (((int *)param_1)[3] == 0) {
      do {
        if ((((int *)param_1)[1] & 0x200U) != 0) {
          FUN_1000_4957();
        }
        iVar3 = FUN_1000_5390((int)(char)((int *)param_1)[2],0x7810);
        if (iVar3 == 0) {
          iVar3 = FUN_1000_4008((int)(char)((int *)param_1)[2]);
          if (iVar3 == 1) {
            ((int *)param_1)[1] = ((int *)param_1)[1] & 0xfe7fU | 0x20;
            return 0xffff;
          }
          goto LAB_1000_4ad2;
        }
      } while ((*(char *)0x7810 == '\r') && ((((int *)param_1)[1] & 0x40U) == 0));
      ((int *)param_1)[1] = ((int *)param_1)[1] & 0xffdf;
      bVar2 = *(byte *)0x7810;
      goto LAB_1000_4b0e;
    }
    iVar3 = FUN_1000_4995((int *)param_1,param_1._2_2_);
    if (iVar3 != 0) {
      return 0xffff;
    }
  }
  *param_1 = *param_1 + -1;
  iVar3 = ((int *)param_1)[7];
  pbVar1 = (byte *)((int *)param_1)[6];
  ((int *)param_1)[6] = ((int *)param_1)[6] + 1;
  bVar2 = *pbVar1;
LAB_1000_4b0e:
  return (uint)bVar2;
}



// Function: FUN_1000_4b1f @ 1000:4b1f

int __cdecl16far FUN_1000_4b1f(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int in_DX;
  undefined2 unaff_DS;
  char local_46 [68];
  
  local_46[0] = FUN_1000_1274();
  local_46[0] = local_46[0] + 'A';
  local_46[1] = 0x3a;
  local_46[2] = 0x5c;
  iVar1 = FUN_1000_1231(0,local_46 + 3);
  if (iVar1 != -1) {
    uVar2 = FUN_1000_5a36(local_46);
    if (uVar2 < param_3) {
      if ((param_1 != 0 || param_2 != 0) ||
         (param_1 = FUN_1000_2c51(param_3), param_2 = in_DX, param_1 != 0 || in_DX != 0)) {
        FUN_1000_59cc(param_1,param_2,local_46);
        return param_1;
      }
      *(undefined2 *)0x7f = 8;
    }
    else {
      *(undefined2 *)0x7f = 0x22;
    }
  }
  return 0;
}



// Function: FUN_1000_4bad @ 1000:4bad

char * __cdecl16far FUN_1000_4bad(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 unaff_DS;
  bool bVar12;
  undefined4 *local_6;
  
  iVar9 = (int)((ulong)param_1 >> 0x10);
  pcVar7 = (char *)param_1;
  if (iVar9 != 0 || pcVar7 != (char *)0x0) {
    uVar3 = 0xffff;
    pcVar8 = pcVar7;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar1 = pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (*pcVar1 != '\0');
    iVar4 = ~uVar3 - 1;
    if (iVar4 != 0) {
      iVar10 = (int)((ulong)*(undefined4 *)0x476a >> 0x10);
      local_6 = (undefined4 *)(undefined4 *)*(undefined4 *)0x476a;
      if (iVar10 != 0 || local_6 != (undefined4 *)0x0) {
        while( true ) {
          pcVar1 = (char *)*local_6;
          iVar11 = (int)((ulong)pcVar1 >> 0x10);
          pcVar8 = (char *)pcVar1;
          if ((iVar11 == 0 && pcVar8 == (char *)0x0) || (*pcVar1 == '\0')) break;
          if ((*param_1 == *pcVar1) && (pcVar8[iVar4] == '=')) {
            bVar12 = true;
            iVar5 = iVar4;
            pcVar6 = pcVar7;
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              pcVar2 = pcVar8;
              pcVar8 = pcVar8 + 1;
              pcVar1 = pcVar6;
              pcVar6 = pcVar6 + 1;
              bVar12 = *pcVar1 == *pcVar2;
            } while (bVar12);
            if (bVar12) {
              return pcVar8 + 1;
            }
          }
          local_6 = local_6 + 1;
        }
      }
    }
  }
  return (char *)0x0;
}



// Function: FUN_1000_4c1d @ 1000:4c1d

void __cdecl16far
FUN_1000_4c1d(char *param_1,char *param_2,char *param_3,int param_4,int param_5,char *param_6)

{
  char *pcVar1;
  undefined2 in_DX;
  
  if (((char *)param_2 != (char *)0x0 || param_2._2_2_ != 0) && (*param_2 != '\0')) {
    *param_1 = *param_2;
    pcVar1 = (char *)param_1;
    param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    *param_1 = ':';
    param_1 = (char *)CONCAT22(param_1._2_2_,pcVar1 + 2);
  }
  if (((char *)param_3 != (char *)0x0 || param_3._2_2_ != 0) && (*param_3 != '\0')) {
    pcVar1 = (char *)FUN_1000_251f((char *)param_1,param_1._2_2_,(char *)param_3,param_3._2_2_);
    param_1 = (char *)CONCAT22(in_DX,pcVar1);
    if ((pcVar1[-1] != '\\') && (pcVar1[-1] != '/')) {
      *param_1 = '\\';
      param_1 = (char *)CONCAT22(in_DX,pcVar1 + 1);
    }
  }
  if (param_4 != 0 || param_5 != 0) {
    pcVar1 = (char *)FUN_1000_251f((char *)param_1,param_1._2_2_,param_4,param_5);
    param_1 = (char *)CONCAT22(in_DX,pcVar1);
  }
  if (((char *)param_6 != (char *)0x0 || param_6._2_2_ != 0) && (*param_6 != '\0')) {
    if (*param_6 != '.') {
      *param_1 = '.';
      param_1 = (char *)CONCAT22(param_1._2_2_,(char *)param_1 + 1);
    }
    pcVar1 = (char *)FUN_1000_251f((char *)param_1,param_1._2_2_,(char *)param_6,param_6._2_2_);
    param_1 = (char *)CONCAT22(in_DX,pcVar1);
  }
  *param_1 = '\0';
  return;
}



// Function: FUN_1000_4cc5 @ 1000:4cc5

void __cdecl16far FUN_1000_4cc5(void)

{
  undefined2 uVar1;
  undefined2 in_DX;
  undefined1 *in_BX;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *in_BX = 0x2e;
  *(int *)(unaff_BP + 6) = *(int *)(unaff_BP + 6) + 1;
  uVar1 = FUN_1000_251f(*(undefined2 *)(unaff_BP + 6),*(undefined2 *)(unaff_BP + 8),
                        *(undefined2 *)(unaff_BP + 0x16),*(undefined2 *)(unaff_BP + 0x18));
  *(undefined2 *)(unaff_BP + 8) = in_DX;
  *(undefined2 *)(unaff_BP + 6) = uVar1;
  *(undefined1 *)*(undefined4 *)(unaff_BP + 6) = 0;
  return;
}



// Function: FUN_1000_4cee @ 1000:4cee

undefined2 * __cdecl16far FUN_1000_4cee(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar7 = (undefined2)((ulong)param_2 >> 0x10);
  puVar4 = (undefined2 *)param_2;
  puVar5 = (undefined2 *)param_1;
  for (uVar3 = param_3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  if ((param_3 & 1) != 0) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
  }
  return (undefined2 *)param_1;
}



// Function: FUN_1000_4d12 @ 1000:4d12

void __cdecl16far FUN_1000_4d12(undefined2 *param_1,uint param_2,undefined1 param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar3 = (undefined2 *)param_1;
  if (((ulong)param_1 & 1) != 0) {
    if (param_2 == 0) {
      return;
    }
    puVar3 = (undefined2 *)((int)puVar3 + 1);
    *(undefined1 *)param_1 = param_3;
    param_2 = param_2 - 1;
  }
  for (uVar2 = param_2 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = CONCAT11(param_3,param_3);
  }
  if ((param_2 & 1) != 0) {
    *(undefined1 *)puVar3 = param_3;
  }
  return;
}



// Function: FUN_1000_4d36 @ 1000:4d36

undefined2 __cdecl16far
FUN_1000_4d36(undefined2 param_1,undefined2 param_2,undefined1 param_3,undefined2 param_4)

{
  FUN_1000_4d12(param_1,param_2,param_4,param_3);
  return param_1;
}



// Function: FUN_1000_4d55 @ 1000:4d55

void __cdecl16far FUN_1000_4d55(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  byte in_CF;
  
  FUN_1000_1646();
  uVar5 = (uint)in_CF;
  uVar12 = (undefined2)((ulong)param_1 >> 0x10);
  puVar7 = (undefined1 *)param_1;
  uVar11 = (undefined2)((ulong)param_2 >> 0x10);
  puVar9 = (undefined1 *)param_2;
  if (uVar5 != 0) {
    puVar7 = puVar7 + (param_3 - 1);
    puVar9 = puVar9 + (param_3 - 1);
  }
  if (((uint)puVar9 & 1) != 0) {
    if (param_3 == 0) {
      return;
    }
    puVar3 = puVar9;
    puVar9 = puVar9 + (uint)in_CF * -2 + 1;
    puVar1 = puVar7;
    puVar7 = puVar7 + (uint)in_CF * -2 + 1;
    *puVar3 = *puVar1;
    param_3 = param_3 - 1;
  }
  puVar8 = (undefined2 *)(puVar7 + -uVar5);
  puVar10 = (undefined2 *)(puVar9 + -uVar5);
  for (uVar6 = param_3 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
    puVar4 = puVar10;
    puVar10 = puVar10 + (uint)in_CF * -2 + 1;
    puVar2 = puVar8;
    puVar8 = puVar8 + (uint)in_CF * -2 + 1;
    *puVar4 = *puVar2;
  }
  if ((param_3 & 1) != 0) {
    *(undefined1 *)((int)puVar10 + uVar5) = *(undefined1 *)((int)puVar8 + uVar5);
  }
  return;
}



// Function: FUN_1000_4da7 @ 1000:4da7

undefined2 __cdecl16far
FUN_1000_4da7(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  FUN_1000_4d55(param_3,param_4,param_1,param_2,param_5);
  return param_1;
}



// Function: FUN_1000_4dc8 @ 1000:4dc8

void FUN_1000_4dc8(void)

{
  code *pcVar1;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1000_1454();
  }
  return;
}



// Function: FUN_1000_4de3 @ 1000:4de3

void FUN_1000_4de3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}



// Function: FUN_1000_4df5 @ 1000:4df5

int __cdecl16far FUN_1000_4df5(undefined2 param_1,undefined2 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  undefined2 uVar5;
  uint local_4;
  
  if ((param_3 & 0xc000) == 0) {
    param_3 = param_3 | *(uint *)0x45ae & 0xc000;
  }
  local_4 = FUN_1000_3ed4(param_1,param_2,0);
  if ((param_3 & 0x100) != 0) {
    uVar3 = *(uint *)0x45b0;
    if ((param_4 & uVar3 & 0x180) == 0) {
      FUN_1000_1454(1);
    }
    if (local_4 == 0xffff) {
      if (*(int *)0x45b4 != 2) {
        uVar5 = *(undefined2 *)0x45b4;
LAB_1000_4e51:
        iVar2 = FUN_1000_1454(uVar5);
        return iVar2;
      }
      local_4 = (uint)((param_4 & uVar3 & 0x80) == 0);
      if ((param_3 & 0xf0) == 0) {
        iVar2 = FUN_1000_4dc8(local_4,param_1,param_2);
        if (iVar2 < 0) {
          return iVar2;
        }
        goto LAB_1000_4f29;
      }
      iVar2 = FUN_1000_4dc8(0,param_1,param_2);
      if (iVar2 < 0) {
        return iVar2;
      }
      FUN_1000_3f19(iVar2);
    }
    else if ((param_3 & 0x400) != 0) {
      uVar5 = 0x50;
      goto LAB_1000_4e51;
    }
  }
  iVar2 = FUN_1000_4f64();
  if (-1 < iVar2) {
    bVar1 = FUN_1000_337c(iVar2,0);
    if ((bVar1 & 0x80) == 0) {
      if ((param_3 & 0x200) != 0) {
        FUN_1000_4de3(iVar2);
      }
    }
    else {
      uVar4 = param_3 | 0x2000;
      uVar3 = param_3 & 0x8000;
      param_3 = uVar4;
      if (uVar3 != 0) {
        FUN_1000_337c(iVar2,1,bVar1 | 0x20,0);
      }
    }
    if ((((local_4 & 1) != 0) && ((param_3 & 0x100) != 0)) && ((param_3 & 0xf0) != 0)) {
      FUN_1000_3ed4(param_1,param_2,1,1);
    }
  }
LAB_1000_4f29:
  if (-1 < iVar2) {
    if ((param_3 & 0x300) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x1000;
    }
    if ((local_4 & 1) == 0) {
      uVar4 = 0x100;
    }
    else {
      uVar4 = 0;
    }
    *(uint *)(iVar2 * 2 + 0x4586) = param_3 & 0xf8ff | uVar3 | uVar4;
  }
  return iVar2;
}



// Function: FUN_1000_4f64 @ 1000:4f64

void FUN_1000_4f64(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_BP;
  bool bVar3;
  uint in_stack_00000008;
  
  bVar3 = false;
  pcVar1 = (code *)swi(0x21);
  iVar2 = (*pcVar1)();
  if (bVar3) {
    FUN_1000_1454(iVar2);
    return;
  }
  *(uint *)(iVar2 * 2 + 0x4586) = in_stack_00000008 & 0xb8ff | 0x8000;
  FUN_1000_4faf();
  return;
}



// Function: FUN_1000_4faf @ 1000:4faf

void __cdecl16far FUN_1000_4faf(void)

{
  return;
}



// Function: FUN_1000_4fb3 @ 1000:4fb3

void __cdecl16far FUN_1000_4fb3(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_1fc2(&stack0x0008,param_1,param_2,0x4408);
  return;
}



// Function: FUN_1000_4fce @ 1000:4fce

void __cdecl16far FUN_1000_4fce(char param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  FUN_1000_4fea((int)param_1,(int *)param_2,param_2._2_2_);
  return;
}



// Function: FUN_1000_4fea @ 1000:4fea

uint __cdecl16far FUN_1000_4fea(undefined1 param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  *(undefined1 *)0x7812 = param_1;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  piVar3 = (int *)param_2;
  if (*param_2 < -1) {
    *param_2 = *param_2 + 1;
    iVar2 = piVar3[7];
    puVar1 = (undefined1 *)piVar3[6];
    piVar3[6] = piVar3[6] + 1;
    *puVar1 = *(undefined1 *)0x7812;
    if (((piVar3[1] & 8U) == 0) || ((*(char *)0x7812 != '\n' && (*(char *)0x7812 != '\r'))))
    goto LAB_1000_5175;
    iVar2 = FUN_1000_4169(piVar3,uVar4);
joined_r0x00015043:
    if (iVar2 == 0) {
LAB_1000_5175:
      return (uint)*(byte *)0x7812;
    }
  }
  else {
    if (((piVar3[1] & 0x90U) == 0) && ((piVar3[1] & 2U) != 0)) {
      piVar3[1] = piVar3[1] | 0x100;
      if (piVar3[3] != 0) {
        if ((*param_2 != 0) && (iVar2 = FUN_1000_4169(piVar3,uVar4), iVar2 != 0)) {
          return 0xffff;
        }
        *param_2 = -piVar3[3];
        iVar2 = piVar3[7];
        puVar1 = (undefined1 *)piVar3[6];
        piVar3[6] = piVar3[6] + 1;
        *puVar1 = *(undefined1 *)0x7812;
        if (((piVar3[1] & 8U) == 0) || ((*(char *)0x7812 != '\n' && (*(char *)0x7812 != '\r'))))
        goto LAB_1000_5175;
        iVar2 = FUN_1000_4169(piVar3,uVar4);
        goto joined_r0x00015043;
      }
      if ((*(uint *)((char)piVar3[2] * 2 + 0x4586) & 0x800) != 0) {
        FUN_1000_1552((int)(char)piVar3[2],0,0,2);
      }
      if (((((*(char *)0x7812 != '\n') || ((piVar3[1] & 0x40U) != 0)) ||
           (iVar2 = FUN_1000_6284((int)(char)piVar3[2],0x4796), iVar2 == 1)) &&
          (iVar2 = FUN_1000_6284((int)(char)piVar3[2],0x7812), iVar2 == 1)) ||
         ((piVar3[1] & 0x200U) != 0)) goto LAB_1000_5175;
    }
    piVar3[1] = piVar3[1] | 0x10;
  }
  return 0xffff;
}



// Function: FUN_1000_517d @ 1000:517d

void __cdecl16far FUN_1000_517d(undefined2 param_1)

{
  FUN_1000_4fea(param_1,0x4408);
  return;
}



// Function: FUN_1000_5191 @ 1000:5191

/* WARNING: Type propagation algorithm not settling */

uint FUN_1000_5191(int *param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  piVar7 = (int *)param_1;
  uVar6 = param_2;
  if ((piVar7[1] & 8U) == 0) {
    if ((piVar7[1] & 0x40U) == 0) {
      if (piVar7[3] != 0) {
        do {
          if (uVar6 == 0) {
            return param_2;
          }
          iVar4 = *param_1;
          *param_1 = *param_1 + 1;
          if (SCARRY2(iVar4,1) == *param_1 < 0) {
            uVar5 = FUN_1000_4fce(*param_3,piVar7,uVar8);
          }
          else {
            iVar4 = piVar7[7];
            pbVar2 = (byte *)piVar7[6];
            piVar7[6] = piVar7[6] + 1;
            bVar1 = *param_3;
            *pbVar2 = bVar1;
            uVar5 = (uint)bVar1;
          }
          param_3 = (byte *)CONCAT22(param_3._2_2_,(byte *)param_3 + 1);
          uVar6 = uVar6 - 1;
        } while (uVar5 != 0xffff);
        return 0;
      }
      uVar6 = FUN_1000_6135((int)(char)piVar7[2],(byte *)param_3,param_3._2_2_,param_2);
    }
    else if (piVar7[3] == 0) {
      if ((*(uint *)((char)piVar7[2] * 2 + 0x4586) & 0x800) != 0) {
        FUN_1000_1552((int)(char)piVar7[2],0,0,2);
      }
      uVar6 = FUN_1000_6284((int)(char)piVar7[2],(byte *)param_3,param_3._2_2_,param_2);
    }
    else {
      if (param_2 <= (uint)piVar7[3]) {
        if (SCARRY2(*param_1,param_2) == (int)(*param_1 + param_2) < 0) {
          if (*param_1 == 0) {
            *param_1 = -1 - piVar7[3];
          }
          else {
            iVar4 = FUN_1000_4169(piVar7,uVar8);
            if (iVar4 != 0) {
              return 0;
            }
          }
        }
        FUN_1000_4cee(piVar7[6],piVar7[7],(byte *)param_3,param_3._2_2_,param_2);
        *param_1 = *param_1 + param_2;
        piVar7[6] = piVar7[6] + param_2;
        return param_2;
      }
      if ((*param_1 != 0) && (iVar4 = FUN_1000_4169(piVar7,uVar8), iVar4 != 0)) {
        return 0;
      }
      if ((*(uint *)((char)piVar7[2] * 2 + 0x4586) & 0x800) != 0) {
        FUN_1000_1552((int)(char)piVar7[2],0,0,2);
      }
      uVar6 = FUN_1000_6284((int)(char)piVar7[2],(byte *)param_3,param_3._2_2_,param_2);
    }
    if (param_2 <= uVar6) {
      return param_2;
    }
  }
  else {
    do {
      pbVar3 = param_3;
      if (uVar6 == 0) {
        return param_2;
      }
      param_3 = (byte *)CONCAT22(param_3._2_2_,(byte *)param_3 + 1);
      iVar4 = FUN_1000_4fea((int)(char)*pbVar3,piVar7,uVar8);
      uVar6 = uVar6 - 1;
    } while (iVar4 != -1);
  }
  return 0;
}



// Function: FUN_1000_5390 @ 1000:5390

int __cdecl16far FUN_1000_5390(uint param_1,char *param_2,int param_3)

{
  uint *puVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 unaff_DS;
  undefined2 uVar8;
  char local_5;
  int local_4;
  
  if (param_1 < *(uint *)0x4584) {
    if ((param_3 + 1U < 2) || ((*(uint *)(param_1 * 2 + 0x4586) & 0x200) != 0)) {
      iVar4 = 0;
    }
    else {
      do {
        local_4 = FUN_1000_16ba(param_1,(char *)param_2,param_2._2_2_,param_3);
        if (local_4 + 1U < 2) {
          return local_4;
        }
        iVar4 = local_4;
        pcVar6 = (char *)param_2;
        pcVar3 = (char *)param_2;
        if ((*(uint *)(param_1 * 2 + 0x4586) & 0x4000) == 0) {
          return local_4;
        }
        do {
          while( true ) {
            pcVar7 = pcVar3;
            cVar2 = *pcVar6;
            pcVar5 = (char *)param_2;
            if (cVar2 == '\x1a') {
              FUN_1000_1552(param_1,-iVar4,-(uint)(iVar4 != 0),1);
              puVar1 = (uint *)(param_1 * 2 + 0x4586);
              *puVar1 = *puVar1 | 0x200;
              goto LAB_1000_5458;
            }
            if (cVar2 == '\r') break;
            *pcVar7 = cVar2;
            iVar4 = iVar4 + -1;
            pcVar6 = pcVar6 + 1;
            pcVar3 = pcVar7 + 1;
            if (iVar4 == 0) goto LAB_1000_542e;
          }
          iVar4 = iVar4 + -1;
          pcVar6 = pcVar6 + 1;
          pcVar3 = pcVar7;
        } while (iVar4 != 0);
        uVar8 = param_2._2_2_;
        FUN_1000_16ba(param_1,&local_5);
        *pcVar7 = local_5;
LAB_1000_542e:
        pcVar7 = pcVar7 + 1;
      } while (pcVar7 == pcVar5);
LAB_1000_5458:
      iVar4 = (int)pcVar7 - (int)pcVar5;
    }
  }
  else {
    iVar4 = FUN_1000_1454(6);
  }
  return iVar4;
}



// Function: FUN_1000_5461 @ 1000:5461

undefined2 __cdecl16far FUN_1000_5461(int *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  iVar4 = (int)((ulong)param_1 >> 0x10);
  piVar3 = (int *)param_1;
  if ((((int *)piVar3[9] == piVar3) && (param_4 < 3)) && (param_5 < 0x8000)) {
    if ((*(int *)0x479a == 0) && (piVar3 == (int *)0x4408)) {
      *(undefined2 *)0x479a = 1;
    }
    else if ((*(int *)0x4798 == 0) && (piVar3 == (int *)0x43f4)) {
      *(undefined2 *)0x4798 = 1;
    }
    if (*param_1 != 0) {
      FUN_1000_47f4(piVar3,iVar4,0,0,1);
    }
    if ((piVar3[1] & 4U) != 0) {
      FUN_1000_2b47(piVar3[4],piVar3[5]);
    }
    piVar3[1] = piVar3[1] & 0xfff3;
    piVar3[3] = 0;
    iVar2 = (int)piVar3 + 5;
    piVar3[5] = iVar4;
    piVar3[4] = iVar2;
    piVar3[7] = iVar4;
    piVar3[6] = iVar2;
    if ((param_4 != 2) && (param_5 != 0)) {
      *(undefined2 *)0x43ea = 0;
      *(undefined2 *)0x43e8 = 0x62fd;
      if (param_2 == 0 && param_3 == 0) {
        param_2 = FUN_1000_2c51(param_5);
        if (param_2 == 0 && iVar2 == 0) goto LAB_1000_5483;
        piVar3[1] = piVar3[1] | 4;
        param_3 = iVar2;
      }
      piVar3[7] = param_3;
      piVar3[6] = param_2;
      piVar3[5] = param_3;
      piVar3[4] = param_2;
      piVar3[3] = param_5;
      if (param_4 == 1) {
        piVar3[1] = piVar3[1] | 8;
      }
    }
    uVar1 = 0;
  }
  else {
LAB_1000_5483:
    uVar1 = 0xffff;
  }
  return uVar1;
}



// Function: FUN_1000_54d3 @ 1000:54d3

undefined2 __cdecl16far FUN_1000_54d3(void)

{
  uint *puVar1;
  undefined2 uVar2;
  int iVar3;
  int in_BX;
  int iVar4;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if ((*(uint *)(in_BX + 2) & 4) != 0) {
    FUN_1000_2b47(*(undefined2 *)(in_BX + 8),*(undefined2 *)(in_BX + 10));
  }
  uVar5 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10);
  iVar4 = (int)*(undefined4 *)(unaff_BP + 6);
  *(uint *)(iVar4 + 2) = *(uint *)(iVar4 + 2) & 0xfff3;
  *(undefined2 *)(iVar4 + 6) = 0;
  uVar2 = *(undefined2 *)(unaff_BP + 8);
  iVar3 = *(int *)(unaff_BP + 6) + 5;
  *(undefined2 *)(iVar4 + 10) = uVar2;
  *(int *)(iVar4 + 8) = iVar3;
  *(undefined2 *)(iVar4 + 0xe) = uVar2;
  *(int *)(iVar4 + 0xc) = iVar3;
  if ((unaff_DI != 2) && (unaff_SI != 0)) {
    *(undefined2 *)0x43ea = 0;
    *(undefined2 *)0x43e8 = 0x62fd;
    if (*(int *)(unaff_BP + 10) == 0 && *(int *)(unaff_BP + 0xc) == 0) {
      iVar4 = FUN_1000_2c51();
      *(int *)(unaff_BP + 0xc) = iVar3;
      *(int *)(unaff_BP + 10) = iVar4;
      if (iVar4 == 0 && iVar3 == 0) {
        return 0xffff;
      }
      puVar1 = (uint *)((int)*(undefined4 *)(unaff_BP + 6) + 2);
      *puVar1 = *puVar1 | 4;
    }
    uVar6 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + 6) >> 0x10);
    iVar3 = (int)*(undefined4 *)(unaff_BP + 6);
    uVar2 = *(undefined2 *)(unaff_BP + 0xc);
    uVar5 = *(undefined2 *)(unaff_BP + 10);
    *(undefined2 *)(iVar3 + 0xe) = uVar2;
    *(undefined2 *)(iVar3 + 0xc) = uVar5;
    *(undefined2 *)(iVar3 + 10) = uVar2;
    *(undefined2 *)(iVar3 + 8) = uVar5;
    *(int *)(iVar3 + 6) = unaff_SI;
    if (unaff_DI == 1) {
      *(uint *)(iVar3 + 2) = *(uint *)(iVar3 + 2) | 8;
    }
  }
  return 0;
}



// Function: FUN_1000_557c @ 1000:557c

void FUN_1000_557c(uint param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if ((int)param_4 != 0 || param_4._2_2_ != 0) {
    uVar1 = FUN_1000_5a36(param_2,param_3);
    if (uVar1 < param_1) {
      FUN_1000_59cc((int)param_4,param_4._2_2_,param_2,param_3);
    }
    else {
      FUN_1000_5a79((int)param_4,param_4._2_2_,param_2,param_3,param_1);
      *(undefined1 *)((int)param_4 + param_1) = 0;
    }
  }
  return;
}



// Function: FUN_1000_55d3 @ 1000:55d3

undefined2 FUN_1000_55d3(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(char *)((int)param_1 + -1) == '.') {
    param_1 = (char *)CONCAT22(uVar3,(int)param_1 + -1);
  }
  param_1 = (char *)CONCAT22(param_1._2_2_,(char *)((int)(char *)param_1 + -1));
  iVar1 = 4;
  piVar2 = (int *)0x5623;
  do {
    if (*piVar2 == (int)*param_1) {
                    /* WARNING: Could not recover jumptable at 0x00015608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)piVar2[4])();
      return uVar3;
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}



// Function: FUN_1000_5633 @ 1000:5633

void FUN_1000_5633(undefined2 param_1,char *param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined1 *param_5,undefined1 *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined2 unaff_SS;
  undefined1 local_5a [82];
  int local_8;
  char *local_6;
  undefined2 uVar5;
  
  if ((undefined1 *)param_3 != (undefined1 *)0x0 || param_3._2_2_ != 0) {
    *param_3 = 0;
  }
  if ((undefined1 *)param_4 != (undefined1 *)0x0 || param_4._2_2_ != 0) {
    *param_4 = 0;
  }
  if ((undefined1 *)param_5 != (undefined1 *)0x0 || param_5._2_2_ != 0) {
    *param_5 = 0;
  }
  if ((undefined1 *)param_6 != (undefined1 *)0x0 || param_6._2_2_ != 0) {
    *param_6 = 0;
  }
  _local_6 = (char *)CONCAT22(unaff_SS,local_5a);
  while( true ) {
    pcVar3 = (char *)param_2;
    if (*param_2 != ' ') break;
    param_2 = (char *)CONCAT22(param_2._2_2_,pcVar3 + 1);
  }
  iVar2 = FUN_1000_5a36(pcVar3,param_2._2_2_);
  if (0x50 < iVar2) {
    iVar2 = 0x50;
  }
  *_local_6 = 0;
  puVar1 = local_6 + 1;
  uVar5 = (undefined2)((ulong)_local_6 >> 0x10);
  local_6 = puVar1;
  FUN_1000_5a79(puVar1,uVar5,pcVar3,param_2._2_2_,iVar2);
  _local_6 = (char *)CONCAT22(uVar5,local_6 + iVar2);
  *_local_6 = '\0';
  do {
    uVar5 = (undefined2)((ulong)_local_6 >> 0x10);
    _local_6 = (char *)CONCAT22(uVar5,local_6 + -1);
    local_8 = (int)*_local_6;
    iVar2 = 7;
    piVar4 = (int *)0x580d;
    do {
      if (*piVar4 == local_8) {
                    /* WARNING: Could not recover jumptable at 0x000156f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)piVar4[7])();
        return;
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  } while( true );
}



// Function: FUN_1000_5853 @ 1000:5853

int FUN_1000_5853(int *param_1,int param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  FUN_1000_4cee(*param_1,((int *)param_1)[1],param_3,param_4,param_2);
  *param_1 = *param_1 + param_2;
  *(undefined1 *)*param_1 = 0;
  return param_2;
}



// Function: FUN_1000_5893 @ 1000:5893

void __cdecl16far FUN_1000_5893(undefined1 *param_1,undefined2 param_2,undefined2 param_3)

{
  *param_1 = 0;
  FUN_1000_1fc2(&stack0x000c,param_2,param_3,&param_1);
  return;
}



// Function: FUN_1000_58b5 @ 1000:58b5

void __cdecl16far
FUN_1000_58b5(undefined1 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  *param_1 = 0;
  FUN_1000_1fc2(param_4,param_2,param_3,&param_1);
  return;
}



// Function: FUN_1000_58d6 @ 1000:58d6

uint __cdecl16near FUN_1000_58d6(int *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  iVar1 = ((int *)param_1)[1];
  pbVar2 = (byte *)*param_1;
  *param_1 = *param_1 + 1;
  if (*pbVar2 == 0) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = (uint)*pbVar2;
  }
  return uVar3;
}



// Function: FUN_1000_58fe @ 1000:58fe

void __cdecl16near FUN_1000_58fe(undefined2 param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  return;
}



// Function: FUN_1000_5909 @ 1000:5909

void __cdecl16far
FUN_1000_5909(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  FUN_1000_16e9(0x58d6,0x58fe,&param_1);
  return;
}



// Function: FUN_1000_592c @ 1000:592c

void __cdecl16far
FUN_1000_592c(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5,undefined2 param_6)

{
  FUN_1000_16e9(0x58d6,0x58fe,&param_1);
  return;
}



// Function: FUN_1000_5950 @ 1000:5950

char * __cdecl16far FUN_1000_5950(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = -1;
  pcVar6 = (char *)param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar10 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar7 = (char *)param_2;
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar7 = pcVar7 + -uVar4;
  pcVar8 = pcVar6 + -1;
  if (((uint)pcVar7 & 1) != 0) {
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6[-1] = *pcVar1;
    uVar4 = uVar4 - 1;
    pcVar8 = pcVar6;
  }
  for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar8;
    pcVar8 = pcVar8 + 2;
    pcVar1 = pcVar7;
    pcVar7 = pcVar7 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  if ((uVar4 & 1) != 0) {
    *pcVar8 = *pcVar7;
  }
  return (char *)param_1;
}



// Function: FUN_1000_598f @ 1000:598f

char * __cdecl16far FUN_1000_598f(char *param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar4 = (char *)param_1;
  if (((ulong)param_1 & 1) == 0) goto LAB_1000_59aa;
  pcVar4 = pcVar4 + 1;
  cVar3 = *param_1;
  while (cVar3 != param_2) {
    if (cVar3 == '\0') {
      return (char *)0x0;
    }
LAB_1000_59aa:
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 2;
    cVar2 = (char)*(undefined2 *)pcVar1;
    if (cVar2 == param_2) goto LAB_1000_59c3;
    cVar3 = (char)((uint)*(undefined2 *)pcVar1 >> 8);
    if (cVar2 == '\0') {
      return (char *)0x0;
    }
  }
  pcVar4 = pcVar4 + 1;
LAB_1000_59c3:
  return pcVar4 + -2;
}



// Function: FUN_1000_59cc @ 1000:59cc

char * __cdecl16far FUN_1000_59cc(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar4 = (char *)param_2;
  uVar3 = 0xffff;
  pcVar5 = pcVar4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  pcVar5 = (char *)param_1;
  for (uVar3 = ~uVar3; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar2 = *pcVar1;
  }
  return (char *)param_1;
}



// Function: FUN_1000_59f5 @ 1000:59f5

int __cdecl16far FUN_1000_59f5(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined2 uVar8;
  
  pbVar6 = (byte *)param_1;
  uVar8 = (undefined2)((ulong)param_2 >> 0x10);
  pbVar7 = (byte *)param_2;
  do {
    do {
      pbVar1 = pbVar6;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
      bVar3 = *pbVar7;
      uVar5 = (uint)bVar3;
      uVar4 = (uint)bVar2;
      if (bVar2 == 0) goto LAB_1000_5a2e;
      pbVar1 = pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 == *pbVar1);
    if ((0x60 < bVar2) && (bVar2 < 0x7b)) {
      uVar4 = (uint)(byte)(bVar2 - 0x20);
    }
    if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
      uVar5 = (uint)(byte)(bVar3 - 0x20);
    }
  } while ((char)uVar4 == (char)uVar5);
LAB_1000_5a2e:
  return uVar4 - uVar5;
}



// Function: FUN_1000_5a36 @ 1000:5a36

int __cdecl16far FUN_1000_5a36(char *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = (int)((ulong)param_1 >> 0x10);
  pcVar4 = (char *)param_1;
  iVar2 = 0;
  if ((iVar5 != 0) || (pcVar4 != (char *)0x0)) {
    uVar3 = 0xffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar1 = pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
    iVar2 = ~uVar3 - 1;
  }
  return iVar2;
}



// Function: FUN_1000_5a55 @ 1000:5a55

char * __cdecl16far FUN_1000_5a55(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar2 = (char *)param_1;
  while( true ) {
    pcVar3 = pcVar2;
    cVar1 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      *pcVar3 = cVar1 + ' ';
    }
  }
  return (char *)param_1;
}



// Function: FUN_1000_5a79 @ 1000:5a79

char * __cdecl16far FUN_1000_5a79(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  pcVar4 = (char *)param_2;
  iVar3 = param_3;
  pcVar5 = pcVar4;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar1 != '\0');
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar5 = (char *)param_1;
  for (param_3 = param_3 - iVar3; param_3 != 0; param_3 = param_3 + -1) {
    pcVar2 = pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
    *pcVar2 = *pcVar1;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar1 = '\0';
  }
  return (char *)param_1;
}



// Function: FUN_1000_5aaa @ 1000:5aaa

char * __cdecl16far FUN_1000_5aaa(char *param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  bool bVar9;
  
  if (*param_2 != '\0') {
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    uVar2 = 0xffff;
    pcVar5 = (char *)param_1;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    uVar2 = ~uVar2;
    uVar8 = (undefined2)((ulong)param_2 >> 0x10);
    iVar3 = -1;
    pcVar5 = (char *)param_2;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    bVar9 = iVar3 + 1U == 0;
    uVar4 = ~(iVar3 + 1U);
    do {
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar1 = (char *)param_1;
        param_1._0_2_ = (char *)param_1 + 1;
        bVar9 = *param_2 == *pcVar1;
      } while (!bVar9);
      if ((!bVar9) || (uVar2 < uVar4)) {
        param_1._0_2_ = (char *)0x1;
        break;
      }
      if (uVar4 == 0) break;
      iVar3 = uVar4 - 1;
      bVar9 = iVar3 == 0;
      pcVar6 = (char *)param_1;
      pcVar5 = (char *)param_2;
      do {
        pcVar5 = pcVar5 + 1;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar1 = pcVar6;
        pcVar6 = pcVar6 + 1;
        bVar9 = *pcVar5 == *pcVar1;
      } while (bVar9);
    } while (!bVar9);
    param_1._0_2_ = (char *)param_1 + -1;
  }
  return (char *)param_1;
}



// Function: FUN_1000_5b18 @ 1000:5b18

char * __cdecl16far FUN_1000_5b18(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  pcVar2 = (char *)param_1;
  while( true ) {
    pcVar3 = pcVar2;
    cVar1 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar3 = cVar1 + -0x20;
    }
  }
  return (char *)param_1;
}



// Function: FUN_1000_5b3c @ 1000:5b3c

int __cdecl16far FUN_1000_5b3c(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_6;
  
  FUN_1000_5e6a();
  iVar3 = *(int *)0x47ca;
  uVar1 = *param_1;
  iVar2 = FUN_1000_162f();
  local_6 = FUN_1000_162f();
  local_6 = iVar3 + -0x5a00 + iVar2 + local_6;
  if ((uVar1 - 0x7bc & 3) != 0) {
    local_6 = local_6 + 0x5180;
  }
  iVar2 = 0;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (uint *)param_1;
  iVar3 = (int)*(char *)((int)puVar4 + 3);
  while (0 < iVar3 + -1) {
    iVar2 = iVar2 + *(char *)(iVar3 + 0x479a);
    iVar3 = iVar3 + -1;
  }
  iVar2 = iVar2 + (char)puVar4[1] + -1;
  if (('\x02' < *(char *)((int)puVar4 + 3)) && ((*param_1 & 3) == 0)) {
    iVar2 = iVar2 + 1;
  }
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if (*(int *)0x47ce != 0) {
    FUN_1000_6056(*param_1 - 0x7b2,0,iVar2,*(undefined1 *)((int)param_2 + 1));
  }
  iVar3 = FUN_1000_162f();
  iVar2 = FUN_1000_162f();
  return local_6 + iVar3 + iVar2 + (uint)*(byte *)((int)param_2 + 3);
}



// Function: FUN_1000_5c66 @ 1000:5c66

/* WARNING: Removing unreachable block (ram,0x00015dec) */
/* WARNING: Removing unreachable block (ram,0x00015d1e) */
/* WARNING: Removing unreachable block (ram,0x00015e55) */

void __cdecl16far FUN_1000_5c66(uint param_1,int param_2,uint *param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined2 uVar9;
  undefined2 unaff_DS;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined2 uVar13;
  
  FUN_1000_5e6a();
  uVar7 = *(uint *)0x47ca + 0xa600;
  iVar4 = param_1 - uVar7;
  iVar1 = (param_2 - (*(int *)0x47cc + 0x12ce + (uint)(0x59ff < *(uint *)0x47ca))) -
          (uint)(param_1 < uVar7);
  uVar9 = (undefined2)((ulong)param_4 >> 0x10);
  puVar8 = (undefined1 *)param_4;
  puVar8[2] = 0;
  uVar3 = FUN_1000_12f3(iVar4,iVar1,0x3c,0);
  puVar8[3] = uVar3;
  uVar10 = FUN_1000_12e4(iVar4,iVar1,0x3c,0);
  uVar3 = FUN_1000_12f3(uVar10,0x3c,0);
  *param_4 = uVar3;
  uVar10 = FUN_1000_12e4(uVar10,0x3c,0);
  iVar4 = FUN_1000_12e4(uVar10,0x88f8,0);
  *param_3 = iVar4 * 4 + 0x7bc;
  lVar11 = FUN_1000_12f3(uVar10,0x88f8,0);
  if (0x224f < lVar11) {
    iVar4 = (uint)lVar11 + 0xddb0;
    iVar1 = (int)((ulong)lVar11 >> 0x10) - (uint)((uint)lVar11 < 0x2250);
    *param_3 = *param_3 + 1;
    iVar5 = FUN_1000_12e4(iVar4,iVar1,0x2238,0);
    *param_3 = *param_3 + iVar5;
    lVar11 = FUN_1000_12f3(iVar4,iVar1,0x2238,0);
  }
  if (*(int *)0x47ce != 0) {
    uVar13 = 0;
    uVar6 = FUN_1000_12f3(lVar11,0x18,0);
    uVar6 = FUN_1000_12e4(lVar11,0x18,0,uVar6);
    iVar4 = FUN_1000_6056(*param_3 - 0x7b2,0,uVar6,uVar13);
    if (iVar4 != 0) {
      lVar11 = lVar11 + 1;
    }
  }
  uVar3 = FUN_1000_12f3(lVar11,0x18,0);
  puVar8[1] = uVar3;
  lVar12 = FUN_1000_12e4(lVar11,0x18,0);
  lVar11 = lVar12 + 1;
  uVar9 = (undefined2)((ulong)param_3 >> 0x10);
  if ((*param_3 & 3) == 0) {
    if (lVar11 < 0x3d) {
      if (lVar11 == 0x3c) {
        *(undefined1 *)((int)(uint *)param_3 + 3) = 2;
        *(undefined1 *)((uint *)param_3 + 1) = 0x1d;
        return;
      }
    }
    else {
      lVar11 = CONCAT22((int)((ulong)lVar11 >> 0x10) - (uint)((int)lVar11 == 0),(int)lVar12);
    }
  }
  *(undefined1 *)((int)(uint *)param_3 + 3) = 0;
  for (; (int)*(char *)(*(char *)((int)(uint *)param_3 + 3) + 0x479c) < lVar11;
      lVar11 = lVar11 - (int)cVar2) {
    cVar2 = *(char *)(*(char *)((int)(uint *)param_3 + 3) + 0x479c);
    *(char *)((int)(uint *)param_3 + 3) = *(char *)((int)(uint *)param_3 + 3) + '\x01';
  }
  *(char *)((int)(uint *)param_3 + 3) = *(char *)((int)(uint *)param_3 + 3) + '\x01';
  param_1._0_1_ = (undefined1)lVar11;
  *(undefined1 *)((uint *)param_3 + 1) = (undefined1)param_1;
  return;
}



// Function: FUN_1000_5e6a @ 1000:5e6a

void __cdecl16far FUN_1000_5e6a(void)

{
  char *pcVar1;
  uint uVar2;
  int in_DX;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined4 local_6;
  
  pcVar1 = (char *)FUN_1000_4bad(0x47d0);
  local_6 = (char *)CONCAT22(in_DX,pcVar1);
  if ((((((pcVar1 == (char *)0x0 && in_DX == 0) || (uVar2 = FUN_1000_5a36(pcVar1,in_DX), uVar2 < 4))
        || ((*(byte *)(*local_6 + 0x42e7) & 0xc) == 0)) ||
       (((*(byte *)(pcVar1[1] + 0x42e7) & 0xc) == 0 || ((*(byte *)(pcVar1[2] + 0x42e7) & 0xc) == 0))
       )) || ((pcVar1[3] != '-' &&
              ((pcVar1[3] != '+' && ((*(byte *)(pcVar1[3] + 0x42e7) & 2) == 0)))))) ||
     (((*(byte *)(pcVar1[3] + 0x42e7) & 2) == 0 && ((*(byte *)(pcVar1[4] + 0x42e7) & 2) == 0)))) {
    *(undefined2 *)0x47ce = 1;
    *(undefined2 *)0x47cc = 0;
    *(undefined2 *)0x47ca = 18000;
    FUN_1000_59cc(*(undefined2 *)0x47c2,*(undefined2 *)0x47c4,0x47d3);
    FUN_1000_59cc(*(undefined2 *)0x47c6,*(undefined2 *)0x47c8,0x47d7);
  }
  else {
    FUN_1000_4d36(*(undefined2 *)0x47c6,*(undefined2 *)0x47c8,0,4);
    FUN_1000_5a79(*(undefined2 *)0x47c2,*(undefined2 *)0x47c4,pcVar1,in_DX,3);
    *(undefined1 *)((int)*(undefined4 *)0x47c2 + 3) = 0;
    FUN_1000_3e3e(pcVar1 + 3,in_DX);
    uVar4 = FUN_1000_162f();
    *(undefined2 *)0x47cc = (int)((ulong)uVar4 >> 0x10);
    *(undefined2 *)0x47ca = (int)uVar4;
    *(undefined2 *)0x47ce = 0;
    for (iVar3 = 3; pcVar1[iVar3] != '\0'; iVar3 = iVar3 + 1) {
      if ((*(byte *)(pcVar1[iVar3] + 0x42e7) & 0xc) != 0) {
        uVar2 = FUN_1000_5a36(pcVar1 + iVar3,in_DX);
        if (uVar2 < 3) {
          return;
        }
        if ((*(byte *)(pcVar1[iVar3 + 1] + 0x42e7) & 0xc) == 0) {
          return;
        }
        if ((*(byte *)(pcVar1[iVar3 + 2] + 0x42e7) & 0xc) == 0) {
          return;
        }
        FUN_1000_5a79(*(undefined2 *)0x47c6,*(undefined2 *)0x47c8,pcVar1 + iVar3,in_DX,3);
        *(undefined1 *)((int)*(undefined4 *)0x47c6 + 3) = 0;
        *(undefined2 *)0x47ce = 1;
        return;
      }
    }
  }
  return;
}



// Function: FUN_1000_6056 @ 1000:6056

undefined2 FUN_1000_6056(int param_1,uint param_2,uint param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  if (param_2 == 0) {
    uVar2 = param_3;
    if ((0x3a < param_3) && ((param_1 + 0x46U & 3) == 0)) {
      uVar2 = param_3 - 1;
    }
    param_2 = 0;
    while (*(uint *)(param_2 * 2 + 0x47a8) <= uVar2) {
      param_2 = param_2 + 1;
    }
  }
  else {
    if ((param_2 < 3) || ((param_1 + 0x46U & 3) != 0)) {
      param_3 = param_3 - 1;
    }
    param_3 = param_3 + *(int *)((param_2 - 1) * 2 + 0x47a8);
  }
  if (3 < param_2) {
    if (param_2 != 4) {
      if (10 < param_2) {
        return 0;
      }
      if (param_2 != 10) {
        return 1;
      }
    }
    if ((param_1 < 0x11) || (param_2 != 4)) {
      iVar1 = *(int *)(param_2 * 2 + 0x47a8);
    }
    else {
      iVar1 = *(int *)0x47ae + 7;
    }
    if ((param_1 + 0x7b2U & 3) != 0) {
      iVar1 = iVar1 + -1;
    }
    uVar2 = iVar1 - (param_1 * 0x16d + (param_1 + 1 >> 2) + iVar1 + 4U) % 7;
    if (param_2 == 4) {
      if ((uVar2 < param_3) || ((param_3 == uVar2 && (1 < param_4)))) {
        return 1;
      }
    }
    else {
      if (param_3 < uVar2) {
        return 1;
      }
      if ((param_3 == uVar2) && (param_4 < 2)) {
        return 1;
      }
    }
  }
  return 0;
}



// Function: FUN_1000_6135 @ 1000:6135

int __cdecl16far FUN_1000_6135(uint param_1,char *param_2,undefined2 param_3,int param_4)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char local_90 [130];
  undefined4 local_e;
  char local_9;
  int local_8;
  char *local_6;
  undefined2 uVar7;
  
  if (param_1 < *(uint *)0x4584) {
    if (param_4 + 1U < 2) {
      iVar5 = 0;
    }
    else {
      if ((*(uint *)(param_1 * 2 + 0x4586) & 0x800) != 0) {
        FUN_1000_1552(param_1,0,0,2);
      }
      if ((*(uint *)(param_1 * 2 + 0x4586) & 0x4000) == 0) {
        iVar5 = FUN_1000_6284(param_1,param_2,param_3,param_4);
      }
      else {
        puVar1 = (uint *)(param_1 * 2 + 0x4586);
        *puVar1 = *puVar1 & 0xfdff;
        local_e = (char *)CONCAT22(param_3,param_2);
        local_8 = param_4;
        do {
          _local_6 = (char *)CONCAT22(unaff_SS,local_90);
          do {
            pcVar4 = local_e;
            if (local_8 == 0) {
              iVar5 = (int)local_6 - (int)local_90;
              if (iVar5 == 0) {
                return param_4;
              }
              iVar6 = FUN_1000_6284(param_1,local_90);
              if (iVar6 == iVar5) {
                return param_4;
              }
              if (iVar6 == -1) goto LAB_1000_6223;
              goto LAB_1000_6275;
            }
            local_8 = local_8 + -1;
            local_e = (char *)CONCAT22(local_e._2_2_,(char *)local_e + 1);
            local_9 = *pcVar4;
            if (local_9 == '\n') {
              *_local_6 = '\r';
              uVar7 = (undefined2)((ulong)_local_6 >> 0x10);
              _local_6 = (char *)CONCAT22(uVar7,local_6 + 1);
            }
            *_local_6 = local_9;
            pcVar2 = local_6 + 1;
            uVar7 = (undefined2)((ulong)_local_6 >> 0x10);
            _local_6 = (char *)CONCAT22(uVar7,pcVar2);
            uVar3 = (uint)(pcVar2 < local_90);
          } while (((int)-uVar3 < 0) ||
                  ((uVar3 == 0 && ((uint)((int)pcVar2 - (int)local_90) < 0x80))));
          iVar5 = (int)pcVar2 - (int)local_90;
          iVar6 = FUN_1000_6284(param_1,local_90);
        } while (iVar6 == iVar5);
        if (iVar6 == -1) {
LAB_1000_6223:
          iVar5 = -1;
        }
        else {
          param_4 = param_4 - local_8;
LAB_1000_6275:
          iVar5 = (param_4 + iVar6) - iVar5;
        }
      }
    }
  }
  else {
    iVar5 = FUN_1000_1454(6);
  }
  return iVar5;
}



// Function: FUN_1000_6284 @ 1000:6284

undefined2 __cdecl16far FUN_1000_6284(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined2 unaff_DS;
  bool bVar3;
  undefined2 uVar4;
  
  bVar3 = false;
  if ((*(uint *)(param_1 * 2 + 0x4586) & 1) == 0) {
    pcVar2 = (code *)swi(0x21);
    uVar4 = (*pcVar2)();
    if (!bVar3) {
      puVar1 = (uint *)(param_1 * 2 + 0x4586);
      *puVar1 = *puVar1 | 0x1000;
      return uVar4;
    }
  }
  else {
    uVar4 = 5;
  }
  uVar4 = FUN_1000_1454(uVar4);
  return uVar4;
}



// Function: FUN_1000_62c0 @ 1000:62c0

void __cdecl16far FUN_1000_62c0(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  uVar1 = 0;
  local_6 = 0x43f4;
  if (*(int *)0x4584 != 0) {
    do {
      if ((*(uint *)(local_6 + 2) & 3) != 0) {
        FUN_1000_407f();
      }
      local_6 = local_6 + 0x14;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)0x4584);
  }
  return;
}



// Function: FUN_1000_62fd @ 1000:62fd

void __cdecl16far FUN_1000_62fd(void)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 local_6;
  
  local_6 = 0x43f4;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    if ((*(uint *)(local_6 + 2) & 3) != 0) {
      FUN_1000_4169(local_6,unaff_DS);
    }
    local_6 = local_6 + 0x14;
  }
  return;
}



// Function: FUN_1000_6335 @ 1000:6335

byte * FUN_1000_6335(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined2 uVar6;
  
  pbVar4 = (byte *)param_1;
  uVar6 = (undefined2)((ulong)param_2 >> 0x10);
  pbVar2 = (byte *)param_2;
  do {
    pbVar5 = pbVar2;
    pbVar1 = pbVar4;
    pbVar4 = pbVar4 + 1;
    bVar3 = *pbVar1;
    if ((0x60 < bVar3) && (bVar3 < 0x7b)) {
      bVar3 = bVar3 - 0x20;
    }
    *pbVar5 = bVar3;
    pbVar2 = pbVar5 + 1;
  } while (bVar3 != 0);
  return (byte *)CONCAT22(uVar6,pbVar5);
}



// Function: FUN_1000_635d @ 1000:635d

undefined2 __stdcall16far FUN_1000_635d(void)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (!(bool)in_CF) {
    uVar2 = 0;
  }
  return uVar2;
}



// Function: FUN_1000_6378 @ 1000:6378

undefined2
FUN_1000_6378(uint param_1,int param_2,int param_3,undefined2 param_4,undefined2 param_5,
             char *param_6,char *param_7,char *param_8,undefined2 param_9)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  undefined1 local_34 [44];
  uint local_8;
  undefined4 local_6;
  
  local_6 = (char *)CONCAT22(param_9,param_8);
  if (*param_7 == '\0') {
    FUN_1000_1128(&local_8);
  }
  else {
    local_8 = (int)*param_7 & 0x1f;
  }
  *local_6 = (char)local_8 + '@';
  pcVar1 = (char *)local_6;
  local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
  *local_6 = ':';
  local_6 = (char *)CONCAT22(local_6._2_2_,pcVar1 + 2);
  if ((*param_6 != '\\') && (*param_6 != '/')) {
    *local_6 = '\\';
    pcVar1 = pcVar1 + 3;
    local_6 = (char *)CONCAT22(local_6._2_2_,pcVar1);
    iVar2 = FUN_1000_635d(pcVar1,local_6._2_2_,local_8);
    if (iVar2 != 0) {
      return 3;
    }
    iVar2 = FUN_1000_5a36((char *)local_6,local_6._2_2_);
    if (iVar2 != 0) {
      pcVar1 = (char *)local_6 + iVar2;
      local_6 = (char *)CONCAT22(local_6._2_2_,pcVar1);
      *local_6 = '\\';
      local_6 = (char *)CONCAT22(local_6._2_2_,pcVar1 + 1);
    }
  }
  local_6 = (char *)FUN_1000_6335((char *)param_6,param_6._2_2_,(char *)local_6,local_6._2_2_);
  uVar4 = (undefined2)((ulong)local_6 >> 0x10);
  puVar3 = (undefined1 *)local_6;
  if ((puVar3[-1] != '\\') && (puVar3[-1] != '/')) {
    *local_6 = 0x5c;
    local_6 = (char *)CONCAT22(uVar4,puVar3 + 1);
  }
  local_6 = (char *)FUN_1000_6335(param_4,param_5,(char *)local_6,local_6._2_2_);
  if (param_2 != 0 || param_3 != 0) {
    FUN_1000_6335(param_2,param_3,local_6);
  }
  if ((param_1 & 2) == 0) {
    uVar4 = 0x37;
  }
  else {
    uVar4 = 0x27;
  }
  uVar4 = FUN_1000_10c8(param_8,param_9,uVar4,local_34);
  return uVar4;
}



// Function: FUN_1000_6498 @ 1000:6498

undefined4 FUN_1000_6498(undefined2 param_1,undefined2 param_2,uint param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined2 in_DX;
  uint uVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  undefined4 local_a;
  undefined2 local_6;
  
  local_6 = 0x7873;
  local_a = (char *)0x0;
  uVar5 = 0;
  if (((char *)param_4 != (char *)0x0 || param_4._2_2_ != 0) || (*param_4 != '\0')) {
    uVar6 = FUN_1000_5633();
    in_DX = (undefined2)((ulong)uVar6 >> 0x10);
    uVar5 = (uint)uVar6;
  }
  if ((uVar5 & 5) == 4) {
    if ((param_3 & 2) != 0) {
      if ((uVar5 & 8) != 0) {
        param_3 = param_3 & 0xfffe;
      }
      if ((uVar5 & 2) != 0) {
        param_3 = param_3 & 0xfffd;
      }
    }
    if ((param_3 & 1) != 0) {
      pcVar3 = (char *)FUN_1000_4bad(param_1,param_2);
      local_a = (char *)CONCAT22(in_DX,pcVar3);
    }
    while( true ) {
      iVar4 = FUN_1000_6378(param_3,0x781c,unaff_DS,0x7822,unaff_DS,0x782c,unaff_DS,0x786f,unaff_DS,
                            0x7873,unaff_DS);
      if ((iVar4 == 0) ||
         (((iVar4 != 3 && ((param_3 & 2) != 0)) &&
          ((iVar4 = FUN_1000_6378(param_3,0x47dc,unaff_DS,0x7822,unaff_DS,0x782c,unaff_DS,0x786f,
                                  unaff_DS,0x7873,unaff_DS), iVar4 == 0 ||
           ((iVar4 != 3 &&
            (iVar4 = FUN_1000_6378(param_3,0x47e1,unaff_DS,0x7822,unaff_DS,0x782c,unaff_DS,0x786f,
                                   unaff_DS,0x7873,unaff_DS), iVar4 == 0)))))))) goto LAB_1000_6647;
      pcVar3 = (char *)local_a;
      if (((char *)local_a == (char *)0x0 && local_a._2_2_ == 0) || (*local_a == '\0')) break;
      iVar4 = 0;
      if (((char *)local_a)[1] == ':') {
        *(char *)0x786f = *local_a;
        local_a = (char *)CONCAT22(local_a._2_2_,(char *)local_a + 1);
        *(char *)0x7870 = *local_a;
        local_a = (char *)CONCAT22(local_a._2_2_,pcVar3 + 2);
        iVar4 = 2;
      }
      *(undefined1 *)(iVar4 + 0x786f) = 0;
      iVar4 = 0;
      while( true ) {
        pcVar2 = local_a;
        pcVar3 = (char *)local_a;
        local_a = (char *)CONCAT22(local_a._2_2_,(char *)local_a + 1);
        cVar1 = *pcVar2;
        *(char *)(iVar4 + 0x782c) = cVar1;
        if (cVar1 == '\0') break;
        if (*(char *)(iVar4 + 0x782c) == ';') {
          *(undefined1 *)(iVar4 + 0x782c) = 0;
          local_a = (char *)CONCAT22(local_a._2_2_,pcVar3 + 2);
          break;
        }
        iVar4 = iVar4 + 1;
      }
      local_a = (char *)CONCAT22(local_a._2_2_,(char *)local_a + -1);
      if (*(char *)0x782c == '\0') {
        *(undefined1 *)0x782c = 0x5c;
        *(undefined1 *)0x782d = 0;
      }
    }
    unaff_DS = 0;
    local_6 = 0;
  }
  else {
    unaff_DS = 0;
    local_6 = 0;
  }
LAB_1000_6647:
  return CONCAT22(unaff_DS,local_6);
}



// Function: FUN_1000_664f @ 1000:664f

void FUN_1000_664f(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  
  FUN_1000_6498(0x47e6,unaff_DS,param_1,param_2,param_3);
  return;
}



// Function: FUN_1000_6667 @ 1000:6667

void __cdecl16far
FUN_1000_6667(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined1 *param_5)

{
  long lVar1;
  
  lVar1 = FUN_1000_6498(param_3,param_4,1,param_1,param_2);
  if (lVar1 == 0) {
    *param_5 = 0;
  }
  else {
    FUN_1000_59cc((undefined1 *)param_5,param_5._2_2_,lVar1);
  }
  return;
}



// Function: FUN_1000_66ae @ 1000:66ae

undefined2 __cdecl16far FUN_1000_66ae(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  if (param_3 == 0) {
    if (*(int *)0x482c < *(int *)0x482e) {
      if (-1 < *(int *)0x4834) {
        *(int *)0x4834 = *(int *)0x4834 - *(int *)0x482e;
        *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x4830;
      }
      *(int *)0x5dee = *(int *)0x5dee + *(int *)0x4832;
      *(int *)0x4834 = *(int *)0x4834 + *(int *)0x482c;
      if (*(int *)0x5dee != param_2) {
        return 0;
      }
    }
    else {
      if (-1 < *(int *)0x4834) {
        *(int *)0x4834 = *(int *)0x4834 - *(int *)0x482c;
        *(int *)0x5dee = *(int *)0x5dee + *(int *)0x4832;
      }
      *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x4830;
      *(int *)0x4834 = *(int *)0x4834 + *(int *)0x482e;
      if (*(int *)0x5df0 != param_1) {
        return 0;
      }
    }
  }
  else {
    *(int *)0x482c = param_1 - *(int *)0x5df0;
    *(int *)0x482e = param_2 - *(int *)0x5dee;
    if (*(int *)0x482c < 1) {
      if (*(int *)0x482c == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffff;
      }
    }
    else {
      uVar2 = 1;
    }
    *(undefined2 *)0x4830 = uVar2;
    if (*(int *)0x482e < 1) {
      if (*(int *)0x482e == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffff;
      }
    }
    else {
      uVar2 = 1;
    }
    *(undefined2 *)0x4832 = uVar2;
    uVar3 = (int)*(uint *)0x482c >> 0xf;
    *(int *)0x482c = ((*(uint *)0x482c ^ uVar3) - uVar3) * 2;
    uVar3 = (int)*(uint *)0x482e >> 0xf;
    *(int *)0x482e = ((*(uint *)0x482e ^ uVar3) - uVar3) * 2;
    iVar1 = *(int *)0x482c;
    if (iVar1 < *(int *)0x482e) {
      iVar1 = *(int *)0x482e;
      iVar4 = *(int *)0x482c;
    }
    else {
      iVar4 = *(int *)0x482e;
    }
    *(int *)0x4834 = iVar4 - (iVar1 >> 1);
    if (*(int *)0x482c != 0) {
      return 0;
    }
    if (*(int *)0x482e != 0) {
      return 0;
    }
  }
  return 1;
}



// Function: FUN_1000_67bb @ 1000:67bb

/* WARNING: Instruction at (ram,0x0001044a) overlaps instruction at (ram,0x00010449)
    */

uint __cdecl16near FUN_1000_67bb(undefined2 param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  code *pcVar4;
  char *pcVar5;
  char cVar6;
  uint in_AX;
  byte bVar7;
  int iVar8;
  int in_CX;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 in_DX;
  uint uVar9;
  int iVar10;
  int unaff_SI;
  char *pcVar11;
  char *pcVar12;
  undefined1 *puVar13;
  uint unaff_DI;
  undefined2 uVar14;
  undefined2 unaff_ES;
  int unaff_SS;
  int unaff_DS;
  bool bVar15;
  bool bVar16;
  undefined4 uVar17;
  char acStack_59 [65];
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  char *pcStack_12;
  uint local_a;
  int iStack_8;
  
  puVar13 = &stack0xfffe;
  uVar9 = param_2 - 1;
  if (7 < uVar9) {
    if (*(int *)0x7484 == 4) {
      *(int *)0x5daa = *(int *)0x5daa + 1;
      puVar1 = (uint *)0x5daa;
      *puVar1 = *puVar1 & 3;
      if (*puVar1 != 0) goto LAB_1000_68e2;
    }
    *(int *)0x7488 = *(int *)0x7488 + 1;
LAB_1000_68e2:
    iVar10 = *(int *)0x5db6;
    *(uint *)0x7488 = *(uint *)0x7488 & iVar10 - 1U;
    if (*(uint *)0x7488 < 3) {
      *(undefined2 *)0x7488 = 3;
    }
    return iVar10 - 1U;
  }
  bVar15 = (int)uVar9 < 0;
  iVar10 = uVar9 * 2;
  bVar16 = iVar10 == 0;
  switch(uVar9) {
  case 0:
    return in_AX;
  case 1:
    if (bVar16) {
      if (acStack_59[0] != '\0') {
        unaff_DI = unaff_DI | 0x10;
      }
      pcStack_12 = acStack_59;
      uStack_14 = 2;
      uStack_16 = 0x5805;
      FUN_1000_557c();
    }
    return unaff_DI;
  case 2:
    (&stack0x2c1c)[unaff_DI] = (&stack0x2c1c)[unaff_DI] + (char)in_CX;
    break;
  case 3:
    if (in_CX == 1 || (undefined1 *)(unaff_SI + 2) == (undefined1 *)0x0) {
      in_CX = 10;
      do {
        pcVar4 = (code *)swi(0x21);
        (*pcVar4)();
        in_CX = in_CX + -1;
      } while (in_CX != 0);
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
      unaff_DS = iVar10;
      if (*(int *)0x4100 == 0) goto LAB_1000_0449;
    }
    else {
      *(char *)(unaff_SI + 0x16) = *(char *)(unaff_SI + 0x16) + (char)((uint)in_DX >> 8);
    }
    if (CONCAT11((char)*(undefined2 *)0x7d,(char)((uint)*(undefined2 *)0x7d >> 8)) == 0x1403) {
      unaff_DS = 0x1000;
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
    }
LAB_1000_0449:
    while( true ) {
      pcVar4 = (code *)swi(0x37);
      (*pcVar4)();
      if (in_CX != 0) {
        *(undefined2 *)0x20 = 0;
        *(undefined2 *)0x22 = 0;
        local_a = *(uint *)0x4114;
        if (2 < *(int *)0x4100) {
          local_a = local_a | 2;
        }
        pcVar4 = (code *)swi(0x35);
        (*pcVar4)();
        out(*(undefined1 *)(unaff_SI + 2),extraout_DX_00);
        *(uint *)0x2 = *(uint *)0x2 & local_a;
        return 0;
      }
      iVar8 = 1;
      *(char *)(unaff_SI + 0x2a) = *(char *)(unaff_SI + 0x2a) + (char)((uint)iVar10 >> 8);
      pcVar4 = (code *)swi(0x37);
      (*pcVar4)();
      if (iVar8 != 0) break;
      in_CX = 0;
    }
    iVar10 = 0xb;
    do {
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x21);
    uVar9 = (*pcVar4)();
    return uVar9;
  case 4:
    goto switchD_1000_67cc_caseD_4;
  default:
    uRam00010260 = 0x29bf;
    pcVar4 = (code *)swi(0x21);
    uVar17 = (*pcVar4)();
    iVar8 = (int)((ulong)uVar17 >> 0x10);
    puVar13 = (undefined1 *)*(undefined2 *)0x2;
    iVar10 = *(int *)0x2c;
    *(undefined2 *)0x7d = (int)uVar17;
    unaff_DS = iVar8;
  }
  *(undefined2 *)0x7b = unaff_ES;
  *(int *)0x77 = iVar10;
  *(undefined2 *)0x91 = puVar13;
  FUN_1000_017a();
  pcVar5 = (char *)*(undefined4 *)0x75;
  uVar14 = (undefined2)((ulong)pcVar5 >> 0x10);
  pcVar11 = (char *)pcVar5;
  uVar9 = 0x7fff;
  pcVar12 = pcVar11;
LAB_1000_0034:
  do {
    if (uVar9 != 0) {
      uVar9 = uVar9 - 1;
      pcVar2 = pcVar12;
      pcVar12 = pcVar12 + 1;
      if ((char)pcVar5 != *pcVar2) goto LAB_1000_0034;
    }
    if (uVar9 == 0) goto LAB_1000_007b;
    pcVar11 = pcVar11 + 1;
  } while (*pcVar12 != (char)pcVar5);
  *(int *)0x75 = -(uVar9 | 0x8000);
  *(uint *)0x79 = (int)pcVar11 * 4 + 0x10U & 0xfff0;
  if (uRam00029c84 < 0x200) {
    uRam00029c84 = 0x200;
  }
  bVar7 = 4;
  uVar9 = (uRam00029c84 >> 4) + 1;
  if ((uint)((int)puVar13 - unaff_SS) < uVar9) {
LAB_1000_007b:
    uVar9 = FUN_1000_0249();
    return uVar9;
  }
  iVar10 = uVar9 + unaff_SS;
  *(int *)0x89 = iVar10;
  *(int *)0x8d = iVar10;
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  uVar14 = uRam00010260;
  uRam00029c84 = iStack_8 << (bVar7 & 0x1f);
  puVar13 = (undefined1 *)0x482c;
  for (iVar10 = 0x3097; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar3 = puVar13;
    puVar13 = puVar13 + 1;
    *puVar3 = 0;
  }
  bVar15 = *(uint *)0x4584 < 0x14;
  bVar16 = *(uint *)0x4584 == 0x14;
  in_CX = 0;
switchD_1000_67cc_caseD_4:
  if (!bVar15 && !bVar16) {
    bVar15 = *(byte *)0x7d < 3;
    if ((!bVar15) && ((3 < *(byte *)0x7d || (bVar15 = *(byte *)0x7e < 0x1e, !bVar15)))) {
      pcVar4 = (code *)swi(0x21);
      (*pcVar4)();
      if (!bVar15) {
        pcVar4 = (code *)swi(0x21);
        (*pcVar4)();
        if (!bVar15) {
          pcVar4 = (code *)swi(0x21);
          iVar10 = (*pcVar4)();
          if (!bVar15) {
            *(int *)0x91 = iVar10 + 1;
            pcVar4 = (code *)swi(0x21);
            (*pcVar4)();
            if (!bVar15) {
              pcVar4 = (code *)swi(0x21);
              (*pcVar4)();
              if (!bVar15) goto LAB_1000_0109;
            }
          }
        }
      }
      uVar9 = FUN_1000_0249();
      return uVar9;
    }
  }
LAB_1000_0109:
  pcVar4 = (code *)swi(0x1a);
  cVar6 = (*pcVar4)();
  *(undefined2 *)0x81 = extraout_DX;
  *(int *)0x83 = in_CX;
  if (cVar6 != '\0') {
    DAT_0000_0470 = 1;
  }
  FUN_1000_01ea();
  pcStack_12 = (char *)0x1000;
  uStack_14 = 0x14e;
  pcStack_12 = (char *)func_0x0000b3dd();
  uStack_14 = 0x66a;
  uStack_16 = 0x154;
  FUN_1000_11a8();
  uStack_14 = 0x47fc;
  uStack_16 = 0x4826;
  uStack_18 = 0x164;
  uVar9 = FUN_1000_01ea();
  return uVar9;
}



// Function: FUN_1000_690b @ 1000:690b

void __cdecl16far FUN_1000_690b(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  int local_4;
  
  for (iVar1 = 1; iVar1 <= param_1; iVar1 = iVar1 + 1) {
    for (local_4 = 1; local_4 <= param_1; local_4 = local_4 + 1) {
      (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,param_2);
      *(int *)0x5dee = *(int *)0x5dee + 1;
    }
    *(int *)0x5df0 = *(int *)0x5df0 + 1;
    *(int *)0x5dee = *(int *)0x5dee - param_1;
    if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
      unaff_CS = 0x11c1;
      FUN_1000_4125();
    }
  }
  *(int *)0x5df0 = *(int *)0x5df0 - param_1;
  return;
}



// Function: FUN_1000_695b @ 1000:695b

void __cdecl16far
FUN_1000_695b(int param_1,int param_2,undefined2 *param_3,undefined2 *param_4,undefined2 param_5,
             undefined2 param_6,uint param_7)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  int local_e;
  
  *(undefined2 *)0x4db2 = *param_3;
  uVar10 = (undefined2)((ulong)param_4 >> 0x10);
  puVar7 = (undefined2 *)param_4;
  *(undefined2 *)0x4db4 = *param_4;
  puVar7[param_2] = 0;
  uVar11 = (undefined2)((ulong)param_3 >> 0x10);
  puVar8 = (undefined2 *)param_3;
  puVar8[param_2] = 0;
  *param_4 = 0;
  *param_3 = 0;
  if (param_1 != 0) {
    *(int *)0x4dae = -*(int *)0x5db2;
    *(undefined2 *)0x4db0 = *(undefined2 *)0x5db2;
    iVar9 = 0;
    if (0 < param_2) {
      do {
        if (*(int *)0x4dae < (int)puVar7[iVar9]) {
          *(int *)0x4dae = puVar7[iVar9];
        }
        if ((int)puVar7[iVar9] < *(int *)0x4db0) {
          *(int *)0x4db0 = puVar7[iVar9];
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_2);
    }
    *(int *)0x4db6 = *(int *)0x4dae - *(int *)0x4db0;
    for (iVar9 = 0; iVar9 <= *(int *)0x4db6; iVar9 = iVar9 + 1) {
      iVar2 = *(int *)0x5db0;
      *(int *)(iVar9 * 2 + 0x4836) = iVar2;
      *(int *)(iVar9 * 2 + 0x4af2) = -iVar2;
    }
    iVar9 = 0;
    if (0 < param_2) {
      do {
        *(undefined2 *)0x5df0 = puVar8[iVar9];
        *(int *)0x5dee = puVar7[iVar9] - *(int *)0x4db0;
        uVar1 = puVar8[iVar9 + 1];
        iVar2 = puVar7[iVar9 + 1];
        iVar3 = *(int *)0x4db0;
        local_e = 1;
        do {
          local_e = FUN_1000_66ae(uVar1,iVar2 - iVar3,local_e);
          if (*(int *)0x5df0 < *(int *)(*(int *)0x5dee * 2 + 0x4836)) {
            *(undefined2 *)(*(int *)0x5dee * 2 + 0x4836) = *(undefined2 *)0x5df0;
          }
          if (*(int *)(*(int *)0x5dee * 2 + 0x4af2) < *(int *)0x5df0) {
            *(undefined2 *)(*(int *)0x5dee * 2 + 0x4af2) = *(undefined2 *)0x5df0;
          }
        } while (local_e == 0);
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          unaff_CS = 0x11c1;
          FUN_1000_4125();
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_2);
    }
  }
  if ((param_7 & 2) != 0) {
    *(undefined2 *)0x7488 = param_5;
    uVar6 = param_7 & 0xc;
    *(int *)0x5dee = *(int *)0x4db0 + *(int *)0x4db4;
    for (iVar9 = 0; iVar9 <= *(int *)0x4db6; iVar9 = iVar9 + 1) {
      if (uVar6 == 4) {
        *(undefined2 *)0x7488 = param_5;
      }
      *(int *)0x5df0 = *(int *)(iVar9 * 2 + 0x4836) + *(int *)0x4db2;
      iVar2 = *(int *)(iVar9 * 2 + 0x4af2);
      iVar3 = *(int *)0x4db2;
      while (*(int *)0x5df0 <= iVar2 + iVar3) {
        (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,*(undefined2 *)0x5caf);
        *(int *)0x5df0 = *(int *)0x5df0 + 1;
        if ((uVar6 == 4) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
          *(undefined2 *)0x7488 = 3;
        }
        *(int *)0x5cbb = *(int *)0x5cbb + 1;
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          unaff_CS = 0x11c1;
          FUN_1000_4125();
        }
      }
      if ((uVar6 == 8) && (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488))
      {
        *(undefined2 *)0x7488 = 3;
      }
      *(int *)0x5dee = *(int *)0x5dee + 1;
    }
  }
  if ((param_7 & 1) != 0) {
    *(undefined2 *)0x7488 = param_6;
    iVar9 = 0;
    if (0 < param_2) {
      do {
        *(int *)0x5df0 = puVar8[iVar9] + *(int *)0x4db2;
        *(int *)0x5dee = puVar7[iVar9] + *(int *)0x4db4;
        iVar2 = puVar8[iVar9 + 1];
        iVar3 = *(int *)0x4db2;
        iVar4 = puVar7[iVar9 + 1];
        iVar5 = *(int *)0x4db4;
        local_e = 1;
        do {
          local_e = FUN_1000_66ae(iVar2 + iVar3,iVar4 + iVar5,local_e);
          (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,*(undefined2 *)0x5caf);
          if (((param_7 & 0x10) != 0) &&
             (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
            *(undefined2 *)0x7488 = 3;
          }
          *(int *)0x5cbb = *(int *)0x5cbb + 1;
          if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
            unaff_CS = 0x11c1;
            FUN_1000_4125();
          }
        } while (local_e == 0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < param_2);
    }
  }
  *param_3 = *(undefined2 *)0x4db2;
  *param_4 = *(undefined2 *)0x4db4;
  return;
}



// Function: FUN_1000_6c78 @ 1000:6c78

undefined2 __cdecl16far FUN_1000_6c78(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 unaff_DS;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  uint uVar13;
  
  if (param_3 == 0) {
    if (*(int *)0x4ddc != 0) {
      iVar6 = *(int *)0x4dd6;
      uVar9 = *(uint *)0x4dd4;
      uVar7 = *(uint *)0x4dc4;
      uVar8 = uVar9 + *(uint *)0x4dc4;
      iVar2 = *(int *)0x4dc6;
      puVar1 = (uint *)0x4dd0;
      uVar13 = *puVar1;
      *puVar1 = *puVar1 + uVar8;
      *(int *)0x4dd2 =
           *(int *)0x4dd2 + iVar6 + iVar2 + (uint)CARRY2(uVar9,uVar7) + (uint)CARRY2(uVar13,uVar8);
      iVar6 = *(int *)0x4dce;
      uVar9 = *(uint *)0x4dcc;
      puVar1 = (uint *)0x4dd4;
      uVar13 = *puVar1;
      *puVar1 = *puVar1 + uVar9;
      *(int *)0x4dd6 = *(int *)0x4dd6 + iVar6 + (uint)CARRY2(uVar13,uVar9);
      *(int *)0x5df0 = *(int *)0x5df0 + 1;
      if ((-1 < *(int *)0x4dd2) && ((0 < *(int *)0x4dd2 || (*(int *)0x4dd0 != 0)))) {
        *(int *)0x5dee = *(int *)0x5dee + -1;
        iVar6 = *(int *)0x4dca;
        uVar9 = *(uint *)0x4dc8;
        puVar1 = (uint *)0x4dd8;
        uVar13 = *puVar1;
        *puVar1 = *puVar1 - uVar9;
        *(int *)0x4dda = (*(int *)0x4dda - iVar6) - (uint)(uVar13 < uVar9);
        iVar6 = *(int *)0x4dda;
        uVar9 = *(uint *)0x4dd8;
        puVar1 = (uint *)0x4dd0;
        uVar13 = *puVar1;
        *puVar1 = *puVar1 - uVar9;
        *(int *)0x4dd2 = (*(int *)0x4dd2 - iVar6) - (uint)(uVar13 < uVar9);
      }
      if (*(int *)0x4dd6 < *(int *)0x4dda) {
        return 0;
      }
      if ((*(int *)0x4dda == *(int *)0x4dd6) && (*(uint *)0x4dd4 < *(uint *)0x4dd8)) {
        return 0;
      }
      uVar13 = *(uint *)0x4dd4;
      uVar9 = *(uint *)0x4dd8;
      uVar7 = *(int *)0x4dd6 + *(int *)0x4dda + (uint)CARRY2(uVar13,*(uint *)0x4dd8);
      iVar6 = (int)uVar7 >> 1;
      lVar12 = func_0x000013b6();
      lVar12 = lVar12 + CONCAT22(iVar6,uVar13 + uVar9 >> 1 | (uint)((uVar7 & 1) != 0) << 0xf);
      uVar9 = (uint)lVar12;
      puVar1 = (uint *)0x4dd0;
      uVar13 = *puVar1;
      *puVar1 = *puVar1 + uVar9;
      *(int *)0x4dd2 = *(int *)0x4dd2 + (int)((ulong)lVar12 >> 0x10) + (uint)CARRY2(uVar13,uVar9);
      *(undefined2 *)0x4ddc = 0;
      return 0;
    }
    iVar6 = *(int *)0x4dda;
    iVar2 = *(int *)0x4dd8;
    uVar7 = -iVar2;
    uVar9 = *(uint *)0x4dc0;
    uVar8 = uVar7 + *(uint *)0x4dc0;
    iVar3 = *(int *)0x4dc2;
    puVar1 = (uint *)0x4dd0;
    uVar13 = *puVar1;
    *puVar1 = *puVar1 + uVar8;
    *(int *)0x4dd2 =
         *(int *)0x4dd2 + (-(uint)(iVar2 != 0) - iVar6) + iVar3 + (uint)CARRY2(uVar7,uVar9) +
         (uint)CARRY2(uVar13,uVar8);
    iVar6 = *(int *)0x4dca;
    uVar9 = *(uint *)0x4dc8;
    puVar1 = (uint *)0x4dd8;
    uVar13 = *puVar1;
    *puVar1 = *puVar1 - uVar9;
    *(int *)0x4dda = (*(int *)0x4dda - iVar6) - (uint)(uVar13 < uVar9);
    *(int *)0x5dee = *(int *)0x5dee + -1;
    if ((*(int *)0x4dd2 < 1) && (*(int *)0x4dd2 < 0)) {
      iVar6 = *(int *)0x4dce;
      uVar9 = *(uint *)0x4dcc;
      puVar1 = (uint *)0x4dd4;
      uVar13 = *puVar1;
      *puVar1 = *puVar1 + uVar9;
      *(int *)0x4dd6 = *(int *)0x4dd6 + iVar6 + (uint)CARRY2(uVar13,uVar9);
      iVar6 = *(int *)0x4dd6;
      uVar9 = *(uint *)0x4dd4;
      puVar1 = (uint *)0x4dd0;
      uVar13 = *puVar1;
      *puVar1 = *puVar1 + uVar9;
      *(int *)0x4dd2 = *(int *)0x4dd2 + iVar6 + (uint)CARRY2(uVar13,uVar9);
      *(int *)0x5df0 = *(int *)0x5df0 + 1;
    }
    param_1 = *(int *)0x5dee;
  }
  else {
    *(int *)0x4dbe = param_1 >> 0xf;
    *(int *)0x4dbc = param_1;
    if (param_2 == 0) {
      pcVar4 = (code *)swi(0x3b);
      (*pcVar4)(*(undefined2 *)0x5db0);
      pcVar4 = (code *)swi(0x3b);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x3a);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x34);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x35);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x3d);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x37);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x34);
      (*pcVar4)();
      uVar10 = func_0x00000fbe();
      *(undefined2 *)0x4dba = (int)((ulong)uVar10 >> 0x10);
      *(undefined2 *)0x4db8 = (int)uVar10;
      pcVar4 = (code *)swi(0x37);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x34);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x37);
      (*pcVar4)();
      pcVar4 = (code *)swi(0x3a);
      (*pcVar4)();
      uVar5 = FUN_1000_a1e4();
      return uVar5;
    }
    *(int *)0x4dba = param_2 >> 0xf;
    *(int *)0x4db8 = param_2;
    *(int *)0x5dee = param_1;
    *(undefined2 *)0x5df0 = 0;
    uVar10 = func_0x000011e3();
    *(undefined2 *)0x4dc2 = (int)((ulong)uVar10 >> 0x10);
    *(undefined2 *)0x4dc0 = (int)uVar10;
    uVar10 = func_0x000011e3(0);
    *(undefined2 *)0x4dc6 = (int)((ulong)uVar10 >> 0x10);
    *(undefined2 *)0x4dc4 = (int)uVar10;
    iVar6 = *(int *)0x4dc0;
    *(uint *)0x4dca = *(int *)0x4dc2 << 1 | (uint)(iVar6 < 0);
    *(int *)0x4dc8 = iVar6 << 1;
    iVar6 = *(int *)0x4dc4;
    *(uint *)0x4dce = *(int *)0x4dc6 << 1 | (uint)(iVar6 < 0);
    *(int *)0x4dcc = iVar6 << 1;
    *(undefined2 *)0x4dd6 = 0;
    *(undefined2 *)0x4dd4 = 0;
    uVar10 = func_0x000011e3(0);
    *(undefined2 *)0x4dda = (int)((ulong)uVar10 >> 0x10);
    *(undefined2 *)0x4dd8 = (int)uVar10;
    uVar10 = func_0x000013b6(0);
    uVar13 = (uint)uVar10;
    uVar11 = func_0x000011e3(0);
    *(int *)0x4dd2 =
         ((int)((ulong)uVar10 >> 0x10) - (int)((ulong)uVar11 >> 0x10)) -
         (uint)(uVar13 < (uint)uVar11);
    *(int *)0x4dd0 = uVar13 - (uint)uVar11;
    *(undefined2 *)0x4ddc = 1;
  }
  if (param_1 != 0) {
    return 0;
  }
  return 1;
}



// Function: FUN_1000_6f3b @ 1000:6f3b

void __cdecl16far
FUN_1000_6f3b(int param_1,undefined2 param_2,undefined2 param_3,int param_4,int param_5,
             undefined2 param_6,undefined2 param_7,uint param_8)

{
  undefined2 uVar1;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  
  if (param_1 != 0) {
    *(undefined2 *)0x5dee = param_2;
    *(undefined2 *)0x4de2 = param_2;
    *(undefined2 *)0x4dde = 0;
    *(undefined2 *)0x5df0 = 0;
    *(undefined2 *)0x4de0 = 0;
    *(undefined2 *)0x535c = 1;
    do {
      uVar1 = FUN_1000_6c78(param_2,param_3,*(undefined2 *)0x535c);
      *(undefined2 *)0x535c = uVar1;
      if (*(int *)0x5dee == *(int *)0x4de2) {
        *(undefined2 *)(*(int *)0x4dde * 2 + 0x4de4) = 0;
      }
      else if (*(int *)0x4de0 < *(int *)0x5df0) {
        *(undefined2 *)(*(int *)0x4dde * 2 + 0x4de4) = 1;
      }
      else {
        *(undefined2 *)(*(int *)0x4dde * 2 + 0x4de4) = 0xffff;
      }
      *(undefined2 *)0x4de2 = *(undefined2 *)0x5dee;
      *(undefined2 *)0x4de0 = *(undefined2 *)0x5df0;
      *(int *)0x4dde = *(int *)0x4dde + 1;
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        unaff_CS = 0x11c1;
        FUN_1000_4125();
      }
    } while (*(int *)0x535c == 0);
    *(undefined2 *)0x5366 = *(undefined2 *)0x4dde;
  }
  if ((param_8 & 2) != 0) {
    *(undefined2 *)0x7488 = param_6;
    *(undefined2 *)0x5364 = param_6;
    *(uint *)0x5362 = param_8 & 0x1c;
    *(undefined2 *)0x4dde = 1;
    *(undefined2 *)0x4de0 = 0;
    *(undefined2 *)0x4de2 = param_2;
    while (*(int *)0x4dde <= *(int *)0x5366) {
      while ((*(int *)(*(int *)0x4dde * 2 + 0x4de4) == 0 && (*(int *)0x4dde < *(int *)0x5366))) {
        *(int *)0x4de0 = *(int *)0x4de0 + 1;
        *(int *)0x4dde = *(int *)0x4dde + 1;
      }
      *(int *)0x535e = *(int *)0x4de0 + -1;
      if (*(int *)0x5362 == 8) {
        *(undefined2 *)0x5360 = 0;
      }
      else {
        *(int *)0x5360 = -*(int *)0x535e;
      }
      if ((*(uint *)0x5362 & 0xc) != 0) {
        *(undefined2 *)0x7488 = *(undefined2 *)0x5364;
      }
      do {
        *(int *)0x5df0 = param_4 + *(int *)0x535e;
        *(int *)0x5dee = param_5 + *(int *)0x4de2;
        (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,*(undefined2 *)0x5caf);
        *(int *)0x5df0 = param_4 + *(int *)0x535e;
        *(int *)0x5dee = param_5 - *(int *)0x4de2;
        (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
        if (*(int *)0x5362 == 8) {
          *(int *)0x5df0 = param_4 - *(int *)0x535e;
          *(int *)0x5dee = param_5 - *(int *)0x4de2;
          (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,*(undefined2 *)0x5caf);
          *(int *)0x5df0 = param_4 - *(int *)0x535e;
          *(int *)0x5dee = param_5 + *(int *)0x4de2;
          (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,*(undefined2 *)0x5caf);
        }
        if (((*(uint *)0x5362 & 0xc) != 0) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
          *(undefined2 *)0x7488 = 3;
        }
        *(int *)0x5cbb = *(int *)0x5cbb + 1;
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          unaff_CS = 0x11c1;
          FUN_1000_4125();
        }
        *(int *)0x535e = *(int *)0x535e + -1;
      } while (*(int *)0x5360 <= *(int *)0x535e);
      if ((*(int *)0x5362 == 0x10) &&
         (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
        *(undefined2 *)0x7488 = 3;
      }
      if (0 < *(int *)(*(int *)0x4dde * 2 + 0x4de4)) {
        *(int *)0x4de0 = *(int *)0x4de0 + 1;
      }
      *(int *)0x4de2 = *(int *)0x4de2 + -1;
      *(int *)0x4dde = *(int *)0x4dde + 1;
    }
  }
  if ((param_8 & 1) != 0) {
    *(undefined2 *)0x7488 = param_7;
    *(undefined2 *)0x4dde = 1;
    *(undefined2 *)0x4de0 = 0;
    *(undefined2 *)0x4de2 = param_2;
    while (*(int *)0x4dde <= *(int *)0x5366) {
      *(int *)0x5df0 = param_4 + *(int *)0x4de0;
      *(int *)0x5dee = param_5 + *(int *)0x4de2;
      (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,*(undefined2 *)0x5caf);
      *(int *)0x5df0 = param_4 + *(int *)0x4de0;
      *(int *)0x5dee = param_5 - *(int *)0x4de2;
      (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,*(undefined2 *)0x5caf);
      *(int *)0x5df0 = param_4 - *(int *)0x4de0;
      *(int *)0x5dee = param_5 - *(int *)0x4de2;
      (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,*(undefined2 *)0x5caf);
      *(int *)0x5df0 = param_4 - *(int *)0x4de0;
      *(int *)0x5dee = param_5 + *(int *)0x4de2;
      (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,*(undefined2 *)0x5caf);
      if (((param_8 & 0x20) != 0) &&
         (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
        *(undefined2 *)0x7488 = 3;
      }
      *(int *)0x5cbb = *(int *)0x5cbb + 1;
      if (*(int *)(*(int *)0x4dde * 2 + 0x4de4) == 0) {
        *(int *)0x4de0 = *(int *)0x4de0 + 1;
      }
      else {
        if (0 < *(int *)(*(int *)0x4dde * 2 + 0x4de4)) {
          *(int *)0x4de0 = *(int *)0x4de0 + 1;
        }
        *(int *)0x4de2 = *(int *)0x4de2 + -1;
      }
      *(int *)0x4dde = *(int *)0x4dde + 1;
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        unaff_CS = 0x11c1;
        FUN_1000_4125();
      }
    }
  }
  return;
}



// Function: FUN_1000_7245 @ 1000:7245

void __cdecl16far
FUN_1000_7245(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_CS;
  undefined2 uVar6;
  undefined2 unaff_DS;
  int local_12;
  int local_4;
  
  local_12 = 1;
  if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
    param_3 = (param_3 >> 1) << 1;
    param_5 = (param_5 >> 1) << 1;
    param_7 = (param_7 + -2 >> 1) << 1;
    local_12 = 2;
  }
  else {
    param_7 = param_7 + -1;
  }
  local_4 = 0;
  while( true ) {
    if (param_7 < local_4) {
      return;
    }
    if ((param_1 & 1) == 0) {
      iVar3 = param_5 + local_4;
    }
    else {
      iVar3 = (param_5 + param_7) - local_4;
    }
    for (iVar5 = 0; iVar5 <= param_6 + -1; iVar5 = iVar5 + 1) {
      if ((int)param_1 < 2) {
        iVar4 = param_4 + iVar5;
      }
      else {
        iVar4 = (param_4 + param_6 + -1) - iVar5;
      }
      bVar1 = (*(code *)*(undefined2 *)0x5c3b)(unaff_CS,param_2 + iVar5,param_3 + local_4);
      bVar2 = (*(code *)*(undefined2 *)0x5c3b)(unaff_CS,iVar4,iVar3);
      *(uint *)0x7488 = (uint)bVar2;
      *(int *)0x5df0 = param_2 + iVar5;
      *(int *)0x5dee = param_3 + local_4;
      (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
      *(uint *)0x7488 = (uint)bVar1;
      *(int *)0x5df0 = iVar4;
      *(int *)0x5dee = iVar3;
      (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
    }
    uVar6 = unaff_CS;
    if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
      uVar6 = 0x11c1;
      FUN_1000_4125();
    }
    if ((*(int *)0x5d7e != 0) || (unaff_CS = uVar6, *(int *)0x5d80 != 0)) {
      unaff_CS = 0x11c1;
      iVar3 = func_0x000134f7(uVar6);
      if (iVar3 != 0) {
        return;
      }
    }
    if (*(int *)0x5d92 == 0x6e) break;
    local_4 = local_4 + local_12;
  }
  return;
}



// Function: FUN_1000_736d @ 1000:736d

void __cdecl16far FUN_1000_736d(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)0x5db2 + -1;
    *(int *)0x5370 = iVar1;
    *(int *)0x536a = iVar1;
    *(int *)0x5368 = iVar1;
    iVar1 = *(int *)0x5db0 + -1;
    *(int *)0x5372 = iVar1;
    *(int *)0x536c = iVar1;
    *(int *)0x536e = iVar1;
    uVar3 = 0;
    uVar2 = 0x8000;
    iVar1 = func_0x00001694();
    iVar1 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0),uVar2,uVar3);
    if (iVar1 != 0) {
      *(int *)0x536a = *(int *)0x536a << 1;
      *(int *)0x5372 = *(int *)0x5372 << 1;
    }
  }
  FUN_1000_6f3b(1,*(undefined2 *)0x536a,*(undefined2 *)0x536c,0,*(undefined2 *)0x5368,0,3,0x21);
  FUN_1000_6f3b(1,*(undefined2 *)0x5370,*(undefined2 *)0x5372,*(undefined2 *)0x536e,0,0,3,0x21);
  *(int *)0x536a = *(int *)0x536a + -8;
  *(int *)0x5372 = *(int *)0x5372 + -8;
  return;
}



// Function: FUN_1000_7406 @ 1000:7406

/* WARNING: Control flow encountered bad instruction data */

void __cdecl16far FUN_1000_7406(int param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined2 extraout_DX;
  int iVar3;
  undefined2 unaff_DS;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined2 uVar7;
  undefined2 uStack_6;
  
  if ((param_1 != 0) || (*(int *)0x5374 < 2)) {
    *(undefined2 *)0x5378 = 0xff;
    *(undefined2 *)0x5376 = 0;
    *(int *)0x5374 = *(int *)0x5dae / 2;
    if (param_1 != 0) {
      *(uint *)0x7488 = *(uint *)0x5dc0 & 3;
    }
  }
  *(int *)0x5378 = *(int *)0x5378 + 1;
  uVar1 = *(uint *)0x5378;
  *(uint *)0x5378 = uVar1 & 0xf;
  if ((uVar1 & 0xf) != 0) {
    *(int *)0x5df0 = *(int *)0x5df0 + 1;
    return;
  }
  *(int *)0x5376 = *(int *)0x5376 + (*(int *)0x5dae / 2 - *(int *)0x5374) + 0x2d;
  if ((*(int *)0x5dae * 0x12 < *(int *)0x5376) || (*(int *)0x5376 < 0)) {
    *(int *)0x5374 = *(int *)0x5374 - *(int *)0x5dae / 0x14;
    *(undefined2 *)0x5376 = 0;
    *(int *)0x7488 = *(int *)0x7488 + 1;
    if (*(uint *)0x5db6 <= *(uint *)0x7488) {
      *(undefined2 *)0x7488 = 3;
    }
  }
  iVar3 = *(int *)0x5376;
  pcVar2 = (code *)swi(0x3b);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x38);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x35);
  (*pcVar2)();
  do {
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    uVar7 = *(undefined2 *)0x5374;
    pcVar2 = (code *)swi(0x3b);
    (*pcVar2)();
    cVar6 = SCARRY2(iVar3,1);
    iVar3 = iVar3 + 1;
    cVar5 = iVar3 < 0;
    bVar4 = iVar3 == 0;
    pcVar2 = (code *)swi(0x37);
    (*pcVar2)();
  } while (bVar4 || cVar6 != cVar5);
  pcVar2 = (code *)swi(0x35);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)(uVar7);
  FUN_1000_b2a0();
  func_0x00000f6e();
  pcVar2 = (code *)swi(0x37);
  (*pcVar2)();
  out(*uStack_6,extraout_DX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_7536 @ 1000:7536

void __cdecl16far FUN_1000_7536(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if ((param_1 != 0) ||
     ((*(uint *)0x5c51 <= *(uint *)0x537c && (*(uint *)0x5c4f <= *(uint *)0x537a)))) {
    *(undefined2 *)0x5384 = 0;
    *(undefined2 *)0x5388 = 0;
    *(undefined2 *)0x5386 = 0;
    *(undefined2 *)0x5382 = 0xffff;
    *(undefined2 *)0x538a = 5;
    uVar5 = 0;
    uVar4 = 0x8000;
    func_0x00001694();
    uVar3 = func_0x000011e3(0,uVar4,uVar5);
    iVar1 = func_0x000012e7(0,uVar3);
    *(int *)0x5380 = iVar1 - *(int *)0x5c4f;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    iVar1 = func_0x000012e7(0,uVar3);
    *(int *)0x537e = iVar1 - *(int *)0x5c51;
    *(uint *)0x537c = *(uint *)0x5c51 >> 1;
    *(uint *)0x537a = *(uint *)0x5c4f >> 1;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    iVar1 = func_0x000012e7(0,uVar3);
    *(int *)0x6025 = iVar1 + 1;
  }
  do {
    iVar1 = *(int *)0x5382;
    *(int *)0x5382 = *(int *)0x5382 + 1;
    if (*(int *)0x5384 <= iVar1) {
      *(undefined2 *)0x5382 = 1;
      *(int *)0x538a = *(int *)0x538a + 1;
      if (3 < *(uint *)0x538a) {
        *(int *)0x5384 = *(int *)0x5384 + 2;
        *(undefined2 *)0x538a = 0;
        *(int *)0x537c = *(int *)0x537c + *(int *)0x6025;
        *(int *)0x537a = *(int *)0x537a - *(int *)0x6025;
      }
      *(int *)0x5386 = *(int *)(*(int *)0x538a * 2 + 0xa6) * *(int *)0x6025;
      *(int *)0x5388 = *(int *)(*(int *)0x538a * 2 + 0xae) * *(int *)0x6025;
    }
    *(int *)0x537c = *(int *)0x537c + *(int *)0x5386;
    *(int *)0x537a = *(int *)0x537a + *(int *)0x5388;
    uVar2 = (uint)*(byte *)((int)*(undefined4 *)0x5c53 +
                           *(int *)0x537c * *(int *)0x5c4f + *(int *)0x537a);
  } while (uVar2 == 0);
  if ((*(uint *)0x537c < *(uint *)0x5c51) && (*(uint *)0x537a < *(uint *)0x5c4f)) {
    *(uint *)0x7488 = uVar2 & *(uint *)0x5dc0;
    *(int *)0x5df0 = *(int *)0x537e + *(uint *)0x537c / *(uint *)0x6025;
    *(int *)0x5dee = *(int *)0x5380 + *(uint *)0x537a / *(uint *)0x6025;
  }
  return;
}



// Function: FUN_1000_76d6 @ 1000:76d6

void __cdecl16far FUN_1000_76d6(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar3;
  undefined2 uVar4;
  
  if (((param_1 != 0) || (*(int *)0x5dae < *(int *)0x5df0)) || (*(int *)0x5dae < *(int *)0x5dee)) {
    uVar4 = 0;
    uVar2 = 0x8000;
    func_0x00001694();
    uVar3 = func_0x000011e3(0,uVar2,uVar4);
    uVar2 = func_0x000012e7(0,uVar3);
    *(undefined2 *)0x538c = uVar2;
    *(undefined2 *)0x5df0 = uVar2;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    uVar2 = func_0x000012e7(0,uVar3);
    *(undefined2 *)0x538e = uVar2;
    *(undefined2 *)0x5dee = uVar2;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    iVar1 = func_0x000012e7(0,uVar3);
    *(int *)0x5394 = iVar1 + *(int *)0x5dae / 6;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    iVar1 = func_0x000012e7(0,uVar3);
    *(int *)0x5396 = iVar1 + *(int *)0x5dae / 6;
    *(undefined2 *)0x5398 = 1;
    *(int *)0x5390 = *(int *)0x538c + *(int *)0x5394;
    *(int *)0x5392 = *(int *)0x538e + *(int *)0x5396;
    iVar1 = func_0x00001694(0,0x8000,0);
    unaff_CS = 0;
    uVar2 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0));
    *(undefined2 *)0x6025 = uVar2;
  }
  uVar2 = FUN_1000_66ae(*(undefined2 *)0x5390,*(undefined2 *)0x5392,*(undefined2 *)0x5398);
  *(undefined2 *)0x5398 = uVar2;
  if (*(int *)0x5398 != 0) {
    FUN_1000_67bb(unaff_CS,0);
    *(undefined2 *)0x5df0 = *(undefined2 *)0x538c;
    *(undefined2 *)0x5dee = *(undefined2 *)0x538e;
    if (*(int *)0x6025 == 0) {
      *(int *)0x538e = *(int *)0x538e + 1;
    }
    else {
      *(int *)0x538c = *(int *)0x538c + 1;
    }
    *(int *)0x5390 = *(int *)0x538c + *(int *)0x5394;
    *(int *)0x5392 = *(int *)0x538e + *(int *)0x5396;
  }
  return;
}



// Function: FUN_1000_784b @ 1000:784b

/* WARNING: Instruction at (ram,0x00017911) overlaps instruction at (ram,0x00017910)
    */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0001cede) */
/* WARNING: Removing unreachable block (ram,0x0001cee7) */
/* WARNING: Removing unreachable block (ram,0x0001ceec) */
/* WARNING: Removing unreachable block (ram,0x0001cef5) */
/* WARNING: Removing unreachable block (ram,0x0001cefd) */
/* WARNING: Removing unreachable block (ram,0x0001cf2c) */
/* WARNING: Removing unreachable block (ram,0x0001cf42) */
/* WARNING: Removing unreachable block (ram,0x0001cf5b) */
/* WARNING: Removing unreachable block (ram,0x0001cf61) */
/* WARNING: Removing unreachable block (ram,0x0001cf71) */
/* WARNING: Removing unreachable block (ram,0x0001cf68) */
/* WARNING: Removing unreachable block (ram,0x0001cf3f) */
/* WARNING: Removing unreachable block (ram,0x0001cf23) */
/* WARNING: Removing unreachable block (ram,0x0001cefa) */
/* WARNING: Removing unreachable block (ram,0x0001d83f) */

int * __cdecl16near FUN_1000_784b(code *param_1,int *param_2,int *param_3)

{
  char *pcVar1;
  uint *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  code *pcVar5;
  byte bVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  undefined2 uVar10;
  int *piVar11;
  int *piVar12;
  char extraout_AH;
  int *piVar13;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  uint extraout_DX_01;
  int *extraout_DX_02;
  uint uVar14;
  undefined2 *puVar15;
  undefined1 *puVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined1 *unaff_SI;
  int *unaff_DI;
  int *unaff_ES;
  int *unaff_CS;
  int *piVar19;
  undefined2 unaff_SS;
  uint unaff_DS;
  bool bVar20;
  undefined1 uVar21;
  char cVar22;
  char cVar23;
  int *piVar24;
  int *piStack0008;
  undefined1 *puStack000a;
  uint auStack_b6e [720];
  uint auStack_5ce [717];
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined4 uStack_2e;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  int iStack_26;
  uint uStack_24;
  uint uStack_22;
  int *piStack_20;
  undefined4 uStack_1e;
  undefined4 uStack_1a;
  undefined1 auStack_16 [4];
  undefined4 uStack_12;
  int *piStack_e;
  int *in_stack_0000fff4;
  int *in_stack_0000fffc;
  
  puVar17 = (undefined2 *)&stack0xfffe;
  puVar18 = (undefined2 *)&stack0xfffe;
  if ((param_1._2_2_ != (code *)0x0) || (cVar23 = '\0', *(int *)0x53a8 != 0)) {
    *(undefined2 *)0x53a8 = 0;
    pcVar5 = (code *)swi(0x3b);
    (*pcVar5)();
    pcVar5 = (code *)swi(0x3b);
    piVar12 = (int *)(*pcVar5)();
    return piVar12;
  }
  uVar21 = 1;
  cVar22 = '\0';
  do {
    pcVar5 = (code *)swi(0x35);
    (*pcVar5)();
    pcVar5 = (code *)swi(0x34);
    piVar12 = unaff_ES;
    (*pcVar5)();
    pcVar5 = (code *)swi(0x39);
    (*pcVar5)();
  } while ((bool)uVar21 || cVar23 != cVar22);
  pcVar5 = (code *)swi(0x3d);
  (*pcVar5)();
  if (((uint)in_stack_0000fff4 & 0x100) != 0 || ((uint)in_stack_0000fff4 & 0x4000) != 0) {
    *(undefined2 *)0x5cbb = 32000;
    *(undefined2 *)0x53a8 = 1;
    return in_stack_0000fff4;
  }
  uVar9 = extraout_DX_01;
  piVar19 = unaff_CS;
  piVar13 = unaff_ES;
  if (*(int *)0x53ac != 0) {
    *(undefined2 *)0x53ac = 0;
    *(int *)0x539a = *(int *)0x539a >> 1;
    *(int *)0x539c = *(int *)0x539c >> 1;
    *(int *)0x539e = *(int *)0x539e >> 1;
    *(int *)0x53a0 = *(int *)0x53a0 >> 1;
    pcVar5 = (code *)swi(0x35);
    (*pcVar5)();
    pcVar5 = (code *)swi(0x34);
    (*pcVar5)();
    pcVar5 = (code *)swi(0x35);
    (*pcVar5)();
    pcVar5 = (code *)swi(0x3d);
    (*pcVar5)();
    pcVar5 = (code *)swi(0x3b);
    (*pcVar5)();
    pcVar5 = (code *)swi(0x3b);
    (*pcVar5)();
    pcVar5 = (code *)swi(0x34);
    (*pcVar5)();
    unaff_DI = unaff_DI + 1;
    uVar7 = func_0x00000fbe();
    *(undefined2 *)0x53a2 = uVar7;
    pcVar5 = (code *)swi(0x35);
    (*pcVar5)();
    uVar7 = func_0x00000fbe();
    *(undefined2 *)0x53a4 = uVar7;
    func_0x00001694();
    func_0x000011e3();
    func_0x000012e7();
    pcVar5 = (code *)swi(0x3b);
    (*pcVar5)();
    puStack000a = (undefined1 *)0x0;
    unaff_SI = puStack000a;
    pcVar5 = (code *)swi(0x3d);
    (*pcVar5)();
    piVar24 = (int *)0x53b0;
    iVar8 = *piVar24;
    *piVar24 = *piVar24 + -1;
    if (SBORROW2(iVar8,1) != *piVar24 < 0) {
      *(undefined2 *)0x53b0 = 0;
    }
    *(int *)0x53ae = 1 << (*(byte *)0x53b0 & 0x1f);
    *(undefined2 *)0x53b8 = 0;
    *(undefined2 *)0x53aa = 1;
    if (*(int *)0x7484 == 4) {
      *(undefined2 *)0x53b2 = 2;
    }
    else {
      func_0x00001694();
      uVar7 = func_0x000012e7();
      *(undefined2 *)0x53b2 = uVar7;
    }
    iVar8 = func_0x00001694();
    piVar12 = (int *)(iVar8 >> 0xf);
    func_0x000011e3();
    uVar9 = func_0x000012e7();
    *(uint *)0x53bc = uVar9;
    *(uint *)0x7488 = uVar9 & *(uint *)0x5dc0;
    pcVar5 = (code *)swi(0x3b);
    (*pcVar5)();
    param_2 = (int *)func_0x00000fbe();
    *(undefined2 *)0x53b4 = 0;
    *(undefined2 *)0x5dee = 0;
    *(undefined2 *)0x5df0 = 0;
    *(undefined2 *)0x53a6 = 1;
    uVar7 = 0;
    do {
      _piStack0008 = (int *)CONCAT22(*(undefined2 *)0x53a6,(int *)*(undefined2 *)0x53a4);
      param_1 = (code *)CONCAT22(uVar7,(code *)0x7a73);
      uVar10 = FUN_1000_66ae();
      *(undefined2 *)0x53a6 = uVar10;
      *(undefined2 *)(*(int *)0x53b4 * 8 + 0x53be) = *(undefined2 *)0x5df0;
      *(undefined2 *)(*(int *)0x53b4 * 8 + 0x53c0) = *(undefined2 *)0x5dee;
      *(int *)0x53b4 = *(int *)0x53b4 + 1;
      uVar10 = uVar7;
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        uVar10 = 0x11c1;
        _piStack0008 = (int *)CONCAT22(uVar7,(int *)0x7aad);
        FUN_1000_4125();
      }
      uVar7 = uVar10;
    } while (*(int *)0x53a6 == 0);
    pcVar5 = (code *)swi(0x3b);
    (*pcVar5)();
    piVar24 = (int *)func_0x00000fbe();
    uVar9 = (uint)((ulong)piVar24 >> 0x10);
    *(undefined2 *)0x53b6 = 0;
    *(undefined2 *)0x5dee = 0;
    *(undefined2 *)0x5df0 = 0;
    *(undefined2 *)0x53a6 = 1;
    piVar13 = (int *)0x0;
    do {
      in_stack_0000fff4 = (int *)*(int *)0x53a6;
      uStack_12._2_2_ = *(undefined2 *)0x53a2;
      auStack_16._2_2_ = 0x7aea;
      uStack_12._0_2_ = piVar13;
      piStack_e = (int *)piVar24;
      uVar7 = FUN_1000_66ae();
      *(undefined2 *)0x53a6 = uVar7;
      *(undefined2 *)(*(int *)0x53b6 * 8 + 0x53c2) = *(undefined2 *)0x5df0;
      *(undefined2 *)(*(int *)0x53b6 * 8 + 0x53c4) = *(undefined2 *)0x5dee;
      *(int *)0x53b6 = *(int *)0x53b6 + 1;
      piVar19 = piVar13;
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        piVar19 = (int *)0x11c1;
        piStack_e = (int *)0x7b24;
        FUN_1000_4125();
        in_stack_0000fff4 = piVar13;
      }
      piVar13 = piVar19;
    } while (*(int *)0x53a6 == 0);
    *(undefined2 *)0x53a6 = 1;
    piVar13 = (int *)piVar24;
    in_stack_0000fffc = unaff_CS;
  }
  if (*(int *)0x53a6 == 0) {
LAB_1000_7c7e:
    piStack_e = (int *)*(undefined2 *)0x53a4;
    uStack_12._2_2_ = *(undefined2 *)0x53a2;
    auStack_16._2_2_ = 0x7c8e;
    uStack_12._0_2_ = piVar19;
    piVar12 = (int *)FUN_1000_66ae();
    *(uint *)0x53a6 = (uint)piVar12;
    if (*(int *)0x53b2 == 1) {
      *(int *)0x7488 = *(int *)0x7488 + 1;
      piVar12 = (int *)*(uint *)0x7488;
      if ((int *)*(uint *)0x5db6 <= piVar12) {
        *(undefined2 *)0x7488 = 3;
      }
    }
    *(undefined2 *)0x5cbb = 1;
    return piVar12;
  }
  piVar11 = (int *)*(uint *)0x53b8;
  if (*(int *)0x53b4 <= (int)piVar11) {
    *(uint *)0x53aa = *(uint *)0x53aa | 2;
  }
  if (*(int *)0x53b2 == 1) {
    piVar11 = (int *)(*(uint *)0x53bc & *(uint *)0x5dc0);
    *(uint *)0x7488 = (uint)piVar11;
  }
  uVar14 = *(uint *)0x53aa;
  if (6 < uVar14) {
    if (*(int *)0x53ba == 0) {
      *(undefined2 *)0x5df0 = *(undefined2 *)(*(int *)0x53b8 * 8 + 0x53c2);
      uVar7 = *(undefined2 *)(*(int *)0x53b8 * 8 + 0x53c4);
    }
    else {
      *(undefined2 *)0x5df0 = *(undefined2 *)(*(int *)0x53b8 * 8 + 0x53be);
      uVar7 = *(undefined2 *)(*(int *)0x53b8 * 8 + 0x53c0);
    }
    *(undefined2 *)0x5dee = uVar7;
    if (*(int *)0x53b6 <= *(int *)0x53b8) {
      *(uint *)0x53aa = *(uint *)0x53aa & 1;
    }
    if (*(int *)0x53aa == 1) {
      *(int *)0x53b8 = *(int *)0x53b8 + *(int *)0x53ae;
      if ((*(int *)0x53b2 == 0) &&
         (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
        *(undefined2 *)0x7488 = 3;
      }
      if (*(int *)0x53b2 == 2) {
        *(int *)0x5daa = *(int *)0x5daa + 1;
        puVar2 = (uint *)0x5daa;
        *puVar2 = *puVar2 & 3;
        if ((*puVar2 == 0) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
          *(undefined2 *)0x7488 = 3;
        }
      }
    }
    if ((*(int *)0x53b4 <= *(int *)0x53b8) && (*(int *)0x53b6 <= *(int *)0x53b8)) {
      *(undefined2 *)0x53ac = 1;
    }
    goto LAB_1000_7c7e;
  }
  bVar20 = (int)uVar14 < 0;
  puVar15 = (undefined2 *)(uVar14 * 2);
  piVar19 = (int *)0x1000;
  switch(uVar14) {
  case 0:
code_r0x0001468c:
    _piStack0008 = (int *)CONCAT22(puStack000a,(int *)((int)piStack0008 + 1));
    piVar12 = param_2;
LAB_1000_468f:
    param_2 = piVar12;
    param_2 = (int *)((int)param_2 + -1);
    if ((param_2 != (int *)0x0) && (unaff_DI = (int *)((int)unaff_DI + -1), unaff_DI != (int *)0x0))
    {
      iVar8 = *(int *)param_1;
      *(int *)param_1 = *(int *)param_1 + -1;
      if (SBORROW2(iVar8,1) == *(int *)param_1 < 0) {
        iVar8 = *(int *)((code *)param_1 + 0xe);
        pbVar4 = *(byte **)((code *)param_1 + 0xc);
        *(int *)((code *)param_1 + 0xc) = *(int *)((code *)param_1 + 0xc) + 1;
        uVar9 = (uint)*pbVar4;
      }
      else {
        piStack_e = (int *)0x1000;
        uStack_12._2_2_ = 0x46c4;
        uVar9 = FUN_1000_4a0d();
      }
      if (uVar9 != 0xffff) goto LAB_1000_4686;
    }
    if (uVar9 == 0xffff) {
LAB_1000_467c:
      *(uint *)((code *)param_1 + 2) = *(uint *)((code *)param_1 + 2) | 0x20;
      return param_2;
    }
    while( true ) {
      if (param_2 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar12 = (int *)((int)param_2 + 1);
      unaff_DI = piVar12;
      if (*(int **)((code *)param_1 + 6) <= piVar12) {
        unaff_DI = *(int **)((code *)param_1 + 6);
      }
      if (((((*(uint *)((code *)param_1 + 2) & 0x40) == 0) || (*(int *)((code *)param_1 + 6) == 0))
          || (piVar12 <= *(int **)((code *)param_1 + 6))) || (*(int *)param_1 != 0)) break;
      uVar14 = 0;
      for (; *(int **)((code *)param_1 + 6) <= param_2;
          param_2 = (int *)((int)param_2 - *(int *)((code *)param_1 + 6))) {
        uVar14 = uVar14 + *(int *)((code *)param_1 + 6);
      }
      piStack_e = piStack0008;
      uStack_12._2_2_ = (int)(char)((code *)param_1)[4];
      uStack_12._0_2_ = (int *)0x1000;
      auStack_16._2_2_ = 0x4669;
      uVar9 = FUN_1000_16ba();
      _piStack0008 = (int *)CONCAT22(puStack000a,(int *)((int)piStack0008 + uVar9));
      if (uVar9 != uVar14) {
        param_2 = (int *)((int)param_2 + (uVar14 - uVar9));
        goto LAB_1000_467c;
      }
    }
    goto LAB_1000_468f;
  case 1:
    while( true ) {
      *(uint *)((int)puVar15 * 4 + 0x59c4) = (uint)piVar11;
      *(undefined2 *)(*(int *)0x59b2 * 4 + 0x59c6) = *(undefined2 *)0x5dee;
      *(int *)0x59b2 = *(int *)0x59b2 + 1;
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        piVar19 = (int *)0x11c1;
        piStack_e = (int *)0x8b33;
        FUN_1000_4125();
      }
      if (*(int *)0x59b0 != 0) break;
      piStack_e = (int *)*(undefined2 *)0x59a8;
      uStack_12._2_2_ = *(undefined2 *)0x59a6;
      auStack_16._2_2_ = 0x8ae9;
      uStack_12._0_2_ = piVar19;
      uVar7 = FUN_1000_66ae();
      *(undefined2 *)0x59b0 = uVar7;
      piVar19 = (int *)0x0;
      piStack_e = (int *)0x8b03;
      func_0x000011e3();
      puVar15 = (undefined2 *)*(undefined2 *)0x59b2;
      piVar11 = extraout_DX_02;
    }
    *(undefined2 *)0x59b4 = 0;
    while (*(int *)0x59b4 < *(int *)0x59b2) {
LAB_1000_8b43:
      *(undefined2 *)0x5df0 = *(undefined2 *)(*(int *)0x59b4 * 4 + 0x59c4);
      *(undefined2 *)0x5dee = *(undefined2 *)(*(int *)0x59b4 * 4 + 0x59c6);
      *(undefined2 *)0x59b0 = 1;
      if (*(int *)0x59c0 == 0) {
        *(uint *)0x7488 = *(uint *)0x59c2 & *(uint *)0x5dc0;
      }
      else {
        *(int *)0x7488 = *(int *)0x7488 + 1;
        if (*(uint *)0x5db6 <= *(uint *)0x7488) {
          *(undefined2 *)0x7488 = 3;
        }
      }
      do {
        piStack_e = (int *)0x0;
        uStack_12._2_2_ = 0;
        auStack_16._2_2_ = 0x8b99;
        uStack_12._0_2_ = piVar19;
        uVar7 = FUN_1000_66ae();
        *(undefined2 *)0x59b0 = uVar7;
        *(undefined2 *)0x59a2 = *(undefined2 *)0x5df0;
        *(undefined2 *)0x59a4 = *(undefined2 *)0x5dee;
        *(int *)0x5df0 = *(int *)0x59aa + *(int *)0x59a2;
        *(int *)0x5dee = *(int *)0x59ac + *(int *)0x59a4;
        uStack_12._2_2_ = 0x8bc7;
        piStack_e = piVar19;
        (*(code *)*(undefined2 *)0x5c3f)();
        *(int *)0x5df0 = *(int *)0x59aa - *(int *)0x59a2;
        *(int *)0x5dee = *(int *)0x59ac - *(int *)0x59a4;
        uStack_12._2_2_ = 0x8be4;
        piStack_e = piVar19;
        (*(code *)*(undefined2 *)0x5c3f)();
        *(int *)0x5df0 = *(int *)0x59aa + *(int *)0x59a2;
        *(int *)0x5dee = *(int *)0x59ac - *(int *)0x59a4;
        uStack_12._2_2_ = 0x8c01;
        piStack_e = piVar19;
        (*(code *)*(undefined2 *)0x5c3f)();
        *(int *)0x5df0 = *(int *)0x59aa - *(int *)0x59a2;
        *(int *)0x5dee = *(int *)0x59ac + *(int *)0x59a4;
        uStack_12._2_2_ = 0x8c1e;
        piStack_e = piVar19;
        (*(code *)*(undefined2 *)0x5c3f)();
        *(undefined2 *)0x5df0 = *(undefined2 *)0x59a2;
        *(undefined2 *)0x5dee = *(undefined2 *)0x59a4;
        *(int *)0x5cbb = *(int *)0x5cbb + 1;
        if ((*(int *)0x59c0 == 0) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
          *(undefined2 *)0x7488 = 3;
        }
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          piVar19 = (int *)0x11c1;
          piStack_e = (int *)0x8c57;
          FUN_1000_4125();
        }
      } while (*(int *)0x59b0 == 0);
      *(int *)0x59b4 = *(int *)0x59b4 + 1;
    }
    iVar8 = *(int *)0x59bc;
    *(int *)0x59bc = -iVar8;
    *(int *)0x59ba = *(int *)0x59ba + -iVar8;
    *(undefined2 *)0x5df0 = *(undefined2 *)0x59aa;
    piVar12 = (int *)*(undefined2 *)0x59ac;
    *(undefined2 *)0x5dee = piVar12;
    return piVar12;
  case 3:
    while( true ) {
      cVar23 = (char)((uint)in_stack_0000fff4 >> 8);
      if (bVar20) break;
      unaff_DI = (int *)((int)(char)piVar11 + (int)unaff_DI * 10);
      if (0x1344 < (int)unaff_DI) {
        unaff_DI = (int *)0x0;
        cVar23 = '\x01';
      }
      iVar8 = (int)puStack000a;
      _piStack0008 = (int *)CONCAT22((int)puStack000a + -1,piStack0008);
      if (iVar8 < 1) goto LAB_1000_08ed;
      piStack_e = param_2;
      uStack_12._2_2_ = 0x8ba;
      uVar7 = (*(code *)param_1)();
      bVar6 = (byte)uVar7;
      piVar12 = piStack0008;
      if (0x39 < bVar6) goto LAB_1000_08dd;
      bVar20 = bVar6 < 0x30;
      piVar11 = (int *)CONCAT11((char)((uint)uVar7 >> 8),bVar6 - 0x30);
      in_stack_0000fff4 = piStack0008;
    }
    uVar7 = CONCAT11((char)((uint)piVar11 >> 8),(char)piVar11 + '0');
LAB_1000_08dd:
    piStack_e = param_2;
    uStack_12._0_2_ = (int *)0x8e7;
    uStack_12._2_2_ = uVar7;
    (*param_1._2_2_)();
    piStack_e = (int *)((int)piStack_e + -1);
    cVar23 = piStack0008._1_1_;
LAB_1000_08ed:
    if ((char)piVar13 != '\0') {
      unaff_DI = (int *)-(int)unaff_DI;
      cVar23 = -cVar23;
    }
    if ((int)unaff_DS < 0) {
      pcVar5 = (code *)swi(0x35);
      piVar24 = (int *)(*pcVar5)();
      piVar19 = (int *)piVar24;
      out((int)((ulong)piVar24 >> 0x10),(char)piVar24);
      puVar18 = (undefined2 *)&stack0xfffe;
    }
    else {
      if (cVar23 == '\x01') {
        uStack_1a._0_2_ = 0xffff;
        uStack_1a._2_2_ = 0xffff;
        auStack_16._0_2_ = 0xffff;
        auStack_16._2_2_ = 0xffff;
        uStack_12._0_2_ = (int *)0x7ffe;
        pcVar5 = (code *)swi(0x37);
        uVar9 = unaff_DS;
        (*pcVar5)();
        puVar3 = unaff_SI;
        unaff_SI = unaff_SI + 1;
        out(*puVar3,extraout_DX);
        cVar23 = func_0x00014ffd();
        piVar19 = (int *)(uint)(byte)(cVar23 + unaff_SI[uVar9]);
        piVar12 = in_stack_0000fffc;
      }
      else {
        if (cVar23 != -1) {
          uVar9 = unaff_DS;
          puVar18 = (undefined2 *)&stack0xfffe;
          if (unaff_DS < 0x13) goto LAB_1000_0945;
          goto code_r0x00010942;
        }
        pcVar5 = (code *)swi(0x35);
        piVar24 = (int *)(*pcVar5)();
        piVar19 = (int *)piVar24;
        out((int)((ulong)piVar24 >> 0x10),(char)piVar24);
        piVar12 = in_stack_0000fffc;
      }
      uStack_12._2_2_ = 2;
    }
    do {
      cVar22 = '\0';
      cVar23 = *(char *)((int)puVar18 + -5) < '\0';
      bVar20 = *(char *)((int)puVar18 + -5) == '\0';
      if (bVar20) {
        unaff_ES = (int *)((ulong)*(int **)(puVar18 + 7) >> 0x10);
        unaff_DI = (int *)*(int **)(puVar18 + 7);
code_r0x00010978:
        *unaff_DI = *unaff_DI + puVar18[-6];
        **(undefined2 **)(puVar18 + 9) = puVar18[-7];
        return piVar19;
      }
      pcVar5 = (code *)swi(0x35);
      piVar19 = (int *)(*pcVar5)();
      in_stack_0000fffc = (int *)((int)piVar12 + -1);
      if (in_stack_0000fffc == (int *)0x0 || bVar20 != false) {
        if (bVar20 || cVar22 != cVar23) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        goto code_r0x00010978;
      }
      *(uint *)((undefined1 *)((int)puVar18 + (int)unaff_DI) + -0x7c3d) =
           *(uint *)((undefined1 *)((int)puVar18 + (int)unaff_DI) + -0x7c3d) ^
           (uint)in_stack_0000fffc;
      puVar17 = puVar18;
code_r0x00010942:
      uVar9 = 0x12;
      puVar18 = puVar17;
LAB_1000_0945:
      piVar12 = (int *)((int)in_stack_0000fffc - uVar9);
      unaff_DI = (int *)((int)unaff_DI + (int)piVar12);
      pcVar5 = (code *)swi(0x3b);
      (*pcVar5)();
      puVar3 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      out(*puVar3,extraout_DX_00);
      iVar8 = FUN_1000_d0dc();
      piVar19 = (int *)0x0;
      if (iVar8 != 0) {
        FUN_1000_0e28();
        if ((int)unaff_DI < 0) {
          pcVar5 = (code *)swi(0x3a);
          piVar19 = (int *)(*pcVar5)();
        }
        else {
          pcVar5 = (code *)swi(0x3a);
          piVar19 = (int *)(*pcVar5)();
          puVar18 = (undefined2 *)*puVar18;
        }
      }
    } while( true );
  case 4:
    do {
      puVar18 = puVar15;
      puVar15 = puVar18 + 1;
      piVar12 = (int *)((int)piVar12 + -1);
      if (piVar12 == (int *)0x0) {
        return (int *)0x0;
      }
    } while ((int *)*puVar15 != in_stack_0000fffc);
                    /* WARNING: Could not recover jumptable at 0x00015608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    piVar12 = (int *)(*(code *)puVar18[5])();
    return piVar12;
  case 5:
    do {
      (&stack0x004e)[(int)unaff_DI] = (&stack0x004e)[(int)unaff_DI] ^ (byte)puVar15;
      piStack_e = (int *)(*(int *)0x5b32 + *(int *)0x5b2e);
      uStack_12._2_2_ = 0x1000;
      uStack_12._0_2_ = (int *)0x92a6;
      uVar7 = FUN_1000_66ae();
      *(undefined2 *)0x5b28 = uVar7;
      *(int *)0x5cbb = *(int *)0x5cbb + 1;
      piStack_e = (int *)0x92b8;
      (*(code *)*(undefined2 *)0x5c3f)();
      if ((*(int *)0x6025 == 0) &&
         (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
        *(undefined2 *)0x7488 = 3;
      }
    } while (*(int *)0x5b28 == 0);
    if ((*(int *)0x5b38 < 1) && (*(int *)0x5b38 < 0)) {
      *(int *)0x5b2e = *(int *)0x5b2e + 1;
      iVar8 = *(int *)0x5b58;
      uVar14 = *(uint *)0x5b56;
      puVar2 = (uint *)0x5b3a;
      uVar9 = *puVar2;
      *puVar2 = *puVar2 + uVar14;
      *(int *)0x5b3c = *(int *)0x5b3c + iVar8 + (uint)CARRY2(uVar9,uVar14);
      iVar8 = *(int *)0x5b3c;
      uVar14 = *(uint *)0x5b3a;
      puVar2 = (uint *)0x5b36;
      uVar9 = *puVar2;
      *puVar2 = *puVar2 + uVar14;
      *(int *)0x5b38 = *(int *)0x5b38 + iVar8 + (uint)CARRY2(uVar9,uVar14);
    }
    *(int *)0x5b30 = *(int *)0x5b30 + -1;
    iVar8 = *(int *)0x5b50;
    uVar14 = *(uint *)0x5b4e;
    puVar2 = (uint *)0x5b3e;
    uVar9 = *puVar2;
    *puVar2 = *puVar2 - uVar14;
    *(int *)0x5b40 = (*(int *)0x5b40 - iVar8) - (uint)(uVar9 < uVar14);
    uVar14 = *(uint *)0x5b4a - *(uint *)0x5b3e;
    piVar12 = (int *)((*(int *)0x5b4c - *(int *)0x5b40) - (uint)(*(uint *)0x5b4a < *(uint *)0x5b3e))
    ;
    puVar2 = (uint *)0x5b36;
    uVar9 = *puVar2;
    *puVar2 = *puVar2 + uVar14;
    *(int *)0x5b38 = (int)piVar12 + (uint)CARRY2(uVar9,uVar14) + *(int *)0x5b38;
    return piVar12;
  case 6:
    uStack_12._2_2_ = 0x1000;
    uStack_12._0_2_ = (int *)0xc08c;
    piStack_e = (int *)uVar9;
    func_0x00001694();
    uStack_12._2_2_ = 0;
    uStack_12._0_2_ = (int *)0xc0a0;
    uStack_12 = func_0x000011e3();
    auStack_16._2_2_ = 0;
    auStack_16._0_2_ = 0xc0a7;
    iVar8 = func_0x000012e7();
    *(int *)0x609a = iVar8 - *(int *)0x5db2 / 8;
    *(int *)0x6090 = *(int *)0x6090 + *(int *)0x6096;
    *(int *)0x6092 = *(int *)0x6092 + *(int *)0x6098;
    *(int *)0x6094 = *(int *)0x6094 + *(int *)0x609a;
    if ((*(int *)0x6092 < *(int *)0x5db0 / 8) || (*(int *)0x5db0 < *(int *)0x6092)) {
      iVar8 = *(int *)0x6098;
      *(int *)0x6098 = -iVar8;
      *(int *)0x6092 = *(int *)0x6092 + -iVar8;
    }
    if ((*(int *)0x6094 < *(int *)0x5db2 / 8) || (*(int *)0x5db2 < *(int *)0x6094)) {
      iVar8 = *(int *)0x609a;
      *(int *)0x609a = -iVar8;
      *(int *)0x6094 = *(int *)0x6094 + -iVar8;
    }
    if ((*(int *)0x6090 < 8) || (*(int *)0x5db2 / 4 < *(int *)0x6090)) {
      iVar8 = *(int *)0x6096;
      *(int *)0x6096 = -iVar8;
      *(int *)0x6090 = *(int *)0x6090 + -iVar8;
    }
    auStack_16._2_2_ = 0;
    auStack_16._0_2_ = 0x8000;
    uStack_1a._2_2_ = 0;
    uStack_1a._0_2_ = 0xc140;
    func_0x00001694();
    cVar23 = extraout_AH >> 7;
    uStack_1a._2_2_ = 0;
    uStack_1a._0_2_ = 0xc14f;
    uStack_1a = func_0x000011e3();
    uStack_1e._2_2_ = 0;
    uStack_1e._0_2_ = 0xc156;
    uVar7 = func_0x000012e7();
    *(undefined2 *)0x609c = uVar7;
    *(int *)0x7488 = *(int *)0x7488 + 1;
    if (*(uint *)0x5db6 <= *(uint *)0x7488) {
      *(undefined2 *)0x7488 = 3;
    }
    *(undefined2 *)0x609e = 0;
    uStack_1e._2_2_ = 0;
    uStack_1e._0_2_ = 0x8000;
    piStack_20 = (int *)0x0;
    uStack_22 = 0xc17e;
    iVar8 = func_0x00001694();
    uStack_22 = iVar8 << 1;
    piStack_20 = (int *)((iVar8 >> 0xf) << 1 | (uint)(iVar8 < 0));
    uStack_24 = 0;
    iStack_26 = 0xc18a;
    iVar8 = func_0x000012e7();
    if (iVar8 == 0) {
      *(uint *)0x609e = *(uint *)0x609e | 1;
      if (*(int *)0x7484 == 8) {
        piStack_e = (int *)0x0;
        uStack_12._2_2_ = 0x8000;
        uStack_12._0_2_ = (int *)0x0;
        auStack_16._2_2_ = 0xc1ad;
        iVar8 = func_0x00001694();
        auStack_16._2_2_ = iVar8 << 1;
        uStack_12._0_2_ = (int *)((iVar8 >> 0xf) << 1 | (uint)(iVar8 < 0));
        auStack_16._0_2_ = 0;
        uStack_1a._2_2_ = 0xc1b9;
        iVar8 = func_0x000012e7();
        uStack_1a = CONCAT22(uStack_1a._2_2_,(undefined2)uStack_1a);
        if (iVar8 != 0) {
          *(uint *)0x609e = *(uint *)0x609e | 0x20;
          uStack_1a = CONCAT22(uStack_1a._2_2_,(undefined2)uStack_1a);
        }
      }
    }
    else {
      *(uint *)0x609e = *(uint *)0x609e | 2;
    }
    if (*(int *)0x7484 == 8) {
      piStack_e = (int *)0x0;
      uStack_12._2_2_ = 0x8000;
      uStack_12._0_2_ = (int *)0x0;
      auStack_16._2_2_ = 0xc1d5;
      func_0x00001694();
      iVar8 = CONCAT11(cVar23,2);
      uStack_12._0_2_ = (int *)0x0;
      auStack_16._2_2_ = 0xc1dd;
      join_0x00000008_0x00000000_ = func_0x00001395();
      auStack_16._0_2_ = 0;
      uStack_1a._2_2_ = 0xc1e4;
      uVar7 = func_0x000012e7();
      *(undefined2 *)0x60a0 = uVar7;
      uVar9 = *(uint *)0x60a0;
      if (uVar9 < 4) {
        puVar16 = (undefined1 *)(uVar9 * 2);
        piVar19 = (int *)0x1000;
        switch(uVar9) {
        case 0:
          piVar12 = piVar19;
          if ((iVar8 == 1) && ((int)uVar9 < 0 || puVar16 == (undefined1 *)0x0)) goto LAB_1000_e575;
          break;
        case 1:
          piStack_e = (int *)0xc36f;
          piStack_e = (int *)func_0x000011e3();
          uStack_12._2_2_ = 0;
          uStack_12._0_2_ = (int *)0xc376;
          iVar8 = func_0x000012e7();
          *(int *)0x60aa = iVar8 - *(int *)0x60ba / 8;
          uStack_12._2_2_ = 0;
          uStack_12._0_2_ = (int *)0x8000;
          auStack_16._2_2_ = 0;
          auStack_16._0_2_ = 0xc393;
          func_0x00001694();
          auStack_16._2_2_ = 0;
          auStack_16._0_2_ = 0xc3a7;
          auStack_16 = (undefined1  [4])func_0x000011e3();
          uStack_1a._2_2_ = 0;
          uStack_1a._0_2_ = 0xc3ae;
          uVar7 = func_0x000012e7();
          *(undefined2 *)0xa48 = uVar7;
          uStack_1a._2_2_ = 0;
          uStack_1a._0_2_ = 0x8000;
          uStack_1e._2_2_ = 0;
          uStack_1e._0_2_ = 0xc3bd;
          func_0x00001694();
          uStack_1e._2_2_ = 0;
          uStack_1e._0_2_ = 0xc3d1;
          uStack_1e = func_0x000011e3();
          piStack_20 = (int *)0x0;
          uStack_22 = 0xc3d8;
          uVar7 = func_0x000012e7();
          *(undefined2 *)0xa4a = uVar7;
          *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x60a8;
          *(int *)0x5dee = *(int *)0x5dee + *(int *)0x60aa;
          if ((*(int *)0x5df0 < *(int *)0x5db0 / 4) || (*(int *)0x5db0 <= *(int *)0x5df0)) {
            iVar8 = *(int *)0x60a8;
            *(int *)0x60a8 = -iVar8;
            *(int *)0x5df0 = *(int *)0x5df0 + -iVar8;
          }
          if ((*(int *)0x5dee < *(int *)0x60ba / 4) || (*(int *)0x60ba <= *(int *)0x5dee)) {
            iVar8 = *(int *)0x60aa;
            *(int *)0x60aa = -iVar8;
            *(int *)0x5dee = *(int *)0x5dee + -iVar8;
          }
          piStack_20 = (int *)0x0;
          uStack_22 = 0x8000;
          uStack_24 = 0;
          iStack_26 = 0xc43d;
          iVar8 = func_0x00001694();
          iStack_26 = iVar8 << 1;
          uStack_24 = (iVar8 >> 0xf) << 1 | (uint)(iVar8 < 0);
          uStack_28 = 0;
          uVar7 = 0;
          uStack_2a = 0xc449;
          iVar8 = func_0x000012e7();
          if (iVar8 != 0) {
            if (*(int *)0x7484 == 8) {
              uStack_28 = 0;
              uStack_2a = 0x8000;
              uStack_2e._2_2_ = 0;
              uStack_2e._0_2_ = 0xc463;
              iVar8 = func_0x00001694();
              uStack_2e._0_2_ = iVar8 << 1;
              uStack_2e._2_2_ = (iVar8 >> 0xf) << 1 | (uint)(iVar8 < 0);
              uStack_30 = 0;
              uStack_32 = 0xc46f;
              iVar8 = func_0x000012e7();
              *(int *)0x60b8 = iVar8 + 1;
            }
            else {
              *(undefined2 *)0x60b8 = 0;
            }
            uVar7 = 0;
            if (*(int *)0x60b8 == 2) {
              *(undefined2 *)0x7488 = *(undefined2 *)0x60b2;
            }
            *(undefined2 *)0x60b4 = *(undefined2 *)0x5df0;
            *(undefined2 *)0x60b6 = *(undefined2 *)0x5dee;
            *(undefined2 *)0x60b0 = *(undefined2 *)0xa4a;
            if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
              *(int *)0x5dee = *(int *)0x5dee << 1;
              *(int *)0x60b0 = *(int *)0x60b0 << 1;
            }
            while (-1 < *(int *)0x60b0) {
              uVar10 = uVar7;
              if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
                uVar10 = 0x11c1;
                uStack_2a = 0xc4c9;
                uStack_28 = uVar7;
                FUN_1000_4125();
              }
              if (*(int *)0x60b8 == 1) {
                *(undefined2 *)0x7488 = *(undefined2 *)0x60b2;
              }
              *(undefined2 *)0x60a2 = *(undefined2 *)0xa48;
              while (-1 < *(int *)0x60a2) {
                uStack_28 = *(undefined2 *)0x5caf;
                uStack_2e._2_2_ = 0xc4e6;
                uStack_2a = uVar10;
                (*(code *)*(undefined2 *)0x5c3f)();
                *(int *)0x5df0 = *(int *)0x5df0 + -1;
                *(int *)0x60a2 = *(int *)0x60a2 + -1;
                if ((*(int *)0x60b8 == 1) &&
                   (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
                  *(undefined2 *)0x7488 = 3;
                }
                *(int *)0x5cbb = *(int *)0x5cbb + 1;
              }
              *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0xa48 + 1;
              *(int *)0x5dee = *(int *)0x5dee + -1;
              *(int *)0x60b0 = *(int *)0x60b0 + -1;
              if ((*(int *)0x60b8 == 2) &&
                 (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
                *(undefined2 *)0x7488 = 3;
              }
              uVar7 = uVar10;
              if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
                *(int *)0x5dee = *(int *)0x5dee + -1;
                *(int *)0x60b0 = *(int *)0x60b0 + -1;
              }
            }
            *(undefined2 *)0x5df0 = *(undefined2 *)0x60b4;
            *(undefined2 *)0x5dee = *(undefined2 *)0x60b6;
            if ((*(int *)0x60b8 == 0) &&
               (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
              *(undefined2 *)0x7488 = 3;
            }
            *(undefined2 *)0x60b2 = *(undefined2 *)0x7488;
          }
          if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
            *(int *)0x5dee = *(int *)0x5dee << 1;
            *(int *)0xa4a = *(int *)0xa4a << 1;
          }
          uStack_28 = 0;
          uStack_2a = 0x8000;
          uStack_2e._0_2_ = 0xc5b0;
          uStack_2e._2_2_ = uVar7;
          func_0x00001694();
          uStack_2e._2_2_ = 0;
          uStack_2e._0_2_ = 0xc5bf;
          uStack_2e = func_0x000011e3();
          uStack_30 = 0;
          uStack_32 = 0xc5c6;
          uVar7 = func_0x000012e7();
          *(undefined2 *)0x7488 = uVar7;
          *(undefined2 *)0x60a6 = 0xffff;
          while( true ) {
            *(int *)0x60a6 = *(int *)0x60a6 + 1;
            if (3 < *(int *)0x60a6) break;
            *(undefined2 *)0x60a2 = *(undefined2 *)((*(uint *)0x60a6 & 1) * 2 + 0xa48);
            *(undefined2 *)0x60ac = *(undefined2 *)(*(int *)0x60a6 * 2 + 0xa38);
            *(undefined2 *)0x60ae = *(undefined2 *)(*(int *)0x60a6 * 2 + 0xa40);
            *(undefined2 *)0x60a4 = 0;
            while (iVar8 = *(int *)0x60a4, *(int *)0x60a4 = *(int *)0x60a4 + 1,
                  iVar8 < *(int *)0x60a2) {
              uStack_30 = *(undefined2 *)0x5caf;
              uStack_32 = 0;
              uStack_34 = 0xc60b;
              (*(code *)*(undefined2 *)0x5c3f)();
              *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x60ac;
              iVar8 = *(int *)0x60ae;
              *(int *)0x5dee = *(int *)0x5dee + iVar8;
              if (((*(int *)0x60ae != 0) && (*(int *)0x5c41 == 0x1899)) && (*(int *)0x5c3f == 0x12d)
                 ) {
                *(int *)0x5dee = *(int *)0x5dee + iVar8;
                *(int *)0x60a4 = *(int *)0x60a4 + 1;
              }
              *(int *)0x5cbb = *(int *)0x5cbb + 1;
            }
          }
          return (int *)*(int *)0x60a6;
        case 2:
          goto LAB_1000_8b43;
        case 3:
          piStack_e = (int *)0xcdf2;
          piStack_e = (int *)func_0x000011e3();
          uStack_12._2_2_ = 0;
          uStack_12._0_2_ = (int *)0xcdf9;
          iVar8 = func_0x000012e7();
          if (iVar8 == 0) {
            *(undefined2 *)0x613e = 1;
          }
          else {
            *(undefined2 *)0x613e = 0;
          }
          uStack_12._2_2_ = 0;
          uStack_12._0_2_ = (int *)0x8000;
          auStack_16._0_2_ = 0xce24;
          auStack_16._2_2_ = 0;
          func_0x00001694();
          auStack_16._2_2_ = 0;
          auStack_16._0_2_ = 0xce33;
          auStack_16 = (undefined1  [4])func_0x000011e3();
          uStack_1a._2_2_ = 0;
          uStack_1a._0_2_ = 0xce3a;
          iVar8 = func_0x000012e7();
          uStack_1a._2_2_ = 0;
          uStack_1a._0_2_ = 0x8000;
          uStack_1e._2_2_ = 0;
          uStack_1e._0_2_ = 0xce4c;
          func_0x00001694();
          uStack_1e._2_2_ = 0;
          uStack_1e._0_2_ = 0xce54;
          uStack_1e = func_0x00001395();
          piStack_20 = (int *)0x0;
          uStack_22 = 0xce5b;
          func_0x000012e7();
          pcVar5 = (code *)swi(0x3b);
          piStack_e = (int *)(iVar8 + 0x40);
          (*pcVar5)();
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        while( true ) {
          do {
            piVar11 = piVar13;
            piVar19 = (int *)0x66a;
            uStack_12._2_2_ = 0xe594;
            piStack_e = piVar12;
            iVar8 = func_0x000066ae();
            (*(code *)*(undefined2 *)0x5c3f)();
            uVar9 = (uint)uStack_1e;
            piVar12 = piVar19;
            piVar13 = (int *)0x0;
          } while (iVar8 == 0);
          auStack_5ce[(int)unaff_SI * 2 + 1] = uStack_1e._2_2_;
          auStack_5ce[(int)unaff_SI * 2] = uVar9;
          uVar9 = uStack_22;
          auStack_b6e[(int)unaff_SI * 2 + 1] = (uint)piStack_20;
          auStack_b6e[(int)unaff_SI * 2] = uVar9;
          puVar16 = (undefined1 *)((int)(unaff_SI + 1) % 0x168);
          piVar12 = (int *)*(uint *)0x5d7a;
          if ((int *)*(uint *)0x5da6 <= piVar12) {
            piVar19 = (int *)0x11c1;
            piVar12 = (int *)FUN_1000_4125();
          }
          if ((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) {
            piVar19 = (int *)0x11c1;
            piVar13 = (int *)func_0x000134f7();
            piVar12 = (int *)0x0;
            if (piVar13 != (int *)0x0) {
              return piVar13;
            }
          }
          if (*(int *)0x5d92 == 0x6e) break;
          in_stack_0000fffc = (int *)((int)in_stack_0000fffc + 1U & 0xf);
          if ((in_stack_0000fffc == (int *)0x0) &&
             (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
            *(undefined2 *)0x7488 = 3;
          }
          if (((int)piVar11 < (int)uStack_1e._2_2_) && ((int)unaff_DS < (int)piStack_20)) {
            *(undefined2 *)0x5d78 = 0x3c;
            piVar12 = piStack_20;
            while ((*(int *)0x5d78 != 0 && (*(int *)0x5d92 != 0x6e))) {
              if ((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) {
                piVar12 = (int *)func_0x000134f7();
                if (piVar12 != (int *)0x0) {
                  return piVar12;
                }
              }
              piVar12 = (int *)*(uint *)0x5d7a;
              if ((int *)*(uint *)0x5da6 <= piVar12) {
                piVar12 = (int *)FUN_1000_4125();
              }
            }
            return piVar12;
          }
          uVar9 = auStack_5ce[(int)puVar16 * 2] >> 1 |
                  (uint)((auStack_5ce[(int)puVar16 * 2 + 1] & 1) != 0) << 0xf;
          uStack_1e._2_2_ =
               auStack_5ce[(int)puVar16 * 2 + 1] + ((int)auStack_5ce[(int)puVar16 * 2 + 1] >> 1) +
               (uint)CARRY2(auStack_5ce[(int)puVar16 * 2],uVar9);
          uStack_1e._0_2_ = auStack_5ce[(int)puVar16 * 2] + uVar9;
          uVar9 = auStack_b6e[(int)puVar16 * 2] >> 1 |
                  (uint)((auStack_b6e[(int)puVar16 * 2 + 1] & 1) != 0) << 0xf;
          piStack_20 = (int *)(auStack_b6e[(int)puVar16 * 2 + 1] +
                               ((int)auStack_b6e[(int)puVar16 * 2 + 1] >> 1) +
                              (uint)CARRY2(auStack_b6e[(int)puVar16 * 2],uVar9));
          uStack_22 = auStack_b6e[(int)puVar16 * 2] + uVar9;
          *(uint *)0x5df0 = auStack_5ce[(int)puVar16 * 2 + 1];
          unaff_SI = puVar16;
LAB_1000_e575:
          *(uint *)0x5dee = auStack_b6e[(int)puVar16 * 2 + 1];
          piVar12 = piVar19;
          piVar13 = (int *)0x1;
        }
        return piVar12;
      }
    }
    piStack_e = (int *)*(undefined2 *)0x609e;
    uStack_12._2_2_ = *(undefined2 *)0x609c;
    uStack_12._0_2_ = (int *)*(undefined2 *)0x7488;
    auStack_16._2_2_ = *(undefined2 *)0x6094;
    auStack_16._0_2_ = *(undefined2 *)0x6092;
    uStack_1a._2_2_ = 0;
    uStack_1a._0_2_ = *(undefined2 *)0x6090;
    uStack_1e._2_2_ = 1;
    uStack_1e._0_2_ = 0;
    piStack_20 = (int *)0xc255;
    piVar12 = (int *)func_0x00006f3b();
    return piVar12;
  }
  piVar19 = (int *)_piStack0008;
  uVar7 = (undefined2)((ulong)_piStack0008 >> 0x10);
  if (puVar15 == (undefined2 *)0x0 || (bVar20 != (int)puVar15 < 0) != (int)puVar15 < 0) {
    iVar8 = CONCAT11((char)((uint)piVar11 >> 8),(byte)piVar11 | (&stack0x066c)[(int)unaff_DI]);
    *(int *)(&stack0x085c + (int)unaff_DI) = *(int *)(&stack0x085c + (int)unaff_DI) + iVar8;
    piVar11 = (int *)((iVar8 - *(int *)(&stack0x087c + (int)unaff_DI)) -
                     (uint)CARRY1((byte)puVar15,(byte)((uint)piVar12 >> 8)));
    *(char *)((int)unaff_DI + 0x15) = *(char *)((int)unaff_DI + 0x15) + (char)(uVar9 >> 8);
  }
  else {
    pcVar1 = unaff_SI + 0x12;
    cVar23 = *pcVar1;
    cVar22 = (char)((uint)puVar15 >> 8);
    *pcVar1 = *pcVar1 + cVar22;
    if ((*pcVar1 != '\0' && SCARRY1(cVar23,cVar22) == *pcVar1 < '\0') ||
       ((code *)0x3c < param_1._2_2_)) {
      bVar20 = param_1._2_2_ == (code *)0x0;
      param_1 = (code *)(ZEXT24(param_1._2_2_ + -1) << 0x10);
      param_2 = (int *)((int)param_2 - (uint)bVar20);
      goto LAB_1000_5e17;
    }
    if (param_2 != (int *)0x0) goto LAB_1000_5e17;
  }
  if (param_1._2_2_ == (code *)0x3c) {
    *(undefined1 *)((int)piVar19 + 3) = 2;
    *(undefined1 *)(piVar19 + 1) = 0x1d;
    return piVar11;
  }
LAB_1000_5e17:
  *(undefined1 *)((int)piVar19 + 3) = 0;
  while( true ) {
    uVar9 = (uint)*(char *)(*(char *)((int)piVar19 + 3) + 0x479c);
    piVar12 = (int *)((int)uVar9 >> 0xf);
    if (((int)param_2 <= (int)piVar12) && ((piVar12 != param_2 || (param_1._2_2_ <= uVar9)))) break;
    uVar9 = (uint)*(char *)(*(char *)((int)piVar19 + 3) + 0x479c);
    bVar20 = param_1._2_2_ < uVar9;
    param_1 = (code *)((ulong)((int)param_1._2_2_ - uVar9) << 0x10);
    param_2 = (int *)((int)param_2 + (-(uint)bVar20 - ((int)uVar9 >> 0xf)));
    *(char *)((int)piVar19 + 3) = *(char *)((int)piVar19 + 3) + '\x01';
  }
  *(char *)((int)piVar19 + 3) = *(char *)((int)piVar19 + 3) + '\x01';
  *(byte *)(piVar19 + 1) = param_1._2_1_;
  return (int *)(uint)param_1._2_1_;
LAB_1000_4686:
  *(char *)_piStack0008 = (char)uVar9;
  goto code_r0x0001468c;
}



// Function: caseD_1 @ 1000:7cff

/* WARNING: Instruction at (ram,0x0001e7f9) overlaps instruction at (ram,0x0001e7f7)
    */
/* WARNING: Unable to track spacebase fully for stack */

void switchD_1000:7e30::caseD_1(undefined2 param_1,undefined2 param_2,int param_3)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  code *pcVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  uint *puVar16;
  undefined1 *puVar17;
  int unaff_BP;
  int unaff_SI;
  char *pcVar18;
  char *pcVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 uVar22;
  int unaff_SS;
  undefined2 unaff_DS;
  bool bVar23;
  undefined4 uVar24;
  
  do {
    func_0x000011e3();
    uVar9 = func_0x000012e7(0);
    *(undefined2 *)0x5942 = uVar9;
    func_0x00001694(0,0x8000,0);
    uVar24 = func_0x000011e3(0);
    uVar9 = func_0x000012e7(0,uVar24);
    *(undefined2 *)0x5944 = uVar9;
    *(undefined2 *)0x593a = *(undefined2 *)0x5942;
    *(undefined2 *)0x593c = *(undefined2 *)0x5944;
    func_0x00001694(0,0x8000,0);
    uVar24 = func_0x000011e3(0);
    iVar10 = func_0x000012e7(0,uVar24);
    *(int *)0x593e = iVar10 + *(int *)0x5dae / 4;
    func_0x00001694(0,0x8000,0);
    uVar24 = func_0x000011e3(0);
    iVar10 = func_0x000012e7(0,uVar24);
    *(int *)0x5940 = iVar10 + *(int *)0x5dae / 4;
    *(undefined2 *)0x5946 = 1;
    *(undefined2 *)0x594c = 0;
    *(undefined2 *)0x5948 = 1;
    *(undefined2 *)0x594a = 0;
    *(undefined2 *)0x5df0 = *(undefined2 *)0x593a;
    *(undefined2 *)0x5dee = *(undefined2 *)0x593c;
    *(uint *)0x7488 = *(uint *)0x5dc0 & 3;
    uVar9 = FUN_1000_66ae(*(undefined2 *)0x5942,*(undefined2 *)0x5944);
    *(undefined2 *)0x5946 = uVar9;
    FUN_1000_67bb(0);
    if (*(int *)0x5946 == 0) {
      return;
    }
    *(uint *)0x7488 = *(uint *)0x5dc0 & 3;
    *(undefined2 *)0x5df0 = *(undefined2 *)0x593a;
    uVar9 = *(undefined2 *)0x593c;
    *(undefined2 *)0x5dee = uVar9;
    *(int *)0x594a = *(int *)0x594a + 1;
    uVar13 = *(int *)0x5948 - 1;
    if (3 < uVar13) {
      *(undefined2 *)0x594c = 1;
      return;
    }
    piVar14 = (int *)(uVar13 * 2);
    uVar22 = 0x1000;
    switch(*(int *)0x5948) {
    case 2:
      *(undefined2 *)0x605a = uVar9;
      func_0x00001694(0x1000,0x8000);
      uVar24 = func_0x000011e3(0);
      iVar10 = func_0x000012e7(0,uVar24);
      *(int *)0x6036 = iVar10 + *(int *)0x5db0 / 0x10;
      func_0x00001694(0,0x8000,0);
      uVar24 = func_0x000011e3(0);
      uVar9 = func_0x000012e7(0,uVar24);
      *(undefined2 *)0x604e = uVar9;
      func_0x00001694(0,0x8000,0);
      uVar24 = func_0x000011e3(0);
      iVar10 = func_0x000012e7(0,uVar24);
      *(int *)0x6062 = iVar10 + *(int *)0x5db2 / 8;
      func_0x00001694(0,0x8000,0);
      uVar24 = func_0x000011e3(0);
      iVar10 = func_0x000012e7(0,uVar24);
      *(int *)0x6064 = iVar10 + 8;
      func_0x00001694(0,0x8000,0);
      uVar24 = func_0x000011e3(0);
      uVar9 = func_0x000012e7(0,uVar24);
      *(undefined2 *)0x605e = uVar9;
      func_0x00001694(0,0x8000,0);
      uVar24 = func_0x000011e3(0);
      iVar10 = func_0x000012e7(0,uVar24);
      *(int *)0x6060 = iVar10 + 1;
      if (*(int *)0x7484 == 8) {
        *(int *)0x6060 = *(int *)0x6060 + 8;
      }
      iVar10 = func_0x00001694(0,0x8000,0);
      iVar10 = func_0x000012e7(0,iVar10 << 1,(iVar10 >> 0xf) << 1 | (uint)(iVar10 < 0));
      if (iVar10 != 0) {
        *(int *)0x6060 = *(int *)0x6060 + 0x10;
      }
      uVar9 = *(undefined2 *)0x6058;
      *(undefined2 *)0x6040 = uVar9;
      *(undefined2 *)0x6034 = uVar9;
      *(undefined2 *)0x604c = *(undefined2 *)0x605a;
      *(undefined2 *)0x6066 = 0;
      *(undefined2 *)0x5df0 = *(undefined2 *)0x6058;
      *(undefined2 *)0x5dee = *(undefined2 *)0x605a;
      return;
    case 3:
      pcVar7 = (code *)swi(0x21);
      uVar24 = (*pcVar7)();
      uVar22 = (undefined2)((ulong)uVar24 >> 0x10);
      iVar10 = *(int *)0x2;
      uVar9 = *(undefined2 *)0x2c;
      *(undefined2 *)0x7d = (int)uVar24;
      *(undefined2 *)0x7b = unaff_ES;
      *(undefined2 *)0x77 = uVar9;
      *(int *)0x91 = iVar10;
      FUN_1000_017a();
      pcVar1 = (char *)*(undefined4 *)0x75;
      uVar9 = (undefined2)((ulong)pcVar1 >> 0x10);
      pcVar18 = (char *)pcVar1;
      uVar13 = 0x7fff;
      pcVar19 = pcVar18;
      goto LAB_1000_0034;
    case 4:
      goto switchD_1000_7e30_caseD_4;
    }
  } while( true );
switchD_1000_7e30_caseD_4:
  while( true ) {
    pcVar1 = (char *)((int)piVar14 + unaff_SI + 0x5250);
    *pcVar1 = *pcVar1 + (char)uVar9;
    func_0x00001694(uVar22);
    uVar24 = func_0x000011e3(0);
    uVar22 = 0;
    iVar10 = func_0x000012e7(0,uVar24);
    piVar14 = (int *)(unaff_SI * 4 + unaff_BP + -0xa08);
    *piVar14 = iVar10 + 0x4000;
    unaff_SI = unaff_SI + unaff_DI;
    if (*(int *)(unaff_BP + -4) < unaff_SI) break;
    uVar9 = 0;
  }
  for (iVar10 = 0; iVar10 <= *(int *)(unaff_BP + -4) - unaff_DI; iVar10 = iVar10 + unaff_DI) {
    FUN_1000_e688(iVar10,iVar10 + unaff_DI);
  }
  if (*(int *)(unaff_BP + -2) < *(int *)0x5db0) {
    do {
      *(int *)0x5df0 = -*(int *)0x5db0;
      for (iVar10 = 1; iVar10 <= *(int *)(unaff_BP + -4); iVar10 = iVar10 + 1) {
        if (*(int *)(iVar10 * 4 + unaff_BP + -0x140a) <= *(int *)0x5db2) {
          *(undefined2 *)0x5dee = *(undefined2 *)(iVar10 * 4 + unaff_BP + -0x140a);
          puVar15 = (uint *)(iVar10 * 4 + unaff_BP + -0x140c);
          uVar13 = *puVar15;
          puVar16 = (uint *)(iVar10 * 4 + unaff_BP + -0xa08);
          puVar2 = puVar16;
          uVar6 = *puVar2;
          piVar14 = (int *)(iVar10 * 4 + unaff_BP + -0x140c);
          piVar14[1] = puVar15[1] + puVar16[1] + (uint)CARRY2(uVar13,*puVar2);
          *piVar14 = uVar13 + uVar6;
          if (*(int *)0x5dee < *(int *)(iVar10 * 4 + unaff_BP + -0x140a)) {
            (*(code *)*(undefined2 *)0x5c3f)();
          }
          if (*(int *)0x5db2 <= *(int *)(iVar10 * 4 + unaff_BP + -0x140a)) {
            piVar3 = (int *)(iVar10 * 4 + unaff_BP + -0x140a);
            *piVar3 = *piVar3 + 1;
            *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
          }
        }
        *(int *)0x5df0 = *(int *)0x5df0 + 1;
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          FUN_1000_4125();
        }
        if (((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) &&
           (iVar11 = func_0x000134f7(), iVar11 != 0)) {
          return;
        }
        if (*(int *)0x5d92 == 0x6e) {
          return;
        }
      }
      if (*(int *)0x7484 == 8) {
        *(int *)0x7488 = *(int *)0x7488 + 1;
        if (*(uint *)0x5db6 <= *(uint *)0x7488) {
LAB_1000_e979:
          *(undefined2 *)0x7488 = 3;
        }
      }
      else {
        *(int *)0x5daa = *(int *)0x5daa + 1;
        puVar2 = (uint *)0x5daa;
        *puVar2 = *puVar2 & 0xf;
        if ((*puVar2 == 0) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488))
        goto LAB_1000_e979;
      }
    } while (*(int *)(unaff_BP + -2) < *(int *)0x5db0);
  }
  return;
  while( true ) {
    if (uVar13 == 0) goto LAB_1000_007b;
    pcVar18 = pcVar18 + 1;
    if (*pcVar19 == (char)pcVar1) break;
LAB_1000_0034:
    if (uVar13 != 0) {
      uVar13 = uVar13 - 1;
      pcVar4 = pcVar19;
      pcVar19 = pcVar19 + 1;
      if ((char)pcVar1 != *pcVar4) goto LAB_1000_0034;
    }
  }
  *(int *)0x75 = -(uVar13 | 0x8000);
  *(uint *)0x79 = (int)pcVar18 * 4 + 0x10U & 0xfff0;
  if (puRam00029c84 < 0x200) {
    puRam00029c84 = (undefined1 *)0x200;
  }
  bVar12 = 4;
  uVar13 = ((uint)puRam00029c84 >> 4) + 1;
  if ((uint)(iVar10 - unaff_SS) < uVar13) {
LAB_1000_007b:
    FUN_1000_0249();
    return;
  }
  iVar10 = uVar13 + unaff_SS;
  *(int *)0x89 = iVar10;
  *(int *)0x8d = iVar10;
  pcVar7 = (code *)swi(0x21);
  (*pcVar7)();
  uVar9 = uRam00010260;
  puVar20 = (undefined1 *)(param_3 << (bVar12 & 0x1f));
  puVar21 = (undefined1 *)0x482c;
  puRam00029c84 = puVar20;
  for (iVar10 = 0x3097; iVar10 != 0; iVar10 = iVar10 + -1) {
    puVar5 = puVar21;
    puVar21 = puVar21 + 1;
    *puVar5 = 0;
  }
  if (0x14 < *(uint *)0x4584) {
    bVar23 = *(byte *)0x7d < 3;
    if ((!bVar23) && ((3 < *(byte *)0x7d || (bVar23 = *(byte *)0x7e < 0x1e, !bVar23)))) {
      pcVar7 = (code *)swi(0x21);
      (*pcVar7)();
      if (!bVar23) {
        pcVar7 = (code *)swi(0x21);
        (*pcVar7)();
        if (!bVar23) {
          pcVar7 = (code *)swi(0x21);
          iVar11 = (*pcVar7)();
          if (!bVar23) {
            *(int *)0x91 = iVar11 + 1;
            pcVar7 = (code *)swi(0x21);
            (*pcVar7)();
            if (!bVar23) {
              pcVar7 = (code *)swi(0x21);
              (*pcVar7)();
              if (!bVar23) goto LAB_1000_0109;
            }
          }
        }
      }
      FUN_1000_0249();
      return;
    }
  }
LAB_1000_0109:
  pcVar7 = (code *)swi(0x1a);
  cVar8 = (*pcVar7)();
  *(undefined2 *)0x81 = extraout_DX_00;
  *(int *)0x83 = iVar10;
  if (cVar8 != '\0') {
    DAT_0000_0470 = 1;
  }
  *(undefined2 *)(puVar20 + -2) = 0x135;
  FUN_1000_01ea();
  *(undefined2 *)(puVar20 + -2) = *(undefined2 *)0x73;
  *(undefined2 *)(puVar20 + -4) = *(undefined2 *)0x71;
  *(undefined2 *)(puVar20 + -6) = *(undefined2 *)0x6f;
  *(undefined2 *)(puVar20 + -8) = *(undefined2 *)0x6d;
  *(undefined2 *)(puVar20 + -10) = *(undefined2 *)0x6b;
  *(undefined2 *)(puVar20 + -0xc) = 0x1000;
  puVar17 = puVar20 + -0xe;
  *(undefined2 *)(puVar20 + -0xe) = 0x14e;
  uVar9 = func_0x0000b3dd();
  *(undefined2 *)(puVar17 + -2) = uVar9;
  *(undefined2 *)(puVar17 + -4) = 0x66a;
  *(undefined2 *)(puVar17 + -6) = 0x154;
  FUN_1000_11a8();
  *(undefined2 *)(puVar17 + -4) = 0x47fc;
  *(undefined2 *)(puVar17 + -6) = 0x4826;
  *(undefined2 *)(puVar17 + -8) = 0x164;
  FUN_1000_01ea();
  return;
}



// Function: FUN_1000_7d62 @ 1000:7d62

/* WARNING: Instruction at (ram,0x0001e7f9) overlaps instruction at (ram,0x0001e7f7)
    */
/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_1000_7d62(void)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  undefined2 uVar10;
  int iVar11;
  byte bVar12;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  uint *puVar16;
  undefined1 *puVar17;
  int unaff_BP;
  int unaff_SI;
  char *pcVar18;
  char *pcVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  undefined2 uVar22;
  int unaff_SS;
  undefined2 unaff_DS;
  bool bVar23;
  undefined4 uVar24;
  int iVar25;
  
  do {
    uVar24 = func_0x000011e3(unaff_CS);
    iVar9 = func_0x000012e7(0,uVar24);
    *(int *)0x593e = iVar9 + *(int *)0x5dae / 4;
    iVar25 = -0x8000;
    func_0x00001694(0,0x8000,0);
    uVar24 = func_0x000011e3(0);
    uVar22 = (undefined2)uVar24;
    iVar9 = func_0x000012e7(0,uVar24);
    *(int *)0x5940 = iVar9 + *(int *)0x5dae / 4;
    *(undefined2 *)0x5946 = 1;
    *(undefined2 *)0x594c = 0;
    *(undefined2 *)0x5948 = 1;
    *(undefined2 *)0x594a = 0;
    *(undefined2 *)0x5df0 = *(undefined2 *)0x593a;
    *(undefined2 *)0x5dee = *(undefined2 *)0x593c;
    *(uint *)0x7488 = *(uint *)0x5dc0 & 3;
    uVar10 = FUN_1000_66ae(*(undefined2 *)0x5942,*(undefined2 *)0x5944,*(undefined2 *)0x5946);
    *(undefined2 *)0x5946 = uVar10;
    iVar9 = 0;
    FUN_1000_67bb(0);
    if (*(int *)0x5946 == 0) {
      return;
    }
    *(uint *)0x7488 = *(uint *)0x5dc0 & 3;
    *(undefined2 *)0x5df0 = *(undefined2 *)0x593a;
    iVar11 = *(int *)0x593c;
    *(int *)0x5dee = iVar11;
    *(int *)0x594a = *(int *)0x594a + 1;
    uVar13 = *(int *)0x5948 - 1;
    if (3 < uVar13) {
      *(undefined2 *)0x594c = 1;
      return;
    }
    piVar14 = (int *)(uVar13 * 2);
    uVar10 = 0x1000;
    switch(*(int *)0x5948) {
    case 1:
      uVar24 = func_0x000011e3(0x1000);
      uVar22 = func_0x000012e7(0,uVar24);
      *(undefined2 *)0x5942 = uVar22;
      func_0x00001694(0,0x8000,0);
      uVar24 = func_0x000011e3(0);
      uVar22 = func_0x000012e7(0,uVar24);
      *(undefined2 *)0x5944 = uVar22;
      *(undefined2 *)0x593a = *(undefined2 *)0x5942;
      *(undefined2 *)0x593c = *(undefined2 *)0x5944;
      unaff_CS = 0;
      func_0x00001694(0);
      break;
    case 2:
      *(int *)0x605a = iVar9 + iVar11;
      func_0x00001694(0x1000,0x8000,0);
      uVar24 = func_0x000011e3(0);
      iVar9 = func_0x000012e7(0,uVar24);
      *(int *)0x6036 = iVar9 + *(int *)0x5db0 / 0x10;
      func_0x00001694(0,0x8000,0);
      uVar24 = func_0x000011e3(0);
      uVar22 = func_0x000012e7(0,uVar24);
      *(undefined2 *)0x604e = uVar22;
      func_0x00001694(0,0x8000,0);
      uVar24 = func_0x000011e3(0);
      iVar9 = func_0x000012e7(0,uVar24);
      *(int *)0x6062 = iVar9 + *(int *)0x5db2 / 8;
      func_0x00001694(0,0x8000,0);
      uVar24 = func_0x000011e3(0);
      iVar9 = func_0x000012e7(0,uVar24);
      *(int *)0x6064 = iVar9 + 8;
      func_0x00001694(0,0x8000,0);
      uVar24 = func_0x000011e3(0);
      uVar22 = func_0x000012e7(0,uVar24);
      *(undefined2 *)0x605e = uVar22;
      func_0x00001694(0,0x8000,0);
      uVar24 = func_0x000011e3(0);
      iVar9 = func_0x000012e7(0,uVar24);
      *(int *)0x6060 = iVar9 + 1;
      if (*(int *)0x7484 == 8) {
        *(int *)0x6060 = *(int *)0x6060 + 8;
      }
      iVar9 = func_0x00001694(0,0x8000,0);
      iVar9 = func_0x000012e7(0,iVar9 << 1,(iVar9 >> 0xf) << 1 | (uint)(iVar9 < 0));
      if (iVar9 != 0) {
        *(int *)0x6060 = *(int *)0x6060 + 0x10;
      }
      uVar22 = *(undefined2 *)0x6058;
      *(undefined2 *)0x6040 = uVar22;
      *(undefined2 *)0x6034 = uVar22;
      *(undefined2 *)0x604c = *(undefined2 *)0x605a;
      *(undefined2 *)0x6066 = 0;
      *(undefined2 *)0x5df0 = *(undefined2 *)0x6058;
      *(undefined2 *)0x5dee = *(undefined2 *)0x605a;
      return;
    case 3:
      pcVar7 = (code *)swi(0x21);
      uVar24 = (*pcVar7)();
      uVar10 = (undefined2)((ulong)uVar24 >> 0x10);
      iVar9 = *(int *)0x2;
      uVar22 = *(undefined2 *)0x2c;
      *(undefined2 *)0x7d = (int)uVar24;
      *(undefined2 *)0x7b = unaff_ES;
      *(undefined2 *)0x77 = uVar22;
      *(int *)0x91 = iVar9;
      FUN_1000_017a();
      pcVar1 = (char *)*(undefined4 *)0x75;
      uVar22 = (undefined2)((ulong)pcVar1 >> 0x10);
      pcVar18 = (char *)pcVar1;
      uVar13 = 0x7fff;
      pcVar19 = pcVar18;
      goto LAB_1000_0034;
    case 4:
      goto switchD_1000_7e30_caseD_4;
    }
  } while( true );
switchD_1000_7e30_caseD_4:
  while( true ) {
    pcVar1 = (char *)((int)piVar14 + unaff_SI + 0x5250);
    *pcVar1 = *pcVar1 + (char)iVar11;
    func_0x00001694(uVar10,iVar9,uVar22);
    uVar24 = func_0x000011e3(0);
    uVar10 = 0;
    iVar9 = func_0x000012e7(0,uVar24);
    piVar14 = (int *)(unaff_SI * 4 + unaff_BP + -0xa08);
    *piVar14 = iVar9 + 0x4000;
    unaff_SI = unaff_SI + unaff_DI;
    if (*(int *)(unaff_BP + -4) < unaff_SI) break;
    iVar11 = 0;
    uVar22 = 0;
    iVar9 = -0x8000;
  }
  for (iVar9 = 0; iVar9 <= *(int *)(unaff_BP + -4) - unaff_DI; iVar9 = iVar9 + unaff_DI) {
    FUN_1000_e688(iVar9,iVar9 + unaff_DI,unaff_BP + -0xa08);
  }
  if (*(int *)(unaff_BP + -2) < *(int *)0x5db0) {
    do {
      *(int *)0x5df0 = -*(int *)0x5db0;
      for (iVar9 = 1; iVar9 <= *(int *)(unaff_BP + -4); iVar9 = iVar9 + 1) {
        if (*(int *)(iVar9 * 4 + unaff_BP + -0x140a) <= *(int *)0x5db2) {
          *(undefined2 *)0x5dee = *(undefined2 *)(iVar9 * 4 + unaff_BP + -0x140a);
          puVar15 = (uint *)(iVar9 * 4 + unaff_BP + -0x140c);
          uVar13 = *puVar15;
          puVar16 = (uint *)(iVar9 * 4 + unaff_BP + -0xa08);
          puVar2 = puVar16;
          uVar6 = *puVar2;
          piVar14 = (int *)(iVar9 * 4 + unaff_BP + -0x140c);
          piVar14[1] = puVar15[1] + puVar16[1] + (uint)CARRY2(uVar13,*puVar2);
          *piVar14 = uVar13 + uVar6;
          if (*(int *)0x5dee < *(int *)(iVar9 * 4 + unaff_BP + -0x140a)) {
            (*(code *)*(undefined2 *)0x5c3f)(uVar10,0);
          }
          if (*(int *)0x5db2 <= *(int *)(iVar9 * 4 + unaff_BP + -0x140a)) {
            piVar3 = (int *)(iVar9 * 4 + unaff_BP + -0x140a);
            *piVar3 = *piVar3 + 1;
            *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
          }
        }
        *(int *)0x5df0 = *(int *)0x5df0 + 1;
        uVar22 = uVar10;
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          uVar22 = 0x11c1;
          FUN_1000_4125();
        }
        if ((*(int *)0x5d7e != 0) || (uVar10 = uVar22, *(int *)0x5d80 != 0)) {
          uVar10 = 0x11c1;
          iVar25 = func_0x000134f7(uVar22);
          if (iVar25 != 0) {
            return;
          }
        }
        if (*(int *)0x5d92 == 0x6e) {
          return;
        }
      }
      if (*(int *)0x7484 == 8) {
        *(int *)0x7488 = *(int *)0x7488 + 1;
        if (*(uint *)0x5db6 <= *(uint *)0x7488) {
LAB_1000_e979:
          *(undefined2 *)0x7488 = 3;
        }
      }
      else {
        *(int *)0x5daa = *(int *)0x5daa + 1;
        puVar2 = (uint *)0x5daa;
        *puVar2 = *puVar2 & 0xf;
        if ((*puVar2 == 0) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488))
        goto LAB_1000_e979;
      }
    } while (*(int *)(unaff_BP + -2) < *(int *)0x5db0);
  }
  return;
  while( true ) {
    if (uVar13 == 0) goto LAB_1000_007b;
    pcVar18 = pcVar18 + 1;
    if (*pcVar19 == (char)pcVar1) break;
LAB_1000_0034:
    if (uVar13 != 0) {
      uVar13 = uVar13 - 1;
      pcVar4 = pcVar19;
      pcVar19 = pcVar19 + 1;
      if ((char)pcVar1 != *pcVar4) goto LAB_1000_0034;
    }
  }
  *(int *)0x75 = -(uVar13 | 0x8000);
  *(uint *)0x79 = (int)pcVar18 * 4 + 0x10U & 0xfff0;
  if (puRam00029c84 < 0x200) {
    puRam00029c84 = (undefined1 *)0x200;
  }
  bVar12 = 4;
  uVar13 = ((uint)puRam00029c84 >> 4) + 1;
  if ((uint)(iVar9 - unaff_SS) < uVar13) {
LAB_1000_007b:
    FUN_1000_0249();
    return;
  }
  iVar9 = uVar13 + unaff_SS;
  *(int *)0x89 = iVar9;
  *(int *)0x8d = iVar9;
  pcVar7 = (code *)swi(0x21);
  (*pcVar7)();
  uVar22 = uRam00010260;
  puVar20 = (undefined1 *)(iVar25 << (bVar12 & 0x1f));
  puVar21 = (undefined1 *)0x482c;
  puRam00029c84 = puVar20;
  for (iVar9 = 0x3097; iVar9 != 0; iVar9 = iVar9 + -1) {
    puVar5 = puVar21;
    puVar21 = puVar21 + 1;
    *puVar5 = 0;
  }
  if (0x14 < *(uint *)0x4584) {
    bVar23 = *(byte *)0x7d < 3;
    if ((!bVar23) && ((3 < *(byte *)0x7d || (bVar23 = *(byte *)0x7e < 0x1e, !bVar23)))) {
      pcVar7 = (code *)swi(0x21);
      (*pcVar7)();
      if (!bVar23) {
        pcVar7 = (code *)swi(0x21);
        (*pcVar7)();
        if (!bVar23) {
          pcVar7 = (code *)swi(0x21);
          iVar25 = (*pcVar7)();
          if (!bVar23) {
            *(int *)0x91 = iVar25 + 1;
            pcVar7 = (code *)swi(0x21);
            (*pcVar7)();
            if (!bVar23) {
              pcVar7 = (code *)swi(0x21);
              (*pcVar7)();
              if (!bVar23) goto LAB_1000_0109;
            }
          }
        }
      }
      FUN_1000_0249();
      return;
    }
  }
LAB_1000_0109:
  pcVar7 = (code *)swi(0x1a);
  cVar8 = (*pcVar7)();
  *(undefined2 *)0x81 = extraout_DX_00;
  *(int *)0x83 = iVar9;
  if (cVar8 != '\0') {
    DAT_0000_0470 = 1;
  }
  *(undefined2 *)(puVar20 + -2) = 0x135;
  FUN_1000_01ea();
  *(undefined2 *)(puVar20 + -2) = *(undefined2 *)0x73;
  *(undefined2 *)(puVar20 + -4) = *(undefined2 *)0x71;
  *(undefined2 *)(puVar20 + -6) = *(undefined2 *)0x6f;
  *(undefined2 *)(puVar20 + -8) = *(undefined2 *)0x6d;
  *(undefined2 *)(puVar20 + -10) = *(undefined2 *)0x6b;
  *(undefined2 *)(puVar20 + -0xc) = 0x1000;
  puVar17 = puVar20 + -0xe;
  *(undefined2 *)(puVar20 + -0xe) = 0x14e;
  uVar22 = func_0x0000b3dd();
  *(undefined2 *)(puVar17 + -2) = uVar22;
  *(undefined2 *)(puVar17 + -4) = 0x66a;
  *(undefined2 *)(puVar17 + -6) = 0x154;
  FUN_1000_11a8();
  *(undefined2 *)(puVar17 + -4) = 0x47fc;
  *(undefined2 *)(puVar17 + -6) = 0x4826;
  *(undefined2 *)(puVar17 + -8) = 0x164;
  FUN_1000_01ea();
  return;
}



// Function: FUN_1000_7f58 @ 1000:7f58

void __cdecl16far FUN_1000_7f58(void)

{
  int in_AX;
  int iVar1;
  int in_CX;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  *(undefined2 *)(unaff_BP + -6) =
       *(undefined2 *)(*(int *)(unaff_BP + -10) * 0xc + in_CX * 2 + 0xb6);
  *(undefined2 *)(unaff_BP + -8) =
       *(undefined2 *)(*(int *)(unaff_BP + -10) * 0xc + in_CX * 2 + 0xbc);
  if (in_CX != 0) {
    uVar4 = 0;
    uVar3 = 0x8000;
    iVar1 = func_0x00001694();
    unaff_CS = 0;
    iVar1 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0),uVar3,uVar4);
    if (iVar1 != 0) {
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) >> 1;
      *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) >> 1;
    }
  }
  *(undefined2 *)(unaff_BP + -2) = 0;
  *(undefined2 *)(unaff_BP + -4) = 0;
  func_0x00001694(unaff_CS,0x8000,0);
  uVar2 = func_0x000011e3(0);
  iVar1 = func_0x000012e7(0,uVar2);
  *(int *)(unaff_BP + -0xc) = *(int *)0x5db2 / 0x10 + iVar1;
  if (*(int *)(unaff_BP + -2) < *(int *)(unaff_BP + -0xc)) {
    do {
      FUN_1000_6f3b(1,*(undefined2 *)(unaff_BP + -2),*(undefined2 *)(unaff_BP + -4),in_AX,unaff_DI,0
                    ,*(undefined2 *)0x7488,1);
      *(int *)0x7488 = *(int *)0x7488 + 1;
      if (*(uint *)0x5db6 <= *(uint *)0x7488) {
        *(undefined2 *)0x7488 = 3;
      }
      in_AX = in_AX + *(int *)(unaff_BP + -6);
      unaff_DI = unaff_DI + *(int *)(unaff_BP + -8);
      *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
      *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
    } while (*(int *)(unaff_BP + -2) < *(int *)(unaff_BP + -0xc));
  }
  return;
}



// Function: FUN_1000_8052 @ 1000:8052

/* WARNING: Instruction at (ram,0x00018112) overlaps instruction at (ram,0x0001810f)
    */

void FUN_1000_8052(undefined2 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined1 *unaff_ES;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined1 uVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined1 *puVar14;
  int iStack_6;
  
  if (param_2 == 0) {
    iVar5 = *(int *)0x5df0;
    iVar1 = *(int *)0x5dae;
    cVar10 = SBORROW2(iVar5,iVar1);
    cVar9 = iVar5 - iVar1 < 0;
    cVar8 = iVar5 == iVar1;
    if (iVar5 <= iVar1) goto LAB_1000_8115;
  }
  *(undefined2 *)0x5960 = 0;
  *(undefined2 *)0x595e = 0;
  *(undefined2 *)0x5958 = 0;
  *(undefined2 *)0x5956 = 0;
  uVar13 = 0;
  uVar12 = 0x8000;
  iVar5 = func_0x00001694();
  func_0x000012e7(0,iVar5 << 1,(iVar5 >> 0xf) << 1 | (uint)(iVar5 < 0),uVar12,uVar13);
  pcVar3 = (code *)swi(0x3b);
  (*pcVar3)();
  pcVar3 = (code *)swi(0x35);
  (*pcVar3)();
  pcVar3 = (code *)swi(0x3d);
  (*pcVar3)(0);
  func_0x00001694(0);
  uVar11 = func_0x000011e3(0);
  uVar12 = func_0x000012e7(0,uVar11);
  *(undefined2 *)0x5962 = uVar12;
  func_0x00001694(0,0x8000,0);
  uVar11 = func_0x000011e3(0);
  uVar12 = func_0x000012e7(0,uVar11);
  *(undefined2 *)0x5964 = uVar12;
  *(int *)0x7488 = *(int *)0x7488 + 1;
  uVar6 = *(uint *)0x7488;
  uVar2 = *(uint *)0x5db6;
  uVar7 = uVar6 < uVar2;
  cVar10 = SBORROW2(uVar6,uVar2);
  cVar9 = (int)(uVar6 - uVar2) < 0;
  cVar8 = uVar6 == uVar2;
  do {
    unaff_CS = 0;
    if (!(bool)uVar7) {
      *(undefined2 *)0x7488 = 3;
    }
LAB_1000_8115:
    pcVar3 = (code *)swi(0x35);
    (*pcVar3)();
    while( true ) {
      pcVar3 = (code *)swi(0x37);
      uVar6 = (*pcVar3)();
      if (!(bool)cVar8 && cVar10 == cVar9) break;
      bVar4 = !(bool)cVar8;
      cVar8 = '\x01';
      if (bVar4) {
        cVar10 = '\0';
        cVar9 = (int)(uVar6 ^ 0x5606) < 0;
        cVar8 = (uVar6 ^ 0x5606) == 0;
      }
    }
    pcVar3 = (code *)swi(0x35);
    (*pcVar3)();
    pcVar3 = (code *)swi(0x39);
    puVar14 = unaff_ES;
    (*pcVar3)();
    in(extraout_DX);
    pcVar3 = (code *)swi(0x3d);
    iVar5 = iStack_6;
    (*pcVar3)();
    iStack_6 = -0x7ecf;
    func_0x00000f6e(unaff_CS);
    uVar7 = (undefined1 *)0xfff7 < &stack0xfffe;
    cVar10 = SCARRY2((int)&stack0xfffe,8);
    cVar9 = (int)&stack0x0006 < 0;
    cVar8 = &stack0x0000 == (undefined1 *)0xfffa;
    pcVar3 = (code *)swi(0x34);
    (*pcVar3)();
    pcVar3 = (code *)swi(0x35);
    (*pcVar3)();
    uVar12 = extraout_DX_00;
    FUN_1000_bc0b();
  } while (iVar5 != 1 && cVar8 != '\0');
  out(*puVar14,uVar12);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// Function: FUN_1000_8202 @ 1000:8202

/* WARNING: Unable to track spacebase fully for stack */

void __cdecl16far FUN_1000_8202(int param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 *unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  if (param_1 != 0) {
    *(undefined2 *)0x596c = 1;
    *(undefined2 *)0x596a = 1;
    pcVar2 = (code *)swi(0x3b);
    (*pcVar2)();
    *(undefined2 *)0x5968 = 0xff;
    uVar7 = 0;
    uVar6 = 0x8000;
    func_0x00001694();
    uVar5 = func_0x00001395(0,uVar6,uVar7);
    iVar4 = func_0x000012e7(0,uVar5);
    *(int *)0x596e = iVar4 + 2;
    func_0x00001694(0,0x8000,0);
    uVar5 = func_0x000011e3(0);
    iVar4 = func_0x000012e7(0,uVar5);
    *(int *)0x5970 = iVar4 + 4;
  }
  *(int *)0x5968 = *(int *)0x5968 + 1;
  uVar1 = *(uint *)0x5968;
  *(uint *)0x5968 = uVar1 & 0xf;
  if ((uVar1 & 0xf) == 0) {
    pcVar2 = (code *)swi(0x3b);
    uVar6 = (*pcVar2)();
    out(6,uVar6);
    pcVar2 = (code *)swi(0x35);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x3b);
    uVar6 = (*pcVar2)();
    out(6,uVar6);
    pcVar2 = (code *)swi(0x35);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x35);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x39);
    uVar3 = (*pcVar2)();
    out(extraout_DX,uVar3);
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    func_0x00000f6e();
    pcVar2 = (code *)swi(0x3b);
    (*pcVar2)();
    iVar4 = func_0x00000fbe(0);
    *(int *)0x5df0 = iVar4 + 4;
    pcVar2 = (code *)swi(0x35);
    (*pcVar2)();
    pcVar2 = (code *)swi(0x39);
    uVar3 = (*pcVar2)();
    out(extraout_DX_00,uVar3);
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    func_0x00000e75();
    unaff_BP[-5] = *(undefined2 *)0x5972;
    pcVar2 = (code *)swi(0x3b);
    (*pcVar2)();
    *unaff_BP = 0;
    unaff_BP[-1] = 0x830d;
    iVar4 = func_0x00000fbe();
    *(int *)0x5dee = iVar4 + 4;
    *(int *)0x596a = *(int *)0x596a + *(int *)0x596e;
    *(int *)0x596c = *(int *)0x596c + *(int *)0x5970;
    if (32000 < *(int *)0x596a) {
      *(undefined2 *)0x596a = 0;
    }
    if (32000 < *(int *)0x596c) {
      *(undefined2 *)0x596c = 0;
    }
    if (((*(uint *)0x5dee & 2) != 0) &&
       (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
      *(undefined2 *)0x7488 = 3;
    }
  }
  else {
    *(int *)0x5df0 = *(int *)0x5df0 + 1;
  }
  return;
}



// Function: FUN_1000_8362 @ 1000:8362

/* WARNING: Control flow encountered bad instruction data */

void FUN_1000_8362(undefined2 param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  if ((param_2 == 0) && (*(int *)0x599a < *(int *)0x5984)) {
    if (*(int *)0x599c == 0) {
      FUN_1000_864c();
      return;
    }
    *(undefined2 *)0x599c = 0;
    if ((*(int *)0x5986 == 0) &&
       (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
      *(undefined2 *)0x7488 = 3;
    }
    *(int *)0x5980 = *(int *)0x5980 + *(int *)0x5988;
    if (*(int *)0x5980 < 0) {
      *(int *)0x5980 = -*(int *)0x5980;
    }
    *(int *)0x5974 = (*(int *)0x5974 + *(int *)0x598a) % 0x40;
    *(undefined2 *)0x5976 = *(undefined2 *)0x5974;
    *(undefined2 *)0x5978 = 0;
    pcVar1 = (code *)swi(0x3b);
    (*pcVar1)();
    (&stack0x761c)[unaff_DI] = (&stack0x761c)[unaff_DI] + -1;
    pcVar1 = (code *)swi(0x34);
    (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x000012e7();
  func_0x000011e3();
  uVar4 = func_0x000012e7();
  *(undefined2 *)0x59a0 = (int)((ulong)uVar4 >> 0x10);
  *(undefined2 *)0x599e = (int)uVar4;
  *(int *)0x597c = (*(int *)0x5db2 * 3) / 4;
  func_0x00001694();
  func_0x000011e3();
  iVar2 = func_0x000012e7();
  *(int *)0x597e = iVar2 + *(int *)0x597c / 0x10;
  func_0x00001694();
  func_0x000011e3();
  iVar2 = func_0x000012e7();
  *(int *)0x5980 = iVar2 + *(int *)0x597e / 2;
  *(int *)0x5982 = *(int *)0x597c - *(int *)0x597e;
  func_0x00001694();
  func_0x000011e3();
  uVar3 = func_0x000012e7();
  *(undefined2 *)0x598a = uVar3;
  *(undefined2 *)0x598c = 1;
  *(int *)0x598e = (*(int *)0x597c / *(int *)0x597e) * *(int *)0x598c;
  *(int *)0x5988 = *(int *)0x5980 / 8;
  func_0x00001694();
  iVar2 = func_0x000012e7();
  if (iVar2 != 0) {
    *(int *)0x5988 = -*(int *)0x5988;
  }
  *(undefined2 *)0x5974 = 0x30;
  *(undefined2 *)0x5976 = *(undefined2 *)0x5974;
  *(undefined2 *)0x5978 = 0;
  *(undefined2 *)0x599a = 0;
  pcVar1 = (code *)swi(0x3b);
  (*pcVar1)();
  (&stack0x761c)[unaff_DI] = (&stack0x761c)[unaff_DI] + -1;
  pcVar1 = (code *)swi(0x34);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_863f @ 1000:863f

/* WARNING: Control flow encountered bad instruction data */

void FUN_1000_863f(void)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  char in_CL;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(char *)(unaff_DI + -0x66) = -*(char *)(unaff_DI + -0x66);
  pcVar1 = (char *)(unaff_BP + unaff_DI + -8);
  *pcVar1 = *pcVar1 + in_CL;
  iVar3 = func_0x000638b9();
  *(int *)0x5976 = (iVar3 + *(int *)0x598c) % 0x40;
  *(int *)0x5978 = (*(int *)0x5978 + *(int *)0x598e) % 0x40;
  *(int *)0x597a = (*(int *)0x5976 - *(int *)0x5978) % 0x40;
  if (*(int *)0x597a < 0) {
    *(int *)0x597a = *(int *)0x597a + 0x40;
  }
  *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)0x5982;
  pcVar2 = (code *)swi(0x3b);
  (*pcVar2)();
  pcVar1 = (char *)(unaff_BP + unaff_DI + 0x761e);
  *pcVar1 = *pcVar1 + -1;
  pcVar2 = (code *)swi(0x34);
  (*pcVar2)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_864c @ 1000:864c

/* WARNING: Control flow encountered bad instruction data */

void FUN_1000_864c(void)

{
  char *pcVar1;
  code *pcVar2;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(int *)0x5976 = (*(int *)0x5976 + *(int *)0x598c) % 0x40;
  *(int *)0x5978 = (*(int *)0x5978 + *(int *)0x598e) % 0x40;
  *(int *)0x597a = (*(int *)0x5976 - *(int *)0x5978) % 0x40;
  if (*(int *)0x597a < 0) {
    *(int *)0x597a = *(int *)0x597a + 0x40;
  }
  *(undefined2 *)(unaff_BP + -2) = *(undefined2 *)0x5982;
  pcVar2 = (code *)swi(0x3b);
  (*pcVar2)();
  pcVar1 = (char *)(unaff_BP + unaff_DI + 0x761e);
  *pcVar1 = *pcVar1 + -1;
  pcVar2 = (code *)swi(0x34);
  (*pcVar2)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_87b5 @ 1000:87b5

void __cdecl16far FUN_1000_87b5(int param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  
  if ((param_1 != 0) || (*(int *)0x5ace <= *(int *)0x59ae)) {
    uVar8 = 0;
    uVar7 = 4;
    iVar2 = *(int *)0x5db2;
    iVar5 = iVar2 >> 0xf;
    uVar4 = *(undefined2 *)0x5db0;
    uVar3 = 0;
    func_0x000012e7();
    uVar6 = func_0x000011e3(0,uVar3,uVar4,iVar2,iVar5,uVar7,uVar8);
    uVar6 = func_0x000012e7(0,uVar6);
    *(undefined2 *)0x5ad2 = (int)((ulong)uVar6 >> 0x10);
    *(undefined2 *)0x5ad0 = (int)uVar6;
    func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000011e3(0);
    iVar2 = func_0x000012e7(0,uVar6);
    *(int *)0x59aa = iVar2 + *(int *)0x5dae / 4;
    func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000011e3(0);
    iVar2 = func_0x000012e7(0,uVar6);
    *(int *)0x59ac = iVar2 + *(int *)0x5dae / 4;
    func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000011e3(0);
    iVar2 = func_0x000012e7(0,uVar6);
    *(int *)0x59ba = iVar2 + *(int *)0x5dae / 6;
    func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000011e3(0);
    cVar1 = func_0x000012e7(0,uVar6);
    *(int *)0x59bc = *(int *)0x59ba >> (cVar1 + 1U & 0x1f);
    *(undefined2 *)0x59be = 1;
    func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000011e3(0);
    iVar2 = func_0x000012e7(0,uVar6);
    if (iVar2 == 0) {
      iVar2 = func_0x00001694(0,0x8000,0);
      iVar2 = func_0x000012e7(0,iVar2 << 1,(iVar2 >> 0xf) << 1 | (uint)(iVar2 < 0));
      *(int *)0x59b8 = iVar2;
      *(int *)0x5acc = iVar2 + 2;
      *(int *)0x5ace = 7 - *(int *)0x59b8;
      if (*(int *)0x59b8 == 0) {
        iVar2 = func_0x00001694(0,0x8000,0);
        iVar2 = func_0x000012e7(0,iVar2 << 1,(iVar2 >> 0xf) << 1 | (uint)(iVar2 < 0));
        *(int *)0x59be = *(int *)0x59be + iVar2;
      }
    }
    else {
      *(undefined2 *)0x5acc = 0;
      *(undefined2 *)0x5ace = 9;
    }
    iVar2 = func_0x00001694(0,0x8000,0);
    uVar4 = func_0x000012e7(0,iVar2 << 1,(iVar2 >> 0xf) << 1 | (uint)(iVar2 < 0));
    *(undefined2 *)0x59c0 = uVar4;
    func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000011e3(0);
    unaff_CS = 0;
    uVar4 = func_0x000012e7(0,uVar6);
    *(undefined2 *)0x59c2 = uVar4;
    *(undefined2 *)0x59b4 = 0;
    if (*(int *)0x59b4 < 10) {
      FUN_1000_89a9();
      return;
    }
    *(undefined2 *)0x59ae = *(undefined2 *)0x5acc;
  }
  func_0x000011e3(unaff_CS);
  *(undefined2 *)0x5df0 = extraout_DX;
  func_0x000011e3(0);
  *(undefined2 *)0x5dee = extraout_DX_00;
  *(int *)0x59ae = *(int *)0x59ae + *(int *)0x59be;
  func_0x000011e3(0);
  *(undefined2 *)0x59a6 = extraout_DX_01;
  func_0x000011e3(0);
  *(undefined2 *)0x59a8 = extraout_DX_02;
  *(undefined2 *)0x59b2 = 0;
  *(undefined2 *)0x59b0 = 1;
  uVar4 = 0;
  do {
    uVar3 = FUN_1000_66ae(*(undefined2 *)0x59a6,*(undefined2 *)0x59a8,*(undefined2 *)0x59b0);
    *(undefined2 *)0x59b0 = uVar3;
    uVar3 = 0;
    func_0x000011e3(uVar4);
    *(undefined2 *)(*(int *)0x59b2 * 4 + 0x59c4) = extraout_DX_03;
    *(undefined2 *)(*(int *)0x59b2 * 4 + 0x59c6) = *(undefined2 *)0x5dee;
    *(int *)0x59b2 = *(int *)0x59b2 + 1;
    if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
      uVar3 = 0x11c1;
      FUN_1000_4125();
    }
    uVar4 = uVar3;
  } while (*(int *)0x59b0 == 0);
  *(undefined2 *)0x59b4 = 0;
  while (*(int *)0x59b4 < *(int *)0x59b2) {
    *(undefined2 *)0x5df0 = *(undefined2 *)(*(int *)0x59b4 * 4 + 0x59c4);
    *(undefined2 *)0x5dee = *(undefined2 *)(*(int *)0x59b4 * 4 + 0x59c6);
    *(undefined2 *)0x59b0 = 1;
    if (*(int *)0x59c0 == 0) {
      *(uint *)0x7488 = *(uint *)0x59c2 & *(uint *)0x5dc0;
    }
    else {
      *(int *)0x7488 = *(int *)0x7488 + 1;
      if (*(uint *)0x5db6 <= *(uint *)0x7488) {
        *(undefined2 *)0x7488 = 3;
      }
    }
    do {
      uVar4 = FUN_1000_66ae(0,0,*(undefined2 *)0x59b0);
      *(undefined2 *)0x59b0 = uVar4;
      *(undefined2 *)0x59a2 = *(undefined2 *)0x5df0;
      *(undefined2 *)0x59a4 = *(undefined2 *)0x5dee;
      *(int *)0x5df0 = *(int *)0x59aa + *(int *)0x59a2;
      *(int *)0x5dee = *(int *)0x59ac + *(int *)0x59a4;
      (*(code *)*(undefined2 *)0x5c3f)(uVar3,1);
      *(int *)0x5df0 = *(int *)0x59aa - *(int *)0x59a2;
      *(int *)0x5dee = *(int *)0x59ac - *(int *)0x59a4;
      (*(code *)*(undefined2 *)0x5c3f)(uVar3,1);
      *(int *)0x5df0 = *(int *)0x59aa + *(int *)0x59a2;
      *(int *)0x5dee = *(int *)0x59ac - *(int *)0x59a4;
      (*(code *)*(undefined2 *)0x5c3f)(uVar3,1);
      *(int *)0x5df0 = *(int *)0x59aa - *(int *)0x59a2;
      *(int *)0x5dee = *(int *)0x59ac + *(int *)0x59a4;
      (*(code *)*(undefined2 *)0x5c3f)(uVar3,1);
      *(undefined2 *)0x5df0 = *(undefined2 *)0x59a2;
      *(undefined2 *)0x5dee = *(undefined2 *)0x59a4;
      *(int *)0x5cbb = *(int *)0x5cbb + 1;
      if ((*(int *)0x59c0 == 0) &&
         (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
        *(undefined2 *)0x7488 = 3;
      }
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        uVar3 = 0x11c1;
        FUN_1000_4125();
      }
    } while (*(int *)0x59b0 == 0);
    *(int *)0x59b4 = *(int *)0x59b4 + 1;
  }
  iVar2 = *(int *)0x59bc;
  *(int *)0x59bc = -iVar2;
  *(int *)0x59ba = *(int *)0x59ba + -iVar2;
  *(undefined2 *)0x5df0 = *(undefined2 *)0x59aa;
  *(undefined2 *)0x5dee = *(undefined2 *)0x59ac;
  return;
}



// Function: FUN_1000_89a9 @ 1000:89a9

void FUN_1000_89a9(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  undefined2 unaff_DS;
  undefined4 uVar4;
  
  if ((*(int *)0x59b4 < 2) || (8 < *(int *)0x59b4)) {
    if (1 < *(int *)0x59b4) {
      *(undefined2 *)0x59b6 = 0x10;
      goto LAB_1000_89d4;
    }
    iVar2 = *(int *)0x59b4;
  }
  else {
    iVar2 = *(int *)0x59b4 * 2 + -1;
  }
  *(int *)0x59b6 = iVar2;
LAB_1000_89d4:
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x34);
  uVar4 = (*pcVar1)();
  out((int)((ulong)uVar4 >> 0x10),(int)uVar4);
  uVar4 = func_0x00000fbe();
  iVar2 = *(int *)0x59b4;
  *(undefined2 *)(iVar2 * 4 + 0x5ad6) = (int)((ulong)uVar4 >> 0x10);
  *(undefined2 *)(iVar2 * 4 + 0x5ad4) = (int)uVar4;
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x34);
  uVar4 = (*pcVar1)();
  out((int)((ulong)uVar4 >> 0x10),(int)uVar4);
  uVar4 = func_0x00000fbe();
  iVar2 = *(int *)0x59b4;
  *(undefined2 *)(iVar2 * 4 + 0x5afe) = (int)((ulong)uVar4 >> 0x10);
  *(undefined2 *)(iVar2 * 4 + 0x5afc) = (int)uVar4;
  *(int *)0x59b4 = *(int *)0x59b4 + 1;
  if (9 < *(int *)0x59b4) {
    *(undefined2 *)0x59ae = *(undefined2 *)0x5acc;
    func_0x000011e3();
    *(undefined2 *)0x5df0 = extraout_DX;
    func_0x000011e3();
    *(undefined2 *)0x5dee = extraout_DX_00;
    *(int *)0x59ae = *(int *)0x59ae + *(int *)0x59be;
    func_0x000011e3();
    *(undefined2 *)0x59a6 = extraout_DX_01;
    func_0x000011e3();
    *(undefined2 *)0x59a8 = extraout_DX_02;
    *(undefined2 *)0x59b2 = 0;
    *(undefined2 *)0x59b0 = 1;
    do {
      uVar3 = FUN_1000_66ae();
      *(undefined2 *)0x59b0 = uVar3;
      func_0x000011e3();
      *(undefined2 *)(*(int *)0x59b2 * 4 + 0x59c4) = extraout_DX_03;
      *(undefined2 *)(*(int *)0x59b2 * 4 + 0x59c6) = *(undefined2 *)0x5dee;
      *(int *)0x59b2 = *(int *)0x59b2 + 1;
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        FUN_1000_4125();
      }
    } while (*(int *)0x59b0 == 0);
    *(undefined2 *)0x59b4 = 0;
    while (*(int *)0x59b4 < *(int *)0x59b2) {
      *(undefined2 *)0x5df0 = *(undefined2 *)(*(int *)0x59b4 * 4 + 0x59c4);
      *(undefined2 *)0x5dee = *(undefined2 *)(*(int *)0x59b4 * 4 + 0x59c6);
      *(undefined2 *)0x59b0 = 1;
      if (*(int *)0x59c0 == 0) {
        *(uint *)0x7488 = *(uint *)0x59c2 & *(uint *)0x5dc0;
      }
      else {
        *(int *)0x7488 = *(int *)0x7488 + 1;
        if (*(uint *)0x5db6 <= *(uint *)0x7488) {
          *(undefined2 *)0x7488 = 3;
        }
      }
      do {
        uVar3 = FUN_1000_66ae();
        *(undefined2 *)0x59b0 = uVar3;
        *(undefined2 *)0x59a2 = *(undefined2 *)0x5df0;
        *(undefined2 *)0x59a4 = *(undefined2 *)0x5dee;
        *(int *)0x5df0 = *(int *)0x59aa + *(int *)0x59a2;
        *(int *)0x5dee = *(int *)0x59ac + *(int *)0x59a4;
        (*(code *)*(undefined2 *)0x5c3f)();
        *(int *)0x5df0 = *(int *)0x59aa - *(int *)0x59a2;
        *(int *)0x5dee = *(int *)0x59ac - *(int *)0x59a4;
        (*(code *)*(undefined2 *)0x5c3f)();
        *(int *)0x5df0 = *(int *)0x59aa + *(int *)0x59a2;
        *(int *)0x5dee = *(int *)0x59ac - *(int *)0x59a4;
        (*(code *)*(undefined2 *)0x5c3f)();
        *(int *)0x5df0 = *(int *)0x59aa - *(int *)0x59a2;
        *(int *)0x5dee = *(int *)0x59ac + *(int *)0x59a4;
        (*(code *)*(undefined2 *)0x5c3f)();
        *(undefined2 *)0x5df0 = *(undefined2 *)0x59a2;
        *(undefined2 *)0x5dee = *(undefined2 *)0x59a4;
        *(int *)0x5cbb = *(int *)0x5cbb + 1;
        if ((*(int *)0x59c0 == 0) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
          *(undefined2 *)0x7488 = 3;
        }
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          FUN_1000_4125();
        }
      } while (*(int *)0x59b0 == 0);
      *(int *)0x59b4 = *(int *)0x59b4 + 1;
    }
    iVar2 = *(int *)0x59bc;
    *(int *)0x59bc = -iVar2;
    *(int *)0x59ba = *(int *)0x59ba + -iVar2;
    *(undefined2 *)0x5df0 = *(undefined2 *)0x59aa;
    *(undefined2 *)0x5dee = *(undefined2 *)0x59ac;
    return;
  }
  FUN_1000_89a9();
  return;
}



// Function: FUN_1000_8a1c @ 1000:8a1c

void __cdecl16far FUN_1000_8a1c(void)

{
  int iVar1;
  undefined2 in_AX;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 in_DX;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  int in_BX;
  undefined2 unaff_DS;
  
  *(undefined2 *)(in_BX * 2 + 0x5afe) = in_DX;
  *(undefined2 *)(in_BX * 2 + 0x5afc) = in_AX;
  *(int *)0x59b4 = *(int *)0x59b4 + 1;
  if (9 < *(int *)0x59b4) {
    *(undefined2 *)0x59ae = *(undefined2 *)0x5acc;
    func_0x000011e3();
    *(undefined2 *)0x5df0 = extraout_DX;
    func_0x000011e3(0);
    *(undefined2 *)0x5dee = extraout_DX_00;
    *(int *)0x59ae = *(int *)0x59ae + *(int *)0x59be;
    func_0x000011e3(0);
    *(undefined2 *)0x59a6 = extraout_DX_01;
    func_0x000011e3(0);
    *(undefined2 *)0x59a8 = extraout_DX_02;
    *(undefined2 *)0x59b2 = 0;
    *(undefined2 *)0x59b0 = 1;
    uVar3 = 0;
    do {
      uVar2 = FUN_1000_66ae(*(undefined2 *)0x59a6,*(undefined2 *)0x59a8,*(undefined2 *)0x59b0);
      *(undefined2 *)0x59b0 = uVar2;
      uVar2 = 0;
      func_0x000011e3(uVar3);
      *(undefined2 *)(*(int *)0x59b2 * 4 + 0x59c4) = extraout_DX_03;
      *(undefined2 *)(*(int *)0x59b2 * 4 + 0x59c6) = *(undefined2 *)0x5dee;
      *(int *)0x59b2 = *(int *)0x59b2 + 1;
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        uVar2 = 0x11c1;
        FUN_1000_4125();
      }
      uVar3 = uVar2;
    } while (*(int *)0x59b0 == 0);
    *(undefined2 *)0x59b4 = 0;
    while (*(int *)0x59b4 < *(int *)0x59b2) {
      *(undefined2 *)0x5df0 = *(undefined2 *)(*(int *)0x59b4 * 4 + 0x59c4);
      *(undefined2 *)0x5dee = *(undefined2 *)(*(int *)0x59b4 * 4 + 0x59c6);
      *(undefined2 *)0x59b0 = 1;
      if (*(int *)0x59c0 == 0) {
        *(uint *)0x7488 = *(uint *)0x59c2 & *(uint *)0x5dc0;
      }
      else {
        *(int *)0x7488 = *(int *)0x7488 + 1;
        if (*(uint *)0x5db6 <= *(uint *)0x7488) {
          *(undefined2 *)0x7488 = 3;
        }
      }
      do {
        uVar3 = FUN_1000_66ae(0,0,*(undefined2 *)0x59b0);
        *(undefined2 *)0x59b0 = uVar3;
        *(undefined2 *)0x59a2 = *(undefined2 *)0x5df0;
        *(undefined2 *)0x59a4 = *(undefined2 *)0x5dee;
        *(int *)0x5df0 = *(int *)0x59aa + *(int *)0x59a2;
        *(int *)0x5dee = *(int *)0x59ac + *(int *)0x59a4;
        (*(code *)*(undefined2 *)0x5c3f)(uVar2,1);
        *(int *)0x5df0 = *(int *)0x59aa - *(int *)0x59a2;
        *(int *)0x5dee = *(int *)0x59ac - *(int *)0x59a4;
        (*(code *)*(undefined2 *)0x5c3f)(uVar2,1);
        *(int *)0x5df0 = *(int *)0x59aa + *(int *)0x59a2;
        *(int *)0x5dee = *(int *)0x59ac - *(int *)0x59a4;
        (*(code *)*(undefined2 *)0x5c3f)(uVar2,1);
        *(int *)0x5df0 = *(int *)0x59aa - *(int *)0x59a2;
        *(int *)0x5dee = *(int *)0x59ac + *(int *)0x59a4;
        (*(code *)*(undefined2 *)0x5c3f)(uVar2,1);
        *(undefined2 *)0x5df0 = *(undefined2 *)0x59a2;
        *(undefined2 *)0x5dee = *(undefined2 *)0x59a4;
        *(int *)0x5cbb = *(int *)0x5cbb + 1;
        if ((*(int *)0x59c0 == 0) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
          *(undefined2 *)0x7488 = 3;
        }
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          uVar2 = 0x11c1;
          FUN_1000_4125();
        }
      } while (*(int *)0x59b0 == 0);
      *(int *)0x59b4 = *(int *)0x59b4 + 1;
    }
    iVar1 = *(int *)0x59bc;
    *(int *)0x59bc = -iVar1;
    *(int *)0x59ba = *(int *)0x59ba + -iVar1;
    *(undefined2 *)0x5df0 = *(undefined2 *)0x59aa;
    *(undefined2 *)0x5dee = *(undefined2 *)0x59ac;
    return;
  }
  FUN_1000_89a9();
  return;
}



// Function: FUN_1000_8c8b @ 1000:8c8b

void __cdecl16far FUN_1000_8c8b(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  *(int *)0x5dee = *(int *)0x5dee + -1;
  if ((param_1 != 0) ||
     (iVar1 = *(int *)0x5df0, *(int *)0x5df0 = *(int *)0x5df0 + 1, *(int *)0x5dae + -1 < iVar1)) {
    *(undefined2 *)0x5df0 = 0;
    *(int *)0x5dee = *(int *)0x5dee + 1;
    if (param_1 != 0) {
      uVar4 = 0;
      uVar3 = 0x8000;
      func_0x00001694();
      uVar2 = func_0x000011e3(0,uVar3,uVar4);
      uVar3 = func_0x000012e7(0,uVar2);
      *(undefined2 *)0x6025 = uVar3;
      if (*(int *)0x6025 == 1) {
        *(int *)0x6025 = *(int *)0x6025 + -1;
      }
      iVar1 = func_0x00001694(0,0x8000,0);
      unaff_CS = 0;
      iVar1 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0));
      if (iVar1 != 0) {
        *(undefined2 *)0x6025 = 0;
      }
    }
    if (*(int *)0x6025 == 0) {
      FUN_1000_67bb(unaff_CS,0);
    }
  }
  if (*(int *)0x5dee < 0) {
    *(undefined2 *)0x5dee = *(undefined2 *)0x5dae;
  }
  if (*(int *)0x6025 != 0) {
    FUN_1000_67bb(unaff_CS,*(undefined2 *)0x6025);
  }
  return;
}



// Function: FUN_1000_8d37 @ 1000:8d37

void __cdecl16far FUN_1000_8d37(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if (param_1 != 0) {
    *(undefined2 *)0x5b26 = 0;
    *(undefined2 *)0x5b24 = 0;
    uVar3 = 0;
    uVar2 = 0x8000;
    iVar1 = func_0x00001694();
    unaff_CS = 0;
    uVar2 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0),uVar2,uVar3);
    *(undefined2 *)0x6025 = uVar2;
  }
  *(int *)0x5dee = *(int *)0x5dee + 1;
  if (*(int *)0x6025 == 0) {
    if ((param_1 == 0) &&
       (iVar1 = *(int *)0x5df0, *(int *)0x5df0 = *(int *)0x5df0 + 1, iVar1 <= *(int *)0x5dae + -1))
    goto LAB_1000_8dde;
    *(undefined2 *)0x5df0 = 0;
    *(int *)0x5dee = *(int *)0x5dee + -1;
  }
  else {
    iVar1 = *(int *)0x5df0;
    *(int *)0x5df0 = *(int *)0x5df0 + 1;
    if (*(int *)0x5dae <= iVar1) {
      *(undefined2 *)0x5df0 = 0;
      *(int *)0x5dee = *(int *)0x5dee + -1;
      *(uint *)0x7488 = *(uint *)0x5dc0 & 4;
      *(int *)0x5b26 = *(int *)0x5b26 + 1;
      if (0x14 < *(int *)0x5b26) {
        *(undefined2 *)0x5b26 = 0;
      }
    }
    iVar1 = *(int *)0x5b24;
    *(int *)0x5b24 = *(int *)0x5b24 + 1;
    if (iVar1 <= *(int *)0x5b26) goto LAB_1000_8dde;
    *(undefined2 *)0x5b24 = 0;
  }
  FUN_1000_67bb(unaff_CS,0);
LAB_1000_8dde:
  if (*(int *)0x5dae < *(int *)0x5dee) {
    *(undefined2 *)0x5dee = 0;
  }
  return;
}



// Function: FUN_1000_8df0 @ 1000:8df0

void __cdecl16far FUN_1000_8df0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar6;
  long lVar7;
  undefined2 uVar8;
  
  if ((param_1 != 0) || (1 < *(uint *)0x5b2a)) {
    *(undefined2 *)0x5b2a = 0;
    uVar8 = 0;
    uVar3 = 0x8000;
    iVar4 = func_0x00001694();
    uVar3 = func_0x000012e7(0,iVar4 << 1,(iVar4 >> 0xf) << 1 | (uint)(iVar4 < 0),uVar3,uVar8);
    *(undefined2 *)0x6025 = uVar3;
    func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000011e3(0);
    uVar3 = func_0x000012e7(0,uVar6);
    *(undefined2 *)0x5b2c = uVar3;
    *(undefined2 *)0x5b2e = 0;
    if (*(int *)0x5b2c == 0) {
      *(undefined2 *)0x5b32 = 0;
      *(undefined2 *)0x5b34 = 0;
    }
    else {
      func_0x00001694(0,0x8000,0);
      uVar6 = func_0x000011e3(0);
      iVar4 = func_0x000012e7(0,uVar6);
      *(int *)0x5b32 = iVar4 + *(int *)0x5dae / 4;
      func_0x00001694(0,0x8000,0);
      uVar6 = func_0x000011e3(0);
      iVar4 = func_0x000012e7(0,uVar6);
      *(int *)0x5b34 = iVar4 + *(int *)0x5dae / 4;
    }
    func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000011e3(0);
    iVar4 = func_0x000012e7(0,uVar6);
    iVar4 = iVar4 + (*(int *)0x5dae >> 4);
    *(int *)0x5b44 = iVar4 >> 0xf;
    *(int *)0x5b42 = iVar4;
    func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000011e3(0);
    iVar4 = func_0x000012e7(0,uVar6);
    iVar4 = iVar4 + (*(int *)0x5dae >> 4);
    *(int *)0x5b30 = iVar4;
    *(int *)0x5b48 = iVar4 >> 0xf;
    *(int *)0x5b46 = iVar4;
    uVar6 = func_0x000011e3(0);
    *(undefined2 *)0x5b4c = (int)((ulong)uVar6 >> 0x10);
    *(undefined2 *)0x5b4a = (int)uVar6;
    iVar4 = *(int *)0x5b4a;
    *(uint *)0x5b50 = *(int *)0x5b4c << 1 | (uint)(iVar4 < 0);
    *(int *)0x5b4e = iVar4 << 1;
    uVar6 = func_0x000011e3(0);
    *(undefined2 *)0x5b54 = (int)((ulong)uVar6 >> 0x10);
    *(undefined2 *)0x5b52 = (int)uVar6;
    iVar4 = *(int *)0x5b52;
    *(uint *)0x5b58 = *(int *)0x5b54 << 1 | (uint)(iVar4 < 0);
    *(int *)0x5b56 = iVar4 << 1;
    uVar6 = func_0x000011e3(0);
    uVar3 = *(undefined2 *)0x5b4c;
    uVar8 = *(undefined2 *)0x5b4a;
    lVar7 = func_0x000012e7(0,uVar8,uVar3,4,0,
                            (*(int *)0x5b54 - (int)((ulong)uVar6 >> 0x10)) -
                            (uint)(*(uint *)0x5b52 < (uint)uVar6),*(uint *)0x5b52 - (uint)uVar6);
    lVar7 = lVar7 + CONCAT22(uVar8,uVar3);
    *(undefined2 *)0x5b38 = (int)((ulong)lVar7 >> 0x10);
    *(undefined2 *)0x5b36 = (int)lVar7;
    *(undefined2 *)0x5b3c = 0;
    *(undefined2 *)0x5b3a = 0;
    unaff_CS = 0;
    uVar6 = func_0x000011e3(0);
    *(undefined2 *)0x5b40 = (int)((ulong)uVar6 >> 0x10);
    *(undefined2 *)0x5b3e = (int)uVar6;
    *(uint *)0x7488 = *(uint *)0x5dc0 & 3;
  }
  if (*(int *)0x5b2a == 0) {
    if ((*(int *)0x5b3c <= *(int *)0x5b40) &&
       ((*(int *)0x5b3c < *(int *)0x5b40 || (*(uint *)0x5b3a < *(uint *)0x5b3e)))) {
      if (*(int *)0x6025 == 0) {
        *(uint *)0x7488 = *(int *)0x5b2e + *(int *)0x5b30 & *(uint *)0x5dc0;
      }
      else {
        *(int *)0x7488 = *(int *)0x7488 + 1;
        if (*(uint *)0x5db6 <= *(uint *)0x7488) {
          *(undefined2 *)0x7488 = 3;
        }
      }
      if (*(uint *)0x5b2c < 2) {
        *(undefined2 *)0x5df0 = *(undefined2 *)0x5b32;
        *(undefined2 *)0x5dee = *(undefined2 *)0x5b34;
        *(undefined2 *)0x5b28 = 1;
        do {
          uVar3 = FUN_1000_66ae(*(int *)0x5b32 + *(int *)0x5b2e,*(int *)0x5b34 + *(int *)0x5b30,
                                *(undefined2 *)0x5b28);
          *(undefined2 *)0x5b28 = uVar3;
          *(int *)0x5cbb = *(int *)0x5cbb + 1;
          (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
          if ((*(int *)0x6025 == 0) &&
             (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
            *(undefined2 *)0x7488 = 3;
          }
        } while (*(int *)0x5b28 == 0);
      }
      else {
        *(int *)0x5df0 = *(int *)0x5b32 - *(int *)0x5b2e;
        *(int *)0x5dee = *(int *)0x5b34 - *(int *)0x5b30;
        *(undefined2 *)0x5b28 = 1;
        do {
          uVar3 = FUN_1000_66ae(*(int *)0x5b32 + *(int *)0x5b2e,*(int *)0x5b34 + *(int *)0x5b30,
                                *(undefined2 *)0x5b28);
          *(undefined2 *)0x5b28 = uVar3;
          *(int *)0x5cbb = *(int *)0x5cbb + 1;
          (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
          if ((*(int *)0x6025 == 0) &&
             (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
            *(undefined2 *)0x7488 = 3;
          }
        } while (*(int *)0x5b28 == 0);
        *(int *)0x5df0 = *(int *)0x5b32 - *(int *)0x5b2e;
        *(int *)0x5dee = *(int *)0x5b34 + *(int *)0x5b30;
        do {
          uVar3 = FUN_1000_66ae(*(int *)0x5b32 + *(int *)0x5b2e,*(int *)0x5b34 - *(int *)0x5b30,
                                *(undefined2 *)0x5b28);
          *(undefined2 *)0x5b28 = uVar3;
          (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
          if ((*(int *)0x6025 == 0) &&
             (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
            *(undefined2 *)0x7488 = 3;
          }
        } while (*(int *)0x5b28 == 0);
      }
      if ((-1 < *(int *)0x5b38) && ((0 < *(int *)0x5b38 || (*(int *)0x5b36 != 0)))) {
        *(int *)0x5b30 = *(int *)0x5b30 + -1;
        iVar4 = *(int *)0x5b50;
        uVar2 = *(uint *)0x5b4e;
        puVar1 = (uint *)0x5b3e;
        uVar5 = *puVar1;
        *puVar1 = *puVar1 - uVar2;
        *(int *)0x5b40 = (*(int *)0x5b40 - iVar4) - (uint)(uVar5 < uVar2);
        iVar4 = *(int *)0x5b40;
        uVar2 = *(uint *)0x5b3e;
        puVar1 = (uint *)0x5b36;
        uVar5 = *puVar1;
        *puVar1 = *puVar1 - uVar2;
        *(int *)0x5b38 = (*(int *)0x5b38 - iVar4) - (uint)(uVar5 < uVar2);
      }
      *(int *)0x5b2e = *(int *)0x5b2e + 1;
      iVar4 = *(int *)0x5b58;
      uVar2 = *(uint *)0x5b56;
      puVar1 = (uint *)0x5b3a;
      uVar5 = *puVar1;
      *puVar1 = *puVar1 + uVar2;
      *(int *)0x5b3c = *(int *)0x5b3c + iVar4 + (uint)CARRY2(uVar5,uVar2);
      uVar5 = *(uint *)0x5b52 + *(uint *)0x5b3a;
      iVar4 = *(int *)0x5b54 + *(int *)0x5b3c + (uint)CARRY2(*(uint *)0x5b52,*(uint *)0x5b3a);
      goto LAB_1000_91e5;
    }
    *(int *)0x5b2a = *(int *)0x5b2a + 1;
    uVar6 = func_0x000011e3(unaff_CS,2,0,2,0);
    lVar7 = func_0x000012e7(0,uVar6);
    unaff_CS = 0;
    uVar6 = func_0x000012e7(0,lVar7 - CONCAT22(*(int *)0x5b3c + *(int *)0x5b40 +
                                               (uint)CARRY2(*(uint *)0x5b3a,*(uint *)0x5b3e),
                                               *(uint *)0x5b3a + *(uint *)0x5b3e));
    puVar1 = (uint *)0x5b36;
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + (uint)uVar6;
    *(int *)0x5b38 = *(int *)0x5b38 + (int)((ulong)uVar6 >> 0x10) + (uint)CARRY2(uVar5,(uint)uVar6);
  }
  else if (*(int *)0x5b2a != 1) {
    return;
  }
  if (*(int *)0x5b30 < 0) {
    *(int *)0x5b2a = *(int *)0x5b2a + 1;
    return;
  }
  if (*(int *)0x6025 == 0) {
    *(uint *)0x7488 = *(int *)0x5b2e + *(int *)0x5b30 & *(uint *)0x5dc0;
  }
  else {
    *(int *)0x7488 = *(int *)0x7488 + 1;
    if (*(uint *)0x5db6 <= *(uint *)0x7488) {
      *(undefined2 *)0x7488 = 3;
    }
  }
  if (*(uint *)0x5b2c < 2) {
    *(undefined2 *)0x5df0 = *(undefined2 *)0x5b32;
    *(undefined2 *)0x5dee = *(undefined2 *)0x5b34;
    *(undefined2 *)0x5b28 = 1;
    do {
      uVar3 = FUN_1000_66ae(*(int *)0x5b32 + *(int *)0x5b2e,*(int *)0x5b34 + *(int *)0x5b30,
                            *(undefined2 *)0x5b28);
      *(undefined2 *)0x5b28 = uVar3;
      *(int *)0x5cbb = *(int *)0x5cbb + 1;
      (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
      if ((*(int *)0x6025 == 0) &&
         (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
        *(undefined2 *)0x7488 = 3;
      }
    } while (*(int *)0x5b28 == 0);
  }
  else {
    *(int *)0x5df0 = *(int *)0x5b32 - *(int *)0x5b2e;
    *(int *)0x5dee = *(int *)0x5b34 - *(int *)0x5b30;
    *(undefined2 *)0x5b28 = 1;
    do {
      uVar3 = FUN_1000_66ae(*(int *)0x5b32 + *(int *)0x5b2e,*(int *)0x5b34 + *(int *)0x5b30,
                            *(undefined2 *)0x5b28);
      *(undefined2 *)0x5b28 = uVar3;
      *(int *)0x5cbb = *(int *)0x5cbb + 1;
      (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
      if ((*(int *)0x6025 == 0) &&
         (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
        *(undefined2 *)0x7488 = 3;
      }
    } while (*(int *)0x5b28 == 0);
    *(int *)0x5df0 = *(int *)0x5b32 - *(int *)0x5b2e;
    *(int *)0x5dee = *(int *)0x5b34 + *(int *)0x5b30;
    do {
      uVar3 = FUN_1000_66ae(*(int *)0x5b32 + *(int *)0x5b2e,*(int *)0x5b34 - *(int *)0x5b30,
                            *(undefined2 *)0x5b28);
      *(undefined2 *)0x5b28 = uVar3;
      (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
      if ((*(int *)0x6025 == 0) &&
         (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
        *(undefined2 *)0x7488 = 3;
      }
    } while (*(int *)0x5b28 == 0);
  }
  if ((*(int *)0x5b38 < 1) && (*(int *)0x5b38 < 0)) {
    *(int *)0x5b2e = *(int *)0x5b2e + 1;
    iVar4 = *(int *)0x5b58;
    uVar2 = *(uint *)0x5b56;
    puVar1 = (uint *)0x5b3a;
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + uVar2;
    *(int *)0x5b3c = *(int *)0x5b3c + iVar4 + (uint)CARRY2(uVar5,uVar2);
    iVar4 = *(int *)0x5b3c;
    uVar2 = *(uint *)0x5b3a;
    puVar1 = (uint *)0x5b36;
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + uVar2;
    *(int *)0x5b38 = *(int *)0x5b38 + iVar4 + (uint)CARRY2(uVar5,uVar2);
  }
  *(int *)0x5b30 = *(int *)0x5b30 + -1;
  iVar4 = *(int *)0x5b50;
  uVar2 = *(uint *)0x5b4e;
  puVar1 = (uint *)0x5b3e;
  uVar5 = *puVar1;
  *puVar1 = *puVar1 - uVar2;
  *(int *)0x5b40 = (*(int *)0x5b40 - iVar4) - (uint)(uVar5 < uVar2);
  uVar5 = *(uint *)0x5b4a - *(uint *)0x5b3e;
  iVar4 = (*(int *)0x5b4c - *(int *)0x5b40) - (uint)(*(uint *)0x5b4a < *(uint *)0x5b3e);
LAB_1000_91e5:
  puVar1 = (uint *)0x5b36;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  *(int *)0x5b38 = *(int *)0x5b38 + iVar4 + (uint)CARRY2(uVar2,uVar5);
  return;
}



// Function: FUN_1000_93fc @ 1000:93fc

void __cdecl16far FUN_1000_93fc(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if ((param_1 != 0) || (*(int *)0x5dae < *(int *)0x5df0)) {
    *(undefined2 *)0x5df0 = 0;
    *(undefined2 *)0x5dee = 0xffff;
    uVar4 = 0;
    uVar3 = 0x8000;
    iVar1 = func_0x00001694();
    iVar1 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0),uVar3,uVar4);
    *(int *)0x5b5a = iVar1 + 1;
    func_0x00001694(0,0x8000,0);
    uVar2 = func_0x000011e3(0);
    iVar1 = func_0x000012e7(0,uVar2);
    *(int *)0x5b5c = iVar1 + 1;
    func_0x00001694(0,0x8000,0);
    uVar2 = func_0x00001395(0);
    iVar1 = func_0x000012e7(0,uVar2);
    *(int *)0x5b5e = iVar1 + 2;
  }
  iVar1 = *(int *)0x5dee;
  *(int *)0x5dee = *(int *)0x5dee + 1;
  if (*(int *)0x5df0 < iVar1) {
    *(int *)0x5df0 = *(int *)0x5df0 + 1;
    *(undefined2 *)0x5dee = 0;
  }
  *(uint *)0x7488 =
       *(int *)0x5dee * *(int *)0x5dee * *(int *)0x5b5c -
       (*(int *)0x5df0 << (*(byte *)0x5b5a & 0x1f)) >> (*(byte *)0x5b5e & 0x1f) & *(uint *)0x5dc0;
  return;
}



// Function: FUN_1000_94ba @ 1000:94ba

void __cdecl16far FUN_1000_94ba(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (param_1 != 0) {
    uVar5 = 0;
    uVar4 = 0x8000;
    func_0x00001694();
    uVar3 = func_0x00001395(0,uVar4,uVar5);
    uVar1 = func_0x000012e7(0,uVar3);
    *(uint *)0x7488 = uVar1 & *(uint *)0x5dc0;
    *(undefined2 *)0x5b68 = 0;
    *(undefined2 *)0x5b66 = 0;
    *(undefined2 *)0x5b64 = 0;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    uVar4 = func_0x000012e7(0,uVar3);
    *(undefined2 *)0x6025 = uVar4;
  }
  do {
    if ((*(uint *)0x5b64 & 0x3f) == 0) {
      if ((*(int *)0x6025 == 0) &&
         (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
        *(undefined2 *)0x7488 = 3;
      }
      iVar2 = *(int *)0x5b66;
      *(int *)0x5b62 = iVar2;
      *(int *)0x5df0 = iVar2 + -1;
      if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
        iVar2 = *(int *)0x5b68 << 1;
      }
      else {
        iVar2 = *(int *)0x5b68;
      }
      *(int *)0x5dee = iVar2;
      *(int *)0x5b60 = *(int *)0x5b62 + 7;
      *(int *)0x5b64 = (*(int *)0x5b66 + *(int *)0x5b68 & 0x18U) << 3;
      *(int *)0x5b66 = *(int *)0x5b66 + 8;
      if (0x5f < *(uint *)0x5b66) {
        *(int *)0x7488 = *(int *)0x7488 + 1;
        if (*(uint *)0x5db6 <= *(uint *)0x7488) {
          *(undefined2 *)0x7488 = 3;
        }
        *(undefined2 *)0x5b66 = 0;
        *(int *)0x5b68 = *(int *)0x5b68 + 8;
        if (0x60 < *(uint *)0x5b68) {
          *(undefined2 *)0x5b68 = 0;
        }
      }
    }
    *(int *)0x5df0 = *(int *)0x5df0 + 1;
    if (*(int *)0x5b60 < *(int *)0x5df0) {
      *(undefined2 *)0x5df0 = *(undefined2 *)0x5b62;
      *(int *)0x5dee = *(int *)0x5dee + 1;
      if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
        *(int *)0x5dee = *(int *)0x5dee + 1;
      }
    }
    iVar2 = *(int *)0x5b64;
    *(int *)0x5b64 = *(int *)0x5b64 + 1;
  } while (*(char *)(iVar2 + 0xe6) != '\0');
  return;
}



// Function: FUN_1000_952e @ 1000:952e

void __cdecl16far FUN_1000_952e(void)

{
  uint in_AX;
  int iVar1;
  undefined2 unaff_DS;
  
  do {
    if (*(uint *)0x5db6 <= in_AX) {
      *(undefined2 *)0x7488 = 3;
    }
    do {
      iVar1 = *(int *)0x5b66;
      *(int *)0x5b62 = iVar1;
      *(int *)0x5df0 = iVar1 + -1;
      if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
        iVar1 = *(int *)0x5b68 << 1;
      }
      else {
        iVar1 = *(int *)0x5b68;
      }
      *(int *)0x5dee = iVar1;
      *(int *)0x5b60 = *(int *)0x5b62 + 7;
      *(int *)0x5b64 = (*(int *)0x5b66 + *(int *)0x5b68 & 0x18U) << 3;
      *(int *)0x5b66 = *(int *)0x5b66 + 8;
      if (0x5f < *(uint *)0x5b66) {
        *(int *)0x7488 = *(int *)0x7488 + 1;
        if (*(uint *)0x5db6 <= *(uint *)0x7488) {
          *(undefined2 *)0x7488 = 3;
        }
        *(undefined2 *)0x5b66 = 0;
        *(int *)0x5b68 = *(int *)0x5b68 + 8;
        if (0x60 < *(uint *)0x5b68) {
          *(undefined2 *)0x5b68 = 0;
        }
      }
      do {
        *(int *)0x5df0 = *(int *)0x5df0 + 1;
        if (*(int *)0x5b60 < *(int *)0x5df0) {
          *(undefined2 *)0x5df0 = *(undefined2 *)0x5b62;
          *(int *)0x5dee = *(int *)0x5dee + 1;
          if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
            *(int *)0x5dee = *(int *)0x5dee + 1;
          }
        }
        iVar1 = *(int *)0x5b64;
        *(int *)0x5b64 = *(int *)0x5b64 + 1;
        if (*(char *)(iVar1 + 0xe6) == '\0') {
          return;
        }
      } while ((*(uint *)0x5b64 & 0x3f) != 0);
    } while (*(int *)0x6025 != 0);
    *(int *)0x7488 = *(int *)0x7488 + 1;
    in_AX = *(uint *)0x7488;
  } while( true );
}



// Function: FUN_1000_95f3 @ 1000:95f3

void __cdecl16far FUN_1000_95f3(int param_1)

{
  undefined2 unaff_DS;
  
  if ((param_1 != 0) || ((*(int *)0x5dae < *(int *)0x5df0 && (*(int *)0x5dae < *(int *)0x5dee)))) {
    *(undefined2 *)0x5b6a = 1;
    *(undefined2 *)0x5b6c = 1;
    *(undefined2 *)0x5dee = 0;
    *(undefined2 *)0x5df0 = 0;
    *(int *)0x7488 = *(int *)0x7488 + 1;
    if (*(uint *)0x5db6 <= *(uint *)0x7488) {
      *(undefined2 *)0x7488 = 3;
    }
  }
  if (*(int *)0x5df0 < 0) {
    *(undefined2 *)0x5dee = 0;
    *(int *)0x5b6c = *(int *)0x5b6c + 1;
    *(undefined2 *)0x5df0 = *(undefined2 *)0x5b6c;
    *(int *)0x5b6a = *(int *)0x5b6a + 1;
    FUN_1000_67bb();
  }
  else {
    *(int *)0x5dee = *(int *)0x5dee + 1;
    if (*(int *)0x5b6a < *(int *)0x5dee) {
      *(int *)0x5df0 = *(int *)0x5df0 + -1;
    }
  }
  return;
}



// Function: FUN_1000_966a @ 1000:966a

void FUN_1000_966a(undefined2 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_CS;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  int local_c;
  int iStack_8;
  
  if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
    unaff_CS = 0x11c1;
    FUN_1000_4125();
  }
  if ((param_2 == 0) && (*(int *)0x5b80 == 0)) {
    FUN_1000_980d();
    return;
  }
  *(undefined2 *)0x5b80 = 0;
  iVar2 = *(int *)0x5dae;
  iVar4 = iVar2 >> 1;
  func_0x00001694(unaff_CS,0x8000,0);
  uVar6 = func_0x000011e3(0);
  iVar1 = func_0x000012e7(0,uVar6);
  *(int *)0x5b76 = iVar1 + 3;
  *(int *)0x5b7e = 6 >> ((byte)iVar1 & 0x1f);
  *(undefined2 *)0x5b78 =
       (int)(CONCAT22(iVar2 >> 0xf,iVar4) / (long)(2 << (*(char *)0x5b76 - 1U & 0x1f)));
  *(undefined2 *)0x5b7a = 0;
  *(undefined2 *)0x5b74 = 0;
  *(undefined2 *)0x5b72 = 0;
  *(undefined2 *)0x5b70 = 0;
  *(undefined2 *)0x5b6e = 0;
  iVar2 = func_0x00001694(0,0x8000,0);
  uVar5 = 0;
  uVar3 = func_0x000012e7(0,iVar2 << 1,(iVar2 >> 0xf) << 1 | (uint)(iVar2 < 0));
  *(undefined2 *)0x5b7c = uVar3;
  if (param_2 != 0) {
    iVar2 = func_0x00001694(0,0x8000,0);
    uVar5 = 0;
    iVar2 = func_0x000012e7(0,iVar2 << 1,(iVar2 >> 0xf) << 1 | (uint)(iVar2 < 0));
    if (iVar2 != 0) {
      *(undefined2 *)0x5dee = 0;
      *(undefined2 *)0x5df0 = 0;
      iVar2 = func_0x00001694(0,0x8000,0);
      iVar2 = func_0x000012e7(0,iVar2 << 1,(iVar2 >> 0xf) << 1 | (uint)(iVar2 < 0));
      if (iVar2 == 0) {
        func_0x00001694(0,0x8000,0);
        uVar6 = func_0x000011e3(0);
        iVar1 = func_0x000012e7(0,uVar6);
        local_c = iVar1 + 2;
      }
      else {
        *(int *)0x7488 = *(int *)0x7488 + 1;
        if (*(uint *)0x5db6 <= *(uint *)0x7488) {
          *(undefined2 *)0x7488 = 3;
        }
      }
      uVar3 = 0;
      for (iVar1 = 1; iVar1 <= iVar4; iVar1 = iVar1 + 1) {
        for (iStack_8 = 1; iStack_8 <= iVar4; iStack_8 = iStack_8 + 1) {
          if (iVar2 == 0) {
            FUN_1000_67bb(uVar3,local_c);
          }
          (*(code *)*(undefined2 *)0x5c3f)(uVar3,1);
          *(int *)0x5dee = *(int *)0x5dee + 1;
        }
        *(int *)0x5df0 = *(int *)0x5df0 + 1;
        *(int *)0x5dee = *(int *)0x5dee - iVar4;
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          uVar3 = 0x11c1;
          FUN_1000_4125();
        }
      }
      uVar5 = 0x11c1;
      FUN_1000_2a3a(uVar3,0);
    }
  }
  FUN_1000_966a(uVar5,0);
  *(undefined2 *)0x5cbb = 32000;
  *(undefined2 *)0x5b80 = 1;
  return;
}



// Function: FUN_1000_97d0 @ 1000:97d0

void __cdecl16far FUN_1000_97d0(void)

{
  int iVar1;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined1 in_ZF;
  char in_SF;
  char in_OF;
  
  do {
    if ((bool)in_ZF || in_OF != in_SF) {
      if (*(int *)(unaff_BP + -8) == 0) {
        FUN_1000_67bb(unaff_CS,*(undefined2 *)(unaff_BP + -10));
      }
      (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
      *(int *)0x5dee = *(int *)0x5dee + 1;
      *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
    }
    else {
      *(int *)0x5df0 = *(int *)0x5df0 + 1;
      *(int *)0x5dee = *(int *)0x5dee - unaff_SI;
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        unaff_CS = 0x11c1;
        FUN_1000_4125();
      }
      unaff_DI = unaff_DI + 1;
      if (unaff_SI < unaff_DI) {
        FUN_1000_2a3a(unaff_CS,0);
        FUN_1000_966a(0x11c1,0);
        *(undefined2 *)0x5cbb = 32000;
        *(undefined2 *)0x5b80 = 1;
        return;
      }
      *(undefined2 *)(unaff_BP + -6) = 1;
    }
    iVar1 = *(int *)(unaff_BP + -6);
    in_OF = SBORROW2(iVar1,unaff_SI);
    in_SF = iVar1 - unaff_SI < 0;
    in_ZF = iVar1 == unaff_SI;
  } while( true );
}



// Function: FUN_1000_980d @ 1000:980d

void __cdecl16far FUN_1000_980d(void)

{
  undefined2 uVar1;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(int *)0x5b76 = *(int *)0x5b76 + -1;
  if (*(int *)0x5b76 != 0) {
    uVar1 = *(undefined2 *)0x5b78;
    *(undefined2 *)0x5b78 = *(undefined2 *)0x5b7a;
    *(undefined2 *)0x5b7a = uVar1;
    FUN_1000_966a();
    uVar1 = *(undefined2 *)0x5b7a;
    *(undefined2 *)0x5b7a = *(undefined2 *)0x5b78;
    *(undefined2 *)0x5b78 = uVar1;
  }
  *(undefined2 *)(unaff_BP + -4) = 1;
  if (*(int *)(unaff_BP + -4) < 4) {
    FUN_1000_9844();
    return;
  }
  *(int *)0x5b78 = -unaff_SI;
  *(int *)0x5b7a = -unaff_DI;
  *(int *)0x5b76 = *(int *)0x5b76 + 1;
  return;
}



// Function: FUN_1000_9844 @ 1000:9844

void FUN_1000_9844(void)

{
  int iVar1;
  undefined2 uVar2;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)(unaff_BP + -4);
  if (iVar1 == 1) {
    unaff_SI = *(int *)0x5b78;
    unaff_DI = *(int *)0x5b7a;
  }
  else if (iVar1 == 2) {
    unaff_SI = *(int *)0x5b7a;
    unaff_DI = *(int *)0x5b78;
  }
  else if (iVar1 == 3) {
    unaff_SI = -*(int *)0x5b78;
    unaff_DI = -*(int *)0x5b7a;
    *(int *)0x5b78 = unaff_DI;
    *(int *)0x5b7a = unaff_SI;
  }
  *(int *)0x5b72 = *(int *)0x5b72 + unaff_SI;
  *(int *)0x5b74 = *(int *)0x5b74 + unaff_DI;
  *(undefined2 *)0x5df0 = *(undefined2 *)0x5b6e;
  *(undefined2 *)0x5dee = *(undefined2 *)0x5b70;
  *(undefined2 *)(unaff_BP + -2) = 1;
  do {
    uVar2 = FUN_1000_66ae(*(undefined2 *)0x5b72,*(undefined2 *)0x5b74,*(undefined2 *)(unaff_BP + -2)
                         );
    *(undefined2 *)(unaff_BP + -2) = uVar2;
    FUN_1000_690b(*(undefined2 *)0x5b7e,1);
    if ((*(int *)0x5b7c != 0) &&
       (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
      *(undefined2 *)0x7488 = 3;
    }
  } while (*(int *)(unaff_BP + -2) == 0);
  if ((*(int *)0x5b7c == 0) &&
     (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
    *(undefined2 *)0x7488 = 3;
  }
  *(undefined2 *)0x5b6e = *(undefined2 *)0x5b72;
  *(undefined2 *)0x5b70 = *(undefined2 *)0x5b74;
  if (*(int *)0x5b76 != 0) {
    FUN_1000_966a();
  }
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (3 < *(int *)(unaff_BP + -4)) {
    *(int *)0x5b78 = -unaff_SI;
    *(int *)0x5b7a = -unaff_DI;
    *(int *)0x5b76 = *(int *)0x5b76 + 1;
    return;
  }
  FUN_1000_9844();
  return;
}



// Function: FUN_1000_988b @ 1000:988b

void __cdecl16far FUN_1000_988b(void)

{
  undefined2 in_AX;
  undefined2 uVar1;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5df0 = in_AX;
  *(undefined2 *)0x5dee = *(undefined2 *)0x5b70;
  *(undefined2 *)(unaff_BP + -2) = 1;
  do {
    uVar1 = FUN_1000_66ae(*(undefined2 *)0x5b72,*(undefined2 *)0x5b74,*(undefined2 *)(unaff_BP + -2)
                         );
    *(undefined2 *)(unaff_BP + -2) = uVar1;
    FUN_1000_690b(*(undefined2 *)0x5b7e,1);
    if ((*(int *)0x5b7c != 0) &&
       (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
      *(undefined2 *)0x7488 = 3;
    }
  } while (*(int *)(unaff_BP + -2) == 0);
  if ((*(int *)0x5b7c == 0) &&
     (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
    *(undefined2 *)0x7488 = 3;
  }
  *(undefined2 *)0x5b6e = *(undefined2 *)0x5b72;
  *(undefined2 *)0x5b70 = *(undefined2 *)0x5b74;
  if (*(int *)0x5b76 != 0) {
    FUN_1000_966a();
  }
  *(int *)(unaff_BP + -4) = *(int *)(unaff_BP + -4) + 1;
  if (*(int *)(unaff_BP + -4) < 4) {
    FUN_1000_9844();
    return;
  }
  *(int *)0x5b78 = -unaff_SI;
  *(int *)0x5b7a = -unaff_DI;
  *(int *)0x5b76 = *(int *)0x5b76 + 1;
  return;
}



// Function: FUN_1000_9935 @ 1000:9935

void __cdecl16far FUN_1000_9935(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (param_1 != 0) {
    *(undefined2 *)0x5b82 = 0xff;
    *(undefined2 *)0x5b88 = 0;
    *(undefined2 *)0x5b86 = 1;
    *(undefined2 *)0x5b84 = 1;
    uVar5 = 0;
    uVar4 = 0x8000;
    func_0x00001694();
    uVar3 = func_0x00001395(0,uVar4,uVar5);
    unaff_CS = 0;
    uVar1 = func_0x000012e7(0,uVar3);
    *(uint *)0x7488 = uVar1 & *(uint *)0x5dc0;
  }
  *(int *)0x5b82 = *(int *)0x5b82 + 1;
  uVar1 = *(uint *)0x5b82;
  *(uint *)0x5b82 = uVar1 & 3;
  if ((uVar1 & 3) == 0) {
    *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x5b84;
    *(int *)0x5b88 = *(int *)0x5b88 + *(int *)0x5b86;
    if (*(int *)0x5df0 < 0) {
      *(undefined2 *)0x5b84 = 1;
      *(undefined2 *)0x5df0 = 0;
      *(int *)0x7488 = *(int *)0x7488 + 1;
      if (*(uint *)0x5db6 <= *(uint *)0x7488) {
        *(undefined2 *)0x7488 = 3;
      }
    }
    if (*(int *)0x5b88 < 0) {
      func_0x00001694(unaff_CS,0x8000,0);
      uVar3 = func_0x00001395(0);
      unaff_CS = 0;
      iVar2 = func_0x000012e7(0,uVar3);
      *(int *)0x5b86 = iVar2 + 1;
      *(undefined2 *)0x5b88 = 0;
    }
    if (*(int *)0x5dae < *(int *)0x5df0) {
      *(undefined2 *)0x5b84 = 0xffff;
      *(undefined2 *)0x5df0 = *(undefined2 *)0x5dae;
    }
    if (*(int *)0x5dae < *(int *)0x5b88) {
      func_0x00001694(unaff_CS,0x8000,0);
      uVar3 = func_0x00001395(0);
      iVar2 = func_0x000012e7(0,uVar3);
      *(int *)0x5b86 = -(iVar2 + 1);
      *(undefined2 *)0x5b88 = *(undefined2 *)0x5dae;
    }
    *(undefined2 *)0x5dee = *(undefined2 *)0x5b88;
  }
  else {
    *(int *)0x5dee = *(int *)0x5dee + 1;
  }
  return;
}



// Function: FUN_1000_9a3f @ 1000:9a3f

void __cdecl16far FUN_1000_9a3f(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 unaff_DS;
  undefined4 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  uint local_24;
  int local_22;
  undefined2 local_1e;
  int local_1c;
  int local_1a;
  uint local_18;
  uint local_16;
  int local_14;
  int local_12;
  int local_e;
  int local_6;
  
  uVar13 = 0;
  uVar12 = 0x8000;
  func_0x00001694();
  uVar11 = func_0x000011e3(0,uVar12,uVar13);
  iVar2 = func_0x000012e7(0,uVar11);
  iVar2 = iVar2 + *(int *)0x5dae / 8;
  iVar3 = func_0x00001694(0,0x8000,0);
  iVar3 = func_0x000012e7(0,iVar3 << 1,(iVar3 >> 0xf) << 1 | (uint)(iVar3 < 0));
  if (iVar3 == 0) {
    func_0x00001694(0,0x8000,0);
    uVar11 = func_0x000011e3(0);
    iVar3 = func_0x000012e7(0,uVar11);
    local_6 = (iVar3 + 1) * (iVar2 / 4);
  }
  else {
    local_6 = 0;
  }
  func_0x00001694(0,0x8000,0);
  uVar11 = func_0x00001395(0);
  iVar3 = func_0x000012e7(0,uVar11);
  uVar4 = ((iVar3 + 2) * iVar2) / 0x14 & 0xfffe;
  func_0x00001694(0,0x8000,0);
  uVar11 = func_0x000011e3(0);
  iVar3 = func_0x000012e7(0,uVar11);
  func_0x00001694(0,0x8000,0);
  uVar11 = func_0x000011e3(0);
  iVar5 = func_0x000012e7(0,uVar11);
  iVar6 = func_0x00001694(0,0x8000,0);
  iVar6 = func_0x000012e7(0,iVar6 << 1,(iVar6 >> 0xf) << 1 | (uint)(iVar6 < 0));
  if (iVar6 == 0) {
    local_e = 0;
  }
  else {
    func_0x00001694(0,0x8000,0);
    uVar11 = func_0x000011e3(0);
    local_e = func_0x000012e7(0,uVar11);
  }
  if (*(int *)0x7484 == 8) {
    func_0x00001694(0,0x8000,0);
    uVar11 = func_0x000011e3(0);
    iVar6 = func_0x000012e7(0,uVar11);
  }
  else {
    iVar6 = 3;
  }
  func_0x00001694(0,0x8000,0);
  uVar11 = func_0x000011e3(0);
  uVar12 = 0;
  uVar7 = func_0x000012e7(0,uVar11);
  uVar7 = uVar7 & *(uint *)0x5dc0;
  *(uint *)0x7488 = uVar7;
  for (local_22 = 0; local_22 < 2; local_22 = local_22 + 1) {
    local_18 = uVar4 << 1;
    *(uint *)0x7488 = uVar7 & *(uint *)0x5dc0;
    local_16 = uVar4;
    if (local_22 == 0) {
      local_1a = 0;
      local_12 = 0;
      local_1c = iVar2;
    }
    else {
      local_1a = local_6;
      local_1c = local_6;
      local_12 = 1;
    }
    do {
      *(uint *)0x5df0 = local_16;
      *(uint *)0x5dee = local_18;
      if ((iVar6 == 0) || (iVar6 == 2)) {
        *(uint *)0x7488 = uVar7 & *(uint *)0x5dc0;
      }
      local_1e = 1;
      while( true ) {
        iVar8 = FUN_1000_66ae(local_1a,local_1c,local_1e);
        iVar10 = *(int *)0x5df0;
        local_14 = *(int *)0x5dee;
        for (local_24 = 0; (int)local_24 < 8; local_24 = local_24 + 1) {
          *(int *)0x5df0 = iVar3 + iVar10;
          *(int *)0x5dee = iVar5 + local_14;
          if ((*(int *)0x5df0 < *(int *)0x5dae) && (*(int *)0x5dee < *(int *)0x5dae)) {
            (*(code *)*(undefined2 *)0x5c3f)(uVar12,1);
          }
          local_14 = -local_14;
          iVar9 = iVar10;
          if ((local_24 & 1) != 0) {
            iVar9 = -iVar10;
          }
          iVar10 = iVar9;
          if (local_24 == 3) {
            iVar10 = local_14;
            local_14 = iVar9;
          }
          if ((iVar6 == 2) &&
             (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
            *(undefined2 *)0x7488 = 3;
          }
        }
        *(int *)0x5df0 = local_14;
        *(int *)0x5dee = iVar10;
        if ((iVar6 == 0) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
          *(undefined2 *)0x7488 = 3;
        }
        *(int *)0x5cbb = *(int *)0x5cbb + 1;
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          uVar12 = 0x11c1;
          FUN_1000_4125();
        }
        if (iVar8 != 0) break;
        local_1e = 0;
      }
      if ((iVar6 == 1) && (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488))
      {
        *(undefined2 *)0x7488 = 3;
      }
      if (iVar6 == 3) {
        *(int *)0x5daa = *(int *)0x5daa + 1;
        puVar1 = (uint *)0x5daa;
        *puVar1 = *puVar1 & 3;
        if ((*puVar1 == 0) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
          *(undefined2 *)0x7488 = 3;
        }
      }
      local_1a = local_1a - local_12;
      local_1c = local_1c + -1;
      local_16 = local_16 - (local_18 & 1);
      local_18 = local_18 - 1;
    } while (local_e <= (int)local_16);
  }
  *(int *)0x5df0 = iVar3;
  *(int *)0x5dee = iVar5;
  return;
}



// Function: FUN_1000_9da4 @ 1000:9da4

void __cdecl16far FUN_1000_9da4(int param_1)

{
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if (param_1 != 0) {
    uVar3 = 0;
    uVar2 = 0x8000;
    func_0x00001694();
    uVar1 = func_0x000011e3(0,uVar2,uVar3);
    unaff_CS = 0;
    uVar2 = func_0x000012e7(0,uVar1);
    *(undefined2 *)0x6025 = uVar2;
  }
  func_0x00001694(unaff_CS,0x8000,0);
  uVar1 = func_0x000011e3(0);
  uVar2 = func_0x000012e7(0,uVar1);
  *(undefined2 *)0x5df0 = uVar2;
  func_0x00001694(0,0x8000,0);
  uVar1 = func_0x000011e3(0);
  uVar2 = func_0x000012e7(0,uVar1);
  *(undefined2 *)0x5dee = uVar2;
  FUN_1000_67bb(0,*(undefined2 *)0x6025);
  return;
}



// Function: FUN_1000_9e25 @ 1000:9e25

/* WARNING: Control flow encountered bad instruction data */

void FUN_1000_9e25(undefined2 param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined2 extraout_DX;
  undefined2 unaff_DS;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined2 uVar7;
  undefined2 uStack_6;
  
  if ((param_2 != 0) || (*(int *)0x5b8c < 1)) {
    *(undefined2 *)0x5b90 = 0xff;
    *(undefined2 *)0x5b8e = 0;
    iVar3 = (*(int *)0x5dae / 4) * 3;
    *(int *)0x5b8a = iVar3;
    *(int *)0x5b8c = iVar3;
    if (param_2 == 0) {
      *(int *)0x7488 = *(int *)0x7488 + 1;
      if (*(uint *)0x5db6 <= *(uint *)0x7488) {
        *(undefined2 *)0x7488 = 3;
      }
    }
    else {
      *(uint *)0x7488 = *(uint *)0x5dc0 & 3;
    }
  }
  if (*(int *)0x5b8a < 1) {
    *(int *)0x5b8c = *(int *)0x5b8c + -0x10;
    *(undefined2 *)0x5b8a = *(undefined2 *)0x5b8c;
    *(undefined2 *)0x5b8e = 0;
  }
  *(int *)0x5b90 = *(int *)0x5b90 + 1;
  uVar1 = *(uint *)0x5b90;
  *(uint *)0x5b90 = uVar1 & 7;
  if ((uVar1 & 7) != 0) {
    FUN_1000_9f47();
    return;
  }
  *(int *)0x5b8e = *(int *)0x5b8e + 0x1f;
  iVar3 = *(int *)0x5b8e;
  pcVar2 = (code *)swi(0x3b);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x38);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x35);
  (*pcVar2)();
  do {
    pcVar2 = (code *)swi(0x3d);
    (*pcVar2)();
    uVar7 = *(undefined2 *)0x5b8a;
    pcVar2 = (code *)swi(0x3b);
    (*pcVar2)();
    cVar6 = SCARRY2(iVar3,1);
    iVar3 = iVar3 + 1;
    cVar5 = iVar3 < 0;
    bVar4 = iVar3 == 0;
    pcVar2 = (code *)swi(0x37);
    (*pcVar2)();
  } while (bVar4 || cVar6 != cVar5);
  pcVar2 = (code *)swi(0x35);
  (*pcVar2)();
  pcVar2 = (code *)swi(0x39);
  (*pcVar2)(uVar7);
  FUN_1000_dcaa();
  func_0x00000e75();
  pcVar2 = (code *)swi(0x37);
  (*pcVar2)();
  out(*uStack_6,extraout_DX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_9f01 @ 1000:9f01

/* WARNING: Control flow encountered bad instruction data */

void FUN_1000_9f01(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_9f04 @ 1000:9f04

/* WARNING: Control flow encountered bad instruction data */

void FUN_1000_9f04(void)

{
  code *pcVar1;
  undefined2 extraout_DX;
  undefined2 unaff_DS;
  undefined2 uStack_4;
  
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  func_0x0001dcdc();
  func_0x00000f6e();
  pcVar1 = (code *)swi(0x37);
  (*pcVar1)();
  out(*uStack_4,extraout_DX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_9f47 @ 1000:9f47

void __cdecl16far FUN_1000_9f47(void)

{
  undefined2 unaff_DS;
  
  *(int *)0x5df0 = *(int *)0x5df0 + 1;
  *(int *)0x5dee = *(int *)0x5dee + 1;
  return;
}



// Function: FUN_1000_9f53 @ 1000:9f53

void __cdecl16far FUN_1000_9f53(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar5;
  undefined2 uVar6;
  
  if (((param_1 != 0) ||
      (uVar4 = (int)*(uint *)0x5df0 >> 0xf,
      *(int *)0x5dae <= (int)((*(uint *)0x5df0 ^ uVar4) - uVar4))) ||
     (uVar4 = (int)*(uint *)0x5dee >> 0xf,
     *(int *)0x5dae <= (int)((*(uint *)0x5dee ^ uVar4) - uVar4))) {
    uVar6 = 0;
    uVar2 = 0x8000;
    func_0x00001694();
    uVar5 = func_0x000011e3(0,uVar2,uVar6);
    uVar2 = func_0x000012e7(0,uVar5);
    *(undefined2 *)0x5b92 = uVar2;
    *(undefined2 *)0x5df0 = uVar2;
    func_0x00001694(0,0x8000,0);
    uVar5 = func_0x000011e3(0);
    uVar2 = func_0x000012e7(0,uVar5);
    *(undefined2 *)0x5b94 = uVar2;
    *(undefined2 *)0x5dee = uVar2;
    func_0x00001694(0,0x8000,0);
    uVar5 = func_0x000011e3(0);
    iVar3 = func_0x000012e7(0,uVar5);
    *(int *)0x5b9a = iVar3 + *(int *)0x5dae / 6;
    *(undefined2 *)0x5b9c = 1;
    *(int *)0x5b96 = *(int *)0x5b92 + *(int *)0x5b9a;
    *(int *)0x5b98 = *(int *)0x5b94 + *(int *)0x5b9a;
    if (param_1 != 0) {
      iVar3 = func_0x00001694(0,0x8000,0);
      uVar2 = func_0x000012e7(0,iVar3 << 1,(iVar3 >> 0xf) << 1 | (uint)(iVar3 < 0));
      *(undefined2 *)0x6025 = uVar2;
    }
    iVar3 = func_0x00001694(0,0x8000,0);
    unaff_CS = 0;
    cVar1 = func_0x000012e7(0,iVar3 << 1,(iVar3 >> 0xf) << 1 | (uint)(iVar3 < 0));
    *(char *)0x5b9e = cVar1 + '\x01';
  }
  uVar2 = FUN_1000_66ae(*(undefined2 *)0x5b96,*(undefined2 *)0x5b98,*(undefined2 *)0x5b9c);
  *(undefined2 *)0x5b9c = uVar2;
  FUN_1000_67bb(unaff_CS,0);
  if (*(int *)0x5b9c != 0) {
    if (*(int *)0x6025 == 0) {
      *(int *)0x5b92 = *(int *)0x5b92 + (int)*(char *)0x5b9e;
      *(undefined2 *)0x5df0 = *(undefined2 *)0x5b92;
      *(int *)0x5b94 = *(int *)0x5b94 + (int)*(char *)0x5b9e;
      *(undefined2 *)0x5dee = *(undefined2 *)0x5b94;
      func_0x00001694(unaff_CS,0x8000,0);
      uVar5 = func_0x000011e3(0);
      iVar3 = func_0x000012e7(0,uVar5);
      *(int *)0x5b96 = *(int *)0x5b92 + iVar3;
      func_0x00001694(0,0x8000,0);
      uVar5 = func_0x000011e3(0);
      iVar3 = func_0x000012e7(0,uVar5);
      iVar3 = *(int *)0x5b94 + iVar3;
    }
    else {
      *(undefined2 *)0x5df0 = *(undefined2 *)0x5b92;
      *(undefined2 *)0x5dee = *(undefined2 *)0x5b94;
      func_0x00001694(unaff_CS,0x8000,0);
      uVar5 = func_0x000011e3(0);
      iVar3 = func_0x000012e7(0,uVar5);
      *(int *)0x5b96 = (*(int *)0x5b92 + iVar3) - *(int *)0x5b9a;
      func_0x00001694(0,0x8000,0);
      uVar5 = func_0x000011e3(0);
      iVar3 = func_0x000012e7(0,uVar5);
      iVar3 = (*(int *)0x5b94 + iVar3) - *(int *)0x5b9a;
    }
    *(int *)0x5b98 = iVar3;
  }
  return;
}



// Function: FUN_1000_a169 @ 1000:a169

void __cdecl16far FUN_1000_a169(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if (param_1 != 0) {
    *(undefined2 *)0x5ba1 = 0;
    *(undefined2 *)0x5b9f = 0;
    *(undefined2 *)0x5ba3 = 0x18;
    uVar4 = 0;
    uVar3 = 0x8000;
    iVar1 = func_0x00001694();
    unaff_CS = 0;
    uVar3 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0),uVar3,uVar4);
    *(undefined2 *)0x6025 = uVar3;
  }
  iVar1 = *(int *)0x5b9f;
  *(int *)0x5b9f = *(int *)0x5b9f + 1;
  if (*(int *)0x5ba1 < iVar1) {
    *(int *)0x5df0 = *(int *)0x5df0 - *(int *)0x5ba1;
    *(undefined2 *)0x5b9f = 0;
    *(int *)0x5ba1 = *(int *)0x5ba1 + 1;
    if (*(int *)0x5ba3 < *(int *)0x5ba1) {
      *(undefined2 *)0x5ba1 = 0;
      func_0x00001694(unaff_CS,0x8000,0);
      uVar2 = func_0x00001395(0);
      unaff_CS = 0;
      iVar1 = func_0x000012e7(0,uVar2);
      *(int *)0x5ba3 = *(int *)0x5ba3 + iVar1;
      if (0x2c < *(int *)0x5ba3) {
        *(undefined2 *)0x5ba3 = 0;
      }
    }
    if ((*(int *)0x6025 != 0) &&
       (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
      *(undefined2 *)0x7488 = 3;
    }
    *(int *)0x5dee = *(int *)0x5dee + 1;
    if (*(int *)0x5dae < *(int *)0x5dee) {
      func_0x00001694(unaff_CS,0x8000,0);
      uVar2 = func_0x000011e3(0);
      unaff_CS = 0;
      uVar3 = func_0x000012e7(0,uVar2);
      *(undefined2 *)0x5dee = uVar3;
    }
  }
  *(int *)0x5df0 = *(int *)0x5df0 + 1;
  if (*(int *)0x5dae < *(int *)0x5df0) {
    func_0x00001694(unaff_CS,0x8000,0);
    uVar2 = func_0x000011e3(0);
    unaff_CS = 0;
    uVar3 = func_0x000012e7(0,uVar2);
    *(undefined2 *)0x5df0 = uVar3;
  }
  func_0x00001694(unaff_CS,0x8000,0);
  uVar2 = func_0x000011e3(0);
  iVar1 = func_0x000012e7(0,uVar2);
  if ((iVar1 == 0) && (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
    *(undefined2 *)0x7488 = 3;
  }
  return;
}



// Function: FUN_1000_a1e4 @ 1000:a1e4

void __cdecl16far FUN_1000_a1e4(void)

{
  int in_AX;
  int iVar1;
  int in_BX;
  int unaff_SI;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + (char)in_AX;
  *(int *)0x5ba3 = *(int *)0x5ba3 + in_AX;
  if (0x2c < *(int *)0x5ba3) {
    *(undefined2 *)0x5ba3 = 0;
  }
  if ((*(int *)0x6025 != 0) &&
     (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
    *(undefined2 *)0x7488 = 3;
  }
  *(int *)0x5dee = *(int *)0x5dee + 1;
  if (*(int *)0x5dae < *(int *)0x5dee) {
    uVar4 = 0;
    uVar3 = 0x8000;
    func_0x00001694();
    uVar2 = func_0x000011e3(0,uVar3,uVar4);
    unaff_CS = 0;
    uVar3 = func_0x000012e7(0,uVar2);
    *(undefined2 *)0x5dee = uVar3;
  }
  *(int *)0x5df0 = *(int *)0x5df0 + 1;
  if (*(int *)0x5dae < *(int *)0x5df0) {
    func_0x00001694(unaff_CS,0x8000,0);
    uVar2 = func_0x000011e3(0);
    unaff_CS = 0;
    uVar3 = func_0x000012e7(0,uVar2);
    *(undefined2 *)0x5df0 = uVar3;
  }
  func_0x00001694(unaff_CS,0x8000,0);
  uVar2 = func_0x000011e3(0);
  iVar1 = func_0x000012e7(0,uVar2);
  if ((iVar1 == 0) && (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
    *(undefined2 *)0x7488 = 3;
  }
  return;
}



// Function: FUN_1000_a2bb @ 1000:a2bb

void __cdecl16far FUN_1000_a2bb(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  if (param_1 != 0) {
    uVar6 = 0;
    uVar5 = 0x8000;
    func_0x00001694();
    uVar4 = func_0x000011e3(0,uVar5,uVar6);
    iVar1 = func_0x000012e7(0,uVar4);
    iVar1 = iVar1 + *(int *)0x5dae / 3;
    *(int *)0x5dee = iVar1;
    *(int *)0x5df0 = iVar1;
    *(int *)0x5baf = iVar1;
    *(int *)0x5bab = iVar1;
    *(int *)0x5ba9 = iVar1;
    iVar3 = func_0x00001694(0,0x8000,0);
    iVar3 = func_0x000012e7(0,iVar3 << 1,(iVar3 >> 0xf) << 1 | (uint)(iVar3 < 0));
    if (iVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = iVar1 / 2;
    }
    *(int *)0x5bad = iVar1;
    *(int *)0x5ba7 = iVar1;
    *(int *)0x5ba5 = iVar1;
    iVar3 = func_0x00001694(0,0x8000,0);
    uVar5 = func_0x000012e7(0,iVar3 << 1,(iVar3 >> 0xf) << 1 | (uint)(iVar3 < 0));
    *(undefined2 *)0x5bb1 = uVar5;
    func_0x00001694(0,0x8000,0);
    uVar4 = func_0x00001395(0);
    unaff_CS = 0;
    uVar2 = func_0x000012e7(0,uVar4);
    *(uint *)0x7488 = uVar2 & *(uint *)0x5dc0;
  }
  func_0x00001694(unaff_CS,0x8000,0);
  uVar4 = func_0x000011e3(0);
  iVar3 = func_0x000012e7(0,uVar4);
  if (((iVar3 == 0) && (*(int *)0x5bb1 == 0)) &&
     (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
    *(undefined2 *)0x7488 = 3;
  }
  *(int *)0x5df0 = *(int *)0x5df0 + (*(int *)(iVar3 * 4 + 0x5ba5) - *(int *)0x5df0) / 2;
  *(int *)0x5dee = *(int *)0x5dee + (*(int *)(iVar3 * 4 + 0x5ba7) - *(int *)0x5dee) / 2;
  return;
}



// Function: FUN_1000_a3f2 @ 1000:a3f2

void __cdecl16near FUN_1000_a3f2(undefined2 param_1,int param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined1 *unaff_SI;
  undefined2 unaff_DS;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  if (param_2 == 0) {
    uVar2 = 1;
    cVar3 = '\0';
    while( true ) {
      pcVar1 = (code *)swi(0x35);
      (*pcVar1)();
      pcVar1 = (code *)swi(0x37);
      (*pcVar1)();
      if (!(bool)uVar2 && cVar4 == cVar3) break;
      pcVar1 = (code *)swi(0x3d);
      (*pcVar1)();
    }
    pcVar1 = (code *)swi(0x35);
    (*pcVar1)();
    in(extraout_DX_00);
    pcVar1 = (code *)swi(0x3d);
    (*pcVar1)();
    func_0x00000e75();
    pcVar1 = (code *)swi(0x37);
    (*pcVar1)();
    out(*unaff_SI,extraout_DX_01);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pcVar1 = (code *)swi(0x35);
  uVar2 = (*pcVar1)();
  out(extraout_DX,uVar2);
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  return;
}



// Function: FUN_1000_a5eb @ 1000:a5eb

void __cdecl16far FUN_1000_a5eb(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if ((((param_1 != 0) || (*(int *)0x5bd9 <= *(int *)0x5bd1)) || (*(int *)0x5dae < *(int *)0x5df0))
     || (*(int *)0x5dae < *(int *)0x5dee)) {
    *(undefined2 *)0x5bd3 = 0;
    *(undefined2 *)0x5bd1 = 0;
    *(undefined2 *)0x5bcf = 0;
    *(undefined2 *)0x5bd7 = 0;
    *(undefined2 *)0x5bd5 = 0;
    uVar4 = 0;
    uVar3 = 0x8000;
    func_0x00001694();
    uVar2 = func_0x000011e3(0,uVar3,uVar4);
    uVar3 = func_0x000012e7(0,uVar2);
    *(undefined2 *)0x5df0 = uVar3;
    func_0x00001694(0,0x8000,0);
    uVar2 = func_0x000011e3(0);
    uVar3 = func_0x000012e7(0,uVar2);
    *(undefined2 *)0x5dee = uVar3;
    iVar1 = func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0));
    *(undefined2 *)0x6025 = uVar3;
    if (*(int *)0x5dc4 != 0) {
      *(undefined2 *)0x6025 = 0;
    }
    func_0x00001694(0,0x8000,0);
    uVar2 = func_0x000011e3(0);
    iVar1 = func_0x000012e7(0,uVar2);
    *(int *)0x5bd9 = iVar1 + *(int *)0x5dae / 4;
    if (*(int *)0x6025 != 0) {
      *(int *)0x5bd9 = *(int *)0x5bd9 >> 1;
    }
  }
  iVar1 = *(int *)0x5bcf;
  *(int *)0x5bcf = *(int *)0x5bcf + 1;
  if (*(int *)0x5bd1 <= iVar1) {
    *(undefined2 *)0x5bcf = 0;
    *(int *)0x5bd3 = *(int *)0x5bd3 + 1;
    if (3 < *(int *)0x5bd3) {
      *(int *)0x5bd1 = *(int *)0x5bd1 + 1;
      if (*(int *)0x6025 == 0) {
        *(int *)0x5df0 = *(int *)0x5df0 + 1;
      }
      else {
        *(int *)0x5df0 = *(int *)0x5df0 + -1;
      }
      *(int *)0x7488 = *(int *)0x7488 + 1;
      if (*(uint *)0x5db6 <= *(uint *)0x7488) {
        *(undefined2 *)0x7488 = 3;
      }
      *(undefined2 *)0x5bd3 = 0;
    }
    *(undefined2 *)0x5bd5 = *(undefined2 *)(*(int *)0x5bd3 * 2 + 0xa6);
    *(undefined2 *)0x5bd7 = *(undefined2 *)(*(int *)0x5bd3 * 2 + 0xae);
  }
  *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x5bd5;
  *(int *)0x5dee = *(int *)0x5dee + *(int *)0x5bd7;
  return;
}



// Function: FUN_1000_a727 @ 1000:a727

void __cdecl16far FUN_1000_a727(void)

{
  int in_BX;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5bd5 = *(undefined2 *)(in_BX * 2 + 0xa6);
  *(undefined2 *)0x5bd7 = *(undefined2 *)(*(int *)0x5bd3 * 2 + 0xae);
  *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x5bd5;
  *(int *)0x5dee = *(int *)0x5dee + *(int *)0x5bd7;
  return;
}



// Function: FUN_1000_a74d @ 1000:a74d

void FUN_1000_a74d(void)

{
  code *pcVar1;
  undefined1 uVar2;
  int unaff_DI;
  undefined2 unaff_SS;
  
  func_0x00001694();
  func_0x000012e7();
  pcVar1 = (code *)swi(0x3b);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  (&stack0x7ffe)[unaff_DI] = (char)(&stack0x7ffe)[unaff_DI] >> 0x10;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  func_0x00001694();
  func_0x000011e3();
  func_0x000012e7();
  pcVar1 = (code *)swi(0x3b);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x35);
  uVar2 = (*pcVar1)();
  out(0xcd,uVar2);
  pcVar1 = (code *)swi(0x39);
  (*pcVar1)();
  return;
}



// Function: FUN_1000_a93b @ 1000:a93b

/* WARNING: Control flow encountered bad instruction data */

uint __stdcall16far FUN_1000_a93b(void)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar9;
  
  uVar6 = FUN_1000_66ae(*(undefined2 *)(unaff_BP + -2),*(undefined2 *)(unaff_BP + -4),
                        *(undefined2 *)(unaff_BP + -0xe));
  *(undefined2 *)(unaff_BP + -0xe) = uVar6;
  iVar5 = *(int *)0x5df0;
  iVar2 = *(int *)0x5dee;
  uVar7 = *(uint *)(unaff_BP + -0xc);
  if (uVar7 < 4) {
    iVar8 = uVar7 * 2;
    switch(uVar7) {
    case 0:
      *(char *)(iVar8 + iVar5) = *(char *)(iVar8 + iVar5) + (char)uVar6;
      uVar7 = FUN_1000_12d3(0x23,0x103c,uVar6);
      return uVar7;
    case 2:
      *(int *)(unaff_BP + -0x10) = iVar5;
      pcVar3 = (code *)swi(0x3b);
      (*pcVar3)();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 3:
      return (uint)(byte)((char)uVar6 - 9);
    }
    pcVar1 = (char *)(iVar8 + iVar2 + -0x5eb0);
    *pcVar1 = *pcVar1 + (char)iVar8;
    func_0x000011e3();
    uVar6 = func_0x000012e7(0);
    *(undefined2 *)0x538c = uVar6;
    *(undefined2 *)0x5df0 = uVar6;
    func_0x00001694(0,0x8000,0);
    uVar9 = func_0x000011e3(0);
    uVar6 = func_0x000012e7(0,uVar9);
    *(undefined2 *)0x538e = uVar6;
    *(undefined2 *)0x5dee = uVar6;
    func_0x00001694(0,0x8000,0);
    uVar9 = func_0x000011e3(0);
    iVar5 = func_0x000012e7(0,uVar9);
    *(int *)0x5394 = iVar5 + *(int *)0x5dae / 6;
    func_0x00001694(0,0x8000,0);
    uVar9 = func_0x000011e3(0);
    iVar5 = func_0x000012e7(0,uVar9);
    *(int *)0x5396 = iVar5 + *(int *)0x5dae / 6;
    *(undefined2 *)0x5398 = 1;
    *(int *)0x5390 = *(int *)0x538c + *(int *)0x5394;
    *(int *)0x5392 = *(int *)0x538e + *(int *)0x5396;
    iVar5 = func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000012e7(0,iVar5 << 1,(iVar5 >> 0xf) << 1 | (uint)(iVar5 < 0));
    *(undefined2 *)0x6025 = uVar6;
    uVar7 = FUN_1000_66ae(*(undefined2 *)0x5390,*(undefined2 *)0x5392,*(undefined2 *)0x5398);
    *(uint *)0x5398 = uVar7;
    if (*(int *)0x5398 != 0) {
      FUN_1000_67bb(0,0);
      *(undefined2 *)0x5df0 = *(undefined2 *)0x538c;
      *(undefined2 *)0x5dee = *(undefined2 *)0x538e;
      if (*(int *)0x6025 == 0) {
        *(int *)0x538e = *(int *)0x538e + 1;
      }
      else {
        *(int *)0x538c = *(int *)0x538c + 1;
      }
      *(int *)0x5390 = *(int *)0x538c + *(int *)0x5394;
      uVar7 = *(int *)0x538e + *(int *)0x5396;
      *(uint *)0x5392 = uVar7;
    }
    return uVar7;
  }
  *(int *)0x5df0 = iVar5;
  *(int *)0x5dee = iVar2;
  if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
    FUN_1000_4125();
  }
  *(int *)0x5cbb = *(int *)0x5cbb + 1;
  if (*(int *)(unaff_BP + -0xe) == 0) {
    uVar7 = FUN_1000_a93b();
    return uVar7;
  }
  pcVar3 = (code *)swi(0x35);
  uVar4 = (*pcVar3)();
  out(0xcd,uVar4);
  pcVar3 = (code *)swi(0x35);
  (*pcVar3)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_a970 @ 1000:a970

/* WARNING: Control flow encountered bad instruction data */

void FUN_1000_a970(void)

{
  code *pcVar1;
  undefined1 uVar2;
  int in_AX;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(int *)0x5dee = in_AX + unaff_DI;
  (*(code *)*(undefined2 *)0x5c3f)();
  *(int *)0x5df0 = *(int *)(unaff_BP + -6) - unaff_SI;
  *(int *)0x5dee = *(int *)(unaff_BP + -8) - unaff_DI;
  (*(code *)*(undefined2 *)0x5c3f)();
  if (*(int *)(unaff_BP + -0xc) != 2) {
    *(int *)0x5df0 = *(int *)(unaff_BP + -6) - unaff_DI;
    *(int *)0x5dee = *(int *)(unaff_BP + -8) + unaff_SI;
    (*(code *)*(undefined2 *)0x5c3f)();
    *(int *)0x5df0 = *(int *)(unaff_BP + -6) + unaff_DI;
    *(int *)0x5dee = *(int *)(unaff_BP + -8) - unaff_SI;
    (*(code *)*(undefined2 *)0x5c3f)();
  }
  *(int *)0x5df0 = unaff_SI;
  *(int *)0x5dee = unaff_DI;
  if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
    FUN_1000_4125();
  }
  *(int *)0x5cbb = *(int *)0x5cbb + 1;
  if (*(int *)(unaff_BP + -0xe) == 0) {
    FUN_1000_a93b();
    return;
  }
  pcVar1 = (code *)swi(0x35);
  uVar2 = (*pcVar1)();
  out(0xcd,uVar2);
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_ab42 @ 1000:ab42

void __cdecl16far FUN_1000_ab42(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if ((((param_1 != 0) || (*(int *)0x5bf1 <= *(int *)0x5be9)) || (*(int *)0x5dae < *(int *)0x5df0))
     || (*(int *)0x5dae < *(int *)0x5dee)) {
    *(undefined2 *)0x5beb = 0;
    *(undefined2 *)0x5be9 = 0;
    *(undefined2 *)0x5be7 = 0;
    *(undefined2 *)0x5bef = 0;
    *(undefined2 *)0x5bed = 0;
    uVar4 = 0;
    uVar3 = 0x8000;
    func_0x00001694();
    uVar2 = func_0x000011e3(0,uVar3,uVar4);
    uVar3 = func_0x000012e7(0,uVar2);
    *(undefined2 *)0x5df0 = uVar3;
    func_0x00001694(0,0x8000,0);
    uVar2 = func_0x000011e3(0);
    uVar3 = func_0x000012e7(0,uVar2);
    *(undefined2 *)0x5dee = uVar3;
    iVar1 = func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0));
    *(undefined2 *)0x6025 = uVar3;
    if (*(int *)0x5dc4 != 0) {
      *(undefined2 *)0x6025 = 1;
    }
    func_0x00001694(0,0x8000,0);
    uVar2 = func_0x000011e3(0);
    uVar3 = func_0x000012e7(0,uVar2);
    *(undefined2 *)0x5bf1 = uVar3;
    if (*(int *)0x6025 != 0) {
      *(int *)0x5bf1 = *(int *)0x5bf1 >> 1;
    }
  }
  iVar1 = *(int *)0x5be7;
  *(int *)0x5be7 = *(int *)0x5be7 + 1;
  if (*(int *)0x5be9 <= iVar1) {
    *(undefined2 *)0x5be7 = 0;
    *(int *)0x5beb = *(int *)0x5beb + 1;
    if (3 < *(int *)0x5beb) {
      *(int *)0x5be9 = *(int *)0x5be9 + 1;
      if (*(int *)0x6025 == 0) {
        *(int *)0x5df0 = *(int *)0x5df0 + 1;
      }
      else {
        *(int *)0x5df0 = *(int *)0x5df0 + -1;
      }
      *(undefined2 *)0x5beb = 0;
      *(int *)0x7488 = *(int *)0x7488 + 1;
      if (*(uint *)0x5db6 <= *(uint *)0x7488) {
        *(undefined2 *)0x7488 = 3;
      }
    }
    *(undefined2 *)0x5bed = *(undefined2 *)(*(int *)0x5beb * 2 + 0x1e6);
    *(undefined2 *)0x5bef = *(undefined2 *)(*(int *)0x5beb * 2 + 0x1ee);
  }
  *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x5bed;
  *(int *)0x5dee = *(int *)0x5dee + *(int *)0x5bef;
  return;
}



// Function: FUN_1000_ac9b @ 1000:ac9b

void __cdecl16far FUN_1000_ac9b(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((param_1 != 0) || (*(int *)0x5dae / 2 < *(int *)0x5bf5)) {
    *(undefined2 *)0x5dee = 0;
    *(undefined2 *)0x5df0 = 0;
    *(undefined2 *)0x5bf3 = 0;
    *(undefined2 *)0x5bf5 = 0;
  }
  iVar1 = *(int *)0x5bf3;
  *(int *)0x5bf3 = *(int *)0x5bf3 + 1;
  if (*(int *)0x5bf5 < iVar1) {
    *(int *)0x5dee = *(int *)0x5dee + 1;
    *(undefined2 *)0x5bf3 = 0;
  }
  iVar1 = *(int *)0x5df0;
  *(int *)0x5df0 = *(int *)0x5df0 + 1;
  if (*(int *)0x5dae < iVar1) {
    *(int *)0x7488 = *(int *)0x7488 + 1;
    if (*(uint *)0x5db6 <= *(uint *)0x7488) {
      *(undefined2 *)0x7488 = 3;
    }
    *(int *)0x5bf5 = *(int *)0x5bf5 + 1;
    *(undefined2 *)0x5dee = 0;
    *(undefined2 *)0x5df0 = 0;
  }
  return;
}



// Function: FUN_1000_ad06 @ 1000:ad06

void __cdecl16far FUN_1000_ad06(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 uVar3;
  
  if ((param_1 == 0) && (*(int *)0x5bfd == 0)) {
    uVar2 = 0;
  }
  else {
    *(undefined2 *)0x5dee = 0;
    *(undefined2 *)0x5df0 = 0;
    if (param_1 != 0) {
      uVar3 = 0;
      uVar2 = 0x8000;
      iVar1 = func_0x00001694();
      uVar2 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0),uVar2,uVar3);
      *(undefined2 *)0x6025 = uVar2;
      if (*(int *)0x5dc4 != 0) {
        *(undefined2 *)0x6025 = 0;
      }
      if (*(int *)0x6025 == 0) {
        *(undefined2 *)0x5bf9 = 0xffff;
      }
      else {
        *(undefined2 *)0x5bfb = 0;
        *(undefined2 *)0x5bf9 = 0;
      }
    }
    if (*(int *)0x6025 == 0) {
      *(int *)0x5bf9 = *(int *)0x5bf9 + 1;
      *(int *)0x5bf9 = *(int *)0x5bf9 % (*(int *)0x5dae + 2);
    }
    else {
      *(int *)0x5bf9 = *(int *)0x5bf9 + *(int *)0x5bfb;
      *(int *)0x5bfb = *(int *)0x5bfb + 1;
      if (*(int *)0x5dae < *(int *)0x5bfb) {
        *(int *)0x5bfb = -*(int *)0x5dae;
      }
    }
    *(undefined2 *)0x5bf7 = *(undefined2 *)0x5dae;
    *(int *)0x7488 = *(int *)0x7488 + 1;
    if (*(uint *)0x5db6 <= *(uint *)0x7488) {
      *(undefined2 *)0x7488 = 3;
    }
    uVar2 = 1;
  }
  uVar2 = FUN_1000_66ae(*(undefined2 *)0x5bf9,*(undefined2 *)0x5bf7,uVar2);
  *(undefined2 *)0x5bfd = uVar2;
  return;
}



// Function: FUN_1000_add0 @ 1000:add0

void __cdecl16far FUN_1000_add0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  if (param_1 != 0) {
    *(undefined2 *)0x5c03 = 0;
    uVar5 = 0;
    uVar4 = 0x8000;
    func_0x00001694();
    uVar3 = func_0x000011e3(0,uVar4,uVar5);
    uVar4 = func_0x000012e7(0,uVar3);
    *(undefined2 *)0x6025 = uVar4;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    uVar4 = func_0x000012e7(0,uVar3);
    *(undefined2 *)0x5c07 = uVar4;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x00001395(0);
    unaff_CS = 0;
    uVar1 = func_0x000012e7(0,uVar3);
    *(uint *)0x7488 = uVar1 & *(uint *)0x5dc0;
  }
  if ((*(int *)0x5c03 != 0) &&
     (*(int *)0x5df0 = *(int *)0x5df0 + 1, *(int *)0x5bff < *(int *)0x5df0)) {
    if ((*(int *)0x6025 != 0) &&
       (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
      *(undefined2 *)0x7488 = 3;
    }
    if (*(int *)0x5c07 != 0) {
      *(int *)0x5c01 = *(int *)0x5c01 + -1;
    }
    iVar2 = *(int *)0x5bff;
    *(int *)0x5bff = *(int *)0x5bff + 1;
    if (iVar2 < *(int *)0x5c05) {
      *(undefined2 *)0x5df0 = *(undefined2 *)0x5c01;
      *(int *)0x5dee = *(int *)0x5dee + 1;
      if (*(int *)0x5dae < *(int *)0x5dee) {
        *(undefined2 *)0x5c03 = 0;
        *(undefined2 *)0x5dee = *(undefined2 *)0x5dae;
      }
    }
    else {
      *(undefined2 *)0x5c03 = 0;
    }
  }
  if (*(int *)0x5c03 == 0) {
    *(undefined2 *)0x5c03 = 1;
    *(uint *)0x6025 = (uint)(*(int *)0x6025 == 0);
    *(uint *)0x5c07 = (uint)(*(int *)0x5c07 == 0);
    func_0x00001694(unaff_CS,0x8000,0);
    uVar3 = func_0x000011e3(0);
    uVar4 = func_0x000012e7(0,uVar3);
    *(undefined2 *)0x5c01 = uVar4;
    *(undefined2 *)0x5bff = uVar4;
    *(undefined2 *)0x5df0 = uVar4;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    iVar2 = func_0x000012e7(0,uVar3);
    iVar2 = iVar2 + *(int *)0x5c01 + 8;
    *(int *)0x5c05 = iVar2;
    if (*(int *)0x5dae < iVar2) {
      *(undefined2 *)0x5c05 = *(undefined2 *)0x5dae;
    }
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    uVar4 = func_0x000012e7(0,uVar3);
    *(undefined2 *)0x5dee = uVar4;
  }
  return;
}



// Function: FUN_1000_af71 @ 1000:af71

void __cdecl16far FUN_1000_af71(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  undefined2 uVar2;
  undefined2 uVar3;
  
  if (param_1 != 0) {
    *(undefined2 *)0x5c0b = 0;
    uVar3 = 0;
    uVar2 = 0x8000;
    iVar1 = func_0x00001694();
    iVar1 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0),uVar2,uVar3);
    if (iVar1 == 0) {
      *(undefined2 *)0x5c11 = unaff_DS;
      *(undefined2 *)0x5c0f = 0x5dee;
    }
    else {
      *(undefined2 *)0x5c11 = unaff_DS;
      *(undefined2 *)0x5c0f = 0x5c0d;
    }
    *(uint *)0x7488 = *(uint *)0x5dc0 & 3;
  }
  if ((*(int *)0x5c0b != 0) &&
     (*(int *)0x5df0 = *(int *)0x5df0 + 1, *(int *)*(undefined4 *)0x5c0f < *(int *)0x5df0)) {
    *(undefined2 *)0x5df0 = *(undefined2 *)0x5c09;
    *(int *)0x5dee = *(int *)0x5dee + 1;
    *(int *)0x5c0b = *(int *)0x5c0b + -1;
    if (*(int *)0x5dae < *(int *)0x5dee) {
      *(undefined2 *)0x5c0b = 0;
      *(undefined2 *)0x5dee = *(undefined2 *)0x5dae;
    }
    *(int *)0x7488 = *(int *)0x7488 + 1;
    if (*(uint *)0x5db6 <= *(uint *)0x7488) {
      *(undefined2 *)0x7488 = 3;
    }
  }
  if (*(int *)0x5c0b < 1) {
    uVar2 = *(undefined2 *)0x5dae;
    *(undefined2 *)0x5c0b = uVar2;
    *(undefined2 *)0x5c0d = uVar2;
    *(undefined2 *)0x5dee = 0;
    *(undefined2 *)0x5c09 = 0;
    *(undefined2 *)0x5df0 = 0;
  }
  return;
}



// Function: FUN_1000_b026 @ 1000:b026

void __cdecl16far FUN_1000_b026(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  undefined2 uVar4;
  
  if (param_1 != 0) {
    *(undefined2 *)0x5c1b = 0;
    *(undefined2 *)0x5c19 = 0;
    *(undefined2 *)0x5c17 = 0;
    *(undefined2 *)0x5c15 = 0;
    *(undefined2 *)0x5c13 = 0;
    *(undefined2 *)0x5c25 = 0;
    *(int *)0x7488 = *(int *)0x7488 + 1;
    if (*(uint *)0x5db6 <= *(uint *)0x7488) {
      *(undefined2 *)0x7488 = 3;
    }
  }
  if ((param_1 == 0) && (*(int *)0x5c25 == 0)) {
    uVar1 = 0;
  }
  else {
    if (*(int *)0x5c1b < 1) {
      uVar4 = 0;
      uVar1 = 0x8000;
      func_0x00001694();
      uVar3 = func_0x000011e3(0,uVar1,uVar4);
      iVar2 = func_0x000012e7(0,uVar3);
      *(int *)0x5c1d = iVar2 + -4;
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x000011e3(0);
      iVar2 = func_0x000012e7(0,uVar3);
      *(int *)0x5c1f = iVar2 + -4;
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x000011e3(0);
      iVar2 = func_0x000012e7(0,uVar3);
      *(int *)0x5c21 = iVar2 + -4;
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x000011e3(0);
      iVar2 = func_0x000012e7(0,uVar3);
      *(int *)0x5c23 = iVar2 + -4;
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x00001395(0);
      iVar2 = func_0x000012e7(0,uVar3);
      *(int *)0x5c1b = (iVar2 + 1) * 4;
    }
    *(int *)0x7488 = *(int *)0x7488 + 1;
    if (*(uint *)0x5db6 <= *(uint *)0x7488) {
      *(undefined2 *)0x7488 = 3;
    }
    *(int *)0x5c13 = *(int *)0x5c13 + *(int *)0x5c1d;
    if ((*(int *)0x5c13 < 1) || (*(int *)0x5dae < *(int *)0x5c13)) {
      *(int *)0x5c1d = -*(int *)0x5c1d;
    }
    *(int *)0x5c17 = *(int *)0x5c17 + *(int *)0x5c1f;
    if ((*(int *)0x5c17 < 1) || (*(int *)0x5dae < *(int *)0x5c17)) {
      *(int *)0x5c1f = -*(int *)0x5c1f;
    }
    *(int *)0x5c15 = *(int *)0x5c15 + *(int *)0x5c21;
    if ((*(int *)0x5c15 < 1) || (*(int *)0x5dae < *(int *)0x5c15)) {
      *(int *)0x5c21 = -*(int *)0x5c21;
    }
    *(int *)0x5c19 = *(int *)0x5c19 + *(int *)0x5c23;
    if ((*(int *)0x5c19 < 1) || (*(int *)0x5dae < *(int *)0x5c19)) {
      *(int *)0x5c23 = -*(int *)0x5c23;
    }
    *(int *)0x5c1b = *(int *)0x5c1b + -1;
    *(undefined2 *)0x5df0 = *(undefined2 *)0x5c13;
    *(undefined2 *)0x5dee = *(undefined2 *)0x5c15;
    uVar1 = 1;
  }
  uVar1 = FUN_1000_66ae(*(undefined2 *)0x5c17,*(undefined2 *)0x5c19,uVar1);
  *(undefined2 *)0x5c25 = uVar1;
  return;
}



// Function: FUN_1000_b1ee @ 1000:b1ee

void __cdecl16far FUN_1000_b1ee(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar5;
  undefined2 uVar6;
  
  if (((param_1 != 0) || (*(int *)0x5dae < *(int *)0x5df0)) || (*(int *)0x5dae < *(int *)0x5dee)) {
    if (param_1 != 0) {
      uVar6 = 0;
      uVar4 = 0x8000;
      iVar3 = func_0x00001694();
      unaff_CS = 0;
      uVar4 = func_0x000012e7(0,iVar3 << 1,(iVar3 >> 0xf) << 1 | (uint)(iVar3 < 0),uVar4,uVar6);
      *(undefined2 *)0x6025 = uVar4;
    }
    *(undefined2 *)0x5c2b = 0;
    *(undefined2 *)0x5c2d = 0;
    *(undefined2 *)0x5c29 = 0;
    *(undefined2 *)0x5c27 = 0;
    func_0x00001694(unaff_CS,0x8000,0);
    uVar5 = func_0x000011e3(0);
    uVar4 = func_0x000012e7(0,uVar5);
    *(undefined2 *)0x5df0 = uVar4;
    func_0x00001694(0,0x8000,0);
    uVar5 = func_0x000011e3(0);
    unaff_CS = 0;
    uVar4 = func_0x000012e7(0,uVar5);
    *(undefined2 *)0x5dee = uVar4;
    *(int *)0x7488 = *(int *)0x7488 + 1;
    if (*(uint *)0x5db6 <= *(uint *)0x7488) {
      *(undefined2 *)0x7488 = 3;
    }
  }
  if (*(int *)0x6025 == 0) {
    iVar3 = *(int *)0x5c27;
    *(int *)0x5c27 = *(int *)0x5c27 + 1;
    if (*(int *)0x5c29 <= iVar3) {
      *(undefined2 *)0x5c27 = 0;
      *(int *)0x5c2d = *(int *)0x5c2d + 1;
      if ((*(uint *)0x5c2d & 1) == 0) {
        *(int *)0x5c29 = *(int *)0x5c29 + 1;
        *(undefined2 *)0x5c2d = 0;
      }
      *(undefined2 *)0x5c2f = *(undefined2 *)(*(int *)0x5c2d * 2 + 0x1f6);
      *(undefined2 *)0x5c31 = *(undefined2 *)(*(int *)0x5c2d * 2 + 0x1fa);
    }
    *(int *)0x5c2b = *(int *)0x5c2b + 1;
    uVar2 = *(uint *)0x5c2b;
    *(uint *)0x5c2b = uVar2 & 7;
    if (((uVar2 & 7) == 0) &&
       (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
      *(undefined2 *)0x7488 = 3;
    }
  }
  else {
    piVar1 = (int *)0x5c27;
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0 || SBORROW2(iVar3,1) != *piVar1 < 0) {
      iVar3 = func_0x00001694(unaff_CS,0x8000,0);
      iVar3 = func_0x000012e7(0,iVar3 << 1,(iVar3 >> 0xf) << 1 | (uint)(iVar3 < 0));
      if (iVar3 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0xffff;
      }
      *(undefined2 *)0x5c2f = uVar4;
      func_0x00001694(0,0x8000,0);
      uVar5 = func_0x000011e3(0);
      iVar3 = func_0x000012e7(0,uVar5);
      *(int *)0x5c31 = iVar3 + -1;
      func_0x00001694(0,0x8000,0);
      uVar5 = func_0x000011e3(0);
      iVar3 = func_0x000012e7(0,uVar5);
      *(int *)0x5c27 = iVar3 + 0xc;
      *(int *)0x7488 = *(int *)0x7488 + 1;
      if (*(uint *)0x5db6 <= *(uint *)0x7488) {
        *(undefined2 *)0x7488 = 3;
      }
    }
    if ((*(int *)0x5df0 < 1) || (*(int *)0x5dae <= *(int *)0x5df0)) {
      *(int *)0x5c2f = -*(int *)0x5c2f;
    }
    if ((*(int *)0x5dee < 1) || (*(int *)0x5dae <= *(int *)0x5dee)) {
      *(int *)0x5c31 = -*(int *)0x5c31;
    }
  }
  *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x5c2f;
  *(int *)0x5dee = *(int *)0x5dee + *(int *)0x5c31;
  return;
}



// Function: FUN_1000_b2a0 @ 1000:b2a0

void __cdecl16far FUN_1000_b2a0(void)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined2 in_AX;
  undefined2 unaff_DS;
  byte in_CF;
  byte in_AF;
  
  bVar2 = 9 < ((byte)in_AX & 0xf) | in_AF;
  bVar3 = (byte)in_AX + bVar2 * '\x06';
  if (*(int *)0x5c29 <=
      CONCAT11((char)((uint)in_AX >> 8),
               bVar3 + (0x90 < (bVar3 & 0xf0) | in_CF | bVar2 * (0xf9 < bVar3)) * '`')) {
    *(undefined2 *)0x5c27 = 0;
    *(int *)0x5c2d = *(int *)0x5c2d + 1;
    if ((*(uint *)0x5c2d & 1) == 0) {
      *(int *)0x5c29 = *(int *)0x5c29 + 1;
      *(undefined2 *)0x5c2d = 0;
    }
    *(undefined2 *)0x5c2f = *(undefined2 *)(*(int *)0x5c2d * 2 + 0x1f6);
    *(undefined2 *)0x5c31 = *(undefined2 *)(*(int *)0x5c2d * 2 + 0x1fa);
  }
  *(int *)0x5c2b = *(int *)0x5c2b + 1;
  uVar1 = *(uint *)0x5c2b;
  *(uint *)0x5c2b = uVar1 & 7;
  if (((uVar1 & 7) == 0) &&
     (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
    *(undefined2 *)0x7488 = 3;
  }
  *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x5c2f;
  *(int *)0x5dee = *(int *)0x5dee + *(int *)0x5c31;
  return;
}



// Function: FUN_1000_b3dd @ 1000:b3dd

void __cdecl16far FUN_1000_b3dd(undefined2 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  uint unaff_DS;
  long lVar5;
  int local_6;
  undefined2 local_4;
  
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  func_0x00005a79();
  func_0x00003dbb(0,0x6016);
  func_0x00000fea(0,0x1b5,0x11c1);
  func_0x00003db4(0);
  *(undefined2 *)0x5d8e = 1;
  FUN_1000_3b39(0);
  func_0x000192c2(0x11c1);
  *(undefined2 *)0x5d9c = 0x24;
  *(undefined2 *)0x5d9a = 6;
  *(undefined2 *)0x5d98 = 0x18;
  lVar5 = func_0x00004b1f(0x1899,0x5cc7);
  if (lVar5 == 0) {
    func_0x000045d4(0,0x441c);
    func_0x000045d4(0,0x441c);
    func_0x00002553(0,0);
  }
  local_4 = func_0x00014afd(0,param_1,(int)param_2,uVar3,&local_6);
  func_0x000192e9(0x11c1);
  FUN_1000_4faf();
  func_0x00011c1a(0x11c1,0x70,1);
  if ((*(int *)0x5dc8 != 0) &&
     (uVar1 = *(undefined4 *)((int)param_2 + *(int *)0x5dc8 * 4),
     iVar2 = func_0x00001f66(0x11c1,(int)*(char *)((int)uVar1 + local_6)), iVar2 != 0x69)) {
    *(undefined2 *)0x5d80 = 1;
    thunk_FUN_1000_2075(0,1,0x97a);
  }
  if ((*(int *)0x5dce == 0) && (*(int *)0x5dbc == 0)) {
    FUN_1000_2553();
  }
  else {
    *(undefined2 *)0x5d80 = 0;
  }
  FUN_1000_3db6(1);
  uVar3 = 0x11c1;
  func_0x00014936(0x11c1,local_4);
  if (((*(int *)0x5dce != 0) || (*(int *)0x5dca != 0)) || (*(int *)0x5dbc != 0)) {
    *(undefined2 *)0x5dd2 = 1;
  }
  if (*(int *)0x5dd2 == 0) {
    *(undefined1 *)0x6007 = 3;
    *(undefined1 *)0x6006 = 5;
    *(undefined1 *)0x6009 = 3;
    *(undefined1 *)0x6008 = 0x1f;
    uVar3 = 0;
    func_0x0000320e(0x11c1,0x16,0x6006);
  }
  func_0x00011cd9(uVar3);
  func_0x00000fea(0x11c1,0x1c7,0x11c1);
  func_0x00003bcb(0,0x16,0x2d8,0x11c1);
  func_0x00003bcb(0,8,0x2d8,0x11c1);
  func_0x00003bcb(0,4,0x2d8,0x11c1);
  uVar3 = 0;
  func_0x00003bcb(0,0xb,0x2d8,0x11c1);
  if (((*(int *)0x5dce == 0) && (*(int *)0x5d80 == 0)) && (*(int *)0x5dbc == 0)) {
    *(undefined2 *)0x5d78 = 0x28;
    if ((*(int *)0x5dca == 0) || (*(int *)0x5dcc == 0)) {
      uVar3 = 0x11c1;
      func_0x00012a17(0,0x370,0x28);
    }
    if (*(int *)0x5dcc == 0) {
      uVar3 = 0x1899;
      FUN_1000_988b();
    }
    if ((*(int *)0x5dc4 == 0) && ((*(int *)0x5dca == 0 || (*(int *)0x5dcc == 0)))) {
      func_0x000025fc(uVar3,0xe);
      func_0x0000277a(0,0x98c);
      func_0x0000277a(0,0x9a4);
      func_0x000025fc(0,0x8c);
      func_0x0000277a(0,0x9a8);
      func_0x000025fc(0,0xe);
      func_0x0000277a(0,0x9b8);
      func_0x0000277a(0,0x9be);
      uVar3 = 0;
      func_0x000025fc(0,3);
    }
  }
  FUN_1000_863f(uVar3);
  (*(code *)*(undefined2 *)0x5c47)(0x17f5,0);
  do {
  } while (*(int *)0x5d78 != 0);
  *(undefined2 *)0x5d8a = 0;
  (*(code *)*(undefined2 *)0x5c43)(0x17f5,1);
  func_0x00004332(0x17f5);
  (*(code *)*(undefined2 *)0x5c37)(0,*(int *)0x5d94 + *(int *)0x5dec,*(undefined2 *)0x5d96);
  uVar3 = func_0x00001ef6(0,0,0);
  func_0x00001683(0,uVar3);
  while( true ) {
    iVar2 = func_0x00002553(0,1);
    if (iVar2 == 0) break;
    func_0x00002553(0,0);
  }
  *(undefined2 *)0x5d7c = 0;
  *(undefined2 *)0x5d7e = 0;
  *(undefined2 *)0x5d8e = 0;
  uVar3 = 0;
  while (*(int *)0x5d80 == 0) {
    if (*(int *)0x5da0 == 0) {
      uVar3 = 0x11c1;
      FUN_1000_54d3();
    }
    else {
      func_0x00015149(uVar3);
      uVar3 = 0x11c1;
    }
  }
  func_0x00011c1a(uVar3,0x70,1);
  FUN_1000_2a3a(0x11c1,0);
  if (((*(int *)0x5dce == 0) && (*(int *)0x5dca == 0)) && (*(int *)0x5d84 == 0)) {
    func_0x00013d71(0x11c1);
  }
  uVar4 = 0x11c1;
  uVar3 = uVar4;
  if (*(int *)0x5dca == 0) {
    while( true ) {
      uVar3 = 0;
      iVar2 = func_0x00002553(uVar4,1);
      if (iVar2 == 0) break;
      uVar4 = 0;
      func_0x00002553(0,0);
    }
  }
  uVar4 = 0x1899;
  func_0x0001955d(uVar3,1);
  if (((*(int *)0x5dca == 0) && (*(int *)0x5dce == 0)) && ((unaff_DS | 0x5cc7) != 0)) {
    iVar2 = func_0x00001017(0x1899,0x5cc7);
    if (iVar2 == 0) {
      uVar4 = 0;
      lVar5 = func_0x0000598f(0,0x5cc7);
      if (lVar5 != 0) {
        iVar2 = func_0x00001f66(0,(int)*(char *)((int)lVar5 + -1));
        uVar4 = 0;
        func_0x0000128e(0,iVar2 + -0x61);
      }
    }
    else {
      uVar4 = 0;
      func_0x000045d4(0,0x441c);
    }
  }
  if (*(int *)0x5d84 != 0) {
    func_0x000045d4(uVar4,0x441c);
    uVar4 = 0;
    func_0x000011a8(0,0xe);
  }
  func_0x00003db4(uVar4);
  if (((*(int *)0x5dce == 0) && (*(int *)0x5dca == 0)) && (*(int *)0x5dbc == 0)) {
    FUN_1000_2956(0,0);
  }
  else {
    func_0x000011a8(0,0);
  }
  return;
}



// Function: FUN_1000_bb2f @ 1000:bb2f

void __cdecl16far FUN_1000_bb2f(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar3;
  undefined2 uVar4;
  int local_4;
  
  if (param_1 != 0) {
    local_4 = 0;
    *(int *)0x608c = *(int *)0x5db0 / 2;
    *(int *)0x608e = *(int *)0x5db2 / 2;
    *(int *)0x6088 = *(int *)0x5db0 - *(int *)0x5db0 / 4;
    *(int *)0x608a = *(int *)0x5db2 - *(int *)0x5db2 / 4;
    uVar4 = 0;
    uVar2 = 0x8000;
    func_0x00001694();
    uVar3 = func_0x000011e3(0,uVar2,uVar4);
    uVar2 = func_0x000012e7(0,uVar3);
    *(undefined2 *)0x6068 = uVar2;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    uVar2 = func_0x000012e7(0,uVar3);
    *(undefined2 *)0x6072 = uVar2;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    iVar1 = func_0x000012e7(0,uVar3);
    *(int *)0x607c = iVar1 + 8;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    unaff_CS = 0;
    iVar1 = func_0x000012e7(0,uVar3);
    *(int *)0x607e = iVar1 + 8;
  }
  if (local_4 < 1) {
    func_0x00001694(unaff_CS,0x8000,0);
    uVar3 = func_0x00001395(0);
    func_0x000012e7(0,uVar3);
    iVar1 = func_0x00001694(0,0x8000,0);
    iVar1 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0));
    if (iVar1 == 0) {
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x000011e3(0);
      iVar1 = func_0x000012e7(0,uVar3);
      iVar1 = -(iVar1 + 4);
    }
    else {
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x000011e3(0);
      iVar1 = func_0x000012e7(0,uVar3);
      iVar1 = iVar1 + 4;
    }
    *(int *)0x6080 = iVar1;
    iVar1 = func_0x00001694(0,0x8000,0);
    iVar1 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0));
    if (iVar1 == 0) {
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x000011e3(0);
      iVar1 = func_0x000012e7(0,uVar3);
      iVar1 = -(iVar1 + 4);
    }
    else {
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x000011e3(0);
      iVar1 = func_0x000012e7(0,uVar3);
      iVar1 = iVar1 + 4;
    }
    *(int *)0x6082 = iVar1;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    iVar1 = func_0x000012e7(0,uVar3);
    *(int *)0x6084 = iVar1 - *(int *)0x5db0 / 8;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    unaff_CS = 0;
    iVar1 = func_0x000012e7(0,uVar3);
    *(int *)0x6086 = iVar1 - *(int *)0x5db0 / 8;
  }
  *(int *)0x6068 = *(int *)0x6068 + *(int *)0x6080;
  *(int *)0x6072 = *(int *)0x6072 + *(int *)0x6082;
  *(int *)0x607c = *(int *)0x607c + *(int *)0x6084;
  *(int *)0x607e = *(int *)0x607e + *(int *)0x6086;
  if ((*(int *)0x6068 < 0) || (*(int *)0x6088 < *(int *)0x6068)) {
    iVar1 = *(int *)0x6080;
    *(int *)0x6080 = -iVar1;
    *(int *)0x6068 = *(int *)0x6068 + -iVar1;
  }
  if ((*(int *)0x6072 < 0) || (*(int *)0x608a < *(int *)0x6072)) {
    iVar1 = *(int *)0x6082;
    *(int *)0x6082 = -iVar1;
    *(int *)0x6072 = *(int *)0x6072 + -iVar1;
  }
  if ((*(int *)0x607c < 8) || (*(int *)0x608c < *(int *)0x607c)) {
    iVar1 = *(int *)0x6084;
    *(int *)0x6084 = -iVar1;
    *(int *)0x607c = *(int *)0x607c + -iVar1;
  }
  if ((*(int *)0x607e < 8) || (*(int *)0x608e < *(int *)0x607e)) {
    iVar1 = *(int *)0x6086;
    *(int *)0x6086 = -iVar1;
    *(int *)0x607e = *(int *)0x607e + -iVar1;
  }
  *(int *)0x606a = *(int *)0x607c >> 1;
  *(int *)0x6074 = *(int *)0x607e >> 1;
  *(undefined2 *)0x606c = *(undefined2 *)0x607c;
  *(undefined2 *)0x6076 = 0;
  *(undefined2 *)0x606e = *(undefined2 *)0x606a;
  *(int *)0x6078 = -*(int *)0x6074;
  func_0x00001694(unaff_CS,0x8000,0);
  uVar3 = func_0x000011e3(0);
  func_0x000012e7(0,uVar3);
  *(int *)0x7488 = *(int *)0x7488 + 1;
  if (*(uint *)0x5db6 <= *(uint *)0x7488) {
    *(undefined2 *)0x7488 = 3;
  }
  iVar1 = func_0x00001694(0,0x8000,0);
  iVar1 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0));
  if ((iVar1 == 0) && (*(int *)0x7484 == 8)) {
    iVar1 = func_0x00001694(0,0x8000,0);
    func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0));
  }
  if (*(int *)0x7484 == 8) {
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    iVar1 = func_0x000012e7(0,uVar3);
    if (iVar1 == 0) {
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x000011e3(0);
      uVar2 = func_0x000012e7(0,uVar3);
      *(undefined2 *)0x7488 = uVar2;
    }
  }
  func_0x0000695b(0,1,4,0x6068);
  return;
}



// Function: FUN_1000_bc0b @ 1000:bc0b

void __cdecl16far FUN_1000_bc0b(void)

{
  int iVar1;
  undefined2 uVar2;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar3;
  
  iVar1 = func_0x000012e7();
  *(int *)0x607e = iVar1 + 8;
  if (*(int *)(unaff_BP + -2) < 1) {
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x00001395(0);
    func_0x000012e7(0,uVar3);
    iVar1 = func_0x00001694(0,0x8000,0);
    iVar1 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0));
    if (iVar1 == 0) {
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x000011e3(0);
      iVar1 = func_0x000012e7(0,uVar3);
      iVar1 = -(iVar1 + 4);
    }
    else {
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x000011e3(0);
      iVar1 = func_0x000012e7(0,uVar3);
      iVar1 = iVar1 + 4;
    }
    *(int *)0x6080 = iVar1;
    iVar1 = func_0x00001694(0,0x8000,0);
    iVar1 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0));
    if (iVar1 == 0) {
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x000011e3(0);
      iVar1 = func_0x000012e7(0,uVar3);
      iVar1 = -(iVar1 + 4);
    }
    else {
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x000011e3(0);
      iVar1 = func_0x000012e7(0,uVar3);
      iVar1 = iVar1 + 4;
    }
    *(int *)0x6082 = iVar1;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    iVar1 = func_0x000012e7(0,uVar3);
    *(int *)0x6084 = iVar1 - *(int *)0x5db0 / 8;
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    iVar1 = func_0x000012e7(0,uVar3);
    *(int *)0x6086 = iVar1 - *(int *)0x5db0 / 8;
  }
  *(int *)0x6068 = *(int *)0x6068 + *(int *)0x6080;
  *(int *)0x6072 = *(int *)0x6072 + *(int *)0x6082;
  *(int *)0x607c = *(int *)0x607c + *(int *)0x6084;
  *(int *)0x607e = *(int *)0x607e + *(int *)0x6086;
  if ((*(int *)0x6068 < 0) || (*(int *)0x6088 < *(int *)0x6068)) {
    iVar1 = *(int *)0x6080;
    *(int *)0x6080 = -iVar1;
    *(int *)0x6068 = *(int *)0x6068 + -iVar1;
  }
  if ((*(int *)0x6072 < 0) || (*(int *)0x608a < *(int *)0x6072)) {
    iVar1 = *(int *)0x6082;
    *(int *)0x6082 = -iVar1;
    *(int *)0x6072 = *(int *)0x6072 + -iVar1;
  }
  if ((*(int *)0x607c < 8) || (*(int *)0x608c < *(int *)0x607c)) {
    iVar1 = *(int *)0x6084;
    *(int *)0x6084 = -iVar1;
    *(int *)0x607c = *(int *)0x607c + -iVar1;
  }
  if ((*(int *)0x607e < 8) || (*(int *)0x608e < *(int *)0x607e)) {
    iVar1 = *(int *)0x6086;
    *(int *)0x6086 = -iVar1;
    *(int *)0x607e = *(int *)0x607e + -iVar1;
  }
  *(int *)0x606a = *(int *)0x607c >> 1;
  *(int *)0x6074 = *(int *)0x607e >> 1;
  *(undefined2 *)0x606c = *(undefined2 *)0x607c;
  *(undefined2 *)0x6076 = 0;
  *(undefined2 *)0x606e = *(undefined2 *)0x606a;
  *(int *)0x6078 = -*(int *)0x6074;
  func_0x00001694(0,0x8000,0);
  uVar3 = func_0x000011e3(0);
  uVar2 = func_0x000012e7(0,uVar3);
  *(undefined2 *)(unaff_BP + -4) = uVar2;
  *(int *)0x7488 = *(int *)0x7488 + 1;
  if (*(uint *)0x5db6 <= *(uint *)0x7488) {
    *(undefined2 *)0x7488 = 3;
  }
  iVar1 = func_0x00001694(0,0x8000,0);
  iVar1 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0));
  if ((iVar1 == 0) && (*(int *)0x7484 == 8)) {
    iVar1 = func_0x00001694(0,0x8000,0);
    func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0));
  }
  if (*(int *)0x7484 == 8) {
    func_0x00001694(0,0x8000,0);
    uVar3 = func_0x000011e3(0);
    iVar1 = func_0x000012e7(0,uVar3);
    *(int *)(unaff_BP + -6) = iVar1;
    if (iVar1 == 0) {
      func_0x00001694(0,0x8000,0);
      uVar3 = func_0x000011e3(0);
      uVar2 = func_0x000012e7(0,uVar3);
      *(undefined2 *)0x7488 = uVar2;
    }
  }
  func_0x0000695b(0,1,4,0x6068);
  return;
}



// Function: FUN_1000_bf66 @ 1000:bf66

/* WARNING: Instruction at (ram,0x0001e58c) overlaps instruction at (ram,0x0001e58b)
    */
/* WARNING: Removing unreachable block (ram,0x0001cede) */
/* WARNING: Removing unreachable block (ram,0x0001cee7) */
/* WARNING: Removing unreachable block (ram,0x0001ceec) */
/* WARNING: Removing unreachable block (ram,0x0001cef5) */
/* WARNING: Removing unreachable block (ram,0x0001cefd) */
/* WARNING: Removing unreachable block (ram,0x0001cf2c) */
/* WARNING: Removing unreachable block (ram,0x0001cf42) */
/* WARNING: Removing unreachable block (ram,0x0001cf5b) */
/* WARNING: Removing unreachable block (ram,0x0001cf61) */
/* WARNING: Removing unreachable block (ram,0x0001cf71) */
/* WARNING: Removing unreachable block (ram,0x0001cf68) */
/* WARNING: Removing unreachable block (ram,0x0001cf3f) */
/* WARNING: Removing unreachable block (ram,0x0001cf23) */
/* WARNING: Removing unreachable block (ram,0x0001cefa) */
/* WARNING: Removing unreachable block (ram,0x0001d83f) */

void __cdecl16far FUN_1000_bf66(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  char extraout_AH;
  undefined2 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int unaff_SI;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar9;
  uint auStack_b6e [720];
  uint auStack_5ce [702];
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined2 uStack_48;
  undefined2 uStack_46;
  int iStack_44;
  uint uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined1 auStack_34 [4];
  uint uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined4 uStack_22;
  uint uStack_1e;
  uint uStack_1c;
  undefined4 uStack_1a;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined4 uStack_12;
  int local_e;
  undefined2 local_c;
  int local_a;
  uint local_4;
  
  if (param_1 != 0) {
    local_a = 0xbf7e;
    func_0x00001694();
    local_a = 0xbf95;
    local_a = func_0x000011e3();
    local_c = 0;
    local_e = 0xbf9c;
    iVar3 = func_0x000012e7();
    *(int *)0x6090 = iVar3 + 8;
    local_c = 0;
    local_e = 0x8000;
    uStack_12._2_2_ = 0;
    uStack_12._0_2_ = 0xbfae;
    func_0x00001694();
    uStack_12._2_2_ = 0;
    uStack_12._0_2_ = 0xbfc2;
    uStack_12 = func_0x000011e3();
    uStack_14 = 0;
    uStack_16 = 0xbfc9;
    iVar3 = func_0x000012e7();
    *(int *)0x6092 = *(int *)0x5db0 / 4 + iVar3;
    uStack_14 = 0;
    uStack_16 = 0x8000;
    uStack_1a._2_2_ = 0;
    uStack_1a._0_2_ = 0xbfe5;
    func_0x00001694();
    uStack_1a._2_2_ = 0;
    uStack_1a._0_2_ = 0xbff9;
    uStack_1a = func_0x000011e3();
    uStack_1c = 0;
    uStack_1e = 0xc000;
    iVar3 = func_0x000012e7();
    *(int *)0x6094 = *(int *)0x5db2 / 4 + iVar3;
  }
  local_4 = 0;
  local_a = 0xc01c;
  func_0x00001694();
  local_a = 0xc030;
  uVar9 = func_0x000011e3();
  local_a = (int)uVar9;
  local_c = 0;
  local_e = 0xc037;
  iVar3 = func_0x000012e7();
  *(int *)0x6096 = iVar3 - *(int *)0x5db2 / 8;
  local_c = 0;
  local_e = 0x8000;
  uStack_12._2_2_ = 0;
  uStack_12._0_2_ = 0xc054;
  func_0x00001694();
  uStack_12._2_2_ = 0;
  uStack_12._0_2_ = 0xc068;
  uStack_12 = func_0x000011e3();
  uStack_14 = 0;
  uStack_16 = 0xc06f;
  iVar3 = func_0x000012e7();
  *(int *)0x6098 = iVar3 - *(int *)0x5db0 / 8;
  uStack_14 = 0;
  uStack_16 = 0x8000;
  uStack_1a._2_2_ = 0;
  uStack_1a._0_2_ = 0xc08c;
  func_0x00001694();
  uStack_1a._2_2_ = 0;
  uStack_1a._0_2_ = 0xc0a0;
  uStack_1a = func_0x000011e3();
  uStack_1c = 0;
  uStack_1e = 0xc0a7;
  iVar3 = func_0x000012e7();
  *(int *)0x609a = iVar3 - *(int *)0x5db2 / 8;
  *(int *)0x6090 = *(int *)0x6090 + *(int *)0x6096;
  *(int *)0x6092 = *(int *)0x6092 + *(int *)0x6098;
  *(int *)0x6094 = *(int *)0x6094 + *(int *)0x609a;
  if ((*(int *)0x6092 < *(int *)0x5db0 / 8) || (*(int *)0x5db0 < *(int *)0x6092)) {
    iVar3 = *(int *)0x6098;
    *(int *)0x6098 = -iVar3;
    *(int *)0x6092 = *(int *)0x6092 + -iVar3;
  }
  if ((*(int *)0x6094 < *(int *)0x5db2 / 8) || (*(int *)0x5db2 < *(int *)0x6094)) {
    iVar3 = *(int *)0x609a;
    *(int *)0x609a = -iVar3;
    *(int *)0x6094 = *(int *)0x6094 + -iVar3;
  }
  if ((*(int *)0x6090 < 8) || (*(int *)0x5db2 / 4 < *(int *)0x6090)) {
    iVar3 = *(int *)0x6096;
    *(int *)0x6096 = -iVar3;
    *(int *)0x6090 = *(int *)0x6090 + -iVar3;
  }
  uStack_1c = 0;
  uStack_1e = 0x8000;
  uStack_22._2_2_ = 0;
  uStack_22._0_2_ = 0xc140;
  func_0x00001694();
  cVar5 = extraout_AH >> 7;
  uStack_22._2_2_ = 0;
  uStack_22._0_2_ = 0xc14f;
  uStack_22 = func_0x000011e3();
  uStack_24 = 0;
  uStack_26 = 0xc156;
  uVar4 = func_0x000012e7();
  *(undefined2 *)0x609c = uVar4;
  *(int *)0x7488 = *(int *)0x7488 + 1;
  if (*(uint *)0x5db6 <= *(uint *)0x7488) {
    *(undefined2 *)0x7488 = 3;
  }
  *(undefined2 *)0x609e = 0;
  uStack_24 = 0;
  uStack_26 = 0x8000;
  uStack_28 = 0;
  uStack_2c._2_2_ = 0xc17e;
  iVar3 = func_0x00001694();
  uStack_2c._2_2_ = iVar3 << 1;
  uStack_28 = (iVar3 >> 0xf) << 1 | (uint)(iVar3 < 0);
  uStack_2c._0_2_ = 0;
  uStack_2e = 0xc18a;
  iVar3 = func_0x000012e7();
  if (iVar3 == 0) {
    *(uint *)0x609e = *(uint *)0x609e | 1;
    if (*(int *)0x7484 == 8) {
      uStack_2c._0_2_ = 0;
      uStack_2e = 0x8000;
      uStack_30 = 0;
      auStack_34._2_2_ = 0xc1ad;
      iVar3 = func_0x00001694();
      auStack_34._2_2_ = iVar3 << 1;
      uStack_30 = (iVar3 >> 0xf) << 1 | (uint)(iVar3 < 0);
      auStack_34._0_2_ = 0;
      uStack_36 = 0xc1b9;
      iVar3 = func_0x000012e7();
      if (iVar3 != 0) {
        *(uint *)0x609e = *(uint *)0x609e | 0x20;
      }
    }
  }
  else {
    *(uint *)0x609e = *(uint *)0x609e | 2;
  }
  if (*(int *)0x7484 == 8) {
    uStack_2c._0_2_ = 0;
    uStack_2e = 0x8000;
    uStack_30 = 0;
    auStack_34._2_2_ = 0xc1d5;
    func_0x00001694();
    iVar3 = CONCAT11(cVar5,2);
    uStack_30 = 0;
    auStack_34._2_2_ = 0xc1dd;
    join_0x00000008_0x00000000_ = func_0x00001395();
    auStack_34._0_2_ = 0;
    uStack_36 = 0xc1e4;
    uVar4 = func_0x000012e7();
    *(undefined2 *)0x60a0 = uVar4;
    uVar6 = *(uint *)0x60a0;
    if (uVar6 < 4) {
      iVar7 = uVar6 * 2;
      uVar4 = 0x1000;
      switch(uVar6) {
      case 0:
        if (iVar3 != 1) goto caseD_0_1;
        if ((int)uVar6 < 0 || iVar7 == 0) goto LAB_1000_e575;
        break;
      case 1:
        uStack_2c._2_2_ = 0x1000;
        uStack_2c._0_2_ = 0xc36f;
        uStack_2c = func_0x000011e3();
        uStack_2e = 0;
        uStack_30 = 0xc376;
        iVar3 = func_0x000012e7();
        *(int *)0x60aa = iVar3 - *(int *)0x60ba / 8;
        uStack_2e = 0;
        uStack_30 = 0x8000;
        auStack_34._2_2_ = 0;
        auStack_34._0_2_ = 0xc393;
        func_0x00001694();
        auStack_34._2_2_ = 0;
        auStack_34._0_2_ = 0xc3a7;
        auStack_34 = (undefined1  [4])func_0x000011e3();
        uStack_36 = 0;
        uStack_38 = 0xc3ae;
        uVar4 = func_0x000012e7();
        *(undefined2 *)0xa48 = uVar4;
        uStack_36 = 0;
        uStack_38 = 0x8000;
        uStack_3c._2_2_ = 0;
        uStack_3c._0_2_ = 0xc3bd;
        func_0x00001694();
        uStack_3c._2_2_ = 0;
        uStack_3c._0_2_ = 0xc3d1;
        uStack_3c = func_0x000011e3();
        uStack_3e = 0;
        uStack_40 = 0xc3d8;
        uVar4 = func_0x000012e7();
        *(undefined2 *)0xa4a = uVar4;
        *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x60a8;
        *(int *)0x5dee = *(int *)0x5dee + *(int *)0x60aa;
        if ((*(int *)0x5df0 < *(int *)0x5db0 / 4) || (*(int *)0x5db0 <= *(int *)0x5df0)) {
          iVar3 = *(int *)0x60a8;
          *(int *)0x60a8 = -iVar3;
          *(int *)0x5df0 = *(int *)0x5df0 + -iVar3;
        }
        if ((*(int *)0x5dee < *(int *)0x60ba / 4) || (*(int *)0x60ba <= *(int *)0x5dee)) {
          iVar3 = *(int *)0x60aa;
          *(int *)0x60aa = -iVar3;
          *(int *)0x5dee = *(int *)0x5dee + -iVar3;
        }
        uStack_3e = 0;
        uStack_40 = 0x8000;
        uStack_42 = 0;
        iStack_44 = 0xc43d;
        iVar3 = func_0x00001694();
        iStack_44 = iVar3 << 1;
        uStack_42 = (iVar3 >> 0xf) << 1 | (uint)(iVar3 < 0);
        uStack_46 = 0;
        uVar4 = 0;
        uStack_48 = 0xc449;
        iVar3 = func_0x000012e7();
        if (iVar3 != 0) {
          if (*(int *)0x7484 == 8) {
            uStack_46 = 0;
            uStack_48 = 0x8000;
            uStack_4c._2_2_ = 0;
            uStack_4c._0_2_ = 0xc463;
            iVar3 = func_0x00001694();
            uStack_4c._0_2_ = iVar3 << 1;
            uStack_4c._2_2_ = (iVar3 >> 0xf) << 1 | (uint)(iVar3 < 0);
            uStack_4e = 0;
            uStack_50 = 0xc46f;
            iVar3 = func_0x000012e7();
            *(int *)0x60b8 = iVar3 + 1;
          }
          else {
            *(undefined2 *)0x60b8 = 0;
          }
          uVar4 = 0;
          if (*(int *)0x60b8 == 2) {
            *(undefined2 *)0x7488 = *(undefined2 *)0x60b2;
          }
          *(undefined2 *)0x60b4 = *(undefined2 *)0x5df0;
          *(undefined2 *)0x60b6 = *(undefined2 *)0x5dee;
          *(undefined2 *)0x60b0 = *(undefined2 *)0xa4a;
          if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
            *(int *)0x5dee = *(int *)0x5dee << 1;
            *(int *)0x60b0 = *(int *)0x60b0 << 1;
          }
          while (-1 < *(int *)0x60b0) {
            uVar8 = uVar4;
            if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
              uVar8 = 0x11c1;
              uStack_48 = 0xc4c9;
              uStack_46 = uVar4;
              FUN_1000_4125();
            }
            if (*(int *)0x60b8 == 1) {
              *(undefined2 *)0x7488 = *(undefined2 *)0x60b2;
            }
            *(undefined2 *)0x60a2 = *(undefined2 *)0xa48;
            while (-1 < *(int *)0x60a2) {
              uStack_46 = *(undefined2 *)0x5caf;
              uStack_4c._2_2_ = 0xc4e6;
              uStack_48 = uVar8;
              (*(code *)*(undefined2 *)0x5c3f)();
              *(int *)0x5df0 = *(int *)0x5df0 + -1;
              *(int *)0x60a2 = *(int *)0x60a2 + -1;
              if ((*(int *)0x60b8 == 1) &&
                 (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
                *(undefined2 *)0x7488 = 3;
              }
              *(int *)0x5cbb = *(int *)0x5cbb + 1;
            }
            *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0xa48 + 1;
            *(int *)0x5dee = *(int *)0x5dee + -1;
            *(int *)0x60b0 = *(int *)0x60b0 + -1;
            if ((*(int *)0x60b8 == 2) &&
               (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
              *(undefined2 *)0x7488 = 3;
            }
            uVar4 = uVar8;
            if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
              *(int *)0x5dee = *(int *)0x5dee + -1;
              *(int *)0x60b0 = *(int *)0x60b0 + -1;
            }
          }
          *(undefined2 *)0x5df0 = *(undefined2 *)0x60b4;
          *(undefined2 *)0x5dee = *(undefined2 *)0x60b6;
          if ((*(int *)0x60b8 == 0) &&
             (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
            *(undefined2 *)0x7488 = 3;
          }
          *(undefined2 *)0x60b2 = *(undefined2 *)0x7488;
        }
        if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
          *(int *)0x5dee = *(int *)0x5dee << 1;
          *(int *)0xa4a = *(int *)0xa4a << 1;
        }
        uStack_46 = 0;
        uStack_48 = 0x8000;
        uStack_4c._0_2_ = 0xc5b0;
        uStack_4c._2_2_ = uVar4;
        func_0x00001694();
        uStack_4c._2_2_ = 0;
        uStack_4c._0_2_ = 0xc5bf;
        uStack_4c = func_0x000011e3();
        uStack_4e = 0;
        uStack_50 = 0xc5c6;
        uVar4 = func_0x000012e7();
        *(undefined2 *)0x7488 = uVar4;
        *(undefined2 *)0x60a6 = 0xffff;
        while (*(int *)0x60a6 = *(int *)0x60a6 + 1, *(int *)0x60a6 < 4) {
          *(undefined2 *)0x60a2 = *(undefined2 *)((*(uint *)0x60a6 & 1) * 2 + 0xa48);
          *(undefined2 *)0x60ac = *(undefined2 *)(*(int *)0x60a6 * 2 + 0xa38);
          *(undefined2 *)0x60ae = *(undefined2 *)(*(int *)0x60a6 * 2 + 0xa40);
          *(undefined2 *)0x60a4 = 0;
          while (iVar3 = *(int *)0x60a4, *(int *)0x60a4 = *(int *)0x60a4 + 1, iVar3 < *(int *)0x60a2
                ) {
            uStack_4e = *(undefined2 *)0x5caf;
            uStack_50 = 0;
            uStack_52 = 0xc60b;
            (*(code *)*(undefined2 *)0x5c3f)();
            *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x60ac;
            iVar3 = *(int *)0x60ae;
            *(int *)0x5dee = *(int *)0x5dee + iVar3;
            if (((*(int *)0x60ae != 0) && (*(int *)0x5c41 == 0x1899)) && (*(int *)0x5c3f == 0x12d))
            {
              *(int *)0x5dee = *(int *)0x5dee + iVar3;
              *(int *)0x60a4 = *(int *)0x60a4 + 1;
            }
            *(int *)0x5cbb = *(int *)0x5cbb + 1;
          }
        }
        return;
      case 2:
        while( true ) {
          *(undefined2 *)0x5dee = *(undefined2 *)(iVar7 * 4 + 0x59c6);
          *(undefined2 *)0x59b0 = 1;
          uVar8 = uVar4;
          if (*(int *)0x59c0 == 0) {
            *(uint *)0x7488 = *(uint *)0x59c2 & *(uint *)0x5dc0;
          }
          else {
            *(int *)0x7488 = *(int *)0x7488 + 1;
            if (*(uint *)0x5db6 <= *(uint *)0x7488) {
              *(undefined2 *)0x7488 = 3;
            }
          }
          do {
            uStack_2c._2_2_ = *(undefined2 *)0x59b0;
            uStack_2c._0_2_ = 0;
            uStack_2e = 0;
            auStack_34._2_2_ = 0x8b99;
            uStack_30 = uVar8;
            uVar4 = FUN_1000_66ae();
            *(undefined2 *)0x59b0 = uVar4;
            *(undefined2 *)0x59a2 = *(undefined2 *)0x5df0;
            *(undefined2 *)0x59a4 = *(undefined2 *)0x5dee;
            *(int *)0x5df0 = *(int *)0x59aa + *(int *)0x59a2;
            *(int *)0x5dee = *(int *)0x59ac + *(int *)0x59a4;
            uStack_2c._2_2_ = 1;
            uStack_2e = 0x8bc7;
            uStack_2c._0_2_ = uVar8;
            (*(code *)*(undefined2 *)0x5c3f)();
            *(int *)0x5df0 = *(int *)0x59aa - *(int *)0x59a2;
            *(int *)0x5dee = *(int *)0x59ac - *(int *)0x59a4;
            uStack_2c._2_2_ = 1;
            uStack_2e = 0x8be4;
            uStack_2c._0_2_ = uVar8;
            (*(code *)*(undefined2 *)0x5c3f)();
            *(int *)0x5df0 = *(int *)0x59aa + *(int *)0x59a2;
            *(int *)0x5dee = *(int *)0x59ac - *(int *)0x59a4;
            uStack_2c._2_2_ = 1;
            uStack_2e = 0x8c01;
            uStack_2c._0_2_ = uVar8;
            (*(code *)*(undefined2 *)0x5c3f)();
            *(int *)0x5df0 = *(int *)0x59aa - *(int *)0x59a2;
            *(int *)0x5dee = *(int *)0x59ac + *(int *)0x59a4;
            uStack_2c._2_2_ = 1;
            uStack_2e = 0x8c1e;
            uStack_2c._0_2_ = uVar8;
            (*(code *)*(undefined2 *)0x5c3f)();
            *(undefined2 *)0x5df0 = *(undefined2 *)0x59a2;
            *(undefined2 *)0x5dee = *(undefined2 *)0x59a4;
            *(int *)0x5cbb = *(int *)0x5cbb + 1;
            if ((*(int *)0x59c0 == 0) &&
               (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
              *(undefined2 *)0x7488 = 3;
            }
            uVar4 = uVar8;
            if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
              uVar4 = 0x11c1;
              uStack_2c._0_2_ = 0x8c57;
              uStack_2c._2_2_ = uVar8;
              FUN_1000_4125();
            }
            uVar8 = uVar4;
          } while (*(int *)0x59b0 == 0);
          *(int *)0x59b4 = *(int *)0x59b4 + 1;
          if (*(int *)0x59b2 <= *(int *)0x59b4) break;
          *(undefined2 *)0x5df0 = *(undefined2 *)(*(int *)0x59b4 * 4 + 0x59c4);
          iVar7 = *(int *)0x59b4;
        }
        iVar3 = *(int *)0x59bc;
        *(int *)0x59bc = -iVar3;
        *(int *)0x59ba = *(int *)0x59ba + -iVar3;
        *(undefined2 *)0x5df0 = *(undefined2 *)0x59aa;
        *(undefined2 *)0x5dee = *(undefined2 *)0x59ac;
        return;
      case 3:
        uStack_2c._2_2_ = 0x1000;
        uStack_2c._0_2_ = 0xcdf2;
        uStack_2c = func_0x000011e3();
        uStack_2e = 0;
        uStack_30 = 0xcdf9;
        iVar3 = func_0x000012e7();
        if (iVar3 == 0) {
          *(undefined2 *)0x613e = 1;
        }
        else {
          *(undefined2 *)0x613e = 0;
        }
        uStack_2e = 0;
        uStack_30 = 0x8000;
        auStack_34._0_2_ = 0xce24;
        auStack_34._2_2_ = 0;
        func_0x00001694();
        auStack_34._2_2_ = 0;
        auStack_34._0_2_ = 0xce33;
        auStack_34 = (undefined1  [4])func_0x000011e3();
        uStack_36 = 0;
        uStack_38 = 0xce3a;
        local_a = func_0x000012e7();
        local_a = local_a + 0x40;
        uStack_36 = 0;
        uStack_38 = 0x8000;
        uStack_3c._2_2_ = 0;
        uStack_3c._0_2_ = 0xce4c;
        func_0x00001694();
        uStack_3c._2_2_ = 0;
        uStack_3c._0_2_ = 0xce54;
        uStack_3c = func_0x00001395();
        uStack_3e = 0;
        uStack_40 = 0xce5b;
        local_c = func_0x000012e7();
        local_e = local_a;
        pcVar1 = (code *)swi(0x3b);
        (*pcVar1)();
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      do {
        uVar8 = 0x66a;
        uStack_2e = 0xe594;
        uStack_2c._0_2_ = uVar4;
        iVar3 = func_0x000066ae();
        uStack_26 = local_a;
        uStack_28 = 0x66a;
        uStack_2c._2_2_ = 0xe5a0;
        (*(code *)*(undefined2 *)0x5c3f)();
        uVar6 = uStack_1e;
        uStack_28 = 0;
        uVar4 = uVar8;
        if (iVar3 != 0) {
          auStack_5ce[unaff_SI * 2 + 1] = uStack_1c;
          auStack_5ce[unaff_SI * 2] = uVar6;
          uVar6 = (uint)uStack_22;
          auStack_b6e[unaff_SI * 2 + 1] = uStack_22._2_2_;
          auStack_b6e[unaff_SI * 2] = uVar6;
          iVar7 = (unaff_SI + 1) % 0x168;
          if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
            uStack_28 = 0x66a;
            uVar8 = 0x11c1;
            uStack_2c._2_2_ = 0xe5f0;
            FUN_1000_4125();
          }
          if ((*(int *)0x5d7e != 0) || (uVar4 = uVar8, uVar2 = uStack_22, *(int *)0x5d80 != 0)) {
            uVar4 = 0x11c1;
            uStack_2c._2_2_ = 0xe603;
            uStack_28 = uVar8;
            iVar3 = func_0x000134f7();
            uVar2 = uStack_22;
            if (iVar3 != 0) {
              return;
            }
          }
          uStack_22._2_2_ = (uint)((ulong)uVar2 >> 0x10);
          if (*(int *)0x5d92 == 0x6e) {
            return;
          }
          local_4 = local_4 + 1 & 0xf;
          if ((local_4 == 0) &&
             (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
            *(undefined2 *)0x7488 = 3;
          }
          if (((int)((ulong)uVar9 >> 0x10) < (int)uStack_1c) && (-0x8000 < (int)uStack_22._2_2_)) {
            *(undefined2 *)0x5d78 = 0x3c;
            uStack_22 = uVar2;
            while ((*(int *)0x5d78 != 0 && (*(int *)0x5d92 != 0x6e))) {
              if ((*(int *)0x5d7e != 0) || (uVar8 = uVar4, *(int *)0x5d80 != 0)) {
                uVar8 = 0x11c1;
                uStack_2c._2_2_ = 0xe662;
                uStack_28 = uVar4;
                iVar3 = func_0x000134f7();
                if (iVar3 != 0) {
                  return;
                }
              }
              uVar4 = uVar8;
              if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
                uVar4 = 0x11c1;
                uStack_2c._2_2_ = 0xe674;
                uStack_28 = uVar8;
                FUN_1000_4125();
              }
            }
            return;
          }
          uVar6 = auStack_5ce[iVar7 * 2] >> 1 | (uint)((auStack_5ce[iVar7 * 2 + 1] & 1) != 0) << 0xf
          ;
          uStack_1c = auStack_5ce[iVar7 * 2 + 1] + ((int)auStack_5ce[iVar7 * 2 + 1] >> 1) +
                      (uint)CARRY2(auStack_5ce[iVar7 * 2],uVar6);
          uStack_1e = auStack_5ce[iVar7 * 2] + uVar6;
          uVar6 = auStack_b6e[iVar7 * 2] >> 1 | (uint)((auStack_b6e[iVar7 * 2 + 1] & 1) != 0) << 0xf
          ;
          uStack_22._0_2_ = auStack_b6e[iVar7 * 2] + uVar6;
          uStack_22._2_2_ =
               auStack_b6e[iVar7 * 2 + 1] + ((int)auStack_b6e[iVar7 * 2 + 1] >> 1) +
               (uint)CARRY2(auStack_b6e[iVar7 * 2],uVar6);
          *(uint *)0x5df0 = auStack_5ce[iVar7 * 2 + 1];
          unaff_SI = iVar7;
LAB_1000_e575:
          *(uint *)0x5dee = auStack_b6e[iVar7 * 2 + 1];
          uStack_28 = 1;
        }
caseD_0_1:
        uStack_2c._2_2_ = uStack_1c;
      } while( true );
    }
  }
  uStack_2c._0_2_ = *(undefined2 *)0x609e;
  uStack_2e = *(undefined2 *)0x609c;
  uStack_30 = *(undefined2 *)0x7488;
  auStack_34._2_2_ = *(undefined2 *)0x6094;
  auStack_34._0_2_ = *(undefined2 *)0x6092;
  uStack_36 = 0;
  uStack_38 = *(undefined2 *)0x6090;
  uStack_3c._2_2_ = 1;
  uStack_3c._0_2_ = 0;
  uStack_3e = 0xc255;
  func_0x00006f3b();
  return;
}



// Function: FUN_1000_c65b @ 1000:c65b

void __cdecl16far FUN_1000_c65b(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar5;
  int local_14;
  undefined2 local_a;
  int local_8;
  int local_6;
  
  if (param_1 != 0) {
    local_14 = 0;
    iVar4 = 0;
    do {
      func_0x00001694(unaff_CS,0x8000,0);
      uVar5 = func_0x000011e3(0);
      iVar2 = func_0x000012e7(0,uVar5);
      *(int *)(iVar4 * 2 + 0x60bc) = *(int *)0x5db0 / 4 + iVar2;
      func_0x00001694(0,0x8000,0);
      uVar5 = func_0x000011e3(0);
      unaff_CS = 0;
      iVar2 = func_0x000012e7(0,uVar5);
      *(int *)(iVar4 * 2 + 0x60c2) = *(int *)0x5db2 / 4 + iVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
  }
  if (local_14 < 1) {
    func_0x00001694(unaff_CS,0x8000,0);
    uVar5 = func_0x00001395(0);
    func_0x000012e7(0,uVar5);
    iVar4 = 0;
    do {
      func_0x00001694(0,0x8000,0);
      uVar5 = func_0x000011e3(0);
      iVar2 = func_0x000012e7(0,uVar5);
      *(int *)(iVar4 * 2 + 0x60c8) = iVar2 - *(int *)0x5db0 / 8;
      func_0x00001694(0,0x8000,0);
      uVar5 = func_0x000011e3(0);
      unaff_CS = 0;
      iVar2 = func_0x000012e7(0,uVar5);
      *(int *)(iVar4 * 2 + 0x60ce) = iVar2 - *(int *)0x5db2 / 8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
  }
  iVar4 = 0;
  do {
    piVar1 = (int *)(iVar4 * 2 + 0x60bc);
    *piVar1 = *piVar1 + *(int *)(iVar4 * 2 + 0x60c8);
    piVar1 = (int *)(iVar4 * 2 + 0x60c2);
    *piVar1 = *piVar1 + *(int *)(iVar4 * 2 + 0x60ce);
    if ((*(int *)(iVar4 * 2 + 0x60bc) < 0) || (*(int *)0x5db0 <= *(int *)(iVar4 * 2 + 0x60bc))) {
      *(int *)(iVar4 * 2 + 0x60c8) = -*(int *)(iVar4 * 2 + 0x60c8);
      piVar1 = (int *)(iVar4 * 2 + 0x60bc);
      *piVar1 = *piVar1 + *(int *)(iVar4 * 2 + 0x60c8);
    }
    if ((*(int *)(iVar4 * 2 + 0x60c2) < 0) || (*(int *)0x5db2 <= *(int *)(iVar4 * 2 + 0x60c2))) {
      *(int *)(iVar4 * 2 + 0x60ce) = -*(int *)(iVar4 * 2 + 0x60ce);
      piVar1 = (int *)(iVar4 * 2 + 0x60c2);
      *piVar1 = *piVar1 + *(int *)(iVar4 * 2 + 0x60ce);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  local_a = *(undefined2 *)0x60bc;
  local_8 = *(int *)0x60be - *(int *)0x60bc;
  local_6 = *(int *)0x60c0 - *(int *)0x60bc;
  func_0x00001694(unaff_CS,0x8000,0);
  uVar5 = func_0x000011e3(0);
  func_0x000012e7(0,uVar5);
  *(int *)0x7488 = *(int *)0x7488 + 1;
  if (*(uint *)0x5db6 <= *(uint *)0x7488) {
    *(undefined2 *)0x7488 = 3;
  }
  iVar4 = func_0x00001694(0,0x8000,0);
  iVar4 = func_0x000012e7(0,iVar4 << 1,(iVar4 >> 0xf) << 1 | (uint)(iVar4 < 0));
  if ((iVar4 == 0) && (*(int *)0x7484 == 8)) {
    iVar4 = func_0x00001694(0,0x8000,0);
    func_0x000012e7(0,iVar4 << 1,(iVar4 >> 0xf) << 1 | (uint)(iVar4 < 0));
  }
  if (*(int *)0x7484 == 8) {
    func_0x00001694(0,0x8000,0);
    uVar5 = func_0x000011e3(0);
    iVar4 = func_0x000012e7(0,uVar5);
    if (iVar4 == 0) {
      func_0x00001694(0,0x8000,0);
      uVar5 = func_0x000011e3(0);
      uVar3 = func_0x000012e7(0,uVar5);
      *(undefined2 *)0x7488 = uVar3;
    }
  }
  func_0x0000695b(0,1,3,&local_a);
  return;
}



// Function: FUN_1000_c97f @ 1000:c97f

/* WARNING: Control flow encountered bad instruction data */

void __cdecl16far FUN_1000_c97f(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  char extraout_AH;
  int iVar3;
  undefined2 extraout_DX;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  if (param_1 == 0) {
    func_0x00006f3b();
    pcVar1 = (code *)swi(0x3b);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x34);
    (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar1 = (code *)swi(0x3b);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3b);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3a);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x34);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  *(undefined2 *)0x60f2 = 0x3f5d;
  *(undefined2 *)0x60f0 = 0xb22d;
  *(undefined2 *)0x60f6 = 0x3f00;
  *(undefined2 *)0x60f4 = 0;
  *(undefined2 *)0x60e4 = 1;
  *(undefined2 *)0x60ea = 1;
  func_0x00001694();
  func_0x000011e3();
  uVar2 = func_0x000012e7();
  *(undefined2 *)0x60e6 = uVar2;
  if (*(int *)0x60e6 == 0) {
    *(undefined2 *)0x60e8 = 1;
    func_0x00001694();
    func_0x000011e3();
    iVar3 = func_0x000012e7();
    *(int *)0x60de = *(int *)0x5db2 / 4 + iVar3;
    *(undefined2 *)0x60e0 = 0;
    *(undefined2 *)0x60e2 = 0;
    *(uint *)0x60e4 = *(uint *)0x60e4 | 0x20;
  }
  else {
    func_0x00001694();
    func_0x000011e3();
    iVar3 = func_0x000012e7();
    *(int *)0x60de = *(int *)0x5db2 / 8 + iVar3;
    func_0x00001694();
    func_0x000011e3();
    iVar3 = func_0x000012e7();
    *(int *)0x60e2 = *(int *)0x60de * 2 + iVar3;
    func_0x00001694();
    func_0x000011e3();
    func_0x000012e7();
    pcVar1 = (code *)swi(0x3b);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x3b);
    (*pcVar1)();
    pcVar1 = (code *)swi(0x34);
    (*pcVar1)();
    in(extraout_DX);
    pcVar1 = (code *)swi(0x3a);
    (*pcVar1)();
    *(undefined2 *)(&stack0x0fc0 + unaff_SI) = *(undefined2 *)(&stack0x0fc0 + unaff_SI);
    (&stack0x60de)[unaff_DI] = (&stack0x60de)[unaff_DI] + extraout_AH;
  }
  return;
}



// Function: FUN_1000_cd5d @ 1000:cd5d

void __cdecl16far FUN_1000_cd5d(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined2 unaff_DS;
  undefined4 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  int iStack_4;
  
  if (param_1 == 0) {
    uVar11 = 0;
    uVar10 = 0x8000;
    func_0x00001694();
    uVar9 = func_0x000011e3(0,uVar10,uVar11);
    iVar3 = func_0x000012e7(0,uVar9);
    iVar8 = *(int *)0x5db0;
    func_0x00001694(0,0x8000,0);
    uVar9 = func_0x000011e3(0);
    uVar10 = 0;
    iVar4 = func_0x000012e7(0,uVar9);
    for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
      if (*(int *)0x6142 == 0) {
        *(undefined2 *)(iVar7 * 2 + 0x6100) = 0;
        *(undefined2 *)(iVar7 * 2 + 0x60f8) = 0;
      }
      else {
        func_0x00001694(uVar10,0x8000,0);
        uVar9 = func_0x000011e3(0);
        iVar5 = func_0x000012e7(0,uVar9);
        *(int *)(iVar7 * 2 + 0x60f8) = ((iVar3 - iVar8 / 2) + iVar5) - *(int *)0x5db0 / 2;
        func_0x00001694(0,0x8000,0);
        uVar9 = func_0x000011e3(0);
        uVar10 = 0;
        iVar5 = func_0x000012e7(0,uVar9);
        *(int *)(iVar7 * 2 + 0x6100) = (iVar5 - iVar4) - *(int *)0x5db2 / 2;
      }
      func_0x00001694(uVar10,0x8000,0);
      uVar9 = func_0x000011e3(0);
      iVar5 = func_0x000012e7(0,uVar9);
      *(int *)(iVar7 * 2 + 0x6118) = iVar5 + 3;
      *(undefined2 *)(iVar7 * 2 + 0x6110) = 0;
      *(undefined2 *)(iVar7 * 2 + 0x6108) = 0;
      *(undefined2 *)(iVar7 * 2 + 0x6130) = 0;
      *(undefined2 *)(iVar7 * 2 + 0x6128) = 0;
      func_0x00001694(0,0x8000,0);
      uVar9 = func_0x000011e3(0);
      iVar5 = func_0x000012e7(0,uVar9);
      *(int *)(iVar7 * 2 + 0x6120) = *(int *)0x5db2 / 8 + iVar5;
      for (iStack_4 = 0; uVar10 = 0, iStack_4 < 0x40; iStack_4 = iStack_4 + 1) {
        func_0x00001694(0,0x8000,0);
        uVar9 = func_0x000011e3(0);
        iVar5 = func_0x000012e7(0,uVar9);
        *(int *)(iVar7 * 0x480 + iStack_4 * 0x12 + 0x6144) =
             (*(int *)(iVar7 * 2 + 0x60f8) + iVar5 + -4) * 0x40;
        func_0x00001694(0,0x8000,0);
        uVar9 = func_0x000011e3(0);
        iVar5 = func_0x000012e7(0,uVar9);
        *(int *)(iVar7 * 0x480 + iStack_4 * 0x12 + 0x6146) =
             (*(int *)(iVar7 * 2 + 0x6100) + iVar5 + -4) * 0x40;
        *(undefined2 *)(iVar7 * 0x480 + iStack_4 * 0x12 + 0x6148) =
             *(undefined2 *)(iVar7 * 0x480 + iStack_4 * 0x12 + 0x6144);
        *(undefined2 *)(iVar7 * 0x480 + iStack_4 * 0x12 + 0x614a) =
             *(undefined2 *)(iVar7 * 0x480 + iStack_4 * 0x12 + 0x6146);
        func_0x00001694(0,0x8000,0);
        uVar9 = func_0x000011e3(0);
        iVar5 = func_0x000012e7(0,uVar9);
        *(int *)(iVar7 * 0x480 + iStack_4 * 0x12 + 0x6150) = *(int *)0x5db2 / 8 + iVar5;
        func_0x00001694(0,0x8000,0);
        uVar9 = func_0x000011e3(0);
        iVar5 = func_0x000012e7(0,uVar9);
        *(int *)(iVar7 * 0x480 + iStack_4 * 0x12 + 0x6152) =
             *(int *)(iVar7 * 0x480 + iStack_4 * 0x12 + 0x6150) * 2 + iVar5;
      }
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        uVar10 = 0x11c1;
        FUN_1000_4125();
      }
    }
    uVar11 = uVar10;
    if (*(int *)0x613e == 0) {
      uVar11 = 0x11c1;
      FUN_1000_2a3a(uVar10,1);
    }
    iVar8 = 0;
    *(undefined2 *)0x6128 = 1;
    while ((((*(int *)0x6128 != 0 || (*(int *)0x612a != 0)) || (*(int *)0x612c != 0)) ||
           (*(int *)0x612e != 0))) {
      if (*(int *)(iVar8 * 2 + 0x6128) != 0) {
        for (iStack_4 = 0; iStack_4 < 0x40; iStack_4 = iStack_4 + 1) {
          *(undefined2 *)0x7488 = *(undefined2 *)(iVar8 * 2 + 0x6118);
          if (*(int *)0x613e == 1) {
            iVar3 = *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6150);
          }
          else {
            iVar3 = *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6152);
          }
          if (*(int *)(iVar8 * 2 + 0x6108) < iVar3) {
            *(int *)0x5df0 = *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6144) >> 6;
            *(int *)0x5dee = *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6146) >> 6;
            uVar6 = (int)*(uint *)0x5df0 >> 0xf;
            if ((*(int *)0x5db0 < (int)((*(uint *)0x5df0 ^ uVar6) - uVar6)) ||
               (uVar6 = (int)*(uint *)0x5dee >> 0xf,
               *(int *)0x5db2 < (int)((*(uint *)0x5dee ^ uVar6) - uVar6))) {
              if (*(int *)0x613e == 1) {
                *(undefined2 *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6150) =
                     *(undefined2 *)(iVar8 * 2 + 0x6108);
              }
            }
            else {
              (*(code *)*(undefined2 *)0x5c3f)(uVar11,0);
              piVar1 = (int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6144);
              *piVar1 = *piVar1 + *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x614c);
              piVar1 = (int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6146);
              *piVar1 = *piVar1 + *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x614e) +
                                  *(int *)(iVar8 * 2 + 0x6130);
            }
          }
          if ((((*(uint *)0x613e & 1) == 0) &&
              (*(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6150) <= *(int *)(iVar8 * 2 + 0x6108)))
             && (*(int *)(iVar8 * 2 + 0x6108) <= *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6152))
             ) {
            *(undefined2 *)0x7488 = *(undefined2 *)(iVar8 * 2 + 0x6118);
            *(int *)0x5df0 = *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6148) >> 6;
            *(int *)0x5dee = *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x614a) >> 6;
            if (*(int *)0x613e == 2) {
              *(undefined2 *)0x7488 = *(undefined2 *)0x613a;
            }
            if ((*(int *)0x613e == 4) && ((*(uint *)0x5df0 & *(uint *)0x6140) != 0)) {
              *(undefined2 *)0x7488 = *(undefined2 *)0x613c;
            }
            uVar6 = (int)*(uint *)0x5df0 >> 0xf;
            if ((*(int *)0x5db0 < (int)((*(uint *)0x5df0 ^ uVar6) - uVar6)) ||
               (uVar6 = (int)*(uint *)0x5dee >> 0xf,
               *(int *)0x5db2 < (int)((*(uint *)0x5dee ^ uVar6) - uVar6))) {
              *(undefined2 *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6152) =
                   *(undefined2 *)(iVar8 * 2 + 0x6108);
            }
            else {
              (*(code *)*(undefined2 *)0x5c3f)(uVar11,0);
            }
            iVar3 = *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6150) * 2;
            if (*(int *)(iVar8 * 2 + 0x6108) < iVar3 + -1) {
              iVar3 = *(int *)(iVar8 * 2 + 0x6130) * 2 - iVar3 * *(int *)0x6138;
              piVar1 = (int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6148);
              *piVar1 = *piVar1 + *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x614c);
              piVar1 = (int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x614a);
              *piVar1 = *piVar1 + *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x614e) + iVar3;
              *(int *)0x5df0 = *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6148) >> 6;
              *(int *)0x5dee = *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x614a) >> 6;
              if (*(int *)0x613e == 2) {
                *(undefined2 *)0x7488 = *(undefined2 *)0x613a;
              }
              if ((*(int *)0x613e == 4) && ((*(uint *)0x5df0 & *(uint *)0x6140) != 0)) {
                *(undefined2 *)0x7488 = *(undefined2 *)0x613c;
              }
              (*(code *)*(undefined2 *)0x5c3f)(uVar11,0);
              piVar1 = (int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6148);
              *piVar1 = *piVar1 + *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x614c);
              iVar3 = *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x614e) + iVar3 + *(int *)0x6138;
            }
            else {
              piVar1 = (int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6148);
              *piVar1 = *piVar1 + *(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x614c);
              iVar3 = (*(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x614e) +
                      *(int *)(iVar8 * 2 + 0x6130)) - *(int *)0x6138;
            }
            piVar1 = (int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x614a);
            *piVar1 = *piVar1 + iVar3;
          }
          if (((*(int *)0x613e == 1) &&
              (*(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6150) == *(int *)(iVar8 * 2 + 0x6108)))
             || (*(int *)(iVar8 * 0x480 + iStack_4 * 0x12 + 0x6152) == *(int *)(iVar8 * 2 + 0x6108))
             ) {
            piVar1 = (int *)(iVar8 * 2 + 0x6110);
            *piVar1 = *piVar1 + 1;
          }
        }
        if ((*(uint *)0x613e & 1) != 0) {
          *(int *)0x7488 = *(int *)0x7488 + 1;
          if (*(uint *)0x5db6 <= *(uint *)0x7488) {
            *(undefined2 *)0x7488 = 3;
          }
          *(undefined2 *)(iVar8 * 2 + 0x6118) = *(undefined2 *)0x7488;
        }
        piVar1 = (int *)(iVar8 * 2 + 0x6130);
        *piVar1 = *piVar1 + *(int *)0x6138;
        piVar1 = (int *)(iVar8 * 2 + 0x6108);
        *piVar1 = *piVar1 + 1;
        iVar3 = *(int *)(iVar8 * 2 + 0x6108);
        if (((iVar3 == *(int *)(iVar8 * 2 + 0x6120)) ||
            ((0x3f < *(int *)(iVar8 * 2 + 0x6110) && (iVar3 < *(int *)(iVar8 * 2 + 0x6120))))) &&
           (iVar8 < 3)) {
          *(undefined2 *)(iVar8 * 2 + 0x612a) = 1;
        }
        if (0x3f < *(int *)(iVar8 * 2 + 0x6110)) {
          *(undefined2 *)(iVar8 * 2 + 0x6128) = 0;
        }
      }
      iVar8 = iVar8 + 1;
      if (3 < iVar8) {
        iVar8 = 0;
      }
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        uVar11 = 0x11c1;
        FUN_1000_4125();
      }
    }
    *(int *)0x5df0 = *(int *)0x5db0 + 1;
    *(int *)0x5dee = *(int *)0x5db2 + 1;
    *(int *)0x5cbb = *(int *)0x5cbb + *(int *)0x5dae * 8;
    return;
  }
  pcVar2 = (code *)swi(0x3b);
  (*pcVar2)();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// Function: FUN_1000_d0dc @ 1000:d0dc

void __cdecl16far FUN_1000_d0dc(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int unaff_BP;
  int iVar4;
  int unaff_DI;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar7;
  
  while( true ) {
    func_0x000011e3();
    iVar2 = func_0x000012e7(0);
    *(int *)(unaff_DI * 2 + 0x6120) = *(int *)0x5db2 / 8 + iVar2;
    *(undefined2 *)(unaff_BP + -2) = 0;
    while (uVar5 = 0, *(int *)(unaff_BP + -2) < 0x40) {
      func_0x00001694(0,0x8000,0);
      uVar7 = func_0x000011e3(0);
      iVar2 = func_0x000012e7(0,uVar7);
      *(int *)(unaff_DI * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6144) =
           (*(int *)(unaff_DI * 2 + 0x60f8) + iVar2 + -4) * 0x40;
      func_0x00001694(0,0x8000,0);
      uVar7 = func_0x000011e3(0);
      iVar2 = func_0x000012e7(0,uVar7);
      *(int *)(unaff_DI * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6146) =
           (*(int *)(unaff_DI * 2 + 0x6100) + iVar2 + -4) * 0x40;
      *(undefined2 *)(unaff_DI * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6148) =
           *(undefined2 *)(unaff_DI * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6144);
      *(undefined2 *)(unaff_DI * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x614a) =
           *(undefined2 *)(unaff_DI * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6146);
      func_0x00001694(0,0x8000,0);
      uVar7 = func_0x000011e3(0);
      iVar2 = func_0x000012e7(0,uVar7);
      *(int *)(unaff_DI * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6150) =
           *(int *)0x5db2 / 8 + iVar2;
      func_0x00001694(0,0x8000,0);
      uVar7 = func_0x000011e3(0);
      iVar2 = func_0x000012e7(0,uVar7);
      *(int *)(unaff_DI * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6152) =
           *(int *)(unaff_DI * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6150) * 2 + iVar2;
      *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
    }
    if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
      uVar5 = 0x11c1;
      FUN_1000_4125();
    }
    unaff_DI = unaff_DI + 1;
    if (3 < unaff_DI) break;
    if (*(int *)0x6142 == 0) {
      *(undefined2 *)(unaff_DI * 2 + 0x6100) = 0;
      *(undefined2 *)(unaff_DI * 2 + 0x60f8) = 0;
    }
    else {
      func_0x00001694(uVar5,0x8000,0);
      uVar7 = func_0x000011e3(0);
      iVar2 = func_0x000012e7(0,uVar7);
      *(int *)(unaff_DI * 2 + 0x60f8) = (*(int *)(unaff_BP + -4) + iVar2) - *(int *)0x5db0 / 2;
      func_0x00001694(0,0x8000,0);
      uVar7 = func_0x000011e3(0);
      uVar5 = 0;
      iVar2 = func_0x000012e7(0,uVar7);
      *(int *)(unaff_DI * 2 + 0x6100) = (*(int *)(unaff_BP + -6) + iVar2) - *(int *)0x5db2 / 2;
    }
    func_0x00001694(uVar5,0x8000,0);
    uVar7 = func_0x000011e3(0);
    iVar2 = func_0x000012e7(0,uVar7);
    *(int *)(unaff_DI * 2 + 0x6118) = iVar2 + 3;
    *(undefined2 *)(unaff_DI * 2 + 0x6110) = 0;
    *(undefined2 *)(unaff_DI * 2 + 0x6108) = 0;
    *(undefined2 *)(unaff_DI * 2 + 0x6130) = 0;
    *(undefined2 *)(unaff_DI * 2 + 0x6128) = 0;
    func_0x00001694();
  }
  uVar6 = uVar5;
  if (*(int *)0x613e == 0) {
    uVar6 = 0x11c1;
    FUN_1000_2a3a(uVar5,1);
  }
  iVar2 = 0;
  *(undefined2 *)0x6128 = 1;
  while ((((*(int *)0x6128 != 0 || (*(int *)0x612a != 0)) || (*(int *)0x612c != 0)) ||
         (*(int *)0x612e != 0))) {
    if (*(int *)(iVar2 * 2 + 0x6128) != 0) {
      *(undefined2 *)(unaff_BP + -2) = 0;
      while (*(int *)(unaff_BP + -2) < 0x40) {
        *(undefined2 *)0x7488 = *(undefined2 *)(iVar2 * 2 + 0x6118);
        if (*(int *)0x613e == 1) {
          iVar4 = *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6150);
        }
        else {
          iVar4 = *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6152);
        }
        if (*(int *)(iVar2 * 2 + 0x6108) < iVar4) {
          *(int *)0x5df0 = *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6144) >> 6;
          *(int *)0x5dee = *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6146) >> 6;
          uVar3 = (int)*(uint *)0x5df0 >> 0xf;
          if ((*(int *)0x5db0 < (int)((*(uint *)0x5df0 ^ uVar3) - uVar3)) ||
             (uVar3 = (int)*(uint *)0x5dee >> 0xf,
             *(int *)0x5db2 < (int)((*(uint *)0x5dee ^ uVar3) - uVar3))) {
            if (*(int *)0x613e == 1) {
              *(undefined2 *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6150) =
                   *(undefined2 *)(iVar2 * 2 + 0x6108);
            }
          }
          else {
            (*(code *)*(undefined2 *)0x5c3f)(uVar6,0);
            piVar1 = (int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6144);
            *piVar1 = *piVar1 + *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x614c);
            piVar1 = (int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6146);
            *piVar1 = *piVar1 + *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x614e) +
                                *(int *)(iVar2 * 2 + 0x6130);
          }
        }
        if ((((*(uint *)0x613e & 1) == 0) &&
            (*(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6150) <=
             *(int *)(iVar2 * 2 + 0x6108))) &&
           (*(int *)(iVar2 * 2 + 0x6108) <=
            *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6152))) {
          *(undefined2 *)0x7488 = *(undefined2 *)(iVar2 * 2 + 0x6118);
          *(int *)0x5df0 = *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6148) >> 6;
          *(int *)0x5dee = *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x614a) >> 6;
          if (*(int *)0x613e == 2) {
            *(undefined2 *)0x7488 = *(undefined2 *)0x613a;
          }
          if ((*(int *)0x613e == 4) && ((*(uint *)0x5df0 & *(uint *)0x6140) != 0)) {
            *(undefined2 *)0x7488 = *(undefined2 *)0x613c;
          }
          uVar3 = (int)*(uint *)0x5df0 >> 0xf;
          if ((*(int *)0x5db0 < (int)((*(uint *)0x5df0 ^ uVar3) - uVar3)) ||
             (uVar3 = (int)*(uint *)0x5dee >> 0xf,
             *(int *)0x5db2 < (int)((*(uint *)0x5dee ^ uVar3) - uVar3))) {
            *(undefined2 *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6152) =
                 *(undefined2 *)(iVar2 * 2 + 0x6108);
          }
          else {
            (*(code *)*(undefined2 *)0x5c3f)(uVar6,0);
          }
          iVar4 = *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6150) * 2;
          if (*(int *)(iVar2 * 2 + 0x6108) < iVar4 + -1) {
            iVar4 = *(int *)(iVar2 * 2 + 0x6130) * 2 - iVar4 * *(int *)0x6138;
            piVar1 = (int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6148);
            *piVar1 = *piVar1 + *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x614c);
            piVar1 = (int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x614a);
            *piVar1 = *piVar1 + *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x614e) +
                                iVar4;
            *(int *)0x5df0 = *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6148) >> 6;
            *(int *)0x5dee = *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x614a) >> 6;
            if (*(int *)0x613e == 2) {
              *(undefined2 *)0x7488 = *(undefined2 *)0x613a;
            }
            if ((*(int *)0x613e == 4) && ((*(uint *)0x5df0 & *(uint *)0x6140) != 0)) {
              *(undefined2 *)0x7488 = *(undefined2 *)0x613c;
            }
            (*(code *)*(undefined2 *)0x5c3f)(uVar6,0);
            piVar1 = (int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6148);
            *piVar1 = *piVar1 + *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x614c);
            iVar4 = *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x614e) + iVar4 +
                    *(int *)0x6138;
          }
          else {
            piVar1 = (int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6148);
            *piVar1 = *piVar1 + *(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x614c);
            iVar4 = (*(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x614e) +
                    *(int *)(iVar2 * 2 + 0x6130)) - *(int *)0x6138;
          }
          piVar1 = (int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x614a);
          *piVar1 = *piVar1 + iVar4;
        }
        if (((*(int *)0x613e == 1) &&
            (*(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6150) ==
             *(int *)(iVar2 * 2 + 0x6108))) ||
           (*(int *)(iVar2 * 0x480 + *(int *)(unaff_BP + -2) * 0x12 + 0x6152) ==
            *(int *)(iVar2 * 2 + 0x6108))) {
          piVar1 = (int *)(iVar2 * 2 + 0x6110);
          *piVar1 = *piVar1 + 1;
        }
        *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
      }
      if ((*(uint *)0x613e & 1) != 0) {
        *(int *)0x7488 = *(int *)0x7488 + 1;
        if (*(uint *)0x5db6 <= *(uint *)0x7488) {
          *(undefined2 *)0x7488 = 3;
        }
        *(undefined2 *)(iVar2 * 2 + 0x6118) = *(undefined2 *)0x7488;
      }
      piVar1 = (int *)(iVar2 * 2 + 0x6130);
      *piVar1 = *piVar1 + *(int *)0x6138;
      piVar1 = (int *)(iVar2 * 2 + 0x6108);
      *piVar1 = *piVar1 + 1;
      iVar4 = *(int *)(iVar2 * 2 + 0x6108);
      if (((iVar4 == *(int *)(iVar2 * 2 + 0x6120)) ||
          ((0x3f < *(int *)(iVar2 * 2 + 0x6110) && (iVar4 < *(int *)(iVar2 * 2 + 0x6120))))) &&
         (iVar2 < 3)) {
        *(undefined2 *)(iVar2 * 2 + 0x612a) = 1;
      }
      if (0x3f < *(int *)(iVar2 * 2 + 0x6110)) {
        *(undefined2 *)(iVar2 * 2 + 0x6128) = 0;
      }
    }
    iVar2 = iVar2 + 1;
    if (3 < iVar2) {
      iVar2 = 0;
    }
    if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
      uVar6 = 0x11c1;
      FUN_1000_4125();
    }
  }
  *(int *)0x5df0 = *(int *)0x5db0 + 1;
  *(int *)0x5dee = *(int *)0x5db2 + 1;
  *(int *)0x5cbb = *(int *)0x5cbb + *(int *)0x5dae * 8;
  return;
}



// Function: FUN_1000_db01 @ 1000:db01

void __cdecl16far FUN_1000_db01(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  undefined2 uVar5;
  byte local_4;
  byte local_3;
  
  uVar5 = 1;
  uVar3 = 0x11c1;
  FUN_1000_2a3a();
  local_3 = 0x40;
  local_4 = 2;
  if (*(int *)0x7484 == 4) {
    local_4 = 4;
  }
  do {
    *(undefined2 *)0x7488 = 0;
    uVar2 = 1;
    uVar4 = uVar3;
    do {
      *(uint *)0x5dee = uVar2 / (uint)((*(int *)0x5dae + 1) / (int)(char)local_3);
      uVar3 = uVar4;
      if (*(int *)0x5dee <= *(int *)0x5db2 / (int)(char)local_3) {
        *(uint *)0x5df0 = uVar2 % (uint)((*(int *)0x5dae + 1) / (int)(char)local_3);
        *(int *)0x5df0 = *(int *)0x5df0 * (int)(char)local_3;
        *(int *)0x5dee = *(int *)0x5dee * (int)(char)local_3;
        if ((1 < local_3) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
          *(undefined2 *)0x7488 = 3;
        }
        uVar3 = 0x66a;
        func_0x0000690b(uVar4,local_3,1,uVar5);
      }
      if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 >> 1;
      }
      else {
        uVar2 = uVar2 >> 1 ^ 0x6000;
      }
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        uVar3 = 0x11c1;
        FUN_1000_4125();
      }
      if ((*(int *)0x5d7e != 0) || (uVar4 = uVar3, *(int *)0x5d80 != 0)) {
        uVar4 = 0x11c1;
        iVar1 = func_0x000134f7(uVar3);
        if (iVar1 != 0) {
          return;
        }
      }
      if (*(int *)0x5d92 == 0x6e) {
        return;
      }
    } while (uVar2 != 1);
    *(undefined2 *)0x5df0 = 0;
    *(undefined2 *)0x5dee = 0;
    if ((1 < local_3) && (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488))
    {
      *(undefined2 *)0x7488 = 3;
    }
    uVar3 = 0x66a;
    func_0x0000690b(uVar4,local_3,1);
    local_3 = (char)local_3 >> 1;
    if (local_3 < local_4) {
      *(undefined2 *)0x5cb1 = 0;
      return;
    }
  } while( true );
}



// Function: FUN_1000_dc4b @ 1000:dc4b

void FUN_1000_dc4b(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_DS;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint local_4;
  
  if (*(int *)0x7484 == 8) {
    local_4 = 0x100;
  }
  else {
    local_4 = 0x200;
  }
  uVar9 = 0;
  uVar8 = 0x8000;
  iVar1 = func_0x00001694();
  iVar1 = func_0x000012e7(0,iVar1 << 1,(iVar1 >> 0xf) << 1 | (uint)(iVar1 < 0),uVar8,uVar9);
  func_0x00001694(0,0x8000,0);
  uVar7 = func_0x000011e3(0);
  iVar2 = func_0x000012e7(0,uVar7);
  func_0x00001694(0,0x8000,0);
  uVar7 = func_0x000011e3(0);
  uVar8 = 0;
  iVar3 = func_0x000012e7(0,uVar7);
  iVar3 = iVar3 + 2;
  *(uint *)0x7488 = *(uint *)0x5dc0 & 3;
  *(undefined2 *)0x5df0 = 0;
  *(undefined2 *)0x5dee = 0;
  (*(code *)*(undefined2 *)0x5c3f)(0,1);
  uVar6 = local_4;
  do {
    uVar6 = (int)uVar6 >> 1;
    uVar5 = uVar6;
    do {
      *(uint *)0x5df0 = uVar5;
      *(uint *)0x5dee = uVar5;
      uVar9 = uVar8;
      if (*(int *)0x5dee <= *(int *)0x5db2) {
        iVar4 = iVar2;
        if (iVar1 != 0) {
          iVar4 = iVar3;
        }
        func_0x000067bb(uVar8,iVar4);
        (*(code *)*(undefined2 *)0x5c3f)(0x66a,1);
        do {
          *(int *)0x5df0 = *(int *)0x5df0 - uVar6;
          if (*(int *)0x5df0 <= *(int *)0x5db0) {
            if (iVar1 != 0) {
              func_0x000067bb(0x66a,iVar3);
            }
            (*(code *)*(undefined2 *)0x5c3f)(0x66a,1);
          }
          uVar9 = 0x66a;
        } while (0 < *(int *)0x5df0);
      }
      *(uint *)0x5df0 = uVar5;
      if (*(int *)0x5df0 <= *(int *)0x5db0) {
        uVar8 = uVar9;
        if (iVar1 == 0) {
          uVar8 = 0x66a;
          func_0x000067bb(uVar9,iVar2);
        }
        *(uint *)0x5dee = uVar5;
        do {
          *(int *)0x5dee = *(int *)0x5dee - uVar6;
          uVar9 = uVar8;
          if (*(int *)0x5dee <= *(int *)0x5db2) {
            if (iVar1 != 0) {
              uVar9 = 0x66a;
              func_0x000067bb(uVar8,iVar3);
            }
            (*(code *)*(undefined2 *)0x5c3f)(uVar9,1);
          }
          uVar8 = uVar9;
        } while (0 < *(int *)0x5dee);
      }
      iVar4 = uVar5 + uVar6;
      *(int *)0x5df0 = iVar4;
      *(int *)0x5dee = iVar4;
      if (*(int *)0x5dee <= *(int *)0x5db2) {
        uVar8 = uVar9;
        if (iVar1 == 0) {
          uVar8 = 0x66a;
          func_0x000067bb(uVar9,iVar2);
        }
        *(int *)0x5df0 = *(int *)0x5df0 + uVar6;
        do {
          *(int *)0x5df0 = *(int *)0x5df0 + uVar6 * -2;
          uVar9 = uVar8;
          if (*(int *)0x5df0 <= *(int *)0x5db0) {
            if (iVar1 != 0) {
              uVar9 = 0x66a;
              func_0x000067bb(uVar8,iVar3);
            }
            (*(code *)*(undefined2 *)0x5c3f)(uVar9,1);
          }
          uVar8 = uVar9;
        } while ((int)uVar6 < *(int *)0x5df0);
      }
      *(int *)0x5df0 = iVar4;
      if (*(int *)0x5df0 <= *(int *)0x5db0) {
        uVar8 = uVar9;
        if (iVar1 == 0) {
          uVar8 = 0x66a;
          func_0x000067bb(uVar9,iVar2);
        }
        *(int *)0x5dee = *(int *)0x5dee + uVar6;
        do {
          *(int *)0x5dee = *(int *)0x5dee + uVar6 * -2;
          uVar9 = uVar8;
          if (*(int *)0x5dee <= *(int *)0x5db2) {
            if (iVar1 != 0) {
              uVar9 = 0x66a;
              func_0x000067bb(uVar8,iVar3);
            }
            (*(code *)*(undefined2 *)0x5c3f)(uVar9,1);
          }
          uVar8 = uVar9;
        } while ((int)uVar6 < *(int *)0x5dee);
      }
      uVar5 = iVar4 + uVar6;
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        uVar9 = 0x11c1;
        FUN_1000_4125();
      }
      if ((*(int *)0x5d7e != 0) || (uVar8 = uVar9, *(int *)0x5d80 != 0)) {
        uVar8 = 0x11c1;
        iVar4 = func_0x000134f7(uVar9);
        if (iVar4 != 0) {
          return;
        }
      }
      if (*(int *)0x5d92 == 0x6e) {
        return;
      }
    } while ((((int)uVar5 <= *(int *)0x5db0) || ((int)uVar5 <= *(int *)0x5db2)) &&
            ((int)uVar5 <= (int)local_4));
    *(undefined2 *)0x5d78 = 5;
    while ((*(int *)0x5d78 != 0 && (*(int *)0x5d92 != 0x6e))) {
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        uVar8 = 0x11c1;
        FUN_1000_4125();
      }
    }
    if (uVar6 < 2) {
      *(undefined2 *)0x5d78 = 0x3c;
      while ((*(int *)0x5d78 != 0 && (*(int *)0x5d92 != 0x6e))) {
        if ((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) {
          iVar1 = func_0x000134f7(uVar8);
          uVar8 = 0x11c1;
          if (iVar1 != 0) {
            return;
          }
        }
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          uVar8 = 0x11c1;
          FUN_1000_4125();
        }
      }
      return;
    }
  } while( true );
}



// Function: FUN_1000_dcaa @ 1000:dcaa

void __cdecl16far FUN_1000_dcaa(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar6;
  
  pcVar1 = (char *)(unaff_BP + unaff_SI + -0x8000);
  *pcVar1 = *pcVar1 >> 0x10;
  func_0x00001694();
  uVar6 = func_0x000011e3(0);
  uVar4 = 0;
  iVar2 = func_0x000012e7(0,uVar6);
  *(int *)(unaff_BP + -8) = iVar2 + 2;
  *(uint *)0x7488 = *(uint *)0x5dc0 & 3;
  *(undefined2 *)0x5df0 = 0;
  *(undefined2 *)0x5dee = 0;
  (*(code *)*(undefined2 *)0x5c3f)(0,1);
  do {
    unaff_DI = unaff_DI >> 1;
    iVar2 = unaff_DI;
    do {
      *(int *)0x5df0 = iVar2;
      *(int *)0x5dee = iVar2;
      uVar5 = uVar4;
      if (*(int *)0x5dee <= *(int *)0x5db2) {
        if (*(int *)(unaff_BP + -4) == 0) {
          uVar5 = *(undefined2 *)(unaff_BP + -6);
        }
        else {
          uVar5 = *(undefined2 *)(unaff_BP + -8);
        }
        func_0x000067bb(uVar4,uVar5);
        (*(code *)*(undefined2 *)0x5c3f)(0x66a,1);
        do {
          *(int *)0x5df0 = *(int *)0x5df0 - unaff_DI;
          if (*(int *)0x5df0 <= *(int *)0x5db0) {
            if (*(int *)(unaff_BP + -4) != 0) {
              func_0x000067bb(0x66a,*(undefined2 *)(unaff_BP + -8));
            }
            (*(code *)*(undefined2 *)0x5c3f)(0x66a,1);
          }
          uVar5 = 0x66a;
        } while (0 < *(int *)0x5df0);
      }
      *(int *)0x5df0 = iVar2;
      if (*(int *)0x5df0 <= *(int *)0x5db0) {
        uVar4 = uVar5;
        if (*(int *)(unaff_BP + -4) == 0) {
          uVar4 = 0x66a;
          func_0x000067bb(uVar5,*(undefined2 *)(unaff_BP + -6));
        }
        *(int *)0x5dee = iVar2;
        do {
          *(int *)0x5dee = *(int *)0x5dee - unaff_DI;
          uVar5 = uVar4;
          if (*(int *)0x5dee <= *(int *)0x5db2) {
            if (*(int *)(unaff_BP + -4) != 0) {
              uVar5 = 0x66a;
              func_0x000067bb(uVar4,*(undefined2 *)(unaff_BP + -8));
            }
            (*(code *)*(undefined2 *)0x5c3f)(uVar5,1);
          }
          uVar4 = uVar5;
        } while (0 < *(int *)0x5dee);
      }
      iVar2 = iVar2 + unaff_DI;
      *(int *)0x5df0 = iVar2;
      *(int *)0x5dee = iVar2;
      if (*(int *)0x5dee <= *(int *)0x5db2) {
        uVar4 = uVar5;
        if (*(int *)(unaff_BP + -4) == 0) {
          uVar4 = 0x66a;
          func_0x000067bb(uVar5,*(undefined2 *)(unaff_BP + -6));
        }
        *(int *)0x5df0 = *(int *)0x5df0 + unaff_DI;
        do {
          *(int *)0x5df0 = *(int *)0x5df0 + unaff_DI * -2;
          uVar5 = uVar4;
          if (*(int *)0x5df0 <= *(int *)0x5db0) {
            if (*(int *)(unaff_BP + -4) != 0) {
              uVar5 = 0x66a;
              func_0x000067bb(uVar4,*(undefined2 *)(unaff_BP + -8));
            }
            (*(code *)*(undefined2 *)0x5c3f)(uVar5,1);
          }
          uVar4 = uVar5;
        } while (unaff_DI < *(int *)0x5df0);
      }
      *(int *)0x5df0 = iVar2;
      if (*(int *)0x5df0 <= *(int *)0x5db0) {
        uVar4 = uVar5;
        if (*(int *)(unaff_BP + -4) == 0) {
          uVar4 = 0x66a;
          func_0x000067bb(uVar5,*(undefined2 *)(unaff_BP + -6));
        }
        *(int *)0x5dee = *(int *)0x5dee + unaff_DI;
        do {
          *(int *)0x5dee = *(int *)0x5dee + unaff_DI * -2;
          uVar5 = uVar4;
          if (*(int *)0x5dee <= *(int *)0x5db2) {
            if (*(int *)(unaff_BP + -4) != 0) {
              uVar5 = 0x66a;
              func_0x000067bb(uVar4,*(undefined2 *)(unaff_BP + -8));
            }
            (*(code *)*(undefined2 *)0x5c3f)(uVar5,1);
          }
          uVar4 = uVar5;
        } while (unaff_DI < *(int *)0x5dee);
      }
      iVar2 = iVar2 + unaff_DI;
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        uVar5 = 0x11c1;
        FUN_1000_4125();
      }
      if ((*(int *)0x5d7e != 0) || (uVar4 = uVar5, *(int *)0x5d80 != 0)) {
        uVar4 = 0x11c1;
        iVar3 = func_0x000134f7(uVar5);
        if (iVar3 != 0) {
          return;
        }
      }
      if (*(int *)0x5d92 == 0x6e) {
        return;
      }
    } while (((iVar2 <= *(int *)0x5db0) || (iVar2 <= *(int *)0x5db2)) &&
            (iVar2 <= *(int *)(unaff_BP + -2)));
    *(undefined2 *)0x5d78 = 5;
    while ((*(int *)0x5d78 != 0 && (*(int *)0x5d92 != 0x6e))) {
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        uVar4 = 0x11c1;
        FUN_1000_4125();
      }
    }
    if (unaff_DI < 2) {
      *(undefined2 *)0x5d78 = 0x3c;
      while ((*(int *)0x5d78 != 0 && (*(int *)0x5d92 != 0x6e))) {
        if ((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) {
          iVar2 = func_0x000134f7(uVar4);
          uVar4 = 0x11c1;
          if (iVar2 != 0) {
            return;
          }
        }
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          uVar4 = 0x11c1;
          FUN_1000_4125();
        }
      }
      return;
    }
  } while( true );
}



// Function: FUN_1000_def0 @ 1000:def0

void __cdecl16far FUN_1000_def0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_CS;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  undefined4 uVar8;
  uint local_a;
  int local_8;
  int local_6;
  int local_4;
  
  if (param_1 == 0) {
    *(int *)0x736c = *(int *)0x736c + -1;
    if (*(int *)0x736c != 0) {
      uVar6 = *(undefined2 *)0x7380;
      uVar7 = *(undefined2 *)0x737e;
      uVar3 = *(undefined2 *)0x7382;
      *(undefined2 *)0x7380 = *(undefined2 *)0x7384;
      *(undefined2 *)0x737e = uVar3;
      *(undefined2 *)0x7384 = uVar6;
      *(undefined2 *)0x7382 = uVar7;
      FUN_1000_def0(0);
      uVar6 = *(undefined2 *)0x7384;
      uVar7 = *(undefined2 *)0x7382;
      uVar3 = *(undefined2 *)0x737e;
      *(undefined2 *)0x7384 = *(undefined2 *)0x7380;
      *(undefined2 *)0x7382 = uVar3;
      *(undefined2 *)0x7380 = uVar6;
      *(undefined2 *)0x737e = uVar7;
    }
    for (iVar5 = 1; iVar5 < 4; iVar5 = iVar5 + 1) {
      if (iVar5 == 1) {
        local_4 = *(int *)0x7380;
        local_6 = *(int *)0x737e;
        local_8 = *(int *)0x7384;
        local_a = *(uint *)0x7382;
      }
      else if (iVar5 == 2) {
        local_4 = *(int *)0x7384;
        local_6 = *(int *)0x7382;
        local_8 = *(int *)0x7380;
        local_a = *(uint *)0x737e;
      }
      else if (iVar5 == 3) {
        local_6 = -*(int *)0x737e;
        local_4 = -(uint)(*(int *)0x737e != 0) - *(int *)0x7380;
        local_a = -*(int *)0x7382;
        local_8 = -(uint)(*(int *)0x7382 != 0) - *(int *)0x7384;
        *(int *)0x7380 = local_8;
        *(uint *)0x737e = local_a;
        *(int *)0x7384 = local_4;
        *(int *)0x7382 = local_6;
      }
      *(undefined2 *)0x5df0 = *(undefined2 *)(*(int *)0x736e * 2 + 0x7358);
      *(undefined2 *)0x5dee = *(undefined2 *)(*(int *)0x736e * 2 + 0x7362);
      iVar4 = *(int *)0x7374;
      if (iVar4 == 0) {
        if ((*(uint *)0x5df0 & *(uint *)0x737c) == 0) {
          uVar6 = *(undefined2 *)0x7376;
        }
        else {
          uVar6 = *(undefined2 *)0x7378;
        }
        *(undefined2 *)0x7488 = uVar6;
        (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,0);
      }
      else {
        if (iVar4 == 1) {
          *(undefined2 *)0x7488 = *(undefined2 *)0x7376;
        }
        else {
          if (iVar4 != 2) goto LAB_1000_e283;
          *(undefined2 *)0x7488 = *(undefined2 *)0x7370;
          if ((*(int *)0x736e == 0) &&
             (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
            *(undefined2 *)0x7488 = 3;
          }
          *(undefined2 *)0x7370 = *(undefined2 *)0x7488;
        }
        func_0x0000690b(unaff_CS,*(undefined2 *)0x7372,0);
        unaff_CS = 0x66a;
      }
LAB_1000_e283:
      uVar8 = func_0x000011e3(unaff_CS,*(int *)0x5db2,*(int *)0x5db2 >> 0xf);
      uVar6 = 0;
      uVar8 = func_0x000012e7(0,uVar8);
      puVar1 = (uint *)0x7386;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + (uint)uVar8;
      *(int *)0x7388 =
           *(int *)0x7388 + (int)((ulong)uVar8 >> 0x10) + (uint)CARRY2(uVar2,(uint)uVar8);
      puVar1 = (uint *)0x738a;
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - local_a;
      *(int *)0x738c = (*(int *)0x738c - local_8) - (uint)(uVar2 < local_a);
      *(undefined2 *)0x5df0 = *(undefined2 *)0x7388;
      *(undefined2 *)0x5dee = *(undefined2 *)0x738c;
      if ((*(uint *)0x7386 & 0x8000) != 0) {
        *(int *)0x5df0 = *(int *)0x5df0 + 1;
      }
      if ((*(uint *)0x738a & 0x8000) != 0) {
        *(int *)0x5dee = *(int *)0x5dee + 1;
      }
      *(undefined2 *)(*(int *)0x736e * 2 + 0x7358) = *(undefined2 *)0x5df0;
      *(undefined2 *)(*(int *)0x736e * 2 + 0x7362) = *(undefined2 *)0x5dee;
      *(int *)0x736e = *(int *)0x736e + 1;
      *(int *)0x736e = *(int *)0x736e % 5;
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        uVar6 = 0x11c1;
        FUN_1000_4125();
      }
      if ((*(int *)0x5d7e != 0) || (uVar7 = uVar6, *(int *)0x5d80 != 0)) {
        uVar7 = 0x11c1;
        iVar4 = func_0x000134f7(uVar6);
        if (iVar4 != 0) {
          return;
        }
      }
      if (*(int *)0x5d92 == 0x6e) {
        return;
      }
      *(undefined2 *)0x7488 = *(undefined2 *)0x737a;
      if (*(int *)0x7374 == 0) {
        (*(code *)*(undefined2 *)0x5c3f)(uVar7,0);
        unaff_CS = uVar7;
      }
      else {
        unaff_CS = 0x66a;
        func_0x0000690b(uVar7,*(undefined2 *)0x7372,0);
      }
      if (*(int *)0x736c != 0) {
        FUN_1000_def0(0);
      }
    }
    *(int *)0x7380 = -(uint)(local_6 != 0) - local_4;
    *(int *)0x737e = -local_6;
    *(int *)0x7384 = -(uint)(local_a != 0) - local_8;
    *(int *)0x7382 = -local_a;
    *(int *)0x736c = *(int *)0x736c + 1;
  }
  else {
    uVar7 = 0;
    uVar6 = 0x8000;
    func_0x00001694();
    uVar8 = func_0x000011e3(0,uVar6,uVar7);
    iVar5 = func_0x000012e7(0,uVar8);
    *(int *)0x736c = iVar5 + 6;
    *(int *)0x7372 = 8 >> ((byte)iVar5 & 0x1f);
    *(undefined2 *)0x737a = 2;
    if (*(int *)0x7484 == 8) {
      *(uint *)0x7378 = *(uint *)0x5d8a >> 8;
      uVar2 = *(uint *)0x5d8a;
      *(uint *)0x7376 = uVar2 & 0xff;
      if ((uVar2 & 0xff) == *(uint *)0x7378) {
        if (*(int *)0x737a == *(int *)0x7376) {
          *(undefined2 *)0x737a = 1;
        }
        *(undefined2 *)0x7374 = 1;
        if (*(int *)0x7376 == 0) {
          func_0x00001694(0,0x8000,0);
          uVar8 = func_0x000011e3(0);
          iVar5 = func_0x000012e7(0,uVar8);
          if (iVar5 == 0) {
            *(undefined2 *)0x7374 = 2;
          }
        }
      }
      else {
        *(undefined2 *)0x7372 = 1;
        *(undefined2 *)0x736c = 9;
        *(undefined2 *)0x7374 = 0;
        if (*(int *)0x5de4 == 0) {
          *(undefined2 *)0x737c = 4;
        }
        else {
          *(undefined2 *)0x737c = 1;
        }
      }
    }
    else {
      *(undefined2 *)0x7376 = 0;
      *(int *)0x7372 = *(int *)0x7372 << 1;
      *(undefined2 *)0x7374 = 1;
    }
    iVar5 = *(int *)0x5db2;
    *(int *)0x7380 = iVar5 >> 0xf;
    *(int *)0x737e = iVar5;
    iVar5 = *(int *)0x5db0;
    *(int *)0x7388 = -iVar5 >> 0xf;
    *(int *)0x7386 = -iVar5;
    iVar5 = *(int *)0x5db2;
    *(int *)0x738c = iVar5 >> 0xf;
    *(int *)0x738a = iVar5;
    *(undefined2 *)0x736e = 0;
    while (*(int *)0x736e < 5) {
      *(int *)(*(int *)0x736e * 2 + 0x7358) = -*(int *)0x5db0;
      *(undefined2 *)(*(int *)0x736e * 2 + 0x7362) = *(undefined2 *)0x5db2;
      *(int *)0x736e = *(int *)0x736e + 1;
    }
    *(undefined2 *)0x736e = 0;
    *(undefined2 *)0x7388 = *(undefined2 *)0x7386;
    *(undefined2 *)0x7386 = 0;
    *(undefined2 *)0x738c = *(undefined2 *)0x738a;
    *(undefined2 *)0x738a = 0;
    iVar5 = (2 << (*(char *)0x736c - 1U & 0x1f)) + -1;
    uVar8 = func_0x00001395(0,iVar5,iVar5 >> 0xf);
    uVar8 = func_0x000012e7(0,uVar8);
    *(undefined2 *)0x7380 = (int)((ulong)uVar8 >> 0x10);
    *(undefined2 *)0x737e = (int)uVar8;
    *(undefined2 *)0x7384 = 0;
    *(undefined2 *)0x7382 = 0;
    *(undefined2 *)0x7370 = 3;
    FUN_1000_def0(0);
    if (*(int *)0x7374 < 2) {
      uVar6 = *(undefined2 *)0x7376;
    }
    else {
      uVar6 = *(undefined2 *)0x7370;
    }
    *(undefined2 *)0x7488 = uVar6;
    iVar5 = 0;
    uVar6 = 0;
    do {
      *(undefined2 *)0x5df0 = *(undefined2 *)(*(int *)0x736e * 2 + 0x7358);
      *(undefined2 *)0x5dee = *(undefined2 *)(*(int *)0x736e * 2 + 0x7362);
      if (((*(int *)0x7374 == 2) && (*(int *)0x736e == 0)) &&
         (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
        *(undefined2 *)0x7488 = 3;
      }
      func_0x0000690b(uVar6,*(undefined2 *)0x7372,0);
      *(int *)0x736e = *(int *)0x736e + 1;
      *(int *)0x736e = *(int *)0x736e % 5;
      iVar5 = iVar5 + 1;
      uVar6 = 0x66a;
    } while (iVar5 < 5);
  }
  return;
}



// Function: FUN_1000_e3aa @ 1000:e3aa

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: This function may have set the stack pointer */

void FUN_1000_e3aa(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar7;
  
  pcVar1 = (code *)swi(0x3b);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x3b);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x34);
  (*pcVar1)();
  puVar3 = (undefined1 *)0xcd0b;
  pcVar1 = (code *)swi(0x3d);
  (*pcVar1)();
  *(undefined2 *)0x7488 = 3;
  *(undefined2 *)(puVar3 + -2) = 0;
  *(undefined2 *)(puVar3 + -4) = 0x8000;
  *(undefined2 *)(puVar3 + -6) = unaff_CS;
  puVar4 = puVar3 + -8;
  *(undefined2 *)(puVar3 + -8) = 0xe40d;
  iVar2 = func_0x00001694();
  *(int *)(puVar4 + -2) = iVar2;
  *(int *)(puVar4 + -4) = iVar2 >> 0xf;
  *(undefined2 *)(puVar4 + -2) = 0;
  puVar5 = puVar4 + -4;
  *(undefined2 *)(puVar4 + -4) = 0xe41c;
  uVar7 = func_0x000011e3();
  *(int *)(puVar5 + -2) = (int)((ulong)uVar7 >> 0x10);
  *(int *)(puVar5 + -4) = (int)uVar7;
  *(undefined2 *)(puVar5 + -6) = 0;
  puVar6 = puVar5 + -8;
  *(undefined2 *)(puVar5 + -8) = 0xe423;
  func_0x000012e7();
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  *(undefined2 *)(puVar6 + -2) = 0xe44c;
  FUN_1000_1919();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: caseD_0 @ 1000:e58b

/* WARNING: Instruction at (ram,0x0001e58c) overlaps instruction at (ram,0x0001e58b)
    */

void __cdecl16far switchD_1000:c1f2::caseD_0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_CX;
  uint uVar4;
  uint *puVar5;
  int in_BX;
  undefined2 *puVar6;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_CS;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool in_CF;
  bool in_ZF;
  
  uVar7 = unaff_CS;
  if ((in_CX == 1) && (in_CF || in_ZF)) goto LAB_1000_e575;
  while( true ) {
    do {
      unaff_CS = 0x66a;
      iVar2 = func_0x000066ae(uVar7);
      (*(code *)*(undefined2 *)0x5c3f)();
      uVar7 = unaff_CS;
    } while (iVar2 == 0);
    puVar6 = (undefined2 *)(unaff_SI * 4 + unaff_BP + -0x5cc);
    uVar7 = *(undefined2 *)(unaff_BP + -0x1c);
    puVar6[1] = *(undefined2 *)(unaff_BP + -0x1a);
    *puVar6 = uVar7;
    puVar6 = (undefined2 *)(unaff_SI * 4 + unaff_BP + -0xb6c);
    uVar7 = *(undefined2 *)(unaff_BP + -0x20);
    puVar6[1] = *(undefined2 *)(unaff_BP + -0x1e);
    *puVar6 = uVar7;
    in_BX = (unaff_SI + 1) % 0x168;
    if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
      unaff_CS = 0x11c1;
      FUN_1000_4125();
    }
    if ((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) {
      unaff_CS = 0x11c1;
      iVar2 = func_0x000134f7();
      if (iVar2 != 0) {
        return;
      }
    }
    if (*(int *)0x5d92 == 0x6e) break;
    *(int *)(unaff_BP + -2) = *(int *)(unaff_BP + -2) + 1;
    uVar3 = *(uint *)(unaff_BP + -2) & 0xf;
    *(uint *)(unaff_BP + -2) = uVar3;
    if ((uVar3 == 0) && (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
      *(undefined2 *)0x7488 = 3;
    }
    if ((*(int *)(unaff_BP + -6) < *(int *)(unaff_BP + -0x1a)) &&
       (*(int *)(unaff_BP + -4) < *(int *)(unaff_BP + -0x1e))) {
      *(undefined2 *)0x5d78 = 0x3c;
      while (((*(int *)0x5d78 != 0 && (*(int *)0x5d92 != 0x6e)) &&
             (((*(int *)0x5d7e == 0 && (*(int *)0x5d80 == 0)) ||
              (iVar2 = func_0x000134f7(), iVar2 == 0))))) {
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          FUN_1000_4125();
        }
      }
      return;
    }
    puVar5 = (uint *)(in_BX * 4 + unaff_BP + -0x5cc);
    uVar3 = puVar5[1];
    uVar4 = *puVar5 >> 1 | (uint)((uVar3 & 1) != 0) << 0xf;
    puVar5 = (uint *)(in_BX * 4 + unaff_BP + -0x5cc);
    uVar1 = *puVar5;
    *(int *)(unaff_BP + -0x1a) = puVar5[1] + ((int)uVar3 >> 1) + (uint)CARRY2(uVar1,uVar4);
    *(int *)(unaff_BP + -0x1c) = uVar1 + uVar4;
    puVar5 = (uint *)(in_BX * 4 + unaff_BP + -0xb6c);
    uVar3 = puVar5[1];
    uVar4 = *puVar5 >> 1 | (uint)((uVar3 & 1) != 0) << 0xf;
    puVar5 = (uint *)(in_BX * 4 + unaff_BP + -0xb6c);
    uVar1 = *puVar5;
    *(int *)(unaff_BP + -0x1e) = puVar5[1] + ((int)uVar3 >> 1) + (uint)CARRY2(uVar1,uVar4);
    *(int *)(unaff_BP + -0x20) = uVar1 + uVar4;
    *(undefined2 *)0x5df0 = *(undefined2 *)(in_BX * 4 + unaff_BP + -0x5ca);
    unaff_SI = in_BX;
LAB_1000_e575:
    *(undefined2 *)0x5dee = *(undefined2 *)(in_BX * 4 + unaff_BP + -0xb6a);
    uVar7 = unaff_CS;
  }
  return;
}



// Function: FUN_1000_e688 @ 1000:e688

void __cdecl16far FUN_1000_e688(int param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  
  uVar13 = 0;
  uVar12 = 0x8000;
  func_0x00001694();
  uVar11 = func_0x000011e3(0,uVar12,uVar13);
  bVar2 = func_0x000012e7(0,uVar11);
  uVar5 = 0x800 << (bVar2 & 0x1f);
  iVar3 = param_1 + param_2 >> 1;
  uVar12 = (undefined2)((ulong)param_3 >> 0x10);
  iVar7 = (int)param_3;
  puVar8 = (uint *)(iVar7 + param_1 * 4);
  uVar6 = *puVar8;
  puVar9 = (uint *)(iVar7 + param_2 * 4);
  puVar1 = puVar9;
  uVar4 = puVar8[1] + puVar9[1] + (uint)CARRY2(uVar6,*puVar1);
  uVar6 = uVar6 + *puVar1 >> 1 | (uint)((uVar4 & 1) != 0) << 0xf;
  func_0x00001694(0,0x8000,0,(uVar4 >> 1) + ((int)uVar5 >> 0xf) + (uint)CARRY2(uVar6,uVar5),
                  uVar6 + uVar5);
  uVar11 = func_0x000011e3(0);
  uVar6 = func_0x000012e7(0);
  uVar4 = (uint)((ulong)uVar11 >> 0x10);
  piVar10 = (int *)(iVar7 + iVar3 * 4);
  piVar10[1] = ((int)uVar11 - ((int)uVar6 >> 0xf)) - (uint)(uVar4 < uVar6);
  *piVar10 = uVar4 - uVar6;
  if (1 < iVar3 - param_1) {
    FUN_1000_e688(param_1,iVar3,iVar7,uVar12);
    FUN_1000_e688(iVar3,param_2,iVar7,uVar12);
  }
  return;
}



// Function: FUN_1000_e771 @ 1000:e771

void __cdecl16far FUN_1000_e771(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  uint local_140e [1282];
  uint local_a0a [1282];
  int local_6;
  int local_4;
  
  local_4 = 0;
  *(undefined2 *)0x7488 = 3;
  local_6 = *(int *)0x5db0 << 1;
  uVar10 = 0;
  uVar9 = 0x8000;
  func_0x00001694();
  uVar8 = func_0x00001395(0,uVar9,uVar10);
  bVar4 = func_0x000012e7(0,uVar8);
  iVar6 = 8 << (bVar4 & 0x1f);
  for (iVar7 = 0; iVar7 < 0x281; iVar7 = iVar7 + 1) {
    local_140e[iVar7 * 2 + 1] = -*(int *)0x5db2;
    local_a0a[iVar7 * 2 + 1] = 0;
    local_140e[iVar7 * 2] = 0;
  }
  for (iVar7 = 0; uVar9 = 0, iVar7 <= local_6; iVar7 = iVar7 + iVar6) {
    func_0x00001694(0,0x8000,0);
    uVar8 = func_0x000011e3(0);
    iVar5 = func_0x000012e7(0,uVar8);
    local_a0a[iVar7 * 2] = iVar5 + 0x4000;
  }
  for (iVar7 = 0; iVar7 <= local_6 - iVar6; iVar7 = iVar7 + iVar6) {
    FUN_1000_e688(iVar7,iVar7 + iVar6,local_a0a);
  }
  if (local_4 < *(int *)0x5db0) {
    do {
      *(int *)0x5df0 = -*(int *)0x5db0;
      for (iVar6 = 1; iVar6 <= local_6; iVar6 = iVar6 + 1) {
        if ((int)local_140e[iVar6 * 2 + 1] <= *(int *)0x5db2) {
          *(uint *)0x5dee = local_140e[iVar6 * 2 + 1];
          uVar2 = local_140e[iVar6 * 2];
          uVar3 = local_a0a[iVar6 * 2];
          local_140e[iVar6 * 2 + 1] =
               local_140e[iVar6 * 2 + 1] + local_a0a[iVar6 * 2 + 1] +
               (uint)CARRY2(uVar2,local_a0a[iVar6 * 2]);
          local_140e[iVar6 * 2] = uVar2 + uVar3;
          if (*(int *)0x5dee < (int)local_140e[iVar6 * 2 + 1]) {
            (*(code *)*(undefined2 *)0x5c3f)(uVar9,0);
          }
          if (*(int *)0x5db2 <= (int)local_140e[iVar6 * 2 + 1]) {
            local_140e[iVar6 * 2 + 1] = local_140e[iVar6 * 2 + 1] + 1;
            local_4 = local_4 + 1;
          }
        }
        *(int *)0x5df0 = *(int *)0x5df0 + 1;
        uVar10 = uVar9;
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          uVar10 = 0x11c1;
          FUN_1000_4125();
        }
        if ((*(int *)0x5d7e != 0) || (uVar9 = uVar10, *(int *)0x5d80 != 0)) {
          uVar9 = 0x11c1;
          iVar7 = func_0x000134f7(uVar10);
          if (iVar7 != 0) {
            return;
          }
        }
        if (*(int *)0x5d92 == 0x6e) {
          return;
        }
      }
      if (*(int *)0x7484 == 8) {
        *(int *)0x7488 = *(int *)0x7488 + 1;
        if (*(uint *)0x5db6 <= *(uint *)0x7488) {
LAB_1000_e979:
          *(undefined2 *)0x7488 = 3;
        }
      }
      else {
        *(int *)0x5daa = *(int *)0x5daa + 1;
        puVar1 = (uint *)0x5daa;
        *puVar1 = *puVar1 & 0xf;
        if ((*puVar1 == 0) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488))
        goto LAB_1000_e979;
      }
    } while (local_4 < *(int *)0x5db0);
  }
  return;
}



// Function: FUN_1000_e991 @ 1000:e991

/* WARNING: Instruction at (ram,0x0001c544) overlaps instruction at (ram,0x0001c543)
    */
/* WARNING: Removing unreachable block (ram,0x00012013) */
/* WARNING: Removing unreachable block (ram,0x00015dec) */
/* WARNING: Removing unreachable block (ram,0x00015d1e) */
/* WARNING: Removing unreachable block (ram,0x00015e55) */
/* WARNING: Type propagation algorithm not settling */

uint __cdecl16far
FUN_1000_e991(undefined2 param_1,int param_2,uint *param_3,undefined2 param_4,code *param_5)

{
  uint *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  code cVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  undefined2 extraout_DX_04;
  undefined2 extraout_DX_05;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  undefined2 *puVar14;
  undefined1 *unaff_SI;
  int *unaff_DI;
  undefined2 unaff_ES;
  int iVar15;
  int iVar16;
  undefined2 unaff_SS;
  uint unaff_DS;
  undefined1 uVar17;
  char cVar18;
  char cVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  int iVar23;
  int iVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  int local_20;
  int local_1e;
  uint local_1c;
  int local_1a;
  undefined1 *local_18;
  int local_16;
  undefined1 *local_14;
  int local_12;
  int local_10;
  uint local_e;
  uint local_a;
  uint local_8;
  int local_6;
  int local_4;
  
  puVar14 = (undefined2 *)&stack0xfffe;
  local_4 = 0;
  local_6 = 0;
  uVar26 = 0;
  uVar25 = 0x8000;
  func_0x00001694();
  uVar22 = func_0x00001395(0,uVar25,uVar26);
  iVar8 = func_0x000012e7(0,uVar22);
  func_0x00001694(0,0x8000,0);
  uVar22 = func_0x000011e3(0);
  uVar9 = func_0x000012e7(0,uVar22);
  if (4 < uVar9) {
    iVar24 = 1;
    iVar23 = 0;
    FUN_1000_2a3a();
    local_20 = 1;
    uVar9 = local_e;
    do {
      local_8 = local_e;
      iVar16 = 0x11c1;
      if (2 < local_20) {
        return uVar9;
      }
      for (; (int)local_8 <= local_10; local_8 = local_8 + 1) {
        if (local_8 < 10) {
          iVar15 = local_8 * 2;
          cVar19 = (int)local_8 < 0 != iVar15 < 0;
          cVar18 = iVar15 < 0;
          uVar17 = iVar15 == 0;
          iVar16 = 0x1000;
          switch(local_8) {
          case 0:
            do {
              *(int *)0x5df0 = (int)(unaff_SI + *(int *)0x5df0);
              uVar9 = *(uint *)0x5d7a;
              if (*(uint *)0x5da6 <= uVar9) {
                iVar16 = 0x11c1;
                uVar9 = FUN_1000_4125();
              }
              if ((*(int *)0x5d7e != 0) || (iVar8 = iVar16, *(int *)0x5d80 != 0)) {
                iVar8 = 0x11c1;
                uVar10 = func_0x000134f7(iVar16);
                uVar9 = 0;
                if (uVar10 != 0) {
                  return uVar10;
                }
              }
              if (*(int *)0x5d92 == 0x6e) {
                return uVar9;
              }
              while ((*(int *)0x5dee < 0 || (*(int *)0x5db0 < *(int *)0x5df0))) {
                if (*(int *)0x5db2 < *(int *)(iVar24 + -2)) {
                  unaff_DI = (int *)((int)unaff_DI + (int)unaff_SI);
                }
                else {
                  *(int *)(iVar24 + -2) = (int)(unaff_SI + *(int *)(iVar24 + -2));
                }
                while ((*(int *)0x5db0 < (int)unaff_DI && (*(int *)0x5db2 < *(int *)(iVar24 + -2))))
                {
                  *(int *)(iVar24 + -4) = *(int *)(iVar24 + -4) + 1;
                  if (*(int *)(iVar24 + -6) < *(int *)(iVar24 + -4)) {
                    *(undefined2 *)(iVar24 + -8) = 0;
                    *(undefined2 *)(iVar24 + -4) = 0;
                    goto LAB_1000_f838;
                  }
                  unaff_SI = (undefined1 *)(1 << (*(byte *)(iVar24 + -4) & 0x1f));
                  *(undefined2 *)(iVar24 + -2) = 0;
                  unaff_DI = (int *)0x0;
                }
                *(undefined2 *)0x5df0 = unaff_DI;
                *(undefined2 *)0x5dee = *(undefined2 *)(iVar24 + -2);
              }
              bVar7 = (*(code *)*(undefined2 *)0x5c3b)
                                (iVar8,*(undefined2 *)0x5df0,*(undefined2 *)0x5dee);
              *(uint *)0x7488 = (uint)bVar7;
              iVar16 = 0x66a;
              func_0x0000690b(iVar8,unaff_SI,1);
              *(int *)0x5dee = *(int *)0x5dee - (int)unaff_SI;
            } while( true );
          case 1:
            *(int *)(iVar24 + -4) = local_8 << 1;
            func_0x00001694(0x1000,0x8000,0);
            uVar22 = func_0x00001395(0);
            bVar7 = func_0x000012e7(0,uVar22);
            iVar8 = 8 << (bVar7 & 0x1f);
            for (iVar23 = 0; iVar23 < 0x281; iVar23 = iVar23 + 1) {
              *(int *)(iVar23 * 4 + iVar24 + -0x140a) = -*(int *)0x5db2;
              *(undefined2 *)(iVar23 * 4 + iVar24 + -0xa06) = 0;
              *(undefined2 *)(iVar23 * 4 + iVar24 + -0x140c) = 0;
            }
            for (iVar23 = 0; uVar25 = 0, iVar23 <= *(int *)(iVar24 + -4); iVar23 = iVar23 + iVar8) {
              func_0x00001694(0,0x8000,0);
              uVar22 = func_0x000011e3(0);
              iVar16 = func_0x000012e7(0,uVar22);
              *(int *)(iVar23 * 4 + iVar24 + -0xa08) = iVar16 + 0x4000;
            }
            for (iVar23 = 0; iVar23 <= *(int *)(iVar24 + -4) - iVar8; iVar23 = iVar23 + iVar8) {
              FUN_1000_e688(iVar23,iVar23 + iVar8,iVar24 + -0xa08);
            }
            if (*(int *)0x5db0 <= (int)*(uint *)(iVar24 + -2)) {
              return *(uint *)(iVar24 + -2);
            }
            do {
              *(int *)0x5df0 = -*(int *)0x5db0;
              for (iVar8 = 1; iVar8 <= *(int *)(iVar24 + -4); iVar8 = iVar8 + 1) {
                if (*(int *)(iVar8 * 4 + iVar24 + -0x140a) <= *(int *)0x5db2) {
                  *(undefined2 *)0x5dee = *(undefined2 *)(iVar8 * 4 + iVar24 + -0x140a);
                  puVar11 = (uint *)(iVar8 * 4 + iVar24 + -0x140c);
                  uVar9 = *puVar11;
                  puVar12 = (uint *)(iVar8 * 4 + iVar24 + -0xa08);
                  puVar1 = puVar12;
                  uVar10 = *puVar1;
                  piVar13 = (int *)(iVar8 * 4 + iVar24 + -0x140c);
                  piVar13[1] = puVar11[1] + puVar12[1] + (uint)CARRY2(uVar9,*puVar1);
                  *piVar13 = uVar9 + uVar10;
                  if (*(int *)0x5dee < *(int *)(iVar8 * 4 + iVar24 + -0x140a)) {
                    (*(code *)*(undefined2 *)0x5c3f)(uVar25,0);
                  }
                  if (*(int *)0x5db2 <= *(int *)(iVar8 * 4 + iVar24 + -0x140a)) {
                    piVar2 = (int *)(iVar8 * 4 + iVar24 + -0x140a);
                    *piVar2 = *piVar2 + 1;
                    *(int *)(iVar24 + -2) = *(int *)(iVar24 + -2) + 1;
                  }
                }
                *(int *)0x5df0 = *(int *)0x5df0 + 1;
                uVar9 = *(uint *)0x5d7a;
                uVar26 = uVar25;
                if (*(uint *)0x5da6 <= uVar9) {
                  uVar26 = 0x11c1;
                  uVar9 = FUN_1000_4125();
                }
                if ((*(int *)0x5d7e != 0) || (uVar25 = uVar26, *(int *)0x5d80 != 0)) {
                  uVar25 = 0x11c1;
                  uVar10 = func_0x000134f7(uVar26);
                  uVar9 = 0;
                  if (uVar10 != 0) {
                    return uVar10;
                  }
                }
                if (*(int *)0x5d92 == 0x6e) {
                  return uVar9;
                }
              }
              if (*(int *)0x7484 == 8) {
                *(int *)0x7488 = *(int *)0x7488 + 1;
                if (*(uint *)0x5db6 <= *(uint *)0x7488) {
LAB_1000_e979:
                  *(undefined2 *)0x7488 = 3;
                }
              }
              else {
                *(int *)0x5daa = *(int *)0x5daa + 1;
                puVar1 = (uint *)0x5daa;
                *puVar1 = *puVar1 & 0xf;
                if ((*puVar1 == 0) &&
                   (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488))
                goto LAB_1000_e979;
              }
              if (*(int *)0x5db0 <= (int)*(uint *)(iVar24 + -2)) {
                return *(uint *)(iVar24 + -2);
              }
            } while( true );
          case 2:
            goto switchD_1000_ea6e_caseD_2;
          case 3:
            goto switchD_1000_ea6e_caseD_3;
          case 4:
            if (*(int *)0x5c3f == 0x12d) {
              iVar8 = *(int *)0x5db2 / 2;
            }
            else {
              iVar8 = *(int *)0x5db2;
            }
            *(int *)0x60ba = iVar8;
            *(undefined2 *)0x60b2 = *(undefined2 *)0x7488;
            func_0x00001694(0x1000,0x8000,0);
            uVar22 = func_0x000011e3(0);
            iVar8 = func_0x000012e7(0,uVar22);
            *(int *)0x5df0 = *(int *)0x5db0 / 4 + iVar8;
            func_0x00001694(0,0x8000,0);
            uVar22 = func_0x000011e3(0);
            iVar8 = func_0x000012e7(0,uVar22);
            *(int *)0x5dee = *(int *)0x60ba / 4 + iVar8;
            func_0x00001694(0,0x8000,0);
            uVar22 = func_0x000011e3(0);
            iVar8 = func_0x000012e7(0,uVar22);
            *(int *)0x60a8 = iVar8 - *(int *)0x5db0 / 8;
            func_0x00001694(0,0x8000,0);
            uVar22 = func_0x000011e3(0);
            iVar8 = func_0x000012e7(0,uVar22);
            *(int *)0x60aa = iVar8 - *(int *)0x60ba / 8;
            func_0x00001694(0,0x8000,0);
            uVar22 = func_0x000011e3(0);
            uVar25 = func_0x000012e7(0,uVar22);
            *(undefined2 *)0xa48 = uVar25;
            func_0x00001694(0,0x8000,0);
            uVar22 = func_0x000011e3(0);
            uVar25 = func_0x000012e7(0,uVar22);
            *(undefined2 *)0xa4a = uVar25;
            *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x60a8;
            *(int *)0x5dee = *(int *)0x5dee + *(int *)0x60aa;
            if ((*(int *)0x5df0 < *(int *)0x5db0 / 4) || (*(int *)0x5db0 <= *(int *)0x5df0)) {
              iVar8 = *(int *)0x60a8;
              *(int *)0x60a8 = -iVar8;
              *(int *)0x5df0 = *(int *)0x5df0 + -iVar8;
            }
            if ((*(int *)0x5dee < *(int *)0x60ba / 4) || (*(int *)0x60ba <= *(int *)0x5dee)) {
              iVar8 = *(int *)0x60aa;
              *(int *)0x60aa = -iVar8;
              *(int *)0x5dee = *(int *)0x5dee + -iVar8;
            }
            iVar8 = func_0x00001694(0,0x8000,0);
            uVar25 = 0;
            iVar8 = func_0x000012e7(0,iVar8 << 1,(iVar8 >> 0xf) << 1 | (uint)(iVar8 < 0));
            if (iVar8 != 0) {
              if (*(int *)0x7484 == 8) {
                iVar8 = func_0x00001694(0,0x8000,0);
                iVar8 = func_0x000012e7(0,iVar8 << 1,(iVar8 >> 0xf) << 1 | (uint)(iVar8 < 0));
                *(int *)0x60b8 = iVar8 + 1;
              }
              else {
                *(undefined2 *)0x60b8 = 0;
              }
              uVar25 = 0;
              if (*(int *)0x60b8 == 2) {
                *(undefined2 *)0x7488 = *(undefined2 *)0x60b2;
              }
              *(undefined2 *)0x60b4 = *(undefined2 *)0x5df0;
              *(undefined2 *)0x60b6 = *(undefined2 *)0x5dee;
              *(undefined2 *)0x60b0 = *(undefined2 *)0xa4a;
              if (*(int *)0x5c41 != 0x1899) goto LAB_1000_c556;
              if (*(int *)0x5c3f != 0x12d) goto LAB_1000_c556;
              *(int *)0x5dee = *(int *)0x5dee << 1;
              *(int *)0x60b0 = *(int *)0x60b0 << 1;
              goto LAB_1000_c556;
            }
            goto LAB_1000_c58c;
          case 5:
            return local_8;
          case 6:
            uVar9 = (*(code *)param_5)();
            return uVar9;
          case 7:
            local_1c = local_8;
            unaff_SI = (undefined1 *)0x1;
            break;
          case 8:
            if ((iVar23 == 0) || (iVar23 == 0)) {
              pcVar4 = (code *)swi(0x35);
              (*pcVar4)();
              pcVar4 = (code *)swi(0x34);
              uVar22 = (*pcVar4)();
              uVar25 = 0x1000;
              out((int)((ulong)uVar22 >> 0x10),(int)uVar22);
              iVar16 = 0;
              uVar22 = func_0x00000fbe(0x1000);
              iVar8 = *(int *)0x59b4;
              *(undefined2 *)(iVar8 * 4 + 0x5ad6) = (int)((ulong)uVar22 >> 0x10);
              *(undefined2 *)(iVar8 * 4 + 0x5ad4) = (int)uVar22;
              pcVar4 = (code *)swi(0x35);
              (*pcVar4)(uVar25);
            }
            pcVar4 = (code *)swi(0x34);
            uVar22 = (*pcVar4)();
            out((int)((ulong)uVar22 >> 0x10),(int)uVar22);
            uVar22 = func_0x00000fbe(iVar16);
            iVar8 = *(int *)0x59b4;
            *(undefined2 *)(iVar8 * 4 + 0x5afe) = (int)((ulong)uVar22 >> 0x10);
            *(undefined2 *)(iVar8 * 4 + 0x5afc) = (int)uVar22;
            *(int *)0x59b4 = *(int *)0x59b4 + 1;
            if (*(int *)0x59b4 < 10) {
              uVar9 = FUN_1000_89a9(iVar16);
              return uVar9;
            }
            *(undefined2 *)0x59ae = *(undefined2 *)0x5acc;
            func_0x000011e3(0);
            *(undefined2 *)0x5df0 = extraout_DX_01;
            func_0x000011e3(0);
            *(undefined2 *)0x5dee = extraout_DX_02;
            *(int *)0x59ae = *(int *)0x59ae + *(int *)0x59be;
            func_0x000011e3(0);
            *(undefined2 *)0x59a6 = extraout_DX_03;
            func_0x000011e3(0);
            *(undefined2 *)0x59a8 = extraout_DX_04;
            *(undefined2 *)0x59b2 = 0;
            *(undefined2 *)0x59b0 = 1;
            uVar25 = 0;
            do {
              uVar26 = FUN_1000_66ae(*(undefined2 *)0x59a6,*(undefined2 *)0x59a8,
                                     *(undefined2 *)0x59b0);
              *(undefined2 *)0x59b0 = uVar26;
              uVar26 = 0;
              func_0x000011e3(uVar25);
              *(undefined2 *)(*(int *)0x59b2 * 4 + 0x59c4) = extraout_DX_05;
              *(undefined2 *)(*(int *)0x59b2 * 4 + 0x59c6) = *(undefined2 *)0x5dee;
              *(int *)0x59b2 = *(int *)0x59b2 + 1;
              if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
                uVar26 = 0x11c1;
                FUN_1000_4125();
              }
              uVar25 = uVar26;
            } while (*(int *)0x59b0 == 0);
            *(undefined2 *)0x59b4 = 0;
            while (*(int *)0x59b4 < *(int *)0x59b2) {
              *(undefined2 *)0x5df0 = *(undefined2 *)(*(int *)0x59b4 * 4 + 0x59c4);
              *(undefined2 *)0x5dee = *(undefined2 *)(*(int *)0x59b4 * 4 + 0x59c6);
              *(undefined2 *)0x59b0 = 1;
              if (*(int *)0x59c0 == 0) {
                *(uint *)0x7488 = *(uint *)0x59c2 & *(uint *)0x5dc0;
              }
              else {
                *(int *)0x7488 = *(int *)0x7488 + 1;
                if (*(uint *)0x5db6 <= *(uint *)0x7488) {
                  *(undefined2 *)0x7488 = 3;
                }
              }
              do {
                uVar25 = FUN_1000_66ae(0,0,*(undefined2 *)0x59b0);
                *(undefined2 *)0x59b0 = uVar25;
                *(undefined2 *)0x59a2 = *(undefined2 *)0x5df0;
                *(undefined2 *)0x59a4 = *(undefined2 *)0x5dee;
                *(int *)0x5df0 = *(int *)0x59aa + *(int *)0x59a2;
                *(int *)0x5dee = *(int *)0x59ac + *(int *)0x59a4;
                (*(code *)*(undefined2 *)0x5c3f)(uVar26,1);
                *(int *)0x5df0 = *(int *)0x59aa - *(int *)0x59a2;
                *(int *)0x5dee = *(int *)0x59ac - *(int *)0x59a4;
                (*(code *)*(undefined2 *)0x5c3f)(uVar26,1);
                *(int *)0x5df0 = *(int *)0x59aa + *(int *)0x59a2;
                *(int *)0x5dee = *(int *)0x59ac - *(int *)0x59a4;
                (*(code *)*(undefined2 *)0x5c3f)(uVar26,1);
                *(int *)0x5df0 = *(int *)0x59aa - *(int *)0x59a2;
                *(int *)0x5dee = *(int *)0x59ac + *(int *)0x59a4;
                (*(code *)*(undefined2 *)0x5c3f)(uVar26,1);
                *(undefined2 *)0x5df0 = *(undefined2 *)0x59a2;
                *(undefined2 *)0x5dee = *(undefined2 *)0x59a4;
                *(int *)0x5cbb = *(int *)0x5cbb + 1;
                if ((*(int *)0x59c0 == 0) &&
                   (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
                  *(undefined2 *)0x7488 = 3;
                }
                if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
                  uVar26 = 0x11c1;
                  FUN_1000_4125();
                }
              } while (*(int *)0x59b0 == 0);
              *(int *)0x59b4 = *(int *)0x59b4 + 1;
            }
            iVar8 = *(int *)0x59bc;
            *(int *)0x59bc = -iVar8;
            *(int *)0x59ba = *(int *)0x59ba + -iVar8;
            *(undefined2 *)0x5df0 = *(undefined2 *)0x59aa;
            uVar9 = *(uint *)0x59ac;
            *(uint *)0x5dee = uVar9;
            return uVar9;
          case 9:
            goto switchD_1000_ea6e_caseD_9;
          }
        }
        local_12 = local_16;
        for (local_14 = local_18;
            ((int)unaff_DI * local_12 <= (int)unaff_DI * local_1a &&
            ((int)unaff_SI * (int)local_14 <= (int)((int)unaff_SI * local_1c)));
            local_14 = local_14 + (int)unaff_SI) {
          *(int *)0x5df0 = local_6;
          *(int *)0x5dee = local_4;
          *(undefined2 *)0x7488 = 3;
          local_1e = 1;
          iVar15 = iVar16;
          do {
            local_1e = func_0x000066ae(iVar15,local_12,local_14,local_1e);
            if (iVar8 + 2 < 9) {
              func_0x000067bb(0x66a,iVar8 + 2);
            }
            else {
              *(int *)0x7488 = *(int *)0x7488 + 1;
              if (*(uint *)0x5db6 <= *(uint *)0x7488) {
                *(undefined2 *)0x7488 = 3;
              }
            }
            iVar15 = 0x66a;
            iVar23 = 0;
            (*(code *)*(undefined2 *)0x5c3f)(0x66a);
          } while (local_1e == 0);
          uVar9 = *(uint *)0x5d7a;
          if (*(uint *)0x5da6 <= uVar9) {
            iVar15 = 0x11c1;
            uVar9 = FUN_1000_4125();
          }
          if ((*(int *)0x5d7e != 0) || (iVar16 = iVar15, *(int *)0x5d80 != 0)) {
            iVar16 = 0x11c1;
            uVar10 = func_0x000134f7(iVar15);
            uVar9 = 0;
            if (uVar10 != 0) {
              return uVar10;
            }
          }
          if (*(int *)0x5d92 == 0x6e) {
            return uVar9;
          }
          local_12 = local_12 + (int)unaff_DI;
        }
      }
      local_20 = local_20 + 1;
      iVar23 = iVar16;
      uVar9 = FUN_1000_2a3a(iVar16,0);
    } while( true );
  }
  uVar25 = 0x1000;
  switch(uVar9) {
  case 0:
    lVar21 = FUN_1000_12f3(param_1,param_2,0x88f8,0);
    if (0x224f < lVar21) {
      iVar8 = (uint)lVar21 + 0xddb0;
      iVar23 = (int)((ulong)lVar21 >> 0x10) - (uint)((uint)lVar21 < 0x2250);
      *(uint *)CONCAT22(param_4,param_3) = *(uint *)CONCAT22(param_4,param_3) + 1;
      iVar24 = FUN_1000_12e4(iVar8,iVar23,0x2238,0);
      *(uint *)CONCAT22(param_4,param_3) = *(uint *)CONCAT22(param_4,param_3) + iVar24;
      lVar21 = FUN_1000_12f3(iVar8,iVar23,0x2238,0);
    }
    if (*(int *)0x47ce != 0) {
      uVar26 = 0;
      uVar25 = FUN_1000_12f3(lVar21,0x18,0);
      uVar25 = FUN_1000_12e4(lVar21,0x18,0,uVar25);
      iVar8 = FUN_1000_6056(*(uint *)CONCAT22(param_4,param_3) - 0x7b2,0,uVar25,uVar26);
      if (iVar8 != 0) {
        lVar21 = lVar21 + 1;
      }
    }
    cVar6 = (code)FUN_1000_12f3(lVar21,0x18,0);
    ((code *)param_5)[1] = cVar6;
    lVar20 = FUN_1000_12e4(lVar21,0x18,0);
    lVar21 = lVar20 + 1;
    if ((*(uint *)CONCAT22(param_4,param_3) & 3) == 0) {
      if (lVar21 < 0x3d) {
        if (lVar21 == 0x3c) {
          *(undefined1 *)((int)param_3 + 3) = 2;
          *(undefined1 *)(param_3 + 1) = 0x1d;
          return (uint)lVar20;
        }
      }
      else {
        lVar21 = CONCAT22((int)((ulong)lVar21 >> 0x10) - (uint)((int)lVar21 == 0),(uint)lVar20);
      }
    }
    *(undefined1 *)((int)param_3 + 3) = 0;
    for (; cVar18 = *(char *)(*(char *)((int)param_3 + 3) + 0x479c), (int)cVar18 < lVar21;
        lVar21 = lVar21 - (int)cVar18) {
      cVar18 = *(char *)(*(char *)((int)param_3 + 3) + 0x479c);
      *(char *)((int)param_3 + 3) = *(char *)((int)param_3 + 3) + '\x01';
    }
    *(char *)((int)param_3 + 3) = *(char *)((int)param_3 + 3) + '\x01';
    param_1._0_1_ = (undefined1)lVar21;
    *(undefined1 *)(param_3 + 1) = (undefined1)param_1;
    return CONCAT11(cVar18 >> 7,(undefined1)param_1);
  case 1:
    return uVar9;
  case 2:
    local_a = uVar9;
    if (((uVar9 & 0x7fff) == 0) && (*(int *)0x5c3f == 0x12d)) {
      iVar8 = 0;
      do {
        iVar23 = 0;
        do {
          piVar2 = (int *)(iVar8 * 8 + iVar23 * 2 + 0xa8c);
          *piVar2 = *piVar2 << 1;
          iVar23 = iVar23 + 1;
        } while (iVar23 < 4);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 8);
      local_4 = local_4 << 1;
      local_6 = local_6 << 1;
      local_8 = local_8 << 1;
      local_a = uVar9 << 1;
    }
    uVar9 = FUN_1000_2a3a(0x1000,1);
    bVar5 = true;
    iVar8 = 0;
    do {
      if (5 < iVar8) {
        return uVar9;
      }
      *(int *)0x5dee = -*(int *)0x5db2;
      while (uVar9 = *(uint *)0x5dee, (int)uVar9 <= *(int *)0x5db2) {
        *(int *)0x5df0 = -*(int *)0x5db0;
        while (*(int *)0x5df0 <= *(int *)0x5db0) {
          uVar9 = (int)*(uint *)0x5df0 >> 0xf;
          uVar10 = (int)*(uint *)0x5dee >> 0xf;
          if ((int)((*(uint *)0x5df0 ^ uVar9) - uVar9) < (int)((*(uint *)0x5dee ^ uVar10) - uVar10))
          {
            uVar9 = *(uint *)0x5dee;
          }
          else {
            uVar9 = *(uint *)0x5df0;
          }
          *(uint *)0x7488 = (uVar9 ^ (int)uVar9 >> 0xf) - ((int)uVar9 >> 0xf) & *(uint *)0x5dc0;
          if (*(uint *)0x7488 < 3) {
            *(undefined2 *)0x7488 = 3;
          }
          if ((((iVar8 < 5) && (*(int *)0x5df0 <= local_4)) &&
              (-*(int *)0x5df0 == local_4 || -local_4 < *(int *)0x5df0)) &&
             ((*(int *)0x5dee <= local_6 &&
              (-*(int *)0x5dee == local_6 || -local_6 < *(int *)0x5dee)))) {
            if (bVar5) {
              FUN_1000_2a3a(0x11c1,0);
              bVar5 = false;
            }
            if (((*(int *)0x5df0 <= (int)local_8) &&
                (-*(int *)0x5df0 == local_8 || (int)-local_8 < *(int *)0x5df0)) &&
               ((*(int *)0x5dee <= (int)local_a &&
                (-*(int *)0x5dee == local_a || (int)-local_a < *(int *)0x5dee)))) {
              iVar23 = 0;
              while (0 < *(int *)(iVar8 * 0xc + iVar23 * 2 + 0xa50)) {
                iVar24 = *(int *)(iVar8 * 0xc + iVar23 * 2 + 0xa50) + -1;
                if ((((*(int *)(iVar24 * 8 + 0xa8c) <= *(int *)0x5df0) &&
                     (*(int *)0x5df0 <= *(int *)(iVar24 * 8 + 0xa90))) &&
                    (*(int *)0x5dee <= *(int *)(iVar24 * 8 + 0xa8e))) &&
                   (*(int *)(iVar24 * 8 + 0xa92) <= *(int *)0x5dee)) {
                  *(undefined2 *)0x7488 = 1;
                  break;
                }
                iVar23 = iVar23 + 1;
              }
            }
          }
          else if (!bVar5) {
            FUN_1000_2a3a(0x11c1,1);
            bVar5 = true;
          }
          (*(code *)*(undefined2 *)0x5c3f)(0x11c1,0);
          *(int *)0x5df0 = *(int *)0x5df0 + 1;
        }
        if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
          *(int *)0x5dee = *(int *)0x5dee + 1;
        }
        uVar9 = *(uint *)0x5d7a;
        if (*(uint *)0x5da6 <= uVar9) {
          uVar9 = FUN_1000_4125();
        }
        if (((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) &&
           (uVar10 = func_0x000134f7(0x11c1), uVar9 = 0, uVar10 != 0)) {
          return uVar10;
        }
        if (*(int *)0x5d92 == 0x6e) {
          return uVar9;
        }
        *(int *)0x5dee = *(int *)0x5dee + 1;
      }
      iVar8 = iVar8 + 1;
      if (iVar8 == 5) {
        uVar9 = FUN_1000_2a3a(0x11c1,0);
      }
    } while( true );
  case 3:
    *(undefined2 *)0x5d8e = 1;
    FUN_1000_3b39(0x1000);
    func_0x000192c2(0x11c1);
    *(undefined2 *)0x5d9c = 0x24;
    *(undefined2 *)0x5d9a = 6;
    *(undefined2 *)0x5d98 = 0x18;
    lVar21 = func_0x00004b1f(0x1899,0x5cc7);
    if (lVar21 == 0) {
      func_0x000045d4(0,0x441c);
      func_0x000045d4(0,0x441c);
      func_0x00002553(0,0);
    }
    local_4 = func_0x00014afd(0,param_1,param_2,param_3,&local_6);
    func_0x000192e9(0x11c1);
    FUN_1000_4faf();
    iVar16 = 0x11c1;
    func_0x00011c1a(0x11c1,0x70,1);
    if (*(int *)0x5dc8 != 0) {
      local_8 = *(int *)0x5dc8 << 2;
switchD_1000_ea6e_caseD_9:
      iVar8 = func_0x00001f66(iVar16,(int)*(char *)((int)*(undefined4 *)(param_2 + local_8) +
                                                   local_6));
      if (iVar8 != 0x69) {
        *(undefined2 *)0x5d80 = 1;
        thunk_FUN_1000_2075(0,1,0x97a);
      }
    }
    if ((*(int *)0x5dce == 0) && (*(int *)0x5dbc == 0)) {
      FUN_1000_2553();
    }
    else {
      *(undefined2 *)0x5d80 = 0;
    }
    FUN_1000_3db6(1);
    uVar25 = 0x11c1;
    func_0x00014936(0x11c1,local_4);
    if (((*(int *)0x5dce != 0) || (*(int *)0x5dca != 0)) || (*(int *)0x5dbc != 0)) {
      *(undefined2 *)0x5dd2 = 1;
    }
    if (*(int *)0x5dd2 == 0) {
      *(undefined1 *)0x6007 = 3;
      *(undefined1 *)0x6006 = 5;
      *(undefined1 *)0x6009 = 3;
      *(undefined1 *)0x6008 = 0x1f;
      uVar25 = 0;
      func_0x0000320e(0x11c1,0x16,0x6006);
    }
    func_0x00011cd9(uVar25);
    func_0x00000fea(0x11c1,0x1c7,0x11c1);
    func_0x00003bcb(0,0x16,0x2d8,0x11c1);
    func_0x00003bcb(0,8,0x2d8,0x11c1);
    func_0x00003bcb(0,4,0x2d8,0x11c1);
    uVar25 = 0;
    func_0x00003bcb(0,0xb,0x2d8,0x11c1);
    if (((*(int *)0x5dce == 0) && (*(int *)0x5d80 == 0)) && (*(int *)0x5dbc == 0)) {
      *(undefined2 *)0x5d78 = 0x28;
      if ((*(int *)0x5dca == 0) || (*(int *)0x5dcc == 0)) {
        uVar25 = 0x11c1;
        func_0x00012a17(0,0x370,0x28);
      }
      if (*(int *)0x5dcc == 0) {
        uVar25 = 0x1899;
        FUN_1000_988b();
      }
      if ((*(int *)0x5dc4 == 0) && ((*(int *)0x5dca == 0 || (*(int *)0x5dcc == 0)))) {
        func_0x000025fc(uVar25,0xe);
        func_0x0000277a(0,0x98c);
        func_0x0000277a(0,0x9a4);
        func_0x000025fc(0,0x8c);
        func_0x0000277a(0,0x9a8);
        func_0x000025fc(0,0xe);
        func_0x0000277a(0,0x9b8);
        func_0x0000277a(0,0x9be);
        uVar25 = 0;
        func_0x000025fc(0,3);
      }
    }
    FUN_1000_863f(uVar25);
    (*(code *)*(undefined2 *)0x5c47)(0x17f5,0);
    do {
    } while (*(int *)0x5d78 != 0);
    *(undefined2 *)0x5d8a = 0;
    (*(code *)*(undefined2 *)0x5c43)(0x17f5,1);
    func_0x00004332(0x17f5);
    (*(code *)*(undefined2 *)0x5c37)(0,*(int *)0x5d94 + *(int *)0x5dec,*(undefined2 *)0x5d96);
    uVar25 = func_0x00001ef6(0,0,0);
    func_0x00001683(0,uVar25);
    while( true ) {
      iVar8 = func_0x00002553(0,1);
      if (iVar8 == 0) break;
      func_0x00002553(0,0);
    }
    *(undefined2 *)0x5d7c = 0;
    *(undefined2 *)0x5d7e = 0;
    *(undefined2 *)0x5d8e = 0;
    uVar25 = 0;
    while (*(int *)0x5d80 == 0) {
      if (*(int *)0x5da0 == 0) {
        uVar25 = 0x11c1;
        FUN_1000_54d3();
      }
      else {
        func_0x00015149(uVar25);
        uVar25 = 0x11c1;
      }
    }
    func_0x00011c1a(uVar25,0x70,1);
    FUN_1000_2a3a(0x11c1,0);
    if (((*(int *)0x5dce == 0) && (*(int *)0x5dca == 0)) && (*(int *)0x5d84 == 0)) {
      func_0x00013d71(0x11c1);
    }
    uVar26 = 0x11c1;
    uVar25 = uVar26;
    if (*(int *)0x5dca == 0) {
      while( true ) {
        uVar25 = 0;
        iVar8 = func_0x00002553(uVar26,1);
        if (iVar8 == 0) break;
        uVar26 = 0;
        func_0x00002553(0,0);
      }
    }
    uVar26 = 0x1899;
    func_0x0001955d(uVar25,1);
    if (((*(int *)0x5dca == 0) && (*(int *)0x5dce == 0)) && ((unaff_DS | 0x5cc7) != 0)) {
      iVar8 = func_0x00001017(0x1899,0x5cc7);
      if (iVar8 == 0) {
        uVar26 = 0;
        lVar21 = func_0x0000598f(0,0x5cc7);
        if (lVar21 != 0) {
          iVar8 = func_0x00001f66(0,(int)*(char *)((int)lVar21 + -1));
          uVar26 = 0;
          func_0x0000128e(0,iVar8 + -0x61);
        }
      }
      else {
        uVar26 = 0;
        func_0x000045d4(0,0x441c);
      }
    }
    if (*(int *)0x5d84 != 0) {
      func_0x000045d4(uVar26,0x441c);
      uVar26 = 0;
      func_0x000011a8(0,0xe);
    }
    func_0x00003db4(uVar26);
    if (((*(int *)0x5dce == 0) && (*(int *)0x5dca == 0)) && (*(int *)0x5dbc == 0)) {
      uVar9 = FUN_1000_2956(0,0);
    }
    else {
      uVar9 = func_0x000011a8(0,0);
    }
    return uVar9;
  case 4:
    *(char *)(unaff_DI + 8) = ((char)unaff_DI[8] - (char)((int)uVar9 >> 0xf)) - ((int)uVar9 < 0);
  }
  do {
    if (*(int *)0x5c3f == 0x12d) {
      *(int *)0x5dee = *(int *)0x5dee + -1;
      *(int *)0x60b0 = *(int *)0x60b0 + -1;
    }
LAB_1000_c556:
    do {
      if (*(int *)0x60b0 < 0) {
        *(undefined2 *)0x5df0 = *(undefined2 *)0x60b4;
        *(undefined2 *)0x5dee = *(undefined2 *)0x60b6;
        if ((*(int *)0x60b8 == 0) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
          *(undefined2 *)0x7488 = 3;
        }
        *(undefined2 *)0x60b2 = *(undefined2 *)0x7488;
LAB_1000_c58c:
        if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
          *(int *)0x5dee = *(int *)0x5dee << 1;
          *(int *)0xa4a = *(int *)0xa4a << 1;
        }
        func_0x00001694(uVar25,0x8000,0);
        uVar22 = func_0x000011e3(0);
        uVar25 = func_0x000012e7(0,uVar22);
        *(undefined2 *)0x7488 = uVar25;
        *(undefined2 *)0x60a6 = 0xffff;
        while( true ) {
          *(int *)0x60a6 = *(int *)0x60a6 + 1;
          if (3 < (int)*(uint *)0x60a6) break;
          *(undefined2 *)0x60a2 = *(undefined2 *)((*(uint *)0x60a6 & 1) * 2 + 0xa48);
          *(undefined2 *)0x60ac = *(undefined2 *)(*(int *)0x60a6 * 2 + 0xa38);
          *(undefined2 *)0x60ae = *(undefined2 *)(*(int *)0x60a6 * 2 + 0xa40);
          *(undefined2 *)0x60a4 = 0;
          while (iVar8 = *(int *)0x60a4, *(int *)0x60a4 = *(int *)0x60a4 + 1, iVar8 < *(int *)0x60a2
                ) {
            (*(code *)*(undefined2 *)0x5c3f)(0,*(undefined2 *)0x5caf);
            *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x60ac;
            iVar8 = *(int *)0x60ae;
            *(int *)0x5dee = *(int *)0x5dee + iVar8;
            if (((*(int *)0x60ae != 0) && (*(int *)0x5c41 == 0x1899)) && (*(int *)0x5c3f == 0x12d))
            {
              *(int *)0x5dee = *(int *)0x5dee + iVar8;
              *(int *)0x60a4 = *(int *)0x60a4 + 1;
            }
            *(int *)0x5cbb = *(int *)0x5cbb + 1;
          }
        }
        return *(uint *)0x60a6;
      }
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        uVar25 = 0x11c1;
        FUN_1000_4125();
      }
      if (*(int *)0x60b8 == 1) {
        *(undefined2 *)0x7488 = *(undefined2 *)0x60b2;
      }
      *(undefined2 *)0x60a2 = *(undefined2 *)0xa48;
      while (-1 < *(int *)0x60a2) {
        (*(code *)*(undefined2 *)0x5c3f)(uVar25,*(undefined2 *)0x5caf);
        *(int *)0x5df0 = *(int *)0x5df0 + -1;
        *(int *)0x60a2 = *(int *)0x60a2 + -1;
        if ((*(int *)0x60b8 == 1) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
          *(undefined2 *)0x7488 = 3;
        }
        *(int *)0x5cbb = *(int *)0x5cbb + 1;
      }
      *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0xa48 + 1;
      *(int *)0x5dee = *(int *)0x5dee + -1;
      *(int *)0x60b0 = *(int *)0x60b0 + -1;
      if ((*(int *)0x60b8 == 2) &&
         (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
        *(undefined2 *)0x7488 = 3;
      }
    } while (*(int *)0x5c41 != 0x1899);
  } while( true );
switchD_1000_ea6e_caseD_3:
  if (iVar23 - 1U == 0 || (bool)uVar17 != false) {
    if ((bool)uVar17 || cVar19 != cVar18) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
code_r0x00010978:
    *unaff_DI = *unaff_DI + puVar14[-6];
    **(undefined2 **)(puVar14 + 9) = puVar14[-7];
    return local_8;
  }
  *(uint *)((undefined1 *)((int)puVar14 + (int)unaff_DI) + -0x7c3d) =
       *(uint *)((undefined1 *)((int)puVar14 + (int)unaff_DI) + -0x7c3d) ^ iVar23 - 1U;
  iVar23 = iVar23 + -0x13;
  unaff_DI = (int *)((int)unaff_DI + iVar23);
  pcVar4 = (code *)swi(0x3b);
  (*pcVar4)();
  puVar3 = unaff_SI;
  unaff_SI = unaff_SI + 1;
  out(*puVar3,extraout_DX_00);
  iVar8 = FUN_1000_d0dc();
  local_8 = 0;
  if (iVar8 != 0) {
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    FUN_1000_0e28(iVar8);
    if ((int)unaff_DI < 0) {
      pcVar4 = (code *)swi(0x3a);
      local_8 = (*pcVar4)();
    }
    else {
      pcVar4 = (code *)swi(0x3a);
      local_8 = (*pcVar4)();
      puVar14 = (undefined2 *)*puVar14;
    }
  }
  cVar19 = '\0';
  cVar18 = *(char *)((int)puVar14 + -5) < '\0';
  uVar17 = *(char *)((int)puVar14 + -5) == '\0';
  if ((bool)uVar17) {
    unaff_ES = (undefined2)((ulong)*(int **)(puVar14 + 7) >> 0x10);
    unaff_DI = (int *)*(int **)(puVar14 + 7);
    goto code_r0x00010978;
  }
  pcVar4 = (code *)swi(0x35);
  local_8 = (*pcVar4)();
  goto switchD_1000_ea6e_caseD_3;
LAB_1000_f838:
  if (*(int *)(iVar24 + -10) < *(int *)(iVar24 + -4)) {
    uVar9 = *(uint *)(iVar24 + -8);
    if ((int)uVar9 < *(int *)(iVar24 + -10)) {
      do {
        *(undefined2 *)(iVar24 + -4) = 0;
        while (*(int *)(iVar24 + -4) <= *(int *)(iVar24 + -10)) {
          iVar23 = (int)unaff_SI * *(int *)(iVar24 + -4);
          if (*(int *)(*(int *)(iVar24 + -4) * 2 + 0x738e) != 0) {
            while (*(int *)(*(int *)(iVar24 + -4) * 2 + 0x73e2) == 0) {
              piVar2 = (int *)(*(int *)(iVar24 + -4) * 2 + 0x73b8);
              *piVar2 = (int)(unaff_SI + *piVar2);
              if (*(int *)0x5db2 < *(int *)(*(int *)(iVar24 + -4) * 2 + 0x73b8)) {
                *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x738e) = 0;
                *(int *)(iVar24 + -8) = *(int *)(iVar24 + -8) + 1;
                break;
              }
              bVar7 = (*(code *)*(undefined2 *)0x5c3b)
                                (iVar8,iVar23,*(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x73b8));
              *(uint *)(*(int *)(iVar24 + -4) * 2 + 0x73e2) = (uint)bVar7;
              *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x740c) =
                   *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x73b8);
            }
            *(int *)0x5dee = *(int *)(*(int *)(iVar24 + -4) * 2 + 0x73b8) + -1;
            if (-1 < *(int *)0x5dee) {
              *(undefined2 *)0x7488 = *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x73e2);
              *(int *)0x5df0 = iVar23;
              while (*(int *)0x5df0 <= (int)(unaff_SI + iVar23 + -1)) {
                (*(code *)*(undefined2 *)0x5c3f)(iVar8,1);
                *(int *)0x5df0 = *(int *)0x5df0 + 1;
              }
              *(int *)0x5df0 = iVar23;
            }
            iVar16 = *(int *)(*(int *)(iVar24 + -4) * 2 + 0x73b8);
            *(undefined2 *)0x5dee = unaff_SI + iVar16 + -1;
            if (*(int *)0x5db2 < (int)(unaff_SI + iVar16 + -1)) {
              *(undefined2 *)0x5dee = *(undefined2 *)0x5db2;
            }
            *(undefined2 *)0x7488 = 0;
            *(int *)0x5df0 = iVar23;
            while (*(int *)0x5df0 <= (int)(unaff_SI + iVar23 + -1)) {
              (*(code *)*(undefined2 *)0x5c3f)(iVar8,1);
              *(int *)0x5df0 = *(int *)0x5df0 + 1;
            }
            *(int *)0x5df0 = iVar23;
            iVar23 = *(int *)(iVar24 + -4) * 2;
            piVar2 = (int *)(iVar23 + 0x73b8);
            *piVar2 = *piVar2 + -1;
            if (*(int *)(iVar23 + 0x73b8) <= -(int)unaff_SI) {
              *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x73b8) =
                   *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x740c);
              *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x73e2) = 0;
            }
          }
          uVar9 = *(uint *)0x5d7a;
          iVar23 = iVar8;
          if (*(uint *)0x5da6 <= uVar9) {
            iVar23 = 0x11c1;
            uVar9 = FUN_1000_4125();
          }
          if ((*(int *)0x5d7e != 0) || (iVar8 = iVar23, *(int *)0x5d80 != 0)) {
            iVar8 = 0x11c1;
            uVar10 = func_0x000134f7(iVar23);
            uVar9 = 0;
            if (uVar10 != 0) {
              return uVar10;
            }
          }
          if (*(int *)0x5d92 == 0x6e) {
            return uVar9;
          }
          *(int *)(iVar24 + -4) = *(int *)(iVar24 + -4) + 1;
        }
        uVar9 = *(uint *)(iVar24 + -8);
      } while ((int)uVar9 < *(int *)(iVar24 + -10));
    }
    *(undefined2 *)0x5cb1 = 1;
    return uVar9;
  }
  *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x738e) = 1;
  iVar23 = *(int *)(iVar24 + -4);
  func_0x00001694(iVar8,0x8000,0);
  uVar22 = func_0x000011e3(0);
  iVar8 = 0;
  iVar16 = func_0x000012e7(0,uVar22);
  *(int *)(*(int *)(iVar24 + -4) * 2 + 0x73b8) = iVar16 * (int)unaff_SI;
  *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x740c) =
       *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x73b8);
  do {
    bVar7 = (*(code *)*(undefined2 *)0x5c3b)
                      (0,(int)unaff_SI * iVar23,*(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x73b8))
    ;
    *(uint *)(*(int *)(iVar24 + -4) * 2 + 0x73e2) = (uint)bVar7;
    if (*(int *)(*(int *)(iVar24 + -4) * 2 + 0x73e2) != 0) goto LAB_1000_f823;
    piVar2 = (int *)(*(int *)(iVar24 + -4) * 2 + 0x73b8);
    *piVar2 = (int)(unaff_SI + *piVar2);
    if (*(int *)0x5db2 < *(int *)(*(int *)(iVar24 + -4) * 2 + 0x73b8)) {
      *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x73b8) = 0;
    }
  } while (*(int *)(*(int *)(iVar24 + -4) * 2 + 0x73b8) !=
           *(int *)(*(int *)(iVar24 + -4) * 2 + 0x740c));
  *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x738e) = 0;
  *(int *)(iVar24 + -8) = *(int *)(iVar24 + -8) + 1;
LAB_1000_f823:
  *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x740c) =
       *(undefined2 *)(*(int *)(iVar24 + -4) * 2 + 0x73b8);
  *(int *)(iVar24 + -4) = *(int *)(iVar24 + -4) + 1;
  goto LAB_1000_f838;
switchD_1000_ea6e_caseD_2:
  while( true ) {
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    pcVar4 = (code *)swi(0x37);
    (*pcVar4)();
    if (iVar23 != 0) {
      uRam00010020 = 0;
      *(undefined2 *)0x22 = 0;
      uVar9 = *(uint *)0x4114;
      if (2 < *(int *)0x4100) {
        uVar9 = uVar9 | 2;
      }
      pcVar4 = (code *)swi(0x35);
      (*pcVar4)();
      out(*unaff_SI,extraout_DX);
      *(uint *)0x2 = *(uint *)0x2 & uVar9;
      return 0;
    }
    iVar8 = 1;
    unaff_SI[0x28] = unaff_SI[0x28] + (char)((uint)iVar15 >> 8);
    pcVar4 = (code *)swi(0x37);
    (*pcVar4)();
    if (iVar8 != 0) break;
    iVar23 = 0;
  }
  iVar8 = 0xb;
  do {
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  pcVar4 = (code *)swi(0x21);
  (*pcVar4)();
  pcVar4 = (code *)swi(0x21);
  uVar9 = (*pcVar4)();
  return uVar9;
}



// Function: FUN_1000_eeb4 @ 1000:eeb4

/* WARNING: Removing unreachable block (ram,0x0001f14d) */
/* WARNING: Removing unreachable block (ram,0x0001f158) */

void __cdecl16far FUN_1000_eeb4(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined2 uVar13;
  undefined2 unaff_DS;
  undefined4 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  int local_24;
  int local_22;
  int local_18;
  int local_8;
  int local_6;
  
  uVar16 = 0;
  uVar15 = 0x8000;
  func_0x00001694();
  uVar14 = func_0x000011e3(0,uVar15,uVar16);
  local_18 = func_0x000012e7(0,uVar14);
  local_18 = (*(int *)0x5db0 * 3) / 8 + local_18;
  func_0x00001694(0,0x8000,0);
  uVar14 = func_0x00001395(0);
  uVar13 = 0;
  uVar5 = func_0x000012e7(0,uVar14);
  uVar15 = *(undefined2 *)0x5dba;
  local_8 = local_18 + 3;
  iVar6 = *(int *)(uVar5 * 0x10 + 0xacc) * *(int *)0x5db0;
  iVar7 = *(int *)(uVar5 * 0x10 + 0xace) * *(int *)0x5db0;
  iVar8 = *(int *)(uVar5 * 0x10 + 0xad0) * *(int *)0x5db2;
  iVar1 = *(int *)(uVar5 * 0x10 + 0xad4);
  iVar2 = *(int *)(uVar5 * 0x10 + 0xad6);
  local_18 = *(int *)(uVar5 * 0x10 + 0xad8) * local_18;
  uVar16 = *(undefined2 *)(uVar5 * 0x10 + 0xada);
  if ((uVar5 & 1) != 0) {
    local_18 = local_18 >> 1;
  }
  uVar5 = iVar8 - *(int *)(uVar5 * 0x10 + 0xad2) * *(int *)0x5db2;
  uVar11 = (int)uVar5 >> 0xf;
  iVar9 = (uVar5 ^ uVar11) - uVar11;
  iVar12 = iVar7 - iVar1 * iVar9;
  local_24 = iVar12 - local_18;
  bVar3 = true;
  bVar4 = false;
  local_22 = iVar12;
  while( true ) {
    if (local_24 == iVar6) {
      *(undefined2 *)0x5cb1 = 1;
      *(undefined2 *)0x5dba = uVar15;
      return;
    }
    if (bVar3) {
      *(int *)0x5df0 = local_22;
      *(int *)0x5dee = iVar8;
      *(int *)0x7488 = local_8;
      iVar10 = iVar9;
      if ((iVar12 < 0) && (local_22 < iVar7)) {
        *(int *)0x5dee = iVar8 + (iVar7 - local_22) * iVar2;
        *(int *)0x5df0 = iVar7;
        iVar10 = iVar9 - (iVar7 - local_22);
      }
      if ((0 < iVar12) && (iVar7 < local_22)) {
        *(int *)0x5dee = iVar8 + (local_22 - iVar7) * iVar2;
        *(int *)0x5df0 = iVar7;
        iVar10 = iVar10 - (local_22 - iVar7);
      }
      local_6 = 0;
      while ((local_6 <= iVar10 &&
             ((*(code *)*(undefined2 *)0x5c3f)(uVar13,uVar16), *(int *)0x5df0 != iVar6))) {
        *(int *)0x5df0 = *(int *)0x5df0 + iVar1;
        *(int *)0x5dee = *(int *)0x5dee + iVar2;
        local_6 = local_6 + 1;
      }
      if ((*(int *)0x7484 == 8) && (local_8 = local_8 + -1, local_8 < 3)) {
        local_8 = *(int *)0x5db6 + -1;
      }
    }
    if (bVar4) {
      *(int *)0x5df0 = local_24;
      *(int *)0x5dee = iVar8;
      *(undefined2 *)0x7488 = 0;
      iVar10 = iVar9;
      if ((iVar12 < 0) && (local_24 < iVar7)) {
        *(int *)0x5dee = iVar8 + (iVar7 - local_24) * iVar2;
        *(int *)0x5df0 = iVar7;
        iVar10 = iVar9 - (iVar7 - local_24);
      }
      if ((0 < iVar12) && (iVar7 < local_24)) {
        *(int *)0x5dee = iVar8 + (local_24 - iVar7) * iVar2;
        *(int *)0x5df0 = iVar7;
        iVar10 = iVar10 - (local_24 - iVar7);
      }
      local_6 = 0;
      while ((local_6 <= iVar10 &&
             ((*(code *)*(undefined2 *)0x5c3f)(uVar13,uVar16), *(int *)0x5df0 != iVar6))) {
        *(int *)0x5df0 = *(int *)0x5df0 + iVar1;
        *(int *)0x5dee = *(int *)0x5dee + iVar2;
        local_6 = local_6 + 1;
      }
    }
    if (((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) &&
       (iVar10 = func_0x000134f7(uVar13), iVar10 != 0)) break;
    if (*(int *)0x5d92 == 0x6e) {
      return;
    }
    FUN_1000_4125();
    uVar13 = 0x11c1;
    local_22 = local_22 + iVar1;
    local_24 = local_24 + iVar1;
    if (local_22 == iVar6) {
      bVar3 = false;
    }
    if (local_24 == iVar12) {
      bVar4 = true;
    }
  }
  return;
}



// Function: FUN_1000_f19d @ 1000:f19d

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0001f310) */
/* WARNING: Removing unreachable block (ram,0x0001f31b) */

uint __cdecl16far
FUN_1000_f19d(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4,
             undefined2 param_5,undefined2 param_6)

{
  char *pcVar1;
  code *pcVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined2 *puVar25;
  undefined2 *puVar26;
  int unaff_SI;
  uint unaff_DI;
  undefined2 unaff_SS;
  int unaff_DS;
  undefined4 uVar27;
  ulong uVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  undefined2 local_12;
  uint local_10;
  undefined2 local_e;
  uint local_c;
  undefined2 local_a;
  int local_6;
  
  uVar30 = 0;
  uVar29 = 0x8000;
  func_0x00001694();
  bVar10 = 2;
  uVar27 = func_0x00001395(0,uVar29,uVar30);
  uVar29 = 0;
  uVar28 = func_0x000012e7(0,uVar27);
  uVar8 = (uint)uVar28;
  uVar4 = *(uint *)0x5dba;
  *(undefined2 *)0x7488 = 0xa3;
  if (3 < uVar8) {
    local_c = local_10;
    uVar8 = local_10;
    while( true ) {
      if (local_c == unaff_DI) {
        *(uint *)0x5dba = uVar4;
        *(undefined2 *)0x5cb1 = 0;
        return uVar4;
      }
      for (local_6 = 0; local_6 < 2; local_6 = local_6 + 1) {
        *(uint *)0x5df0 = local_10;
        *(undefined2 *)0x5dee = local_e;
        uVar30 = 1;
        do {
          iVar6 = func_0x000066ae(uVar29,local_c,local_12,uVar30);
          (*(code *)*(undefined2 *)0x5c3f)(0x66a,local_a);
          uVar30 = 0;
          uVar29 = 0x66a;
        } while (iVar6 == 0);
        *(uint *)0x5df0 = unaff_DI;
        *(undefined2 *)0x5dee = local_12;
        do {
          uVar29 = 0x66a;
          iVar7 = func_0x000066ae(0x66a,(unaff_DI + local_10) - local_c,local_e,iVar6);
          uVar8 = (*(code *)*(undefined2 *)0x5c3f)(0x66a,local_a);
          iVar6 = 0;
        } while (iVar7 == 0);
        local_c = local_c + 1;
      }
      if ((*(int *)0x7484 == 8) && (*(int *)0x7488 = *(int *)0x7488 + -1, *(uint *)0x7488 < 3)) {
        uVar8 = *(int *)0x5db6 - 1;
        *(uint *)0x7488 = uVar8;
      }
      if (((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) &&
         (uVar9 = func_0x000134f7(uVar29), uVar8 = 0, uVar9 != 0)) break;
      if (*(int *)0x5d92 == 0x6e) {
        return uVar8;
      }
      uVar29 = 0x11c1;
      uVar8 = FUN_1000_4125();
    }
    return uVar9;
  }
  uVar29 = 0x1000;
  switch(uVar8) {
  case 0:
    pcVar1 = (char *)(uVar8 * 2 + unaff_SI + -1);
    *pcVar1 = *pcVar1 + (char)(uVar28 >> 0x10);
    puVar11 = (undefined1 *)(unaff_DS + 2);
    break;
  case 1:
    *(undefined2 *)0x60a8 = 0xff5d;
    *(int *)0x5df0 = *(int *)0x5df0 + -0xa3;
    if ((*(int *)0x5dee < *(int *)0x60ba / 4) || (*(int *)0x60ba <= *(int *)0x5dee)) {
      iVar6 = *(int *)0x60aa;
      *(int *)0x60aa = -iVar6;
      *(int *)0x5dee = *(int *)0x5dee + -iVar6;
    }
    iVar6 = func_0x00001694(0x1000,0x8000,0);
    uVar29 = 0;
    iVar6 = func_0x000012e7(0,iVar6 << 1,(iVar6 >> 0xf) << 1 | (uint)(iVar6 < 0));
    if (iVar6 != 0) {
      if (*(int *)0x7484 == 8) {
        iVar6 = func_0x00001694(0,0x8000,0);
        iVar6 = func_0x000012e7(0,iVar6 << 1,(iVar6 >> 0xf) << 1 | (uint)(iVar6 < 0));
        *(int *)0x60b8 = iVar6 + 1;
      }
      else {
        *(undefined2 *)0x60b8 = 0;
      }
      uVar29 = 0;
      if (*(int *)0x60b8 == 2) {
        *(undefined2 *)0x7488 = *(undefined2 *)0x60b2;
      }
      *(undefined2 *)0x60b4 = *(undefined2 *)0x5df0;
      *(undefined2 *)0x60b6 = *(undefined2 *)0x5dee;
      *(undefined2 *)0x60b0 = *(undefined2 *)0xa4a;
      if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
        *(int *)0x5dee = *(int *)0x5dee << 1;
        *(int *)0x60b0 = *(int *)0x60b0 << 1;
      }
      while (-1 < *(int *)0x60b0) {
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          uVar29 = 0x11c1;
          FUN_1000_4125();
        }
        if (*(int *)0x60b8 == 1) {
          *(undefined2 *)0x7488 = *(undefined2 *)0x60b2;
        }
        *(undefined2 *)0x60a2 = *(undefined2 *)0xa48;
        while (-1 < *(int *)0x60a2) {
          (*(code *)*(undefined2 *)0x5c3f)(uVar29,*(undefined2 *)0x5caf);
          *(int *)0x5df0 = *(int *)0x5df0 + -1;
          *(int *)0x60a2 = *(int *)0x60a2 + -1;
          if ((*(int *)0x60b8 == 1) &&
             (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
            *(undefined2 *)0x7488 = 3;
          }
          *(int *)0x5cbb = *(int *)0x5cbb + 1;
        }
        *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0xa48 + 1;
        *(int *)0x5dee = *(int *)0x5dee + -1;
        *(int *)0x60b0 = *(int *)0x60b0 + -1;
        if ((*(int *)0x60b8 == 2) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
          *(undefined2 *)0x7488 = 3;
        }
        if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
          *(int *)0x5dee = *(int *)0x5dee + -1;
          *(int *)0x60b0 = *(int *)0x60b0 + -1;
        }
      }
      *(undefined2 *)0x5df0 = *(undefined2 *)0x60b4;
      *(undefined2 *)0x5dee = *(undefined2 *)0x60b6;
      if ((*(int *)0x60b8 == 0) &&
         (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
        *(undefined2 *)0x7488 = 3;
      }
      *(undefined2 *)0x60b2 = *(undefined2 *)0x7488;
    }
    if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
      *(int *)0x5dee = *(int *)0x5dee << 1;
      *(int *)0xa4a = *(int *)0xa4a << 1;
    }
    func_0x00001694(uVar29,0x8000,0);
    uVar27 = func_0x000011e3(0);
    uVar29 = func_0x000012e7(0,uVar27);
    *(undefined2 *)0x7488 = uVar29;
    *(undefined2 *)0x60a6 = 0xffff;
    while( true ) {
      *(int *)0x60a6 = *(int *)0x60a6 + 1;
      if (3 < (int)*(uint *)0x60a6) break;
      *(undefined2 *)0x60a2 = *(undefined2 *)((*(uint *)0x60a6 & 1) * 2 + 0xa48);
      *(undefined2 *)0x60ac = *(undefined2 *)(*(int *)0x60a6 * 2 + 0xa38);
      *(undefined2 *)0x60ae = *(undefined2 *)(*(int *)0x60a6 * 2 + 0xa40);
      *(undefined2 *)0x60a4 = 0;
      while (iVar6 = *(int *)0x60a4, *(int *)0x60a4 = *(int *)0x60a4 + 1, iVar6 < *(int *)0x60a2) {
        (*(code *)*(undefined2 *)0x5c3f)(0,*(undefined2 *)0x5caf);
        *(int *)0x5df0 = *(int *)0x5df0 + *(int *)0x60ac;
        iVar6 = *(int *)0x60ae;
        *(int *)0x5dee = *(int *)0x5dee + iVar6;
        if (((*(int *)0x60ae != 0) && (*(int *)0x5c41 == 0x1899)) && (*(int *)0x5c3f == 0x12d)) {
          *(int *)0x5dee = *(int *)0x5dee + iVar6;
          *(int *)0x60a4 = *(int *)0x60a4 + 1;
        }
        *(int *)0x5cbb = *(int *)0x5cbb + 1;
      }
    }
    return *(uint *)0x60a6;
  case 2:
    pcVar3 = (code *)swi(0x3d);
    uVar4 = (*pcVar3)();
    return uVar4;
  case 3:
    uVar4 = (uint)(byte)((0xa3U >> (bVar10 & 0x1f)) + 0x31);
    if ((uVar28 < 0x20000) && ((int)(uVar28 >> 0x10) == 0)) {
      iVar6 = FUN_1000_45f0(param_5,param_6,uVar4,param_1,param_2);
      uVar4 = (uVar4 - iVar6) / unaff_DI;
    }
    else {
      iVar6 = param_4 + 1;
      while ((iVar6 = iVar6 + -1, iVar6 != 0 &&
             (iVar7 = FUN_1000_45f0(param_5,param_6,unaff_DI,param_1,param_2), iVar7 == 0))) {
        param_1 = FUN_1000_13f4();
      }
      uVar4 = param_4 - iVar6;
    }
    return uVar4;
  }
  do {
    unaff_DI = (int)unaff_DI >> 1;
    uVar8 = unaff_DI;
    do {
      *(uint *)0x5df0 = uVar8;
      *(uint *)0x5dee = uVar8;
      if (*(int *)0x5dee <= *(int *)0x5db2) {
        if (local_6 == 0) {
          *(uint *)(puVar11 + -2) = uVar4;
        }
        else {
          *(undefined2 *)(puVar11 + -2) = local_a;
        }
        *(undefined2 *)(puVar11 + -4) = uVar29;
        puVar12 = (undefined2 *)(puVar11 + -6);
        *(undefined2 *)(puVar11 + -6) = 0xdd18;
        func_0x000067bb();
        *puVar12 = 1;
        uVar29 = ((undefined2 *)0x5c3f)[1];
        pcVar2 = (code *)*(undefined2 *)0x5c3f;
        puVar12[-1] = 0x66a;
        puVar13 = puVar12 + -2;
        puVar12[-2] = 0xdd21;
        (*pcVar2)();
        puVar11 = (undefined1 *)((int)puVar13 + 2);
        do {
          *(int *)0x5df0 = *(int *)0x5df0 - unaff_DI;
          if (*(int *)0x5df0 <= *(int *)0x5db0) {
            if (local_6 != 0) {
              *(undefined2 *)(puVar11 + -2) = local_a;
              *(undefined2 *)(puVar11 + -4) = 0x66a;
              puVar14 = puVar11 + -6;
              *(undefined2 *)(puVar11 + -6) = 0xdd3d;
              func_0x000067bb();
              puVar11 = puVar14 + 2;
            }
            *(undefined2 *)(puVar11 + -2) = 1;
            uVar29 = ((undefined2 *)0x5c3f)[1];
            pcVar2 = (code *)*(undefined2 *)0x5c3f;
            *(undefined2 *)(puVar11 + -4) = 0x66a;
            puVar15 = puVar11 + -6;
            *(undefined2 *)(puVar11 + -6) = 0xdd46;
            (*pcVar2)();
            puVar11 = puVar15 + 2;
          }
          uVar29 = 0x66a;
        } while (0 < *(int *)0x5df0);
      }
      *(uint *)0x5df0 = uVar8;
      if (*(int *)0x5df0 <= *(int *)0x5db0) {
        if (local_6 == 0) {
          *(uint *)(puVar11 + -2) = uVar4;
          *(undefined2 *)(puVar11 + -4) = uVar29;
          uVar29 = 0x66a;
          puVar16 = puVar11 + -6;
          *(undefined2 *)(puVar11 + -6) = 0xdd69;
          func_0x000067bb();
          puVar11 = puVar16 + 2;
        }
        *(uint *)0x5dee = uVar8;
        do {
          *(int *)0x5dee = *(int *)0x5dee - unaff_DI;
          if (*(int *)0x5dee <= *(int *)0x5db2) {
            if (local_6 != 0) {
              *(undefined2 *)(puVar11 + -2) = local_a;
              *(undefined2 *)(puVar11 + -4) = uVar29;
              uVar29 = 0x66a;
              puVar17 = puVar11 + -6;
              *(undefined2 *)(puVar11 + -6) = 0xdd89;
              func_0x000067bb();
              puVar11 = puVar17 + 2;
            }
            *(undefined2 *)(puVar11 + -2) = 1;
            uVar30 = ((undefined2 *)0x5c3f)[1];
            pcVar2 = (code *)*(undefined2 *)0x5c3f;
            *(undefined2 *)(puVar11 + -4) = uVar29;
            puVar18 = puVar11 + -6;
            *(undefined2 *)(puVar11 + -6) = 0xdd92;
            (*pcVar2)();
            puVar11 = puVar18 + 2;
          }
        } while (0 < *(int *)0x5dee);
      }
      iVar6 = uVar8 + unaff_DI;
      *(int *)0x5df0 = iVar6;
      *(int *)0x5dee = iVar6;
      if (*(int *)0x5dee <= *(int *)0x5db2) {
        if (local_6 == 0) {
          *(uint *)(puVar11 + -2) = uVar4;
          *(undefined2 *)(puVar11 + -4) = uVar29;
          uVar29 = 0x66a;
          puVar19 = puVar11 + -6;
          *(undefined2 *)(puVar11 + -6) = 0xddbb;
          func_0x000067bb();
          puVar11 = puVar19 + 2;
        }
        *(int *)0x5df0 = *(int *)0x5df0 + unaff_DI;
        do {
          *(int *)0x5df0 = *(int *)0x5df0 + unaff_DI * -2;
          if (*(int *)0x5df0 <= *(int *)0x5db0) {
            if (local_6 != 0) {
              *(undefined2 *)(puVar11 + -2) = local_a;
              *(undefined2 *)(puVar11 + -4) = uVar29;
              uVar29 = 0x66a;
              puVar20 = puVar11 + -6;
              *(undefined2 *)(puVar11 + -6) = 0xdddf;
              func_0x000067bb();
              puVar11 = puVar20 + 2;
            }
            *(undefined2 *)(puVar11 + -2) = 1;
            uVar30 = ((undefined2 *)0x5c3f)[1];
            pcVar2 = (code *)*(undefined2 *)0x5c3f;
            *(undefined2 *)(puVar11 + -4) = uVar29;
            puVar21 = puVar11 + -6;
            *(undefined2 *)(puVar11 + -6) = 0xdde8;
            (*pcVar2)();
            puVar11 = puVar21 + 2;
          }
        } while ((int)unaff_DI < *(int *)0x5df0);
      }
      *(int *)0x5df0 = iVar6;
      if (*(int *)0x5df0 <= *(int *)0x5db0) {
        if (local_6 == 0) {
          *(uint *)(puVar11 + -2) = uVar4;
          *(undefined2 *)(puVar11 + -4) = uVar29;
          uVar29 = 0x66a;
          puVar22 = puVar11 + -6;
          *(undefined2 *)(puVar11 + -6) = 0xde0a;
          func_0x000067bb();
          puVar11 = puVar22 + 2;
        }
        *(int *)0x5dee = *(int *)0x5dee + unaff_DI;
        do {
          *(int *)0x5dee = *(int *)0x5dee + unaff_DI * -2;
          if (*(int *)0x5dee <= *(int *)0x5db2) {
            if (local_6 != 0) {
              *(undefined2 *)(puVar11 + -2) = local_a;
              *(undefined2 *)(puVar11 + -4) = uVar29;
              uVar29 = 0x66a;
              puVar23 = puVar11 + -6;
              *(undefined2 *)(puVar11 + -6) = 0xde2e;
              func_0x000067bb();
              puVar11 = puVar23 + 2;
            }
            *(undefined2 *)(puVar11 + -2) = 1;
            uVar30 = ((undefined2 *)0x5c3f)[1];
            pcVar2 = (code *)*(undefined2 *)0x5c3f;
            *(undefined2 *)(puVar11 + -4) = uVar29;
            puVar24 = puVar11 + -6;
            *(undefined2 *)(puVar11 + -6) = 0xde37;
            (*pcVar2)();
            puVar11 = puVar24 + 2;
          }
        } while ((int)unaff_DI < *(int *)0x5dee);
      }
      uVar8 = iVar6 + unaff_DI;
      uVar9 = *(uint *)0x5d7a;
      if (*(uint *)0x5da6 <= uVar9) {
        *(undefined2 *)(puVar11 + -2) = uVar29;
        uVar29 = 0x11c1;
        *(undefined2 *)(puVar11 + -4) = 0xde4e;
        uVar9 = FUN_1000_4125();
      }
      if ((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) {
        *(undefined2 *)(puVar11 + -2) = uVar29;
        uVar29 = 0x11c1;
        puVar25 = (undefined2 *)(puVar11 + -4);
        puVar11 = puVar11 + -4;
        *puVar25 = 0xde61;
        uVar5 = func_0x000134f7();
        uVar9 = 0;
        if (uVar5 != 0) {
          return uVar5;
        }
      }
      if (*(int *)0x5d92 == 0x6e) {
        return uVar9;
      }
    } while ((((int)uVar8 <= *(int *)0x5db0) || ((int)uVar8 <= *(int *)0x5db2)) &&
            ((int)uVar8 < 0xa1));
    *(undefined2 *)0x5d78 = 5;
    while ((*(int *)0x5d78 != 0 && (*(int *)0x5d92 != 0x6e))) {
      uVar9 = *(uint *)0x5d7a;
      if (*(uint *)0x5da6 <= uVar9) {
        *(undefined2 *)(puVar11 + -2) = uVar29;
        uVar29 = 0x11c1;
        *(undefined2 *)(puVar11 + -4) = 0xde99;
        uVar9 = FUN_1000_4125();
      }
    }
    if ((int)unaff_DI < 2) {
      *(undefined2 *)0x5d78 = 0x3c;
      while ((*(int *)0x5d78 != 0 && (*(int *)0x5d92 != 0x6e))) {
        if ((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) {
          *(undefined2 *)(puVar11 + -2) = uVar29;
          uVar29 = 0x11c1;
          puVar26 = (undefined2 *)(puVar11 + -4);
          puVar11 = puVar11 + -4;
          *puVar26 = 0xdeca;
          uVar4 = func_0x000134f7();
          if (uVar4 != 0) {
            return uVar4;
          }
        }
        uVar9 = *(uint *)0x5d7a;
        if (*(uint *)0x5da6 <= uVar9) {
          *(undefined2 *)(puVar11 + -2) = uVar29;
          uVar29 = 0x11c1;
          *(undefined2 *)(puVar11 + -4) = 0xdedc;
          uVar9 = FUN_1000_4125();
        }
      }
      return uVar9;
    }
  } while( true );
}



// Function: FUN_1000_f666 @ 1000:f666

void __cdecl16far FUN_1000_f666(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_CS;
  undefined2 uVar7;
  undefined2 unaff_DS;
  undefined4 uVar8;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_8 = 4;
  if (*(int *)0x7484 == 4) {
    local_8 = 5;
  }
  iVar5 = 1 << (sbyte)local_8;
  iVar3 = *(int *)0x5db0 / iVar5;
  for (local_6 = 1; local_6 <= local_8; local_6 = local_6 + 1) {
    iVar5 = 1 << ((byte)local_6 & 0x1f);
    local_4 = 0;
    iVar6 = 0;
    while ((iVar6 <= *(int *)0x5db0 || (local_4 <= *(int *)0x5db2))) {
      *(int *)0x5df0 = iVar6;
      *(int *)0x5dee = local_4;
      while ((-1 < *(int *)0x5dee && (*(int *)0x5df0 <= *(int *)0x5db0))) {
        bVar2 = (*(code *)*(undefined2 *)0x5c3b)
                          (unaff_CS,*(undefined2 *)0x5df0,*(undefined2 *)0x5dee);
        *(uint *)0x7488 = (uint)bVar2;
        uVar7 = 0x66a;
        func_0x0000690b(unaff_CS,iVar5,1);
        *(int *)0x5dee = *(int *)0x5dee - iVar5;
        *(int *)0x5df0 = *(int *)0x5df0 + iVar5;
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          uVar7 = 0x11c1;
          FUN_1000_4125();
        }
        if ((*(int *)0x5d7e != 0) || (unaff_CS = uVar7, *(int *)0x5d80 != 0)) {
          unaff_CS = 0x11c1;
          iVar4 = func_0x000134f7(uVar7);
          if (iVar4 != 0) {
            return;
          }
        }
        if (*(int *)0x5d92 == 0x6e) {
          return;
        }
      }
      if (*(int *)0x5db2 < local_4) {
        iVar6 = iVar6 + iVar5;
      }
      else {
        local_4 = local_4 + iVar5;
      }
    }
  }
  local_a = 0;
  local_6 = 0;
  do {
    if (iVar3 < local_6) {
      do {
        if (iVar3 <= local_a) {
          *(undefined2 *)0x5cb1 = 1;
          return;
        }
        for (local_6 = 0; local_6 <= iVar3; local_6 = local_6 + 1) {
          iVar6 = iVar5 * local_6;
          if (*(int *)(local_6 * 2 + 0x738e) != 0) {
            while (*(int *)(local_6 * 2 + 0x73e2) == 0) {
              piVar1 = (int *)(local_6 * 2 + 0x73b8);
              *piVar1 = *piVar1 + iVar5;
              if (*(int *)0x5db2 < *(int *)(local_6 * 2 + 0x73b8)) {
                *(undefined2 *)(local_6 * 2 + 0x738e) = 0;
                local_a = local_a + 1;
                break;
              }
              bVar2 = (*(code *)*(undefined2 *)0x5c3b)
                                (unaff_CS,iVar6,*(undefined2 *)(local_6 * 2 + 0x73b8));
              *(uint *)(local_6 * 2 + 0x73e2) = (uint)bVar2;
              *(undefined2 *)(local_6 * 2 + 0x740c) = *(undefined2 *)(local_6 * 2 + 0x73b8);
            }
            *(int *)0x5dee = *(int *)(local_6 * 2 + 0x73b8) + -1;
            if (-1 < *(int *)0x5dee) {
              *(undefined2 *)0x7488 = *(undefined2 *)(local_6 * 2 + 0x73e2);
              *(int *)0x5df0 = iVar6;
              while (*(int *)0x5df0 <= iVar5 + iVar6 + -1) {
                (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
                *(int *)0x5df0 = *(int *)0x5df0 + 1;
              }
              *(int *)0x5df0 = iVar6;
            }
            iVar4 = iVar5 + *(int *)(local_6 * 2 + 0x73b8) + -1;
            *(int *)0x5dee = iVar4;
            if (*(int *)0x5db2 < iVar4) {
              *(undefined2 *)0x5dee = *(undefined2 *)0x5db2;
            }
            *(undefined2 *)0x7488 = 0;
            *(int *)0x5df0 = iVar6;
            while (*(int *)0x5df0 <= iVar5 + iVar6 + -1) {
              (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
              *(int *)0x5df0 = *(int *)0x5df0 + 1;
            }
            *(int *)0x5df0 = iVar6;
            piVar1 = (int *)(local_6 * 2 + 0x73b8);
            *piVar1 = *piVar1 + -1;
            if (*(int *)(local_6 * 2 + 0x73b8) <= -iVar5) {
              *(undefined2 *)(local_6 * 2 + 0x73b8) = *(undefined2 *)(local_6 * 2 + 0x740c);
              *(undefined2 *)(local_6 * 2 + 0x73e2) = 0;
            }
          }
          uVar7 = unaff_CS;
          if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
            uVar7 = 0x11c1;
            FUN_1000_4125();
          }
          if ((*(int *)0x5d7e != 0) || (unaff_CS = uVar7, *(int *)0x5d80 != 0)) {
            unaff_CS = 0x11c1;
            iVar6 = func_0x000134f7(uVar7);
            if (iVar6 != 0) {
              return;
            }
          }
          if (*(int *)0x5d92 == 0x6e) {
            return;
          }
        }
      } while( true );
    }
    *(undefined2 *)(local_6 * 2 + 0x738e) = 1;
    func_0x00001694(unaff_CS,0x8000,0);
    uVar8 = func_0x000011e3(0);
    unaff_CS = 0;
    iVar6 = func_0x000012e7(0,uVar8);
    *(int *)(local_6 * 2 + 0x73b8) = iVar6 * iVar5;
    *(undefined2 *)(local_6 * 2 + 0x740c) = *(undefined2 *)(local_6 * 2 + 0x73b8);
    do {
      bVar2 = (*(code *)*(undefined2 *)0x5c3b)
                        (0,iVar5 * local_6,*(undefined2 *)(local_6 * 2 + 0x73b8));
      *(uint *)(local_6 * 2 + 0x73e2) = (uint)bVar2;
      if (*(int *)(local_6 * 2 + 0x73e2) != 0) goto LAB_1000_f823;
      piVar1 = (int *)(local_6 * 2 + 0x73b8);
      *piVar1 = *piVar1 + iVar5;
      if (*(int *)0x5db2 < *(int *)(local_6 * 2 + 0x73b8)) {
        *(undefined2 *)(local_6 * 2 + 0x73b8) = 0;
      }
    } while (*(int *)(local_6 * 2 + 0x73b8) != *(int *)(local_6 * 2 + 0x740c));
    *(undefined2 *)(local_6 * 2 + 0x738e) = 0;
    local_a = local_a + 1;
LAB_1000_f823:
    *(undefined2 *)(local_6 * 2 + 0x740c) = *(undefined2 *)(local_6 * 2 + 0x73b8);
    local_6 = local_6 + 1;
  } while( true );
}



// Function: FUN_1000_f9d7 @ 1000:f9d7

void __cdecl16far FUN_1000_f9d7(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined4 uVar6;
  undefined2 uVar7;
  uint local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar7 = 1;
  FUN_1000_2a3a();
  *(int *)0x7488 = *(int *)0x7488 + 1;
  if (*(uint *)0x5db6 <= *(uint *)0x7488) {
    *(undefined2 *)0x7488 = 3;
  }
  func_0x00001694(0x11c1,0x8000,0,uVar7);
  uVar6 = func_0x00001395(0);
  uVar7 = 0;
  iVar2 = func_0x000012e7(0,uVar6);
  local_c = iVar2 + 4U & 0xfe;
  do {
    uVar1 = local_c - 1;
    if (local_c == 0) {
      return;
    }
    iVar2 = *(int *)0x5db0;
    if (iVar2 <= *(int *)0x5db2) {
      iVar2 = *(int *)0x5db2;
    }
    iVar4 = 1;
    local_8 = iVar2;
    while (local_c = uVar1, 0 < iVar2) {
      if ((*(int *)0x5d7e != 0) || (uVar5 = uVar7, *(int *)0x5d80 != 0)) {
        uVar5 = 0x11c1;
        iVar3 = func_0x000134f7(uVar7);
        if (iVar3 != 0) {
          return;
        }
      }
      if (*(int *)0x5d92 == 0x6e) {
        return;
      }
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        uVar5 = 0x11c1;
        FUN_1000_4125();
      }
      if (iVar4 == 1) {
        *(undefined2 *)0x5df0 = 1;
        *(int *)0x5dee = local_8;
        local_a = local_8;
LAB_1000_fa90:
        iVar4 = iVar4 + 1;
        local_6 = iVar2;
      }
      else {
        if (iVar4 == 2) {
          *(int *)0x5df0 = iVar2;
          *(int *)0x5dee = local_8;
          local_a = 1;
          goto LAB_1000_fa90;
        }
        iVar4 = 1;
        iVar2 = iVar2 + -1;
        local_8 = local_8 + -1;
      }
      local_4 = 1;
      do {
        uVar7 = 0x66a;
        local_4 = func_0x000066ae(uVar5,local_6,local_a,local_4);
        (*(code *)*(undefined2 *)0x5c3f)(0x66a,1);
        uVar5 = uVar7;
      } while (local_4 == 0);
    }
  } while( true );
}



// Function: FUN_1000_faf0 @ 1000:faf0

/* WARNING: Control flow encountered bad instruction data */

void FUN_1000_faf0(void)

{
  code *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  *(undefined2 *)0x6025 = 0;
  uVar5 = 0;
  uVar4 = 0x8000;
  func_0x00001694();
  uVar3 = func_0x000011e3(0,uVar4,uVar5);
  iVar2 = func_0x000012e7(0,uVar3);
  if (iVar2 == 2) {
    *(undefined2 *)0x6025 = 1;
  }
  pcVar1 = (code *)swi(0x3b);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_fd62 @ 1000:fd62

/* WARNING: Control flow encountered bad instruction data */

void __cdecl16far FUN_1000_fd62(void)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  if (0x40 < *(int *)0x5dac) {
    return;
  }
  pcVar1 = (code *)swi(0x3b);
  (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// Function: FUN_1000_fff6 @ 1000:fff6

void __cdecl16far FUN_1000_fff6(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  *(undefined2 *)0x5dac = 0;
  uVar6 = 0;
  uVar5 = 0x8000;
  func_0x00001694();
  uVar4 = func_0x000011e3(0,uVar5,uVar6);
  uVar5 = func_0x000012e7(0,uVar4);
  *(undefined2 *)0x6025 = uVar5;
  func_0x00001694(0,0x8000,0);
  uVar4 = func_0x000011e3(0);
  iVar1 = func_0x000012e7(0,uVar4);
  iVar1 = *(int *)0x5dae / 2 + iVar1;
  iVar3 = 0;
  uVar5 = 0;
  if (iVar1 < 1) {
    return;
  }
  while( true ) {
    *(int *)0x5dac = *(int *)0x5dac + 4;
    *(int *)0x5dac = *(int *)0x5dac % 0x40;
    *(int *)0x7488 = *(int *)0x7488 + 1;
    if (*(uint *)0x5db6 <= *(uint *)0x7488) {
      *(undefined2 *)0x7488 = 3;
    }
    FUN_2000_fd62(uVar5,0,0,iVar3,iVar3);
    if (*(int *)0x6025 == 0) {
      *(int *)0x5dac = *(int *)0x5dac + -3;
      if (*(int *)0x5dac < 0) {
        *(int *)0x5dac = *(int *)0x5dac + 0x40;
      }
      uVar6 = *(undefined2 *)0x7488;
      *(undefined2 *)0x7488 = 0;
      FUN_2000_fd62(uVar5,0,0,iVar3 + -3,iVar3 + -3);
      *(undefined2 *)0x7488 = uVar6;
    }
    if ((*(int *)0x5d7e != 0) || (uVar6 = uVar5, *(int *)0x5d80 != 0)) {
      uVar6 = 0x11c1;
      iVar2 = func_0x000134f7(uVar5);
      if (iVar2 != 0) {
        return;
      }
    }
    if (*(int *)0x5d92 == 0x6e) break;
    iVar3 = iVar3 + 1;
    uVar5 = uVar6;
    if (iVar1 <= iVar3) {
      return;
    }
  }
  return;
}



// Function: FUN_2000_0107 @ 2000:0107

void __cdecl16far FUN_2000_0107(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  uint *puVar5;
  int iVar6;
  int unaff_DI;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  bool bVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  uint local_a;
  uint local_8;
  uint local_6;
  uint local_4;
  
  iVar6 = 0;
  do {
    uVar7 = (undefined2)((ulong)*(undefined4 *)0x5c57 >> 0x10);
    puVar4 = (undefined2 *)((int)*(undefined4 *)0x5c57 + iVar6 * 8);
    *puVar4 = 0;
    puVar4[2] = 0;
    puVar4[1] = 0;
    puVar4[3] = 0;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xfa);
  iVar6 = 0;
  local_c = 0;
  local_a = 0;
  local_8 = 0;
  local_6 = 0;
  local_4 = 0;
  *(int *)0x7488 = *(int *)0x7488 + 1;
  if (*(uint *)0x5db6 <= *(uint *)0x7488) {
    *(undefined2 *)0x7488 = 3;
  }
  if (*(int *)0x7484 == 4) {
    uVar11 = 0;
    uVar7 = 0x8000;
    func_0x00001694();
    uVar10 = func_0x000011e3(0,uVar7,uVar11);
    iVar2 = func_0x000012e7(0,uVar10);
    iVar2 = iVar2 + 0x52;
  }
  else {
    uVar11 = 0;
    uVar7 = 0x8000;
    func_0x00001694();
    uVar10 = func_0x000011e3(0,uVar7,uVar11);
    iVar2 = func_0x000012e7(0,uVar10);
    iVar2 = iVar2 + 0x7c;
  }
  func_0x00001694(0,0x8000,0);
  uVar10 = func_0x000011e3(0);
  iVar3 = func_0x000012e7(0,uVar10);
  if ((iVar3 == 0) || (iVar3 == 1)) {
    *(undefined2 *)0x6025 = 1;
  }
  else {
    *(undefined2 *)0x6025 = 3;
  }
  func_0x00001694(0,0x8000,0);
  uVar10 = func_0x000011e3(0);
  iVar3 = func_0x000012e7(0,uVar10);
  bVar9 = iVar3 == 0;
  FUN_1000_2a3a(0,bVar9);
  func_0x00001694(0x11c1,0x8000,0);
  uVar10 = func_0x000011e3(0);
  uVar7 = 0;
  iVar3 = func_0x000012e7(0,uVar10);
  *(int *)0x5d78 = iVar3 + 0x5a;
  while ((*(int *)0x5d78 != 0 && (*(int *)0x5d92 != 0x6e))) {
    if (local_c < 1) {
      func_0x00001694(uVar7,0x8000,0);
      uVar10 = func_0x000011e3(0);
      iVar3 = func_0x000012e7(0,uVar10);
      unaff_DI = iVar3 + -4;
      if (unaff_DI == 0) {
        unaff_DI = iVar3 + -3;
      }
      func_0x00001694(0,0x8000,0);
      uVar10 = func_0x000011e3(0);
      iVar3 = func_0x000012e7(0,uVar10);
      local_e = iVar3 + -4;
      func_0x00001694(0,0x8000,0);
      uVar10 = func_0x000011e3(0);
      iVar3 = func_0x000012e7(0,uVar10);
      local_10 = iVar3 + -4;
      if (local_10 == 0) {
        local_10 = iVar3 + -5;
      }
      func_0x00001694(0,0x8000,0);
      uVar10 = func_0x000011e3(0);
      iVar3 = func_0x000012e7(0,uVar10);
      local_12 = iVar3 + -4;
      func_0x00001694(0,0x8000,0);
      uVar10 = func_0x00001395(0);
      uVar7 = 0;
      iVar3 = func_0x000012e7(0,uVar10);
      local_c = (iVar3 + 1) * 4;
    }
    if ((!bVar9) && (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
      *(undefined2 *)0x7488 = 3;
    }
    local_4 = local_4 + unaff_DI;
    if (*(int *)0x5dae <= (int)((local_4 ^ (int)local_4 >> 0xf) - ((int)local_4 >> 0xf))) {
      unaff_DI = -unaff_DI;
    }
    local_8 = local_8 + local_e;
    if (*(int *)0x5dae <= (int)((local_8 ^ (int)local_8 >> 0xf) - ((int)local_8 >> 0xf))) {
      local_e = -local_e;
    }
    local_6 = local_6 + local_10;
    if (*(int *)0x5dae <= (int)((local_6 ^ (int)local_6 >> 0xf) - ((int)local_6 >> 0xf))) {
      local_10 = -local_10;
    }
    local_a = local_a + local_12;
    if (*(int *)0x5dae <= (int)((local_a ^ (int)local_a >> 0xf) - ((int)local_a >> 0xf))) {
      local_12 = -local_12;
    }
    local_c = local_c + -1;
    uVar1 = *(uint *)0x7488;
    if (!bVar9) {
      *(undefined2 *)0x7488 = 0;
    }
    uVar11 = (undefined2)((ulong)*(undefined4 *)0x5c57 >> 0x10);
    puVar4 = (undefined2 *)((int)*(undefined4 *)0x5c57 + iVar6 * 8);
    *(undefined2 *)0x5df0 = *puVar4;
    *(undefined2 *)0x5dee = puVar4[1];
    local_14 = 1;
    do {
      uVar8 = (undefined2)((ulong)*(undefined4 *)0x5c57 >> 0x10);
      iVar3 = (int)*(undefined4 *)0x5c57 + iVar6 * 8;
      uVar11 = 0x66a;
      local_14 = func_0x000066ae(uVar7,*(undefined2 *)(iVar3 + 4),*(undefined2 *)(iVar3 + 6),
                                 local_14);
      (*(code *)*(undefined2 *)0x5c3f)(0x66a,*(undefined2 *)0x6025);
      uVar7 = uVar11;
    } while (local_14 == 0);
    if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
      uVar11 = 0x11c1;
      FUN_1000_4125();
    }
    *(uint *)0x7488 = uVar1 & *(uint *)0x5dc0;
    uVar7 = (undefined2)((ulong)*(undefined4 *)0x5c57 >> 0x10);
    puVar5 = (uint *)((int)*(undefined4 *)0x5c57 + iVar6 * 8);
    *puVar5 = local_4;
    puVar5[2] = local_8;
    puVar5[1] = local_6;
    puVar5[3] = local_a;
    iVar6 = iVar6 + 1;
    if (iVar2 <= iVar6) {
      iVar6 = 0;
    }
    *(uint *)0x5df0 = local_4;
    *(uint *)0x5dee = local_6;
    do {
      uVar7 = 0x66a;
      local_14 = func_0x000066ae(uVar11,local_8,local_a,local_14);
      (*(code *)*(undefined2 *)0x5c3f)(0x66a,*(undefined2 *)0x6025);
      uVar11 = uVar7;
    } while (local_14 == 0);
    if ((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) {
      uVar7 = 0x11c1;
      iVar3 = func_0x000134f7(0x66a);
      if (iVar3 != 0) {
        return;
      }
    }
    if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
      uVar7 = 0x11c1;
      FUN_1000_4125();
    }
  }
  return;
}



// Function: FUN_2000_04c5 @ 2000:04c5

void __cdecl16far FUN_2000_04c5(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 unaff_DS;
  undefined4 uVar16;
  long lVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  long local_e;
  int local_6;
  
  uVar19 = 0;
  uVar18 = 0x8000;
  func_0x00001694();
  uVar16 = func_0x000011e3(0,uVar18,uVar19);
  iVar5 = func_0x000012e7(0,uVar16);
  uVar6 = iVar5 + 0x4b;
  lVar17 = func_0x0000259d(0,uVar6,0x12);
  uVar18 = (undefined2)((ulong)lVar17 >> 0x10);
  iVar5 = (int)lVar17;
  if (lVar17 != 0) {
    uVar19 = 0;
    local_e = func_0x0000259d(0,uVar6,0x12);
    if (local_e != 0) goto LAB_2000_0536;
  }
  *(undefined2 *)0x5d80 = 1;
  uVar19 = 0x11c1;
  thunk_FUN_1000_2075(0,0,0xbd4);
LAB_2000_0536:
  FUN_1000_2a3a(uVar19,0);
  func_0x00001694(0x11c1,0x8000,0);
  uVar16 = func_0x000011e3(0);
  uVar19 = func_0x000012e7(0,uVar16);
  *(undefined2 *)0x6025 = uVar19;
  func_0x00001694(0,0x8000,0);
  uVar16 = func_0x000011e3(0);
  iVar7 = func_0x000012e7(0,uVar16);
  *(int *)0x5d78 = iVar7 + 0x5a;
  if (*(int *)0x6025 == 0) {
    *(uint *)0x5d78 = *(uint *)0x5d78 >> 1;
  }
  uVar13 = 0;
  iVar7 = (int)local_e;
  uVar19 = (undefined2)((ulong)local_e >> 0x10);
  if (uVar6 != 0) {
    do {
      puVar12 = (undefined2 *)(iVar5 + uVar13 * 0x12);
      puVar12[1] = 0;
      *puVar12 = 0;
      puVar12 = (undefined2 *)(iVar7 + uVar13 * 0x12);
      puVar12[1] = 0;
      *puVar12 = 0;
      iVar8 = iVar5 + uVar13 * 0x12;
      *(undefined2 *)(iVar8 + 6) = 0;
      *(undefined2 *)(iVar8 + 4) = 0;
      iVar8 = iVar7 + uVar13 * 0x12;
      *(undefined2 *)(iVar8 + 6) = 0;
      *(undefined2 *)(iVar8 + 4) = 0;
      func_0x00001694(0,0x8000,0);
      uVar16 = func_0x000011e3(0);
      iVar8 = func_0x000012e7(0,uVar16);
      iVar9 = iVar5 + uVar13 * 0x12;
      *(int *)(iVar9 + 10) = iVar8 + 1 >> 0xf;
      *(int *)(iVar9 + 8) = iVar8 + 1;
      uVar16 = func_0x00001395(0);
      uVar15 = (undefined2)((ulong)uVar16 >> 0x10);
      iVar8 = iVar5 + uVar13 * 0x12;
      *(undefined2 *)(iVar8 + 10) = uVar15;
      *(undefined2 *)(iVar8 + 8) = (int)uVar16;
      iVar8 = iVar7 + uVar13 * 0x12;
      *(undefined2 *)(iVar8 + 10) = uVar15;
      *(undefined2 *)(iVar8 + 8) = (int)uVar16;
      func_0x00001694(0,0x8000,0);
      uVar16 = func_0x000011e3(0);
      iVar8 = func_0x000012e7(0,uVar16);
      iVar9 = iVar5 + uVar13 * 0x12;
      *(int *)(iVar9 + 0xe) = iVar8 + 1 >> 0xf;
      *(int *)(iVar9 + 0xc) = iVar8 + 1;
      uVar16 = func_0x00001395(0);
      uVar15 = (undefined2)((ulong)uVar16 >> 0x10);
      iVar8 = iVar5 + uVar13 * 0x12;
      *(undefined2 *)(iVar8 + 0xe) = uVar15;
      *(undefined2 *)(iVar8 + 0xc) = (int)uVar16;
      iVar8 = iVar7 + uVar13 * 0x12;
      *(undefined2 *)(iVar8 + 0xe) = uVar15;
      *(undefined2 *)(iVar8 + 0xc) = (int)uVar16;
      func_0x00001694(0,0x8000,0);
      uVar16 = func_0x000011e3(0);
      iVar8 = func_0x000012e7(0,uVar16);
      *(int *)(iVar5 + uVar13 * 0x12 + 0x10) = iVar8 + 1;
      *(int *)(iVar7 + uVar13 * 0x12 + 0x10) = iVar8 + 1;
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar6);
  }
  uVar13 = 0;
  if (*(int *)0x6025 == 0) {
    func_0x00001694(0,0x8000,0);
    uVar16 = func_0x000011e3(0);
    local_6 = func_0x000012e7(0,uVar16);
    local_6 = (int)uVar6 / 2 + local_6;
  }
  else {
    func_0x00001694(0,0x8000,0);
    uVar16 = func_0x00001395(0);
    local_6 = func_0x000012e7(0,uVar16);
    local_6 = local_6 + 3;
  }
  uVar15 = 0;
  do {
    do {
      if ((*(int *)0x5d78 == 0) || (*(int *)0x5d92 == 0x6e)) goto LAB_2000_0afe;
      if (uVar13 < uVar6) {
        *(uint *)0x7488 = *(uint *)(iVar5 + uVar13 * 0x12 + 0x10) & *(uint *)0x5dc0;
        *(undefined2 *)0x5df0 = *(undefined2 *)(iVar5 + uVar13 * 0x12 + 2);
        *(undefined2 *)0x5dee = *(undefined2 *)(iVar5 + uVar13 * 0x12 + 6);
        iVar9 = iVar5 + uVar13 * 0x12;
        iVar8 = *(int *)(iVar9 + 10);
        uVar4 = *(uint *)(iVar9 + 8);
        puVar11 = (uint *)(iVar5 + uVar13 * 0x12);
        puVar1 = puVar11;
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + uVar4;
        puVar1 = puVar11 + 1;
        *puVar1 = *puVar1 + iVar8 + (uint)CARRY2(uVar3,uVar4);
        iVar9 = iVar5 + uVar13 * 0x12;
        iVar8 = *(int *)(iVar9 + 0xe);
        uVar4 = *(uint *)(iVar9 + 0xc);
        iVar9 = iVar5 + uVar13 * 0x12;
        puVar1 = (uint *)(iVar9 + 4);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 + uVar4;
        piVar2 = (int *)(iVar9 + 6);
        *piVar2 = *piVar2 + iVar8 + (uint)CARRY2(uVar3,uVar4);
        if ((*(int *)0x5db2 < *(int *)0x5dee) || (*(int *)0x5db0 < *(int *)0x5df0)) {
          puVar12 = (undefined2 *)(iVar5 + uVar13 * 0x12);
          puVar12[1] = 0;
          *puVar12 = 0;
          iVar8 = iVar5 + uVar13 * 0x12;
          *(undefined2 *)(iVar8 + 6) = 0;
          *(undefined2 *)(iVar8 + 4) = 0;
          func_0x00001694(uVar15,0x8000,0);
          uVar16 = func_0x000011e3(0);
          iVar8 = func_0x000012e7(0,uVar16);
          iVar9 = iVar5 + uVar13 * 0x12;
          *(int *)(iVar9 + 10) = iVar8 + 1 >> 0xf;
          *(int *)(iVar9 + 8) = iVar8 + 1;
          uVar16 = func_0x00001395(0);
          iVar8 = iVar5 + uVar13 * 0x12;
          *(undefined2 *)(iVar8 + 10) = (int)((ulong)uVar16 >> 0x10);
          *(undefined2 *)(iVar8 + 8) = (int)uVar16;
          func_0x00001694(0,0x8000,0);
          uVar16 = func_0x000011e3(0);
          iVar8 = func_0x000012e7(0,uVar16);
          iVar9 = iVar5 + uVar13 * 0x12;
          *(int *)(iVar9 + 0xe) = iVar8 + 1 >> 0xf;
          *(int *)(iVar9 + 0xc) = iVar8 + 1;
          uVar15 = 0;
          uVar16 = func_0x00001395(0);
          iVar8 = iVar5 + uVar13 * 0x12;
          *(undefined2 *)(iVar8 + 0xe) = (int)((ulong)uVar16 >> 0x10);
          *(undefined2 *)(iVar8 + 0xc) = (int)uVar16;
        }
LAB_2000_098f:
        uVar13 = uVar13 + 1;
        uVar14 = uVar15;
      }
      else {
        if (local_6 == 0) {
          iVar9 = uVar13 - uVar6;
          *(undefined2 *)0x7488 = 0;
          *(undefined2 *)0x5df0 = *(undefined2 *)(iVar7 + iVar9 * 0x12 + 2);
          *(undefined2 *)0x5dee = *(undefined2 *)(iVar7 + iVar9 * 0x12 + 6);
          iVar10 = iVar7 + iVar9 * 0x12;
          iVar8 = *(int *)(iVar10 + 10);
          uVar4 = *(uint *)(iVar10 + 8);
          puVar11 = (uint *)(iVar7 + iVar9 * 0x12);
          puVar1 = puVar11;
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + uVar4;
          puVar1 = puVar11 + 1;
          *puVar1 = *puVar1 + iVar8 + (uint)CARRY2(uVar3,uVar4);
          iVar10 = iVar7 + iVar9 * 0x12;
          iVar8 = *(int *)(iVar10 + 0xe);
          uVar4 = *(uint *)(iVar10 + 0xc);
          iVar10 = iVar7 + iVar9 * 0x12;
          puVar1 = (uint *)(iVar10 + 4);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + uVar4;
          piVar2 = (int *)(iVar10 + 6);
          *piVar2 = *piVar2 + iVar8 + (uint)CARRY2(uVar3,uVar4);
          if ((*(int *)0x5db0 < *(int *)0x5df0) || (*(int *)0x5db2 < *(int *)0x5dee)) {
            puVar12 = (undefined2 *)(iVar7 + iVar9 * 0x12);
            puVar12[1] = 0;
            *puVar12 = 0;
            iVar8 = iVar7 + iVar9 * 0x12;
            *(undefined2 *)(iVar8 + 6) = 0;
            *(undefined2 *)(iVar8 + 4) = 0;
            iVar8 = iVar5 + iVar9 * 0x12;
            uVar14 = *(undefined2 *)(iVar8 + 8);
            iVar10 = iVar7 + iVar9 * 0x12;
            *(undefined2 *)(iVar10 + 10) = *(undefined2 *)(iVar8 + 10);
            *(undefined2 *)(iVar10 + 8) = uVar14;
            iVar8 = iVar5 + iVar9 * 0x12;
            uVar14 = *(undefined2 *)(iVar8 + 0xc);
            iVar9 = iVar7 + iVar9 * 0x12;
            *(undefined2 *)(iVar9 + 0xe) = *(undefined2 *)(iVar8 + 0xe);
            *(undefined2 *)(iVar9 + 0xc) = uVar14;
          }
          goto LAB_2000_098f;
        }
        uVar13 = 0;
        local_6 = local_6 + -1;
        uVar14 = uVar15;
      }
      if (uVar6 * 2 < uVar13 || uVar6 * 2 - uVar13 == 0) {
        uVar13 = 0;
      }
      (*(code *)*(undefined2 *)0x5c3f)(uVar14,1);
      uVar15 = uVar14;
    } while (*(int *)0x5d7e == 0);
    uVar15 = 0x11c1;
    iVar8 = func_0x000134f7(uVar14);
  } while (iVar8 == 0);
LAB_2000_0afe:
  func_0x00002b47(uVar15,lVar17);
  func_0x00002b47(0,iVar7,uVar19);
  return;
}



// Function: FUN_2000_0b1e @ 2000:0b1e

void __cdecl16far FUN_2000_0b1e(int param_1)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x7488 = 0;
  if (param_1 == 0) {
    *(undefined2 *)0x5dee = 0;
    while (*(int *)0x5dee <= *(int *)0x5db2) {
      *(undefined2 *)0x5df0 = 0;
      while (*(int *)0x5df0 <= *(int *)0x5db0) {
        (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
        *(int *)0x5df0 = *(int *)0x5df0 + 1;
      }
      if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
        *(int *)0x5dee = *(int *)0x5dee + 1;
      }
      if ((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) {
        iVar1 = func_0x000134f7(unaff_CS);
        unaff_CS = 0x11c1;
        if (iVar1 != 0) {
          return;
        }
      }
      if (*(int *)0x5d92 == 0x6e) {
        return;
      }
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        unaff_CS = 0x11c1;
        FUN_1000_4125();
      }
      *(int *)0x5dee = *(int *)0x5dee + 1;
    }
    *(undefined2 *)0x5cb1 = 1;
  }
  else {
    *(int *)0x7488 = *(int *)0x7488 + 1;
    if (*(uint *)0x5db6 <= *(uint *)0x7488) {
      *(undefined2 *)0x7488 = 3;
    }
    *(undefined2 *)0x5df0 = 0;
    while (*(int *)0x5df0 <= *(int *)0x5db0) {
      *(undefined2 *)0x5dee = 0;
      while (*(int *)0x5dee <= *(int *)0x5db2) {
        (*(code *)*(undefined2 *)0x5c3f)(unaff_CS,1);
        if ((*(int *)0x5c41 == 0x1899) && (*(int *)0x5c3f == 0x12d)) {
          *(int *)0x5dee = *(int *)0x5dee + 1;
        }
        *(int *)0x5dee = *(int *)0x5dee + 1;
      }
      if ((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) {
        iVar1 = func_0x000134f7(unaff_CS);
        unaff_CS = 0x11c1;
        if (iVar1 != 0) {
          return;
        }
      }
      if (*(int *)0x5d92 == 0x6e) {
        return;
      }
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        unaff_CS = 0x11c1;
        FUN_1000_4125();
      }
      if (*(int *)0x7484 == 4) {
        if (((*(uint *)0x5df0 & *(int *)0x5db6 - 1U) == 0) &&
           (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488)) {
LAB_2000_0bdd:
          *(undefined2 *)0x7488 = 3;
        }
      }
      else {
        *(int *)0x7488 = *(int *)0x7488 + 1;
        if (*(uint *)0x5db6 <= *(uint *)0x7488) goto LAB_2000_0bdd;
      }
      *(int *)0x5df0 = *(int *)0x5df0 + 1;
    }
    *(undefined2 *)0x5cb1 = 0;
  }
  return;
}



// Function: FUN_2000_0d21 @ 2000:0d21

void __cdecl16far FUN_2000_0d21(int param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  int local_4;
  
  if (param_1 < param_2) {
    local_4 = 1;
  }
  else {
    local_4 = -1;
  }
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (param_1 != param_2) {
      param_1 = param_1 + local_4;
    }
    (*(code *)*(undefined2 *)0x5c33)(unaff_CS,0,param_1);
    if ((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) {
      iVar1 = func_0x000134f7(unaff_CS);
      unaff_CS = 0x11c1;
      if (iVar1 != 0) {
        return;
      }
    }
    if (*(int *)0x5d92 == 0x6e) break;
    if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
      unaff_CS = 0x11c1;
      FUN_1000_4125();
    }
  }
  return;
}



// Function: FUN_2000_0d8a @ 2000:0d8a

void __cdecl16far FUN_2000_0d8a(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  
  if (*(int *)0x5dc4 == 0) {
    if (*(int *)0x7484 == 4) {
      if (param_1 == 0) {
        iVar2 = 0;
        do {
          FUN_1000_97d0(iVar2);
          if (((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) &&
             (iVar1 = func_0x000134f7(0x1899), iVar1 != 0)) {
            return;
          }
          if (*(int *)0x5d92 == 0x6e) {
            return;
          }
          if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
            FUN_1000_4125();
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x15e);
      }
      else {
        iVar2 = 0x15e;
        while ((-1 < iVar2 &&
               ((((FUN_1000_97d0(iVar2), *(int *)0x5d7e == 0 && (*(int *)0x5d80 == 0)) ||
                 (iVar1 = func_0x000134f7(0x1899), iVar1 == 0)) && (*(int *)0x5d92 != 0x6e))))) {
          if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
            FUN_1000_4125();
          }
          iVar2 = iVar2 + -1;
        }
      }
    }
    else if (param_1 == 0) {
      uVar3 = 0;
      do {
        func_0x00019803(unaff_CS,uVar3);
        if ((*(int *)0x5de4 != 0) && ((uVar3 & 1) != 0)) {
          uVar3 = uVar3 + 1;
        }
        if ((*(int *)0x5d7e != 0) || (unaff_CS = 0x1899, *(int *)0x5d80 != 0)) {
          unaff_CS = 0x11c1;
          iVar2 = func_0x000134f7(0x1899);
          if (iVar2 != 0) {
            return;
          }
        }
        if (*(int *)0x5d92 == 0x6e) {
          return;
        }
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          unaff_CS = 0x11c1;
          FUN_1000_4125();
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 400);
    }
    else {
      for (uVar3 = 400; -1 < (int)uVar3; uVar3 = uVar3 - 1) {
        func_0x00019803(unaff_CS,uVar3);
        if ((*(int *)0x5de4 != 0) && ((uVar3 & 1) != 0)) {
          uVar3 = uVar3 + 1;
        }
        if ((*(int *)0x5d7e != 0) || (unaff_CS = 0x1899, *(int *)0x5d80 != 0)) {
          unaff_CS = 0x11c1;
          iVar2 = func_0x000134f7(0x1899);
          if (iVar2 != 0) {
            return;
          }
        }
        if (*(int *)0x5d92 == 0x6e) {
          return;
        }
        if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
          unaff_CS = 0x11c1;
          FUN_1000_4125();
        }
      }
    }
  }
  return;
}



// Function: FUN_2000_0ed2 @ 2000:0ed2

void __cdecl16far FUN_2000_0ed2(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined2 unaff_DS;
  undefined4 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  int local_12;
  undefined4 local_c;
  int local_4;
  
  local_4 = 0;
  local_12 = 1;
  uVar14 = 0;
  uVar13 = 0x8000;
  func_0x00001694();
  uVar12 = func_0x000011e3(0,uVar13,uVar14);
  iVar3 = func_0x000012e7(0,uVar12);
  *(int *)0x5d78 = iVar3 + 0x5a;
  func_0x00001694(0,0x8000,0);
  uVar12 = func_0x000011e3(0);
  iVar3 = func_0x000012e7(0,uVar12);
  func_0x00001694(0,0x8000,0);
  uVar12 = func_0x000011e3(0);
  iVar4 = func_0x000012e7(0,uVar12);
  func_0x00001694(0,0x8000,0);
  uVar12 = func_0x000011e3(0);
  iVar5 = func_0x000012e7(0,uVar12);
  func_0x00001694(0,0x8000,0);
  uVar12 = func_0x000011e3(0);
  iVar6 = func_0x000012e7(0,uVar12);
  if (iVar6 == 0) {
    *(undefined2 *)0x6025 = 3;
  }
  else {
    *(undefined2 *)0x6025 = 1;
  }
  func_0x00001694(0,0x8000,0);
  uVar12 = func_0x000011e3(0);
  uVar13 = 0;
  iVar6 = func_0x000012e7(0,uVar12);
  if (iVar6 == 0) {
    local_12 = 2;
    *(uint *)0x5d78 = *(uint *)0x5d78 >> 1;
  }
  do {
    do {
      if (*(int *)0x5d78 == 0) {
        FUN_2000_ccdd(uVar13,0x3c,iVar5 == 0);
        return;
      }
      local_c = (byte *)CONCAT22(*(undefined2 *)0x5c55,(byte *)*(undefined2 *)0x5c53);
      if (iVar3 == 0) {
        func_0x00001694(uVar13,0x8000,0);
        uVar12 = func_0x000011e3(0);
        uVar13 = 0;
        local_4 = func_0x000012e7(0,uVar12);
      }
      if ((iVar4 == 0) && (*(int *)0x7488 = *(int *)0x7488 + 1, *(uint *)0x5db6 <= *(uint *)0x7488))
      {
        *(undefined2 *)0x7488 = 3;
      }
      func_0x00001694(uVar13,0x8000,0);
      uVar12 = func_0x000011e3(0);
      iVar7 = func_0x000012e7(0,uVar12);
      iVar6 = *(int *)0x5c4f;
      func_0x00001694(0,0x8000,0);
      uVar12 = func_0x000011e3(0);
      uVar13 = 0;
      iVar8 = func_0x000012e7(0,uVar12);
      iVar2 = *(int *)0x5c51;
      uVar11 = 0;
    } while (*(int *)0x5c51 == 0);
    do {
      uVar10 = 0;
      if (*(int *)0x5c4f != 0) {
        do {
          bVar1 = *local_c;
          local_c = (byte *)CONCAT22(local_c._2_2_,(byte *)local_c + local_12);
          if (bVar1 != 0) {
            if (iVar4 != 0) {
              *(uint *)0x7488 = (uint)bVar1 + local_4 & *(uint *)0x5dc0;
            }
            *(int *)0x5df0 = (iVar8 - iVar2) + uVar11;
            *(int *)0x5dee = (iVar7 - iVar6) + uVar10;
            (*(code *)*(undefined2 *)0x5c3f)(uVar13,*(undefined2 *)0x6025);
          }
          uVar10 = uVar10 + local_12;
        } while (uVar10 < *(uint *)0x5c4f);
      }
      if ((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) {
        iVar9 = func_0x000134f7(uVar13);
        uVar13 = 0x11c1;
        if (iVar9 != 0) {
          return;
        }
      }
      if (*(int *)0x5d92 == 0x6e) {
        return;
      }
      if ((iVar5 != 0) && (*(uint *)0x5da6 <= *(uint *)0x5d7a)) {
        uVar13 = 0x11c1;
        FUN_1000_4125();
      }
      uVar11 = uVar11 + local_12;
    } while (uVar11 < *(uint *)0x5c51);
  } while( true );
}



// Function: FUN_2000_115b @ 2000:115b

void __cdecl16far FUN_2000_115b(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 local_8;
  uint local_4;
  
  iVar1 = (*(int *)0x5db6 + *(int *)0x5dba) * 3;
  local_8 = (byte *)CONCAT22(*(undefined2 *)0x5d96,(byte *)*(undefined2 *)0x5d94);
  if (*(int *)0x5dc4 == 0) {
    uVar6 = 0;
    uVar5 = 0x8000;
    func_0x00001694();
    uVar4 = func_0x00001395(0,uVar5,uVar6);
    unaff_CS = 0;
    local_4 = func_0x000012e7(0,uVar4);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        if (param_1 == 0) {
          *local_8 = *local_8 | 0xc0;
        }
        else {
          *local_8 = *local_8 & 0x3f;
        }
        local_8 = (byte *)CONCAT22(local_8._2_2_,(byte *)local_8 + 1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
  }
  else {
    local_4 = 0;
  }
  do {
    bVar3 = 0;
    local_8 = (byte *)CONCAT22(*(undefined2 *)0x5d96,(byte *)*(undefined2 *)0x5d94);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        if (*local_8 != 0) {
          *local_8 = *local_8 - 1;
        }
        bVar3 = bVar3 | *local_8;
        local_8 = (byte *)CONCAT22(local_8._2_2_,(byte *)local_8 + 1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    if ((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) {
      iVar2 = func_0x000134f7(unaff_CS);
      unaff_CS = 0x11c1;
      if (iVar2 != 0) {
        return;
      }
    }
    if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
      unaff_CS = 0x11c1;
      FUN_1000_4125();
    }
    local_4 = local_4 ^ 1;
    if (local_4 != 0) {
      (*(code *)*(undefined2 *)0x5c37)
                (unaff_CS,*(int *)0x5d94 + *(int *)0x5dec,*(undefined2 *)0x5d96);
    }
  } while (bVar3 != 0);
  *(undefined2 *)0x5cb1 = 1;
  return;
}



// Function: FUN_2000_1253 @ 2000:1253

void __cdecl16far FUN_2000_1253(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar2 = (undefined1)*(undefined2 *)0x5d8a;
  if (*(int *)0x7484 == 4) {
    uVar5 = *(uint *)0x5db6;
  }
  else {
    uVar5 = *(int *)0x5db6 * 3;
  }
  local_8 = (undefined1 *)
            CONCAT22(*(undefined2 *)0x5d96,(undefined1 *)(*(int *)0x5d94 + *(int *)0x5dec));
  local_c = (undefined1 *)
            CONCAT22(*(undefined2 *)0x5d96,
                     (undefined1 *)
                     (*(int *)0x5d94 + (*(int *)0x5dec + (uVar5 >> 1)) % *(uint *)0x5de8));
  iVar8 = *(int *)0x5d94;
  iVar1 = *(int *)0x5de8;
  if (*(int *)0x7484 == 4) {
LAB_2000_12e4:
    iVar6 = 0;
    if (uVar5 >> 1 != 0) {
      do {
        *local_8 = uVar2;
        *local_c = uVar2;
        puVar4 = (undefined1 *)local_8;
        local_8 = (undefined1 *)CONCAT22(local_8._2_2_,(undefined1 *)local_8 + 1);
        puVar3 = (undefined1 *)local_c;
        local_c = (undefined1 *)CONCAT22(local_c._2_2_,(undefined1 *)local_c + 1);
        if (*(int *)0x7484 == 8) {
          *local_8 = uVar2;
          *local_c = uVar2;
          local_8 = (undefined1 *)CONCAT22(local_8._2_2_,puVar4 + 2);
          local_c = (undefined1 *)CONCAT22(local_c._2_2_,puVar3 + 2);
          *local_8 = uVar2;
          *local_c = uVar2;
          local_8 = (undefined1 *)CONCAT22(local_8._2_2_,puVar4 + 3);
          local_c = (undefined1 *)CONCAT22(local_c._2_2_,puVar3 + 3);
          iVar6 = iVar6 + 2;
          uVar10 = unaff_CS;
        }
        else {
          uVar10 = 0;
          func_0x000029a6(unaff_CS,0x4b);
        }
        if ((undefined1 *)(iVar8 + iVar1) <= (undefined1 *)local_8) {
          local_8 = (undefined1 *)
                    CONCAT22(*(undefined2 *)0x5d96,(undefined1 *)*(undefined2 *)0x5d94);
        }
        if ((undefined1 *)(iVar8 + iVar1) <= (undefined1 *)local_c) {
          local_c = (undefined1 *)
                    CONCAT22(*(undefined2 *)0x5d96,(undefined1 *)*(undefined2 *)0x5d94);
        }
        (*(code *)*(undefined2 *)0x5c37)
                  (uVar10,*(int *)0x5d94 + *(int *)0x5dec,*(undefined2 *)0x5d96);
        if ((*(int *)0x5d7e != 0) || (unaff_CS = uVar10, *(int *)0x5d80 != 0)) {
          unaff_CS = 0x11c1;
          iVar7 = func_0x000134f7(uVar10);
          if (iVar7 != 0) {
            return;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(uVar5 >> 1));
    }
    return;
  }
  uVar11 = 0;
  uVar10 = 0x8000;
  iVar6 = func_0x00001694();
  unaff_CS = 0;
  iVar6 = func_0x000012e7(0,iVar6 << 1,(iVar6 >> 0xf) << 1 | (uint)(iVar6 < 0),uVar10,uVar11);
  if (iVar6 != 0) goto LAB_2000_12e4;
  if (*(int *)0x4b1 != 0) {
    func_0x00001694(0,0x8000,0);
    uVar9 = func_0x000011e3(0);
    iVar8 = func_0x000012e7(0,uVar9);
    if ((iVar8 == 0) && (*(int *)0x5d92 != 0x6e)) {
      uVar10 = 0;
      goto LAB_2000_13d9;
    }
  }
  uVar10 = 1;
LAB_2000_13d9:
  FUN_2000_115b(uVar10);
  return;
}



// Function: FUN_2000_1c1a @ 2000:1c1a

undefined2 __cdecl16far FUN_2000_1c1a(uint param_1,int param_2)

{
  undefined2 uVar1;
  uint *puVar2;
  undefined2 unaff_DS;
  
  uVar1 = *(undefined2 *)*(undefined4 *)0xc02;
  if ((*(int *)0x5dbc == 0) && (*(int *)0x5dca == 0)) {
    if (param_2 == 0) {
      *(uint *)*(undefined4 *)0xc02 = *(uint *)*(undefined4 *)0xc02 | param_1;
    }
    else {
      if (param_2 != 1) {
        puVar2 = (uint *)*(undefined4 *)0xc02;
        *puVar2 = *puVar2 | param_1;
        *puVar2 = *puVar2 & (param_1 | 0xff8f);
        return uVar1;
      }
      *(uint *)*(undefined4 *)0xc02 = *(uint *)*(undefined4 *)0xc02 & ~param_1;
    }
    func_0x00002553();
  }
  return uVar1;
}



// Function: FUN_2000_1c7f @ 2000:1c7f

void __cdecl16far FUN_2000_1c7f(void)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x5dbe == 0) {
    func_0x00003d88();
    func_0x000029a6(0,0x1e);
    func_0x00003d88(0,0x1b8);
    func_0x000029a6(0,0x28);
    func_0x00003d88(0,0x370);
    func_0x000029a6(0,0x32);
    func_0x00003db4(0);
  }
  return;
}



// Function: FUN_2000_1dd7 @ 2000:1dd7

void __cdecl16far FUN_2000_1dd7(void)

{
  uint *puVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  if (*(int *)0x5d74 != 0) {
    unaff_CS = 0;
    func_0x000012d3();
    *(undefined2 *)0x5d74 = 0;
  }
  uVar2 = unaff_CS;
  if (*(int *)0x5d72 != 0) {
    uVar2 = 0;
    func_0x000012d3(unaff_CS,9,*(undefined2 *)0x5ff2,*(undefined2 *)0x5ff4);
    *(undefined2 *)0x5d72 = 0;
  }
  func_0x00001220(uVar2,*(undefined2 *)0x5dea);
  if ((*(int *)0x5cb5 == 0) || ((*(uint *)((int)*(undefined4 *)0x5c5b + 0xc) & 0x800) != 0)) {
    FUN_2000_2052(0);
  }
  if (*(int *)0x5dd2 == 0) {
    *(undefined1 *)0x6007 = 3;
    *(undefined1 *)0x6006 = 5;
    *(undefined1 *)0x6009 = 1;
    *(undefined1 *)0x6008 = 7;
    func_0x0000320e(0,0x16,0x6006);
  }
  func_0x00003f37(0);
  if (*(int *)0x5cb9 != 0) {
    puVar1 = (uint *)((int)*(undefined4 *)0x5c5b + 10);
    *puVar1 = *puVar1 & 0xf7ff;
  }
  return;
}



// Function: FUN_2000_1ee8 @ 2000:1ee8

void __cdecl16far FUN_2000_1ee8(void)

{
  FUN_2000_1dd7();
  func_0x0001955d();
  func_0x000045d4(0x1899,0x441c);
  func_0x000045d4(0,0x441c);
  func_0x000045d4(0,0x441c);
  func_0x000045d4(0,0x441c);
  func_0x000066ab(0);
  func_0x000045d4(0x66a,0x441c);
  func_0x0000b840(0);
  func_0x000045d4(0xb84,0x441c);
  func_0x0000ccda(0);
  func_0x000045d4(0xccd,0x441c);
  FUN_1000_9f01(0);
  func_0x000045d4(0x1899,0x441c);
  func_0x000045d4(0,0x441c);
  FUN_1000_a727();
  func_0x000045d4(0x1a72,0x441c);
  FUN_1000_7f58();
  func_0x000045d4(0x17f5,0x441c);
  FUN_1000_9f04(0);
  func_0x000045d4(0x19f0,0x441c);
  func_0x000045d4(0,0x441c);
  FUN_2000_26c6(0);
  func_0x000011a8(0,9);
  return;
}



// Function: FUN_2000_2052 @ 2000:2052

uint __cdecl16far FUN_2000_2052(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x743e = 0;
  func_0x000032d8();
  uVar4 = 0;
  uVar3 = (uint)(*(int *)0x743e != 0);
  if ((uVar3 != 0) && (param_1 != 0)) {
    do {
      func_0x000029a6(0,10);
      *(undefined2 *)0x743e = 5;
      func_0x000032d8(0,0x33,0x743e);
      iVar1 = *(int *)0x7440;
      *(undefined2 *)0x743e = 6;
      func_0x000032d8(0,0x33,0x743e);
      iVar2 = *(int *)0x7440;
      *(undefined2 *)0x743e = 0xb;
      func_0x000032d8(0,0x33,0x743e);
      uVar4 = uVar4 + 1;
      if (0x32 < uVar4) break;
    } while (((iVar1 != 0 || iVar2 != 0) || *(int *)0x7442 != 0) || *(int *)0x7444 != 0);
    if (0x31 < uVar4) {
      uVar3 = 2;
    }
  }
  return uVar3 & param_1;
}



// Function: FUN_2000_2111 @ 2000:2111

void __cdecl16far FUN_2000_2111(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x7442 = param_1;
  *(undefined2 *)0x744e = param_3;
  *(undefined2 *)0x7444 = param_2;
  *(undefined2 *)0x743e = 0xc;
  func_0x000032d8();
  return;
}



// Function: FUN_2000_213f @ 2000:213f

void __cdecl16far FUN_2000_213f(int param_1)

{
  undefined2 unaff_DS;
  
  *(undefined2 *)0x5d80 = 1;
  func_0x0001955d();
  if (param_1 == 0) {
    func_0x000045d4(0x1899,0x441c);
  }
  else {
    func_0x000045d4(0x1899,0x441c);
  }
  func_0x000045d4(0,0x441c);
  FUN_2000_26c6(0);
  func_0x000011a8(0,100);
  return;
}



// Function: FUN_2000_21d3 @ 2000:21d3

void __cdecl16far FUN_2000_21d3(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  undefined4 uVar5;
  undefined2 local_6;
  undefined2 local_4;
  
  iVar3 = func_0x000046e4();
  if (iVar3 != 3) {
    FUN_2000_213f(1,0xed6);
  }
  *(int *)0x5d6a = local_4 + -1 >> 0xf;
  *(int *)0x5d68 = local_4 + -1;
  uVar5 = func_0x000011e3(0);
  *(undefined2 *)0x5d6a = (int)((ulong)uVar5 >> 0x10);
  *(undefined2 *)0x5d68 = (int)uVar5;
  uVar4 = local_6 + 1;
  puVar1 = (uint *)0x5d68;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar4;
  *(int *)0x5d6a = *(int *)0x5d6a + ((int)uVar4 >> 0xf) + (uint)CARRY2(uVar2,uVar4);
  return;
}



// Function: FUN_2000_223b @ 2000:223b

undefined2 __cdecl16far FUN_2000_223b(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined2 unaff_CS;
  long lVar2;
  undefined2 local_6;
  
  for (uVar1 = *param_1; param_2 <= uVar1; uVar1 = uVar1 / 2) {
    lVar2 = func_0x00002c51(unaff_CS,uVar1);
    local_6 = (undefined2)lVar2;
    if (lVar2 != 0) break;
    unaff_CS = 0;
  }
  *param_1 = uVar1;
  return local_6;
}



// Function: FUN_2000_227c @ 2000:227c

uint __cdecl16far FUN_2000_227c(undefined2 param_1,undefined2 param_2,uint param_3,int param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int in_DX;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar9;
  uint local_41c [512];
  uint local_1c;
  uint local_1a;
  uint local_18;
  int local_16;
  undefined4 local_14;
  uint local_10;
  undefined2 local_e;
  uint *local_c;
  uint local_8;
  byte *local_6;
  int local_4;
  
  local_8 = 0x2000;
  local_6 = (byte *)FUN_2000_223b(&local_8);
  if (local_6 == (byte *)0x0 && in_DX == 0) {
    FUN_2000_213f(1,0xf05);
  }
  else {
    _local_c = (uint *)CONCAT22(unaff_SS,local_41c);
    local_41c[1] = 0;
    local_41c[0] = 0;
    local_4 = in_DX;
    for (uVar7 = 0; uVar7 < 0x100; uVar7 = uVar7 + 2) {
      uVar8 = (undefined2)((ulong)_local_c >> 0x10);
      puVar5 = (uint *)_local_c;
      if ((*(byte *)((int)puVar5 + 3) & 0x80) == 0) {
        uVar4 = *_local_c << 1;
        uVar2 = puVar5[1] << 1 | (uint)((int)*_local_c < 0);
        local_41c[uVar7 * 2 + 1] = uVar2;
        local_41c[uVar7 * 2] = uVar4;
        uVar4 = uVar4 ^ *(uint *)0xc06;
        uVar2 = uVar2 ^ *(uint *)0xc08;
        uVar6 = uVar7 + 1;
      }
      else {
        uVar4 = *_local_c << 1;
        uVar2 = puVar5[1] << 1 | (uint)((int)*_local_c < 0);
        local_41c[(uVar7 + 1) * 2 + 1] = uVar2;
        local_41c[(uVar7 + 1) * 2] = uVar4;
        uVar4 = uVar4 ^ *(uint *)0xc06;
        uVar2 = uVar2 ^ *(uint *)0xc08;
        uVar6 = uVar7;
      }
      local_41c[uVar6 * 2 + 1] = uVar2;
      local_41c[uVar6 * 2] = uVar4;
      uVar1 = (ulong)_local_c >> 0x10;
      _local_c = (uint *)CONCAT22((int)uVar1,local_c + 2);
    }
    local_e = 0;
    local_10 = 0;
    iVar3 = func_0x000047f4();
    if (iVar3 != 0) {
      func_0x00002b47(0,local_6,local_4);
      FUN_2000_213f(1,0xeec);
    }
    local_16 = 0;
    for (local_18 = 0; (local_16 < param_4 || ((local_16 == param_4 && (local_18 < param_3))));
        local_18 = local_18 + uVar7) {
      local_1c = (param_3 - local_18) - 1;
      local_1a = ((param_4 - local_16) - (uint)(param_3 < local_18)) + -1 +
                 (uint)(param_3 - local_18 != 0);
      uVar7 = local_1c;
      if ((local_1a < 0x8000) && ((0 < (int)local_1a || (local_8 < local_1c)))) {
        uVar7 = local_8;
      }
      iVar3 = func_0x000046e4(0,local_6,local_4,1,uVar7,param_1,param_2);
      if (iVar3 == 0) break;
      local_14 = (byte *)CONCAT22(local_4,local_6);
      while (iVar3 != 0) {
        uVar9 = func_0x00001395(0);
        local_10 = (uint)uVar9 ^ local_41c[(uint)(local_e._1_1_ ^ *local_14) * 2];
        local_e = (uint)((ulong)uVar9 >> 0x10) ^
                  local_41c[(uint)(local_e._1_1_ ^ *local_14) * 2 + 1];
        local_14 = (byte *)CONCAT22(local_14._2_2_,(byte *)local_14 + 1);
        iVar3 = iVar3 + -1;
      }
      local_16 = local_16 + (uint)CARRY2(local_18,uVar7);
    }
    func_0x00002b47(0,local_6,local_4);
  }
  return local_10;
}



// Function: FUN_2000_2471 @ 2000:2471

bool __cdecl16far FUN_2000_2471(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_DS;
  bool bVar4;
  long lVar5;
  
  bVar4 = false;
  lVar5 = func_0x0000459f();
  uVar3 = (undefined2)((ulong)lVar5 >> 0x10);
  *(undefined2 *)0x6004 = uVar3;
  *(undefined2 *)0x6002 = (int)lVar5;
  if (lVar5 == 0) {
    FUN_2000_213f(1,0xf26);
  }
  FUN_2000_21d3(*(undefined2 *)0x6002,*(undefined2 *)0x6004);
  if (*(int *)0x5dc8 == 0) {
    uVar1 = FUN_2000_227c(*(undefined2 *)0x6002,*(undefined2 *)0x6004,*(undefined2 *)0x5d68,
                          *(undefined2 *)0x5d6a);
    *(undefined2 *)0x6023 = uVar3;
    *(undefined2 *)0x6021 = uVar1;
  }
  iVar2 = func_0x000047f4(0,*(undefined2 *)0x6002,*(undefined2 *)0x6004,*(undefined2 *)0x5d68,
                          *(undefined2 *)0x5d6a,0);
  if (iVar2 != 0) {
    FUN_2000_213f(1,0xf3d);
  }
  iVar2 = func_0x000046e4(0,param_1,param_2,param_3,1,*(undefined2 *)0x6002,*(undefined2 *)0x6004);
  if (iVar2 != 1) {
    bVar4 = *(int *)0x5dc8 == 0;
  }
  iVar2 = func_0x0000407f(0,*(undefined2 *)0x6002,*(undefined2 *)0x6004);
  if (iVar2 != 0) {
    FUN_2000_213f(1,0xf54);
  }
  return bVar4;
}



// Function: FUN_2000_2559 @ 2000:2559

void __cdecl16far FUN_2000_2559(void)

{
  int iVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined1 local_14 [14];
  undefined4 local_6;
  
  if (*(int *)0x5dc8 == 0) {
    func_0x000025fc();
    func_0x0000277a(0,0xf6c);
    FUN_2000_2a17(2000,4);
    unaff_CS = 0;
    func_0x000025fc(0,3);
  }
  iVar1 = func_0x00005a36(unaff_CS,0x5d17);
  if (iVar1 == 0) {
    local_6 = func_0x00001ea4(0,*(undefined2 *)0x96,*(undefined2 *)0x98);
    if (local_6 == 0) {
      FUN_2000_213f(0,0xf82);
    }
    else {
      func_0x00005b18(0,local_6,0x50);
      func_0x00005a79(0,0x5d17);
    }
  }
  else {
    uVar2 = func_0x0000439f(0,0x5d17);
    if ((uVar2 & 4) != 0) {
      iVar1 = func_0x000059f5(0,local_14);
      local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6);
      if ((iVar1 == 0) ||
         (local_6 = CONCAT22(local_6._2_2_,(undefined2)local_6), *(int *)0x5dc8 != 0))
      goto LAB_2000_266c;
    }
    func_0x000045d4(0,0x441c);
    func_0x000029a6(0,500);
  }
LAB_2000_266c:
  iVar1 = FUN_2000_2471(0x6027);
  if (iVar1 == 0) {
    if ((*(int *)0x5dc8 != 0) ||
       ((*(int *)0x6029 == *(int *)0x6023 && (*(int *)0x6027 == *(int *)0x6021))))
    goto LAB_2000_26b0;
    uVar3 = 0xfca;
  }
  else {
    uVar3 = 0x1000;
  }
  FUN_2000_213f(1,uVar3);
LAB_2000_26b0:
  func_0x0000277a(0,(undefined1 *)&SUB_0000_1017);
  *(undefined2 *)0x5d80 = 0;
  return;
}



// Function: FUN_2000_26c6 @ 2000:26c6

void __cdecl16far FUN_2000_26c6(int param_1)

{
  undefined2 unaff_CS;
  undefined2 uVar1;
  
  uVar1 = 0x10c1;
  if (param_1 != 0) {
    func_0x000045d4();
    func_0x000045d4(0,0x4408);
    func_0x000025fc(0,3);
    unaff_CS = 0;
    func_0x0000277a(0,0x165a);
  }
  func_0x000025fc(unaff_CS,3,uVar1);
  func_0x0000277a(0,0x16a1);
  func_0x000025fc(0,7);
  func_0x0000277a(0,0x16a4);
  func_0x000025fc(0,0xf);
  func_0x0000277a(0,0x16a1);
  func_0x000025fc(0,7);
  func_0x0000277a(0,0x16a4);
  func_0x000025fc(0,0xf);
  func_0x0000277a(0,0x16a4);
  return;
}



// Function: FUN_2000_27fd @ 2000:27fd

void __cdecl16far FUN_2000_27fd(void)

{
  func_0x00003f37();
  func_0x000025fc(0,7);
  func_0x0000277a(0,0x16aa);
  func_0x000025fc(0,0xb);
  func_0x0000277a(0,0x16cb);
  func_0x000025fc(0,3);
  func_0x0000277a(0,0x16f3);
  func_0x0000277a(0,0x173a);
  func_0x0000277a(0,5999);
  func_0x000025fc(0,0xb);
  func_0x0000277a(0,0x19de);
  func_0x000025fc(0,7);
  func_0x0000277a(0,0x1a18);
  func_0x000025fc(0,0xc);
  func_0x0000277a(0,0x1abb);
  func_0x000025fc(0,7);
  func_0x0000277a(0,0x1ac2);
  func_0x000025fc(0,0xe);
  func_0x0000277a(0,0x1add);
  func_0x000025fc(0,7);
  func_0x0000277a(0,0x1b0f);
  func_0x000025fc(0,3);
  func_0x00002f7c(0);
  func_0x000025fc(0,7);
  func_0x0000277a(0,0x1b2a);
  func_0x000025fc(0,3);
  func_0x0000277a(0,0x1bcc);
  func_0x000025fc(0,2);
  func_0x0000277a(0,0x1c7b);
  FUN_2000_26c6(0);
  func_0x000011a8(0,10);
  return;
}



// Function: FUN_2000_2956 @ 2000:2956

void __cdecl16far FUN_2000_2956(undefined2 param_1)

{
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  
  if (*(int *)0x5dca == 0) {
    unaff_CS = 0;
    func_0x000045d4();
    FUN_2000_26c6(0);
  }
  func_0x000011a8(unaff_CS,param_1);
  return;
}



// Function: FUN_2000_2995 @ 2000:2995

undefined2 __cdecl16far FUN_2000_2995(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  long lVar1;
  
  func_0x00005b18();
  lVar1 = func_0x00005aaa(0,param_1,param_2,0x1fc0);
  if (((lVar1 == 0) && (lVar1 = func_0x00005aaa(0,param_1,param_2,0x1fc5), lVar1 == 0)) &&
     (lVar1 = func_0x00005aaa(0,param_1,param_2,0x1fca), lVar1 == 0)) {
    return 0;
  }
  FUN_1000_7d62(0x1fcf);
  func_0x000059cc(0x158d,param_1,param_2,*(undefined2 *)0x5ffa,*(undefined2 *)0x5ffc);
  return 1;
}



// Function: FUN_2000_2a17 @ 2000:2a17

void __cdecl16far FUN_2000_2a17(undefined2 param_1,undefined2 param_2)

{
  undefined2 unaff_DS;
  
  if (*(int *)0x5dbe == 0) {
    func_0x00003d88();
    func_0x000029a6(0,param_2);
    func_0x00003db4(0);
  }
  return;
}



// Function: FUN_2000_2a3a @ 2000:2a3a

undefined1 __cdecl16far FUN_2000_2a3a(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 0x18;
  }
  out(0x3ce,3);
  out(0x3cf,uVar1);
  return uVar1;
}



// Function: FUN_2000_2a55 @ 2000:2a55

void __cdecl16far FUN_2000_2a55(void)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 uVar6;
  undefined2 uVar7;
  int local_1a;
  int local_18;
  int local_16;
  uint local_14;
  uint local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  uint local_4;
  
  *(undefined2 *)0x5d6c = 10;
  *(undefined2 *)0x5d6e = 0xc;
  puVar1 = (undefined1 *)*(undefined4 *)0x5d94;
  uVar5 = (undefined2)((ulong)puVar1 >> 0x10);
  *puVar1 = *(undefined1 *)0x5d8a;
  ((undefined1 *)puVar1)[1] = *(undefined1 *)0x5d6c;
  ((undefined1 *)puVar1)[2] = *(undefined1 *)0x5d6e;
  if (*(int *)0x5dda == 0) {
    uVar7 = 0;
    uVar5 = 0x8000;
    func_0x00001694();
    uVar6 = func_0x000011e3(0,uVar5,uVar7);
    iVar3 = func_0x000012e7(0,uVar6);
    local_14 = iVar3 + 4;
    func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000011e3(0);
    iVar3 = func_0x000012e7(0,uVar6);
    local_12 = iVar3 + 4;
    func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000011e3(0);
    local_10 = func_0x000012e7(0,uVar6);
    local_10 = local_10 + 4;
    if (*(int *)0x5de0 != 0) {
      if (7 < (int)local_14) {
        local_14 = (int)local_14 >> 1;
      }
      if (7 < (int)local_12) {
        local_12 = (int)local_12 >> 1;
      }
      if (7 < local_10) {
        local_10 = local_10 >> 1;
      }
    }
    local_a = 0;
    local_c = 0;
    local_e = 0;
    if (*(int *)0x5de2 == 0) {
      func_0x00001694(0,0x8000,0);
      uVar6 = func_0x00001395(0);
      local_8 = func_0x000012e7(0,uVar6);
      func_0x00001694(0,0x8000,0);
      uVar6 = func_0x00001395(0);
      local_6 = func_0x000012e7(0,uVar6);
      func_0x00001694(0,0x8000,0);
      uVar6 = func_0x00001395(0);
      local_4 = func_0x000012e7(0,uVar6);
    }
    else {
      local_14 = *(uint *)0x5db6;
      local_12 = local_14 >> 1;
      local_4 = 0;
      local_6 = 0;
      local_8 = 0;
      local_10 = 0;
    }
    unaff_CS = 0;
    local_16 = 1;
    local_18 = 1;
    local_1a = 1;
    uVar4 = 3;
    if (3 < *(uint *)0x5dba) {
      do {
        local_e = local_e + 1;
        if ((int)local_14 < local_e) {
          local_e = 0;
          local_8 = local_8 + local_1a;
          if ((2 < local_8) || (local_8 < 1)) {
            local_1a = -local_1a;
          }
        }
        local_c = local_c + 1;
        if ((int)local_12 < local_c) {
          local_c = 0;
          local_6 = local_6 + local_18;
          if ((2 < local_6) || (local_6 < 1)) {
            local_18 = -local_18;
          }
        }
        local_a = local_a + 1;
        if (local_10 < local_a) {
          local_a = 0;
          local_4 = local_4 + local_16;
          if ((2 < (int)local_4) || ((int)local_4 < 1)) {
            local_16 = -local_16;
          }
        }
        uVar5 = (undefined2)((ulong)*(undefined4 *)0x5d94 >> 0x10);
        iVar3 = (int)*(undefined4 *)0x5d94;
        *(byte *)(iVar3 + uVar4) = ((byte)local_8 & 1) << 5 | ((byte)local_8 & 2) << 1;
        *(byte *)(iVar3 + uVar4) =
             *(byte *)(iVar3 + uVar4) | ((byte)local_6 & 1) << 4 | (byte)local_6 & 2;
        *(byte *)(iVar3 + uVar4) =
             *(byte *)(iVar3 + uVar4) | ((byte)local_4 & 1) << 3 | (byte)((int)(local_4 & 2) >> 1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)0x5dba);
    }
  }
  else {
    uVar4 = 3;
    if (3 < *(uint *)0x5dba) {
      do {
        func_0x00001694(unaff_CS,0x8000,0);
        uVar6 = func_0x000011e3(0);
        unaff_CS = 0;
        uVar2 = func_0x000012e7(0,uVar6);
        *(undefined1 *)((int)*(undefined4 *)0x5d94 + uVar4) = uVar2;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)0x5dba);
    }
  }
  if (*(int *)0x5dd0 != 0) {
    func_0x00001694(unaff_CS,0x8000,0);
    uVar6 = func_0x000011e3(0);
    uVar2 = func_0x000012e7(0,uVar6);
    *(undefined1 *)((int)*(undefined4 *)0x5d94 + 1) = uVar2;
    func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000011e3(0);
    uVar2 = func_0x000012e7(0,uVar6);
    *(undefined1 *)((int)*(undefined4 *)0x5d94 + 2) = uVar2;
    func_0x00001694(0,0x8000,0);
    uVar6 = func_0x000011e3(0);
    unaff_CS = 0;
    uVar2 = func_0x000012e7(0,uVar6);
    *(undefined1 *)((int)*(undefined4 *)0x5d94 + 3) = uVar2;
    uVar4 = 4;
    if (4 < *(uint *)0x5dba) {
      do {
        uVar5 = (undefined2)((ulong)*(undefined4 *)0x5d94 >> 0x10);
        *(undefined1 *)(*(int *)0x5d94 + uVar4) =
             *(undefined1 *)((int)*(undefined4 *)0x5d94 + (uVar4 & 3));
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)0x5dba);
    }
  }
  func_0x00004d55(unaff_CS,*(int *)0x5d94 + 3,*(undefined2 *)0x5d96,*(int *)0x5d94 + uVar4,
                  *(undefined2 *)0x5d96,*(undefined2 *)0x5db6);
  *(int *)0x7488 = *(int *)0x7488 + 1;
  if (*(uint *)0x5db6 <= *(uint *)0x7488) {
    *(undefined2 *)0x7488 = 3;
  }
  return;
}



// Function: FUN_2000_2dc9 @ 2000:2dc9

void __cdecl16far FUN_2000_2dc9(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  char local_3;
  
  uVar6 = 0;
  uVar5 = 0x8000;
  func_0x00001694();
  uVar4 = func_0x000011e3(0,uVar5,uVar6);
  iVar3 = func_0x000012e7(0,uVar4);
  if ((iVar3 == 0) || (param_1 != 0)) {
    func_0x00001694(0,0x8000,0);
    uVar4 = func_0x00001395(0);
    local_3 = func_0x000012e7(0,uVar4);
    local_3 = local_3 + -0x11;
  }
  else {
    local_3 = '\0';
  }
  func_0x00004d36(0,*(undefined2 *)0x5d94,*(undefined2 *)0x5d96,local_3,9);
  if (param_1 != 0) {
    func_0x00001694(0,0x8000,0);
    uVar4 = func_0x000011e3(0);
    uVar1 = func_0x000012e7(0,uVar4);
    *(undefined1 *)*(undefined4 *)0x5d94 = uVar1;
    func_0x00001694(0,0x8000,0);
    uVar4 = func_0x000011e3(0);
    uVar1 = func_0x000012e7(0,uVar4);
    *(undefined1 *)((int)*(undefined4 *)0x5d94 + 1) = uVar1;
    func_0x00001694(0,0x8000,0);
    uVar4 = func_0x000011e3(0);
    uVar1 = func_0x000012e7(0,uVar4);
    *(undefined1 *)((int)*(undefined4 *)0x5d94 + 2) = uVar1;
  }
  func_0x00001694(0,0x8000,0);
  uVar4 = func_0x000011e3(0);
  uVar1 = func_0x000012e7(0,uVar4);
  *(undefined1 *)((int)*(undefined4 *)0x5d94 + 4) = uVar1;
  func_0x00001694(0,0x8000,0);
  uVar4 = func_0x000011e3(0);
  cVar2 = func_0x000012e7(0,uVar4);
  *(char *)((int)*(undefined4 *)0x5d94 + 5) = *(char *)0x7438 + cVar2;
  func_0x00001694(0,0x8000,0);
  uVar4 = func_0x000011e3(0);
  uVar1 = func_0x000012e7(0,uVar4);
  uVar5 = (undefined2)((ulong)*(undefined4 *)0x5d94 >> 0x10);
  iVar3 = (int)*(undefined4 *)0x5d94;
  *(undefined1 *)(iVar3 + 6) = uVar1;
  *(undefined1 *)(iVar3 + 8) = *(undefined1 *)0x7438;
  return;
}



// Function: FUN_2000_2fff @ 2000:2fff

/* WARNING: Control flow encountered bad instruction data */

void __cdecl16far FUN_2000_2fff(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_CS;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  undefined4 uVar5;
  undefined2 local_14 [6];
  int local_8 [3];
  
  FUN_2000_1c1a(0x40,0);
  if (*(int *)0x5de2 == 0) {
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      func_0x00001694(unaff_CS,0x8000,0);
      uVar5 = func_0x000011e3(0);
      uVar2 = func_0x000012e7(0,uVar5);
      local_14[iVar4] = uVar2;
      func_0x00001694(0,0x8000,0);
      uVar5 = func_0x000011e3(0);
      iVar3 = func_0x000012e7(0,uVar5);
      if (iVar3 == 0) {
        func_0x00001694(0,0x8000,0);
        uVar5 = func_0x000011e3(0);
        iVar3 = func_0x000012e7(0,uVar5);
        local_8[iVar4] = (*(uint *)0x743c >> 1) + iVar3;
      }
      else {
        local_8[iVar4] = *(int *)0x743c;
      }
      unaff_CS = 0;
    }
  }
  else {
    for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
      local_14[iVar4] = 0;
      local_8[iVar4] = *(int *)0x743c;
    }
  }
  FUN_2000_2dc9(0);
  func_0x00001694(unaff_CS,0x8000,0);
  uVar5 = func_0x000011e3(0);
  iVar4 = func_0x000012e7(0,uVar5);
  if (iVar4 == 0) {
    if (9 < (uint)(*(int *)0x5dba * 3)) {
      if (((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) && (iVar4 = FUN_2000_34f7(), iVar4 != 0))
      {
        return;
      }
      pcVar1 = (code *)swi(0x37);
      (*pcVar1)();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (9 < (uint)(*(int *)0x5dba * 3)) {
    if (((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) && (iVar4 = FUN_2000_34f7(), iVar4 != 0)) {
      return;
    }
    pcVar1 = (code *)swi(0x37);
    (*pcVar1)();
    halt_baddata();
  }
  func_0x00004d55(0,*(int *)0x5d94 + 9,*(undefined2 *)0x5d96,*(int *)0x5d94 + 9,
                  *(undefined2 *)0x5d96,*(int *)0x5db6 * 3);
  *(int *)0x7488 = *(int *)0x7488 + 1;
  if (*(uint *)0x5db6 <= *(uint *)0x7488) {
    *(undefined2 *)0x7488 = 3;
  }
  FUN_2000_1c1a(0x40,1);
  return;
}



// Function: FUN_2000_3440 @ 2000:3440

void __cdecl16far FUN_2000_3440(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  if (*(int *)0x24a2 != 0) {
    param_1 = 2;
  }
  if (param_1 == 0) {
    if (*(int *)0xbfe == 0) {
      *(undefined2 *)0xbfe = 1;
      uVar1 = FUN_2000_1c1a(0x10,0);
      *(undefined2 *)0x5d82 = uVar1;
      while( true ) {
        if (*(int *)0xbfe == 0) {
          return;
        }
        if (((*(int *)0x5d7e != 0) || (*(int *)0x5d80 != 0)) &&
           (iVar2 = FUN_2000_34f7(), iVar2 != 0)) break;
        if ((*(int *)0xc00 != 0) && (*(uint *)0x5da6 <= *(uint *)0x5d7a)) {
          FUN_2000_4125();
        }
      }
      return;
    }
    uVar3 = (uint)(*(int *)0xc00 == 0);
  }
  else {
    if (((param_1 == 1) && (*(int *)0xbfe != 0)) && (*(int *)0x5d80 == 0)) {
      FUN_2000_2a17(0x1b8,10);
    }
    if (*(int *)0xbfe != 0) {
      FUN_2000_1c1a(*(undefined2 *)0x5d82,2);
    }
    uVar3 = 0;
    *(undefined2 *)0xbfe = 0;
  }
  *(uint *)0xc00 = uVar3;
  return;
}



// Function: FUN_2000_34f7 @ 2000:34f7

undefined2 __cdecl16far FUN_2000_34f7(void)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  undefined2 uVar4;
  int *piVar5;
  undefined2 unaff_DS;
  
  if (*(int *)0x5d7e != 0) {
    *(int *)0x5d7e = *(int *)0x5d7e + -1;
  }
  if (*(int *)0x5d7c != 0) {
    *(undefined2 *)0x5d7c = 0;
    if (*(int *)0x5d8e == 0) {
      FUN_2000_2a17(0x4b0,5);
LAB_2000_352d:
      *(undefined2 *)0x5d80 = 1;
      return 1;
    }
    goto LAB_2000_3905;
  }
  if ((*(int *)0x5d80 != 0) || (*(int *)0x5dca != 0)) goto LAB_2000_352d;
  iVar3 = func_0x00002553();
  if (iVar3 == 0) goto LAB_2000_3905;
  uVar4 = func_0x00002578(0,0);
  *(undefined2 *)0x5d92 = uVar4;
  if (*(char *)0x5d92 == '\0') {
    if ((*(int *)0x5dce != 0) || (*(int *)0xc0a != 0)) {
LAB_2000_38ff:
      *(undefined2 *)0x5d92 = *(undefined2 *)0x5d90;
      goto LAB_2000_3905;
    }
    if ((0x77 < *(byte *)0x5d93) && (*(byte *)0x5d93 < 0x82)) {
      bVar2 = *(char *)0x5d93 + 0x88;
LAB_2000_367f:
      *(byte *)0x5d92 = bVar2 | 0x80;
      goto LAB_2000_38f7;
    }
    if ((0xf < *(byte *)0x5d93) && (*(byte *)0x5d93 < 0x1a)) {
      bVar2 = *(char *)0x5d93 - 6;
      goto LAB_2000_367f;
    }
    if ((0x1d < *(byte *)0x5d93) && (*(byte *)0x5d93 < 0x27)) {
      bVar2 = *(char *)0x5d93 - 10;
      goto LAB_2000_367f;
    }
    if ((*(byte *)0x5d93 < 0x2c) || (0x32 < *(byte *)0x5d93)) {
      iVar3 = 0x12;
      piVar5 = (int *)0x1cfc;
      do {
        if (*piVar5 == *(int *)0x5d92) {
                    /* WARNING: Could not recover jumptable at 0x0002370d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*(code *)piVar5[0x12])();
          return uVar4;
        }
        piVar5 = piVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      goto LAB_2000_38ff;
    }
    *(byte *)0x5d92 = *(char *)0x5d93 - 0xfU | 0x80;
    *(undefined2 *)0x5d90 = *(undefined2 *)0x5d92;
    if ((*(byte *)0x5d92 & 0x7f) < *(uint *)0x5d9c) goto LAB_2000_3905;
    uVar4 = 0;
    *(undefined2 *)0x5d92 = 0;
  }
  else {
    uVar1 = func_0x00001f66(0,*(byte *)0x5d92 & 0x7f);
    *(undefined1 *)0x5d92 = uVar1;
    *(undefined1 *)0x5d93 = 0;
    iVar3 = 8;
    piVar5 = (int *)0x1d44;
    do {
      if (*piVar5 == *(int *)0x5d92) {
                    /* WARNING: Could not recover jumptable at 0x000235a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)piVar5[8])();
        return uVar4;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
LAB_2000_38f7:
    uVar4 = *(undefined2 *)0x5d92;
  }
  *(undefined2 *)0x5d90 = uVar4;
LAB_2000_3905:
  return *(undefined2 *)0x5d80;
}



// Function: FUN_2000_39e5 @ 2000:39e5

/* WARNING: Control flow encountered bad instruction data */

void __cdecl16far FUN_2000_39e5(uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined2 extraout_DX;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  undefined2 uVar17;
  undefined2 unaff_CS;
  undefined2 uVar18;
  undefined2 unaff_DS;
  
  uVar17 = (undefined2)((ulong)param_1 >> 0x10);
  puVar14 = (uint *)param_1;
  uVar4 = puVar14[1] >> 1;
  uVar5 = *param_1 >> 1;
  uVar1 = uVar5;
  if (uVar4 < uVar5) {
    uVar1 = uVar4;
  }
  uVar16 = 0;
  do {
    if (puVar14[1] <= uVar16) {
      return;
    }
    uVar10 = (int)(uVar4 - uVar16) >> 0xf;
    iVar6 = (uVar4 - uVar16 ^ uVar10) - uVar10;
    uVar10 = *param_1;
    for (uVar15 = 0; uVar15 < *param_1; uVar15 = uVar15 + 1) {
      uVar11 = (int)(uVar5 - uVar15) >> 0xf;
      iVar7 = (uVar5 - uVar15 ^ uVar11) - uVar11;
      if ((uVar1 - 1) * (uVar1 - 1) < (uint)(iVar6 * iVar6 + iVar7 * iVar7)) {
        *(undefined1 *)((int)*(undefined4 *)(puVar14 + 2) + uVar10 * uVar16 + uVar15) = 0;
        uVar18 = unaff_CS;
      }
      else {
        uVar11 = (uVar4 + uVar4 / 4) - uVar16;
        uVar12 = (int)uVar11 >> 0xf;
        uVar8 = (uVar5 + uVar5 / 4) - uVar15;
        uVar13 = (int)uVar8 >> 0xf;
        if (((uVar11 ^ uVar12) != uVar12) || ((uVar8 ^ uVar13) != uVar13)) {
          pcVar2 = (code *)swi(0x37);
          (*pcVar2)();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pcVar2 = (code *)swi(0x35);
        uVar3 = (*pcVar2)();
        uVar15 = uVar15 + 1;
        out(extraout_DX,uVar3);
        uVar18 = 0;
        iVar7 = func_0x00000fbe(unaff_CS);
        bVar9 = (byte)(iVar7 % 0xfd);
        if (*(uint *)0x5db6 < 0x80) {
          bVar9 = (byte)((uint)(iVar7 % 0xfd) >> 1) & 0x7f;
        }
        *(char *)((int)*(undefined4 *)(puVar14 + 2) + uVar10 * uVar16 + uVar15) = bVar9 + 3;
      }
      unaff_CS = uVar18;
    }
    uVar16 = uVar16 + 1;
  } while( true );
}



// Function: FUN_2000_3bcf @ 2000:3bcf

void __cdecl16far FUN_2000_3bcf(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  
  pcVar1 = (code *)swi(0x35);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x34);
  (*pcVar1)();
  uVar2 = func_0x00000fbe();
  func_0x00003d88(0,uVar2);
  func_0x000029a6(0,param_3);
  func_0x00003db4(0);
  return;
}



// Function: FUN_2000_3bff @ 2000:3bff

void __cdecl16far FUN_2000_3bff(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  byte extraout_AH;
  uint uVar4;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined1 uVar6;
  undefined1 *puVar5;
  int iVar7;
  undefined1 *puVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  int local_4;
  
  if (*(int *)0x5dbe == 0) {
    iVar7 = 0;
    do {
      local_4 = 0;
      do {
        iVar3 = iVar7 * 0x30 + local_4 * 4;
        puVar5 = (undefined1 *)*(int *)0xc14;
        *(undefined2 *)(&stack0xfe7e + iVar3) = *(undefined2 *)0xc16;
        *(undefined1 **)(&stack0xfe7c + iVar3) = puVar5;
        pcVar1 = (code *)swi(0x35);
        (*pcVar1)();
        pcVar1 = (code *)swi(0x38);
        (*pcVar1)();
        puVar5[(int)(&stack0xfe7c + iVar3)] = puVar5[(int)(&stack0xfe7c + iVar3)] & extraout_AH;
        pcVar1 = (code *)swi(0x35);
        (*pcVar1)();
        pcVar1 = (code *)swi(0x3d);
        (*pcVar1)();
        local_4 = local_4 + 1;
      } while (local_4 < 0xc);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 8);
    if ((*(int *)0x5d7c == 0) && (iVar7 = func_0x00002553(), iVar7 == 0)) {
      for (puVar8 = (undefined1 *)0x7; 1 < (int)puVar8; puVar8 = puVar8 + -1) {
        if ((*(int *)0x5d7c != 0) || (iVar7 = func_0x00002553(), iVar7 != 0)) goto LAB_2000_3d66;
        local_4 = 0;
        do {
          puVar5 = &stack0xfe7c + (int)puVar8 * 0x30 + *(int *)(local_4 * 2 + 0xc0c) * 4;
          pcVar1 = (code *)swi(0x3c);
          (*pcVar1)();
          pcVar1 = (code *)swi(0x35);
          uVar4 = (*pcVar1)();
          do {
          } while ((uVar4 & 0x4000) != 0);
          pcVar1 = (code *)swi(0x3d);
          (*pcVar1)();
          FUN_2000_3bcf();
          local_4 = local_4 + 1;
        } while (local_4 < 4);
      }
      if ((*(int *)0x5d7c == 0) && (iVar7 = func_0x00002553(), iVar7 == 0)) {
        iVar7 = 0;
        do {
          uVar6 = (undefined1)((uint)puVar5 >> 8);
          pcVar1 = (code *)swi(0x35);
          (*pcVar1)();
          LOCK();
          *(undefined1 *)0x83ff = uVar6;
          UNLOCK();
          in(extraout_DX);
          puVar5 = (undefined1 *)0x83fe;
          uVar2 = *(undefined4 *)0x50b8;
          *(char *)(iVar7 + -0x7c35) = *(char *)(iVar7 + -0x7c35) + (char)extraout_DX;
          *(int *)(&stack0x04ea + (int)puVar8) = *(int *)(&stack0x04ea + (int)puVar8) + 1;
          pcVar1 = (code *)swi(0x35);
          uVar4 = (*pcVar1)();
          do {
          } while ((uVar4 & 0x4000) != 0);
          pcVar1 = (code *)swi(0x3d);
          (*pcVar1)();
          FUN_2000_3bcf();
          uVar6 = (undefined1)((uint)puVar5 >> 8);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 7);
        if ((*(int *)0x5d7c == 0) && (iVar7 = func_0x00002553(), iVar7 == 0)) {
          pcVar1 = (code *)swi(0x35);
          (*pcVar1)();
          LOCK();
          *(undefined1 *)0x83ff = uVar6;
          UNLOCK();
          in(extraout_DX_00);
          uVar6 = in(extraout_DX_00);
          *puVar8 = uVar6;
          (&stack0x06c3)[(int)puVar8] = (&stack0x06c3)[(int)puVar8] + '\x01';
        }
      }
    }
LAB_2000_3d66:
    func_0x00003db4();
  }
  return;
}



// Function: FUN_2000_4125 @ 2000:4125

void __cdecl16far FUN_2000_4125(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  if ((*(int *)0xbfe == 0) || (*(int *)0xc00 != 0)) {
    if (*(int *)0x7484 == 4) {
      *(int *)0x5dec = *(int *)0x5dec + 1;
      if (*(uint *)0x5dba <= *(uint *)0x5dec) {
        *(undefined2 *)0x5dec = 3;
      }
    }
    else {
      iVar1 = *(int *)0x5dec;
      iVar2 = *(int *)0x5da4;
      *(uint *)0x5dec = iVar1 + iVar2;
      if (*(uint *)0x5db8 <= (uint)(iVar1 + iVar2)) {
        *(undefined2 *)0x5dec = 9;
      }
    }
    (*(code *)*(undefined2 *)0x5c37)();
  }
  *(undefined2 *)0x5d7a = 0;
  return;
}



// Function: FUN_2000_41e6 @ 2000:41e6

void __cdecl16far FUN_2000_41e6(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  long lVar4;
  char local_9;
  undefined4 local_8;
  uint local_4;
  
  local_8 = (char *)func_0x0000598f();
  if (local_8 != (char *)0x0) {
    do {
      pcVar1 = (char *)local_8 + 1;
      local_8 = (char *)CONCAT22(local_8._2_2_,pcVar1);
      if (*local_8 == '\0') break;
    } while ((*local_8 == ' ') || (*local_8 == '\t'));
    if ((*local_8 != '\0') && (iVar2 = func_0x00005909(0,pcVar1,local_8._2_2_,0x20da), iVar2 != -1))
    {
      lVar4 = func_0x0000598f(0,pcVar1,local_8._2_2_,0x5b);
      if ((lVar4 != 0) &&
         (iVar2 = func_0x00005909(0,(int)lVar4 + 1,(int)((ulong)lVar4 >> 0x10),0x20dd), iVar2 != -1)
         ) {
        if (*(uint *)0x5d88 < local_4) {
          local_4 = *(uint *)0x5d88;
        }
        if ((int)local_4 < 0) {
          local_4 = 0;
        }
        uVar3 = 0;
        if (*(int *)0x5d9c != 0) {
          do {
            if (*(char *)(uVar3 * 0xf + 0x20c) == local_9) {
              *(uint *)(uVar3 * 0xf + 0x202) = local_4;
              return;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)0x5d9c);
        }
      }
    }
  }
  return;
}



// Function: FUN_2000_42da @ 2000:42da

void __cdecl16far FUN_2000_42da(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  long lVar4;
  char local_9;
  undefined4 local_8;
  uint local_4;
  
  local_8 = (char *)func_0x0000598f();
  if (local_8 != (char *)0x0) {
    do {
      pcVar1 = (char *)local_8 + 1;
      local_8 = (char *)CONCAT22(local_8._2_2_,pcVar1);
      if (*local_8 == '\0') break;
    } while ((*local_8 == ' ') || (*local_8 == '\t'));
    if ((*local_8 != '\0') && (iVar2 = func_0x00005909(0,pcVar1,local_8._2_2_,0x20da), iVar2 != -1))
    {
      lVar4 = func_0x0000598f(0,pcVar1,local_8._2_2_,0x5b);
      if ((lVar4 != 0) &&
         (iVar2 = func_0x00005909(0,(int)lVar4 + 1,(int)((ulong)lVar4 >> 0x10),0x20dd), iVar2 != -1)
         ) {
        if (*(uint *)0x5d88 < local_4) {
          local_4 = *(uint *)0x5d88;
        }
        if ((int)local_4 < 0) {
          local_4 = 0;
        }
        uVar3 = 0;
        if (*(int *)0x5d9a != 0) {
          do {
            if (*(char *)(uVar3 * 0xf + 0x428) == local_9) {
              *(uint *)(uVar3 * 0xf + 0x41e) = local_4;
              return;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < *(uint *)0x5d9a);
        }
      }
    }
  }
  return;
}



// Function: FUN_2000_43ce @ 2000:43ce

void __cdecl16far FUN_2000_43ce(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_DS;
  char local_8;
  char local_7;
  undefined4 local_6;
  
  local_6 = (char *)CONCAT22(param_2,param_1);
  while( true ) {
    if ((*local_6 == '\0') || ((*local_6 != ' ' && (*local_6 != '\t')))) break;
    local_6 = (char *)CONCAT22(local_6._2_2_,(char *)local_6 + 1);
  }
  if ((*local_6 != '\0') &&
     ((iVar2 = func_0x00005909(), iVar2 != -1 &&
      (local_6 = (char *)func_0x0000598f(0,(char *)local_6,local_6._2_2_,0x5b),
      local_6 != (char *)0x0)))) {
    do {
      pcVar1 = (char *)local_6 + 1;
      local_6 = (char *)CONCAT22(local_6._2_2_,pcVar1);
      if (*local_6 == '\0') break;
    } while ((*local_6 == ' ') || (*local_6 == '\t'));
    if (((*local_6 != '\0') && (iVar2 = func_0x00005909(0,pcVar1,local_6._2_2_,0x20da), iVar2 != -1)
        ) && (((local_8 == 'n' || (local_8 == 'y')) && (uVar3 = 0, *(int *)0x5d98 != 0)))) {
      do {
        if (*(char *)(uVar3 * 7 + 0x474) == local_7) {
          *(uint *)(uVar3 * 7 + 0x479) = (uint)(local_8 == 'y');
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)0x5d98);
    }
  }
  return;
}



// Function: FUN_2000_44ce @ 2000:44ce

void __cdecl16far FUN_2000_44ce(void)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  long lVar3;
  char local_9;
  undefined4 local_8;
  int local_4;
  
  local_8 = (char *)func_0x0000598f();
  if (local_8 != (char *)0x0) {
    do {
      pcVar1 = (char *)local_8 + 1;
      local_8 = (char *)CONCAT22(local_8._2_2_,pcVar1);
      if (*local_8 == '\0') break;
    } while ((*local_8 == ' ') || (*local_8 == '\t'));
    if ((*local_8 != '\0') && (iVar2 = func_0x00005909(0,pcVar1,local_8._2_2_,0x20da), iVar2 != -1))
    {
      lVar3 = func_0x0000598f(0,pcVar1,local_8._2_2_,0x5b);
      if ((lVar3 != 0) &&
         (iVar2 = func_0x00005909(0,(int)lVar3 + 1,(int)((ulong)lVar3 >> 0x10),0x20dd), iVar2 != -1)
         ) {
        if (0x100 < local_4) {
          local_4 = 0x100;
        }
        if (local_4 < 0) {
          local_4 = 1;
        }
        if (local_9 == 'f') {
          *(int *)0x5da8 = local_4 * 0x12;
        }
        else if (local_9 == 'i') {
          *(int *)0x5cc5 = local_4;
        }
        else if (local_9 == 'x') {
          *(int *)0x5cc3 = local_4;
        }
      }
    }
  }
  return;
}



// Function: FUN_2000_45be @ 2000:45be

undefined2 __cdecl16far FUN_2000_45be(void)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  long lVar8;
  char local_58 [80];
  int local_8;
  char *local_6;
  undefined2 uVar9;
  
  uVar7 = 0;
  lVar8 = func_0x0000459f();
  *(undefined2 *)0x6000 = (int)((ulong)lVar8 >> 0x10);
  *(undefined2 *)0x5ffe = (int)lVar8;
  pcVar4 = _local_6;
  if (lVar8 == 0) {
    uVar7 = 1;
  }
  else {
    while (_local_6 = pcVar4, lVar8 = func_0x00004236(uVar7,local_58), lVar8 != 0) {
      uVar7 = 0;
      iVar5 = func_0x00005a36(0,local_58);
      pcVar4 = _local_6;
      if (iVar5 != 0) {
        _local_6 = (char *)func_0x0000598f(0,local_58);
        if (_local_6 != (char *)0x0) {
          *_local_6 = '\0';
        }
        uVar7 = 0;
        iVar5 = func_0x00005a36(0,local_58);
        pcVar4 = _local_6;
        if (iVar5 != 0) {
          _local_6 = (char *)CONCAT22(unaff_SS,local_58);
          while( true ) {
            pcVar4 = _local_6;
            cVar1 = *_local_6;
            uVar9 = (undefined2)((ulong)_local_6 >> 0x10);
            uVar2 = uVar9;
            if ((cVar1 == '\0') || ((*pcVar4 != ' ' && (*pcVar4 != '\t')))) break;
            _local_6 = (char *)CONCAT22(uVar9,local_6 + 1);
          }
          if (*pcVar4 != '\0') {
            uVar7 = 0;
            pcVar3 = local_6;
            _local_6 = pcVar4;
            lVar8 = func_0x00005a55(0,pcVar3,uVar2);
            pcVar4 = _local_6;
            if (lVar8 != 0) {
              local_8 = (int)*_local_6;
              iVar5 = 5;
              piVar6 = (int *)0x2b30;
              do {
                uVar7 = 0x2000;
                if (*piVar6 == local_8) {
                    /* WARNING: Could not recover jumptable at 0x000246e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  uVar7 = (*(code *)piVar6[5])();
                  return uVar7;
                }
                piVar6 = piVar6 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
              uVar9 = (undefined2)((ulong)_local_6 >> 0x10);
              uVar2 = uVar9;
              local_6 = (char *)pcVar4;
              pcVar3 = local_6;
              _local_6 = pcVar4;
              FUN_2000_43ce(pcVar3,uVar2);
              pcVar4 = _local_6;
            }
          }
        }
      }
    }
    func_0x0000102f(0,*(undefined2 *)0x5ffe,*(undefined2 *)0x6000);
    iVar5 = func_0x0000407f(0,*(undefined2 *)0x5ffe,*(undefined2 *)0x6000);
    if (iVar5 != 0) {
      FUN_1000_7d62(0x20e3);
    }
    uVar7 = 0;
  }
  return uVar7;
}



// Function: FUN_2000_4936 @ 2000:4936

undefined2 __cdecl16far FUN_2000_4936(int param_1)

{
  int iVar1;
  int unaff_SS;
  undefined2 unaff_DS;
  undefined1 local_16 [10];
  char local_c;
  int local_8;
  undefined4 local_6;
  
  if (param_1 < 0) {
    return 0;
  }
  local_8 = func_0x000042d2();
  if ((local_8 == 0) || (param_1 == 0)) {
    if (local_8 == 0) {
      func_0x0000439f(0,0x5c5f);
      if (&stack0x0000 != (undefined1 *)0xc || unaff_SS != 0) {
        iVar1 = func_0x00001f66(0,(int)local_c);
        func_0x0000128e(0,iVar1 + -0x61);
      }
    }
    else {
      func_0x0000439f(0,*(undefined2 *)0x5ffa,*(undefined2 *)0x5ffc,0,0,0,0,local_16);
      func_0x0000439f(0,0x5d17);
      func_0x00004374(0,0x5c5f);
      iVar1 = func_0x000042d2(0,0x5c5f);
      if (iVar1 != 0) {
        local_6 = func_0x00001ea4(0,*(undefined2 *)0x5ffa,*(undefined2 *)0x5ffc);
        if (local_6 == 0) {
          return 0;
        }
        func_0x000059cc(0,0x5c5f);
      }
    }
    iVar1 = FUN_2000_2995(0x5c5f);
    if (iVar1 != 0) {
      func_0x000045d4(0,0x441c);
      func_0x000059cc(0,0x5c5f);
      goto LAB_2000_497f;
    }
    iVar1 = FUN_2000_45be(0x5c5f);
    if ((iVar1 == 0) || (param_1 < 1)) {
      func_0x000025fc(0,9);
      if (*(int *)0x5dbc != 0) {
        return 0;
      }
      if (*(int *)0x5dca != 0) {
        return 0;
      }
      func_0x0000277a(0,0x2341);
      return 0;
    }
  }
  func_0x000045d4(0,0x441c);
LAB_2000_497f:
  func_0x000029a6(0,0x4e2);
  return 1;
}



// Function: FUN_2000_4afd @ 2000:4afd

undefined2 __cdecl16far FUN_2000_4afd(int param_1,undefined4 param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 unaff_DS;
  long lVar10;
  char local_7;
  undefined2 local_4;
  
  local_4 = 0;
  *param_3 = 0xffff;
  func_0x000059cc();
  cVar2 = func_0x000012ad(0);
  if (0 < param_1) {
    for (iVar4 = 1; iVar4 < param_1; iVar4 = iVar4 + 1) {
      uVar9 = (undefined2)((ulong)param_2 >> 0x10);
      iVar6 = (int)param_2;
      if ((*(char *)*(undefined4 *)(iVar6 + iVar4 * 4) == '-') ||
         (*(char *)*(undefined4 *)(iVar6 + iVar4 * 4) == cVar2)) {
        *(undefined1 *)*(undefined4 *)(iVar6 + iVar4 * 4) = 0x2d;
        for (iVar8 = 1; uVar1 = *(undefined4 *)(iVar6 + iVar4 * 4),
            local_7 = *(char *)((int)uVar1 + iVar8), local_7 != '\0'; iVar8 = iVar8 + 1) {
          if (local_7 == cVar2) {
            local_7 = '-';
          }
          iVar3 = func_0x00001f66(0,(int)local_7);
          iVar5 = 0x1b;
          piVar7 = (int *)0x3333;
          do {
            if (*piVar7 == iVar3) {
                    /* WARNING: Could not recover jumptable at 0x00024bb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (*(code *)piVar7[0x1b])();
              return uVar9;
            }
            piVar7 = piVar7 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          func_0x000045d4(0x2000,0x441c);
          FUN_2000_27fd();
        }
      }
      else {
        func_0x000059cc(0,0x5c5f);
        lVar10 = func_0x0000598f(0,0x5c5f);
        if (lVar10 != 0) {
          FUN_2000_27fd();
        }
        lVar10 = func_0x0000598f(0,0x5c5f);
        if (lVar10 == 0) {
          lVar10 = func_0x0000598f(0,0x5c5f);
          if (lVar10 == 0) {
            func_0x00005950(0,0x5c5f);
          }
          local_4 = 1;
        }
        else {
          func_0x000059cc(0,0x5c5f);
          local_4 = 0xffff;
        }
      }
    }
  }
  if ((*(int *)0x5dd4 == 0) && (iVar4 = func_0x00019985(0), iVar4 == 0)) {
    func_0x000045d4(0x1899,0x441c);
    *(undefined2 *)0x5dd4 = 1;
  }
  return local_4;
}



// Function: FUN_2000_5149 @ 2000:5149

void __cdecl16far FUN_2000_5149(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined2 unaff_DS;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar6 = 0;
  uVar5 = 0x8000;
  func_0x00001694();
  uVar4 = func_0x000011e3(0,uVar5,uVar6);
  uVar5 = func_0x000012e7(0,uVar4);
  *(undefined2 *)0x5cc1 = uVar5;
  if (*(int *)0x5cb1 == 0) {
    *(undefined2 *)0x5d92 = 0x6e;
    *(undefined2 *)0x5d90 = 0x6e;
    func_0x00011752(0);
  }
  *(undefined2 *)0x5d9e = 0;
  while (*(int *)0x5d7e != 0) {
    iVar2 = FUN_2000_34f7();
    if (iVar2 != 0) {
      return;
    }
  }
  *(undefined2 *)0x5d90 = 0;
  *(undefined2 *)0x5d92 = 0;
  if (*(int *)0x5da0 != 0) {
    FUN_2000_1c7f();
  }
  do {
    if (*(int *)0x5da0 == 0) {
      return;
    }
    if (*(int *)0x5d80 != 0) {
      return;
    }
    while ((*(int *)0x5d7e == 0 && (*(int *)0x5d9e == 0))) {
      if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
        FUN_2000_4125();
      }
    }
    iVar2 = FUN_2000_34f7();
    if (iVar2 != 0) {
      return;
    }
    if ((*(int *)0x5d92 == 0) || (*(uint *)0x5d9a < *(uint *)0x5d92)) {
      if (((*(byte *)0x5d92 & 0x7f) < *(uint *)0x5d9c) && ((*(uint *)0x5d92 & 0x80) != 0)) {
        bVar1 = *(byte *)0x5d92;
        *(uint *)0x5cc1 = bVar1 & 0x7f;
        iVar2 = (bVar1 & 0x7f) * 0xf;
        uVar5 = *(undefined2 *)(iVar2 + 0x200);
        uVar6 = *(undefined2 *)(iVar2 + 0x1fe);
        goto LAB_2000_5247;
      }
    }
    else {
      *(int *)0x5cc1 = *(uint *)0x5d92 + *(int *)0x5d9c;
      iVar2 = (*(int *)0x5d92 + -1) * 0xf;
      uVar5 = *(undefined2 *)(iVar2 + 0x41c);
      uVar6 = *(undefined2 *)(iVar2 + 0x41a);
LAB_2000_5247:
      *(undefined2 *)0x5c4d = uVar5;
      *(undefined2 *)0x5c4b = uVar6;
      *(undefined2 *)0x5d92 = 0x7100;
    }
    if ((*(int *)0x5d92 == 0) && (*(int *)0x5d9e != 0)) {
      *(undefined2 *)0x5d92 = 0x4200;
    }
    iVar2 = 6;
    piVar3 = (int *)0x38ab;
    do {
      if (*piVar3 == *(int *)0x5d92) {
                    /* WARNING: Could not recover jumptable at 0x00025284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)piVar3[6])();
        return;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    func_0x00011752(0x2000);
    if (*(int *)0x5da0 != 0) {
      FUN_2000_1c7f();
    }
    *(undefined2 *)0x5d92 = 0;
    *(undefined2 *)0x5d90 = 0;
  } while( true );
}



// Function: FUN_2000_58d4 @ 2000:58d4

undefined2 __cdecl16far FUN_2000_58d4(undefined2 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)func_0x00002c51();
  uVar2 = (undefined2)((ulong)puVar3 >> 0x10);
  puVar1 = (undefined2 *)puVar3;
  if (puVar3 == (undefined2 *)0x0) {
    FUN_2000_7d62(0x38a3);
    uVar2 = 1;
  }
  else {
    puVar1[1] = 0;
    *puVar3 = 0;
    func_0x000059cc(0,puVar1 + 2,uVar2,param_1,param_2);
    if (*(int *)0x24b4 == 0 && *(int *)0x24b6 == 0) {
      *(undefined2 *)0x24b6 = uVar2;
      *(undefined2 *)0x24b4 = puVar1;
    }
    else {
      ((undefined2 *)puRam0001e9e4)[1] = uVar2;
      *puRam0001e9e4 = puVar1;
    }
    uVar2 = 0;
    puRam0001e9e4 = puVar3;
  }
  return uVar2;
}



// Function: FUN_2000_5972 @ 2000:5972

void __cdecl16far FUN_2000_5972(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  undefined4 local_6;
  
  local_6 = (int *)CONCAT22(*(undefined2 *)0x24b6,(int *)*(undefined2 *)0x24b4);
  if (*(int *)0x24b4 != 0 || *(int *)0x24b6 != 0) {
    do {
      uVar4 = local_6._2_2_;
      piVar3 = (int *)local_6;
      iVar1 = ((int *)local_6)[1];
      piVar2 = (int *)*local_6;
      local_6 = (int *)CONCAT22(iVar1,piVar2);
      func_0x00002b47(unaff_CS,piVar3,uVar4);
      unaff_CS = 0;
    } while (piVar2 != (int *)0x0 || iVar1 != 0);
  }
  *(undefined2 *)0x24b6 = 0;
  *(undefined2 *)0x24b4 = 0;
  return;
}



// Function: FUN_2000_59cf @ 2000:59cf

int __cdecl16far FUN_2000_59cf(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined1 local_10 [14];
  
  iVar3 = 0;
  bVar1 = false;
  FUN_2000_5972();
  iVar2 = func_0x000042d2();
  do {
    if (iVar2 != 0) {
LAB_2000_5a6f:
      if (!bVar1) {
        iVar2 = func_0x000042d2(0,0x24a4);
        while (iVar2 == 0) {
          func_0x000059cc(0,local_10);
          if ((DAT_1000_e9fd & 1) != 0) {
            func_0x00005a55(0,local_10);
          }
          iVar2 = FUN_2000_58d4(local_10);
          if (iVar2 != 0) {
            return iVar3;
          }
          iVar3 = iVar3 + 1;
          iVar2 = func_0x00004305(0,0x1d8,0x1e81);
        }
      }
      return iVar3;
    }
    if ((DAT_1000_e9fd & 0x10) != 0) {
      func_0x000059cc(0,local_10);
      iVar2 = func_0x00005a36(0,local_10);
      if ((&stack0xffef)[iVar2] != '\\') {
        func_0x00005950(0,local_10);
      }
      iVar2 = FUN_2000_58d4(local_10);
      if (iVar2 != 0) {
        bVar1 = true;
        goto LAB_2000_5a6f;
      }
      iVar3 = iVar3 + 1;
    }
    iVar2 = func_0x00004305(0,0x1d8,0x1e81);
  } while( true );
}



// Function: FUN_2000_5ae9 @ 2000:5ae9

void __cdecl16far FUN_2000_5ae9(uint param_1,uint param_2,undefined1 param_3,undefined1 param_4)

{
  undefined2 local_4;
  
  if ((param_2 < 0x19) && (param_1 < 0x50)) {
    local_4 = CONCAT11(param_4,param_3);
    *(undefined2 *)(param_2 * 0xa0 + param_1 * 2) = local_4;
  }
  return;
}



// Function: FUN_2000_5b29 @ 2000:5b29

void __cdecl16far FUN_2000_5b29(int param_1)

{
  undefined2 *puVar1;
  undefined2 unaff_DS;
  
  if (param_1 == 0) {
    *(undefined2 *)0x24a2 = 0;
    DAT_2000_f8a1 = 1;
    (*(code *)*(undefined2 *)0x5c43)();
    (*(code *)*(undefined2 *)0x5c37)();
    func_0x00011c1a();
  }
  else {
    if (*(int *)0x24a2 == 0) {
      DAT_2000_fbf6 = 3;
      func_0x0000320e();
      *(undefined2 *)0x24a2 = 1;
      DAT_2000_f972 = func_0x00011c1a(0,0x10,0);
      func_0x00011c1a(0x11c1,0x60,1);
    }
    puVar1 = (undefined2 *)0x0;
    do {
      *puVar1 = 0x9b1;
      puVar1 = puVar1 + 1;
    } while ((int)puVar1 < 4000);
  }
  return;
}



// Function: FUN_2000_5c02 @ 2000:5c02

uint __cdecl16far FUN_2000_5c02(uint param_1,uint param_2,int param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined2 unaff_DS;
  uint local_a;
  
  if (0x4f < param_2) {
    param_2 = 0x4f;
  }
  if (0x18 < param_1) {
    param_1 = 0x18;
  }
  uVar2 = 0x50 - param_2 >> 1;
  uVar3 = uVar2 - 1;
  iVar11 = -uVar3;
  uVar4 = iVar11 + 0x51;
  uVar5 = 0x19 - param_1 >> 1;
  local_a = -uVar5 + 0x18;
  uVar10 = uVar5;
  if ((param_1 & 1) != 0) {
    local_a = -uVar5 + 0x19;
  }
  for (; uVar10 < local_a; uVar10 = uVar10 + 1) {
    if (uVar3 < uVar4) {
      puVar6 = (undefined2 *)(uVar10 * 0xa0 + uVar3 * 2);
      for (iVar8 = uVar4 - uVar3; iVar8 != 0; iVar8 = iVar8 + -1) {
        puVar1 = puVar6;
        puVar6 = puVar6 + 1;
        *puVar1 = 0x7020;
      }
    }
  }
  uVar10 = uVar2 - 2;
  uVar5 = uVar5 - 1;
  for (uVar3 = uVar5; uVar3 < local_a; uVar3 = uVar3 + 1) {
    *(undefined2 *)(uVar3 * 0xa0 + uVar10 * 2) = 0x74ba;
  }
  for (uVar3 = uVar5; uVar3 < local_a; uVar3 = uVar3 + 1) {
    *(undefined2 *)(uVar3 * 0xa0 + uVar4 * 2) = 0x74ba;
  }
  if (uVar10 < uVar4) {
    puVar6 = (undefined2 *)(uVar5 * 0xa0 + uVar10 * 2);
    for (iVar8 = uVar4 - uVar10; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar1 = 0x74cd;
    }
  }
  if (uVar10 < uVar4) {
    puVar6 = (undefined2 *)(local_a * 0xa0 + uVar10 * 2);
    for (iVar8 = uVar4 - uVar10; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar1 = 0x74cd;
    }
  }
  *(undefined2 *)(uVar5 * 0xa0 + uVar10 * 2) = 0x74c9;
  *(undefined2 *)(uVar5 * 0xa0 + uVar4 * 2) = 0x74bb;
  *(undefined2 *)(local_a * 0xa0 + uVar10 * 2) = 0x74c8;
  *(undefined2 *)(local_a * 0xa0 + uVar4 * 2) = 0x74bc;
  while (uVar5 = uVar5 + 1, uVar5 <= local_a + 1) {
    *(undefined2 *)(uVar5 * 0xa0 + (iVar11 + 0x52) * 2) = 0x1b1;
  }
  while (uVar10 = uVar10 + 1, uVar10 < iVar11 + 0x52U) {
    *(undefined2 *)((local_a + 1) * 0xa0 + uVar10 * 2) = 0x1b1;
  }
  if (param_3 == 1) {
    iVar8 = 0x38cf;
  }
  else if (param_3 == 2) {
    iVar8 = 0x38d6;
  }
  else if (param_3 == 3) {
    iVar8 = 0x38e2;
  }
  else {
    iVar8 = 0x38c9;
  }
  if (param_3 != 4) {
    iVar7 = func_0x00005a36();
    iVar11 = (iVar11 + 0x4f) - iVar7;
    for (iVar9 = 0; *(char *)(iVar8 + iVar9) != '\0'; iVar9 = iVar9 + 1) {
      FUN_2000_5ae9(iVar11,local_a,CONCAT11((char)((uint)iVar9 >> 8),*(undefined1 *)(iVar8 + iVar9))
                    ,0x74);
      iVar11 = iVar11 + 1;
    }
  }
  return uVar2;
}



// Function: FUN_2000_5eac @ 2000:5eac

/* WARNING: Removing unreachable block (ram,0x00025ee5) */

void __cdecl16far FUN_2000_5eac(void)

{
  int iVar1;
  int in_DX;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  undefined2 *local_e;
  int local_a;
  int local_8;
  
  if (*(int *)0x249e == 0) {
    *(undefined2 *)0x249e = 1;
    _local_e = (undefined2 *)CONCAT22(unaff_DS,(undefined2 *)0x24b8);
    FUN_2000_5b29(1);
    iVar1 = FUN_2000_5c02(*_local_e,*(undefined2 *)0x24ba,3);
    local_a = in_DX;
    local_8 = iVar1;
    for (iVar3 = 0; *(char *)((int)*(undefined4 *)0x24bd + iVar3) != '\0'; iVar3 = iVar3 + 1) {
      if (*(char *)((int)*(undefined4 *)0x24bd + iVar3) == '\n') {
        local_a = local_a + 1;
        local_8 = iVar1;
      }
      else {
        FUN_2000_5ae9(local_8,local_a,*(undefined1 *)((int)*(undefined4 *)0x24bd + iVar3),
                      *(undefined1 *)0x24bc);
        local_8 = local_8 + 1;
      }
    }
    func_0x00012a17();
    uVar4 = 0x11c1;
    while (uVar5 = uVar4, DAT_2000_f96c == 0) {
      uVar5 = 0;
      iVar1 = func_0x00002553(uVar4,1);
      if ((iVar1 != 0) || (DAT_2000_f970 != 0)) break;
      DAT_2000_f96e = 0;
      uVar4 = uVar5;
    }
    iVar1 = func_0x000134f7(uVar5);
    if (iVar1 == 0) {
      iVar1 = 4;
      piVar2 = (int *)0x78f;
      do {
        if (*piVar2 == DAT_2000_f982) {
                    /* WARNING: Could not recover jumptable at 0x0002600b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)piVar2[4])();
          return;
        }
        piVar2 = piVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      DAT_2000_f982 = 0x6e;
      DAT_2000_f980 = 0x6e;
    }
    FUN_2000_5b29(0);
    *(undefined2 *)0x249e = 0;
  }
  else {
    DAT_2000_f982 = 0;
    DAT_2000_f980 = 0;
  }
  return;
}



// Function: FUN_2000_7418 @ 2000:7418

undefined2 __cdecl16far FUN_2000_7418(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  
  iVar1 = func_0x00001017();
  if (iVar1 == 0) {
    lVar3 = func_0x0000598f(0,param_1,param_2,0x3a);
    if (lVar3 != 0) {
      iVar1 = func_0x00001f66(0,(int)*(char *)((int)lVar3 + -1));
      func_0x0000128e(0,iVar1 + -0x61);
    }
    uVar2 = 1;
  }
  else {
    FUN_2000_7d62(0x394f);
    uVar2 = 0;
  }
  return uVar2;
}



// FAILED to decompile: FUN_2000_747e @ 2000:747e

// Function: FUN_2000_7d62 @ 2000:7d62

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16far FUN_2000_7d62(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  uint local_6;
  int local_4;
  
  if (*(int *)0x24a2 == 0) {
    func_0x000045d4();
  }
  else {
    local_6 = func_0x00005a36();
    if (0x4b < local_6) {
      local_6 = 0x4b;
    }
    for (uVar3 = 0x16; uVar3 < 0x19; uVar3 = uVar3 + 1) {
      for (uVar2 = 0; uVar2 <= local_6 + 1; uVar2 = uVar2 + 1) {
        *(undefined2 *)(uVar3 * 0x9c + uVar2 * 2) = *(undefined2 *)(uVar3 * 0xa0 + uVar2 * 2);
      }
    }
    for (uVar3 = 0x16; uVar3 < 0x19; uVar3 = uVar3 + 1) {
      *(undefined2 *)(uVar3 * 0xa0) = 0x4eba;
      *(undefined2 *)(uVar3 * 0xa0 + (local_6 + 1) * 2) = 0x4eba;
    }
    for (uVar3 = 0; uVar3 < local_6 + 1; uVar3 = uVar3 + 1) {
      *(undefined2 *)(uVar3 * 2 + 0xf00) = 0x4ecd;
      *(undefined2 *)(uVar3 * 2 + 0xdc0) = 0x4ecd;
    }
    _DAT_b000_8dc0 = 0x4ec9;
    *(undefined2 *)((local_6 + 1) * 2 + 0xdc0) = 0x4ebb;
    _DAT_b000_8f00 = 0x4ec8;
    *(undefined2 *)((local_6 + 1) * 2 + 0xf00) = 0x4ebc;
    local_4 = 0;
    iVar1 = 1;
    while( true ) {
      uVar4 = (undefined2)((ulong)param_1 >> 0x10);
      if (*(char *)((int)param_1 + local_4) == '\0') break;
      FUN_2000_5ae9(iVar1,0x17,
                    CONCAT11((char)((uint)local_4 >> 8),*(undefined1 *)((int)param_1 + local_4)),
                    0x4e);
      iVar1 = iVar1 + 1;
      local_4 = local_4 + 1;
    }
    func_0x000045d4(0,0x441c,0x29bf,0x39a4);
    uVar3 = func_0x00002553(0,0);
    if ((uVar3 & 0x7f) == 0x1b) {
      DAT_2000_f970 = 1;
    }
    for (uVar3 = 0x16; uVar3 < 0x19; uVar3 = uVar3 + 1) {
      for (uVar2 = 0; uVar2 <= local_6 + 1; uVar2 = uVar2 + 1) {
        *(undefined2 *)(uVar3 * 0xa0 + uVar2 * 2) = *(undefined2 *)(uVar3 * 0x9c + uVar2 * 2);
      }
    }
  }
  return;
}



// Function: FUN_2000_7f5b @ 2000:7f5b

undefined2 __cdecl16far FUN_2000_7f5b(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 unaff_SI;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_DS;
  long lVar7;
  undefined2 local_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  
  *(undefined2 *)0x7470 = 0;
  *(undefined2 *)0x7466 = 0;
  *(undefined2 *)0x7468 = 0;
  *(undefined2 *)0x7458 = 0;
  *(undefined2 *)0x7456 = 0;
  uVar5 = 0;
  lVar7 = func_0x0000459f();
  *(undefined2 *)0x6004 = (int)((ulong)lVar7 >> 0x10);
  *(undefined2 *)0x6002 = (int)lVar7;
  if (lVar7 == 0) {
    uVar5 = 0x11c1;
    thunk_FUN_1000_2075(0,0,0x39b1);
  }
  if ((param_1 & 1) != 0) {
    FUN_1000_21d3(uVar5,*(undefined2 *)0x6002,*(undefined2 *)0x6004,unaff_SI);
    uStack_7e = *(undefined2 *)0x5d6a;
    uStack_80 = *(undefined2 *)0x5d68;
    local_82 = *(undefined2 *)0x6004;
    uVar6 = 0;
    iVar4 = func_0x000047f4(0x11c1,*(undefined2 *)0x6002);
    if (iVar4 != 0) {
      uStack_7e = 0x39c9;
      uStack_80 = 0;
      local_82 = 0;
      uVar6 = 0x11c1;
      thunk_FUN_1000_2075();
    }
    uStack_7e = *(undefined2 *)0x6002;
    uStack_80 = 1;
    local_82 = 10;
    uVar5 = 0;
    iVar4 = func_0x000046e4(uVar6,0x6027);
    if (iVar4 != 1) {
      uVar5 = 0x11c1;
      thunk_FUN_1000_2075(0,0,0x39fc);
    }
    puVar1 = (uint *)0x5d68;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 10;
    *(int *)0x5d6a = *(int *)0x5d6a + (uint)(0xfff5 < uVar2);
    uVar3 = *(uint *)0x602f;
    puVar1 = (uint *)0x5d68;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar3;
    *(int *)0x5d6a = *(int *)0x5d6a + (uint)CARRY2(uVar2,uVar3);
  }
  iVar4 = func_0x000047f4(uVar5,*(undefined2 *)0x6002,*(undefined2 *)0x6004,*(undefined2 *)0x5d68,
                          *(undefined2 *)0x5d6a,0);
  if ((iVar4 == 0) && (iVar4 = func_0x000046e4(0,&local_82), iVar4 == 1)) {
    *(undefined2 *)0x7458 = local_3a;
    *(undefined2 *)0x7456 = local_3c;
    if ((*(int *)0x7458 == 0) && (*(uint *)0x7456 <= *(uint *)0x39aa)) {
      *(undefined2 *)0x7468 = *(undefined2 *)0x7456;
      *(undefined2 *)0x7466 = 0;
    }
    else {
      *(int *)0x7468 = *(int *)0x7456 - *(int *)0x39aa;
      *(undefined2 *)0x7466 = 1;
    }
    *(undefined2 *)0x7470 = local_38;
    if ((param_1 & 4) != 0) {
      uVar5 = 0;
      iVar4 = func_0x000047f4(0,*(undefined2 *)0x6002,*(undefined2 *)0x6004,*(undefined2 *)0x5d68,
                              *(undefined2 *)0x5d6a,0);
      if (iVar4 != 0) {
        uVar5 = 0x11c1;
        thunk_FUN_1000_2075(0,0,0x3a1e);
      }
      if (*(int *)0x7466 == 0) {
        iVar4 = func_0x000046e4(uVar5,*(undefined2 *)0x745a,*(undefined2 *)0x745c,
                                *(undefined2 *)0x7468,1,*(undefined2 *)0x6002,*(undefined2 *)0x6004)
        ;
      }
      else {
        iVar4 = func_0x000046e4(uVar5,*(undefined2 *)0x745a,*(undefined2 *)0x745c,
                                *(undefined2 *)0x39aa,1,*(undefined2 *)0x6002,*(undefined2 *)0x6004)
        ;
        if (iVar4 != 1) goto LAB_2000_8079;
        iVar4 = func_0x000046e4(0,*(undefined2 *)0x745e,*(undefined2 *)0x7460,*(undefined2 *)0x7468,
                                1,*(undefined2 *)0x6002,*(undefined2 *)0x6004);
      }
      if (iVar4 != 1) goto LAB_2000_8079;
    }
    func_0x0000407f(0,*(undefined2 *)0x6002,*(undefined2 *)0x6004);
    uVar5 = 0;
  }
  else {
LAB_2000_8079:
    func_0x0000407f(0,*(undefined2 *)0x6002,*(undefined2 *)0x6004);
    uVar5 = 1;
  }
  return uVar5;
}



// Function: FUN_2000_819f @ 2000:819f

int __cdecl16far FUN_2000_819f(uint param_1)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  long lVar5;
  
  iVar1 = func_0x00005a36();
  if (iVar1 == 0) {
    lVar5 = func_0x00001ea4(0,*(undefined2 *)0x96,*(undefined2 *)0x98);
    if (lVar5 != 0) {
      func_0x00005b18(0,lVar5,0x50);
      uVar4 = 0;
      func_0x00005a79(0,0x5d17);
      goto LAB_2000_8235;
    }
    uVar2 = 0x3a3e;
  }
  else {
    uVar4 = 0;
    uVar3 = func_0x0000439f(0,0x5d17);
    if ((uVar3 & 4) != 0) goto LAB_2000_8235;
    uVar2 = 0x3a6c;
  }
  uVar4 = 0x11c1;
  thunk_FUN_1000_2075(0,0,uVar2);
LAB_2000_8235:
  iVar1 = FUN_2000_7f5b(param_1);
  if ((iVar1 != 0) && ((param_1 & 1) != 0)) {
    thunk_FUN_1000_2075(uVar4,0,0x3a90);
  }
  return iVar1;
}



// Function: FUN_2000_825f @ 2000:825f

void __cdecl16far FUN_2000_825f(void)

{
  func_0x0000323f();
  return;
}



// Function: FUN_2000_829d @ 2000:829d

void __cdecl16far FUN_2000_829d(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  
  iVar7 = 0;
  if (*(int *)0x7466 == 0) {
    iVar7 = *(int *)0x7468;
    uVar8 = *(undefined2 *)0x745c;
    iVar2 = *(int *)0x745a;
    uVar4 = 0;
    do {
      pcVar6 = (char *)(iVar2 + iVar7 + -0x300 + uVar4);
      pcVar1 = pcVar6;
      *pcVar1 = *pcVar1 >> 1;
      pcVar1 = pcVar6;
      *pcVar1 = *pcVar1 >> 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x300);
  }
  else if (*(uint *)0x7468 < 0x301) {
    uVar4 = *(int *)0x7456 + -0x300 + *(int *)0x7468;
    uVar5 = 0;
    do {
      uVar3 = *(undefined4 *)(iVar7 * 4 + 0x745a);
      uVar8 = (undefined2)((ulong)uVar3 >> 0x10);
      pcVar6 = (char *)((int)uVar3 + uVar4);
      pcVar1 = pcVar6;
      *pcVar1 = *pcVar1 >> 1;
      pcVar1 = pcVar6;
      *pcVar1 = *pcVar1 >> 1;
      uVar4 = uVar4 + 1;
      if (*(uint *)0x39aa <= uVar4) {
        uVar4 = 0;
        iVar7 = 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x300);
  }
  else {
    iVar7 = *(int *)0x7468;
    uVar8 = *(undefined2 *)0x7460;
    iVar2 = *(int *)0x745e;
    uVar4 = 0;
    do {
      pcVar6 = (char *)(iVar2 + iVar7 + -0x300 + uVar4);
      pcVar1 = pcVar6;
      *pcVar1 = *pcVar1 >> 1;
      pcVar1 = pcVar6;
      *pcVar1 = *pcVar1 >> 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x300);
  }
  return;
}



// Function: FUN_2000_83a1 @ 2000:83a1

void __cdecl16far FUN_2000_83a1(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  
  iVar4 = 0;
  if (*(int *)0x39ac != 0) {
    iVar4 = *(int *)0x39ac - *(int *)((int)*(undefined4 *)0x747c + 0x42);
    *(undefined2 *)0x39ac = 0;
  }
  do {
    uVar3 = *(undefined4 *)(*(int *)0x746e * 4 + 0x745a);
    bVar1 = *(byte *)((int)uVar3 + *(int *)0x746c);
    *(int *)0x746c = *(int *)0x746c + 1;
    if (*(uint *)0x39aa <= *(uint *)0x746c) {
      *(undefined2 *)0x746e = 1;
      *(undefined2 *)0x746c = 0;
    }
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    if ((bVar1 & 0xc0) == 0xc0) {
      uVar3 = *(undefined4 *)(*(int *)0x746e * 4 + 0x745a);
      uVar2 = *(undefined1 *)((int)uVar3 + *(int *)0x746c);
      *(int *)0x746c = *(int *)0x746c + 1;
      uVar6 = bVar1 & 0x3f;
      if (*(uint *)0x39aa <= *(uint *)0x746c) {
        *(undefined2 *)0x746e = 1;
        *(undefined2 *)0x746c = 0;
      }
      while (uVar6 != 0) {
        *(undefined1 *)((int)param_1 + iVar4) = uVar2;
        iVar4 = iVar4 + 1;
        uVar6 = uVar6 - 1;
      }
    }
    else {
      *(byte *)((int)param_1 + iVar4) = bVar1;
      iVar4 = iVar4 + 1;
    }
    uVar7 = (undefined2)((ulong)*(undefined4 *)0x747c >> 0x10);
    iVar5 = (int)*(undefined4 *)0x747c;
  } while (iVar4 < *(int *)(iVar5 + 0x42));
  if (*(int *)(iVar5 + 0x42) < iVar4) {
    *(int *)0x39ac = iVar4;
  }
  else {
    *(undefined2 *)0x39ac = 0;
  }
  return;
}



// Function: FUN_2000_846c @ 2000:846c

void __cdecl16far FUN_2000_846c(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 uVar6;
  undefined2 unaff_DS;
  long lVar7;
  int local_6;
  undefined2 local_4;
  
  lVar7 = CONCAT22(local_4,local_6);
  iVar4 = 0;
  *(undefined2 *)0x5d8a = 0;
  *(undefined2 *)0x746e = 0;
  *(undefined2 *)0x7478 = *(undefined2 *)0x5de4;
  if ((*(int *)0x7484 != 8) || (*(int *)0x7470 == 0)) {
    if (*(int *)0x7484 != 4) {
      *(undefined2 *)0x39a8 = 1;
      *(undefined2 *)0x7476 = *(undefined2 *)0x7484;
      *(undefined2 *)0x7484 = 4;
      FUN_1000_3db6(0);
      unaff_CS = 0x1899;
      func_0x00019435(0x11c1,1);
    }
    func_0x00018a9c(unaff_CS);
    FUN_2000_8931();
    uVar5 = (undefined2)((ulong)*(undefined4 *)0x747c >> 0x10);
    iVar4 = (int)*(undefined4 *)0x747c;
    uVar6 = 0;
    lVar7 = func_0x00002c51(0x1899,(*(char *)(iVar4 + 0x41) + 4) * *(int *)(iVar4 + 0x42));
    if (lVar7 == 0) {
      uVar6 = 0x11c1;
      thunk_FUN_1000_2075(0,0,0x3ab0);
    }
    goto LAB_2000_85a6;
  }
  *(undefined2 *)0x5de4 = 1;
  FUN_1000_3db6(0);
  uVar6 = 0x1899;
  FUN_1000_952e(1);
  if (*(int *)0x7466 == 0) {
    iVar4 = *(int *)0x745a + *(int *)0x7468 + -0x300;
    uVar5 = *(undefined2 *)0x745c;
LAB_2000_8523:
    uVar6 = 0;
    func_0x00004cee(0x1899,*(undefined2 *)0x5d94,*(undefined2 *)0x5d96,iVar4,uVar5,0x300);
  }
  else {
    if (0x300 < *(uint *)0x7468) {
      iVar4 = *(int *)0x745e + *(int *)0x7468 + -0x300;
      uVar5 = *(undefined2 *)0x7460;
      goto LAB_2000_8523;
    }
    uVar3 = *(int *)0x7456 + -0x300 + *(int *)0x7468;
    iVar2 = 0;
    do {
      uVar1 = *(undefined4 *)(iVar4 * 4 + 0x745a);
      *(undefined1 *)((int)*(undefined4 *)0x5d94 + iVar2) = *(undefined1 *)((int)uVar1 + uVar3);
      uVar3 = uVar3 + 1;
      if (*(uint *)0x39aa <= uVar3) {
        uVar3 = 0;
        iVar4 = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x300);
  }
  FUN_2000_825f(0x100);
LAB_2000_85a6:
  local_4 = (undefined2)((ulong)lVar7 >> 0x10);
  local_6 = (int)lVar7;
  *(undefined2 *)0x746c = 0x80;
  if (*(int *)0x7470 == 0) {
    uVar3 = 0;
    if (*(int *)0x747a != 0) {
      do {
        iVar4 = 0;
        while( true ) {
          uVar5 = (undefined2)((ulong)*(undefined4 *)0x747c >> 0x10);
          iVar2 = (int)*(undefined4 *)0x747c;
          if (*(char *)(iVar2 + 0x41) <= iVar4) break;
          FUN_2000_83a1(local_6 + *(int *)((int)*(undefined4 *)0x747c + 0x42) * iVar4,local_4);
          iVar4 = iVar4 + 1;
        }
        uVar6 = 0x1899;
        FUN_1000_8a1c(lVar7,*(undefined2 *)(iVar2 + 0x42),uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)0x747a);
    }
    (*(code *)*(undefined2 *)0x5c43)(uVar6,2);
    func_0x00002b47(uVar6,lVar7);
  }
  else {
    uVar3 = 0;
    if (*(int *)0x747a != 0) {
      do {
        FUN_2000_83a1(uVar3 * 0x140,0xa000);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)0x747a);
    }
  }
  return;
}



// Function: FUN_2000_8931 @ 2000:8931

void __cdecl16far FUN_2000_8931(void)

{
  undefined2 unaff_DS;
  undefined2 local_1a;
  undefined2 local_18;
  int local_14;
  undefined2 local_a;
  
  func_0x00004cee();
  local_1a = 0x1002;
  local_18 = 0;
  local_14 = *(int *)0x747c + 0x10;
  local_a = *(undefined2 *)0x747e;
  func_0x0000323f(0,0x10,&local_1a);
  return;
}



// Function: FUN_2000_8a1c @ 2000:8a1c

void __cdecl16far FUN_2000_8a1c(undefined1 *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined1 *)param_1;
  if (param_3 < 0x15e) {
    puVar6 = (undefined1 *)*(undefined2 *)(param_3 * 2 + 0x749a);
    out(0x3c4,2);
    out(0x3c5,1);
    puVar5 = puVar6;
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    out(0x3c4,2);
    out(0x3c5,2);
    puVar5 = puVar6;
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    out(0x3c4,2);
    out(0x3c5,4);
    puVar5 = puVar6;
    for (iVar3 = param_2; iVar3 != 0; iVar3 = iVar3 + -1) {
      puVar2 = puVar5;
      puVar5 = puVar5 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    out(0x3c4,2);
    out(0x3c5,8);
    for (; param_2 != 0; param_2 = param_2 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar1;
    }
    out(0x3c4,2);
    out(0x3c5,0xf);
  }
  return;
}



// Function: FUN_2000_8abd @ 2000:8abd

uint __cdecl16far FUN_2000_8abd(uint param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined2 unaff_DS;
  int local_8;
  uint local_6;
  uint local_4;
  
  iVar5 = *(int *)0x7490 + -0x6000;
  uVar7 = *(uint *)0x5dc6;
  do {
    uVar7 = (uVar7 & 0x1fff) - 1;
  } while (uVar7 != 0);
  uVar2 = *(undefined1 *)0x7488;
  *(undefined2 *)0x3bc8 = 0;
  iVar1 = *(int *)0x5db0;
  iVar4 = *(int *)0x5df0;
  if (iVar1 <= iVar4) {
    *(char *)0x3bc8 = *(char *)0x3bc8 + '\x01';
  }
  local_4 = iVar1 + iVar4;
  uVar7 = local_4;
  if ((-1 < (int)local_4) && (local_6 = *(int *)0x5db0 - iVar4, uVar7 = local_6, -1 < (int)local_6))
  {
    iVar1 = *(int *)0x5db2;
    iVar4 = *(int *)0x5dee;
    if (iVar1 <= iVar4) {
      *(char *)0x3bc9 = *(char *)0x3bc9 + '\x01';
    }
    uVar6 = iVar1 + iVar4;
    uVar7 = uVar6;
    if ((((-1 < (int)uVar6) && ((uVar6 & 1) == 0)) &&
        (uVar7 = *(int *)0x5db2 - iVar4, -1 < (int)uVar7)) && ((uVar7 & 1) == 0))
    goto LAB_2000_8b33;
  }
  while( true ) {
    if (((param_1 & 3) == 0) || ((POPCOUNT(param_1 & 3) & 1U) != 0)) {
      return uVar7;
    }
    *(undefined2 *)0x3bc8 = 0;
    iVar1 = *(int *)0x5db0;
    iVar4 = *(int *)0x5dee;
    if (iVar1 <= iVar4) {
      *(char *)0x3bc8 = *(char *)0x3bc8 + '\x01';
    }
    local_4 = iVar1 + iVar4;
    if ((int)local_4 < 0) {
      return local_4;
    }
    local_6 = *(int *)0x5db0 - iVar4;
    if ((int)local_6 < 0) {
      return local_6;
    }
    iVar1 = *(int *)0x5db2;
    iVar4 = *(int *)0x5df0;
    if (iVar1 <= iVar4) {
      *(char *)0x3bc9 = *(char *)0x3bc9 + '\x01';
    }
    uVar6 = iVar1 + iVar4;
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    if ((uVar6 & 1) != 0) {
      return uVar6;
    }
    uVar7 = *(int *)0x5db2 - iVar4;
    if ((int)uVar7 < 0) break;
    if ((uVar7 & 1) != 0) {
      return uVar7;
    }
    param_1 = 1;
LAB_2000_8b33:
    local_8 = (int)uVar6 >> 1;
    uVar7 = (int)uVar7 >> 1;
    uVar6 = uVar7;
    if (*(int *)0x3bc8 == 0) {
      out(0x3ce,(0x8000U >> ((byte)local_4 & 7)) + 8);
      puVar8 = (undefined1 *)(((int)local_4 >> 3) + local_8 * 0x50);
      uVar6 = CONCAT11((char)((uint)(local_8 * 0x40) >> 8),*puVar8);
      *puVar8 = uVar2;
    }
    if ((param_1 & 1) == 0) {
      return uVar6;
    }
    if (*(char *)0x3bc8 == '\0') {
      out(0x3ce,(0x8000U >> ((byte)local_4 & 7)) + 8);
      *(undefined1 *)(((int)local_4 >> 3) + uVar7 * 0x50) = uVar2;
    }
    if (*(char *)0x3bc9 == '\0') {
      out(0x3ce,(0x8000U >> ((byte)local_6 & 7)) + 8);
      *(undefined1 *)(((int)local_6 >> 3) + local_8 * 0x50) = uVar2;
    }
    out(0x3ce,(0x8000U >> ((byte)local_6 & 7)) + 8);
    puVar8 = (undefined1 *)(((int)local_6 >> 3) + uVar7 * 0x50);
    uVar3 = *puVar8;
    *puVar8 = uVar2;
    uVar7 = CONCAT11((char)(uVar7 * 0x40 >> 8),uVar3);
  }
  return uVar7;
}



// Function: FUN_2000_8c78 @ 2000:8c78

int __cdecl16far FUN_2000_8c78(uint param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined2 unaff_DS;
  int local_8;
  int local_6;
  int local_4;
  
  iVar3 = *(int *)0x7490 + -0x6000;
  uVar6 = *(uint *)0x5dc6;
  do {
    uVar6 = (uVar6 & 0x1fff) - 1;
  } while (uVar6 != 0);
  uVar1 = *(undefined1 *)0x7488;
  *(undefined2 *)0x3bc8 = 0;
  local_4 = *(int *)0x5db0;
  local_6 = *(int *)0x5df0;
  if (local_4 <= local_6) {
    *(char *)0x3bc8 = *(char *)0x3bc8 + '\x01';
  }
  local_4 = local_4 + local_6;
  iVar4 = local_4;
  if ((-1 < local_4) && (local_6 = *(int *)0x5db0 - local_6, iVar4 = local_6, -1 < local_6)) {
    local_8 = *(int *)0x5db2;
    iVar5 = *(int *)0x5dee;
    if (local_8 <= iVar5) {
      *(char *)0x3bc9 = *(char *)0x3bc9 + '\x01';
    }
    local_8 = local_8 + iVar5;
    iVar4 = local_8;
    if ((-1 < local_8) && (iVar4 = *(int *)0x5db2 - iVar5, -1 < iVar4)) goto LAB_2000_8ce2;
  }
  while( true ) {
    if (((param_1 & 3) == 0) || ((POPCOUNT(param_1 & 3) & 1U) != 0)) {
      return iVar4;
    }
    *(undefined2 *)0x3bc8 = 0;
    local_4 = *(int *)0x5db0;
    local_6 = *(int *)0x5dee;
    if (local_4 <= local_6) {
      *(char *)0x3bc8 = *(char *)0x3bc8 + '\x01';
    }
    local_4 = local_4 + local_6;
    if (local_4 < 0) {
      return local_4;
    }
    local_6 = *(int *)0x5db0 - local_6;
    if (local_6 < 0) {
      return local_6;
    }
    local_8 = *(int *)0x5db2;
    iVar4 = *(int *)0x5df0;
    if (local_8 <= iVar4) {
      *(char *)0x3bc9 = *(char *)0x3bc9 + '\x01';
    }
    local_8 = local_8 + iVar4;
    if (local_8 < 0) {
      return local_8;
    }
    iVar4 = *(int *)0x5db2 - iVar4;
    if (iVar4 < 0) {
      return iVar4;
    }
    param_1 = 1;
LAB_2000_8ce2:
    iVar5 = iVar4;
    if (*(int *)0x3bc8 == 0) {
      out(0x3ce,(0x8000U >> ((byte)local_4 & 7)) + 8);
      puVar7 = (undefined1 *)((local_4 >> 3) + local_8 * 0x50);
      iVar5 = CONCAT11((char)((uint)(local_8 * 0x40) >> 8),*puVar7);
      *puVar7 = uVar1;
    }
    if ((param_1 & 1) == 0) break;
    if (*(char *)0x3bc8 == '\0') {
      out(0x3ce,(0x8000U >> ((byte)local_4 & 7)) + 8);
      *(undefined1 *)((local_4 >> 3) + iVar4 * 0x50) = uVar1;
    }
    if (*(char *)0x3bc9 == '\0') {
      out(0x3ce,(0x8000U >> ((byte)local_6 & 7)) + 8);
      *(undefined1 *)((local_6 >> 3) + local_8 * 0x50) = uVar1;
    }
    out(0x3ce,(0x8000U >> ((byte)local_6 & 7)) + 8);
    puVar7 = (undefined1 *)((local_6 >> 3) + iVar4 * 0x50);
    uVar2 = *puVar7;
    *puVar7 = uVar1;
    iVar4 = CONCAT11((char)((uint)(iVar4 * 0x40) >> 8),uVar2);
  }
  return iVar5;
}



// Function: FUN_2000_8e1b @ 2000:8e1b

int __cdecl16far FUN_2000_8e1b(uint param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined2 unaff_DS;
  int local_8;
  int local_6;
  int local_4;
  
  iVar3 = *(int *)0x7490 + -0x6000;
  uVar6 = *(uint *)0x5dc6;
  do {
    uVar6 = (uVar6 & 0x1fff) - 1;
  } while (uVar6 != 0);
  uVar1 = *(undefined1 *)0x7488;
  *(undefined2 *)0x3bc8 = 0;
  local_4 = *(int *)0x5db0;
  local_6 = *(int *)0x5df0;
  if (local_4 <= local_6) {
    *(char *)0x3bc8 = *(char *)0x3bc8 + '\x01';
  }
  local_4 = local_4 + local_6;
  iVar4 = local_4;
  if ((-1 < local_4) && (local_6 = *(int *)0x5db0 - local_6, iVar4 = local_6, -1 < local_6)) {
    local_8 = *(int *)0x5db2;
    iVar5 = *(int *)0x5dee;
    if (local_8 <= iVar5) {
      *(char *)0x3bc9 = *(char *)0x3bc9 + '\x01';
    }
    local_8 = local_8 + iVar5;
    iVar4 = local_8;
    if ((-1 < local_8) && (iVar4 = *(int *)0x5db2 - iVar5, -1 < iVar4)) goto LAB_2000_8e85;
  }
  while( true ) {
    if (((param_1 & 3) == 0) || ((POPCOUNT(param_1 & 3) & 1U) != 0)) {
      return iVar4;
    }
    *(undefined2 *)0x3bc8 = 0;
    local_4 = *(int *)0x5db0;
    local_6 = *(int *)0x5dee;
    if (local_4 <= local_6) {
      *(char *)0x3bc8 = *(char *)0x3bc8 + '\x01';
    }
    local_4 = local_4 + local_6;
    if (local_4 < 0) {
      return local_4;
    }
    local_6 = *(int *)0x5db0 - local_6;
    if (local_6 < 0) {
      return local_6;
    }
    local_8 = *(int *)0x5db2;
    iVar4 = *(int *)0x5df0;
    if (local_8 <= iVar4) {
      *(char *)0x3bc9 = *(char *)0x3bc9 + '\x01';
    }
    local_8 = local_8 + iVar4;
    if (local_8 < 0) {
      return local_8;
    }
    iVar4 = *(int *)0x5db2 - iVar4;
    if (iVar4 < 0) {
      return iVar4;
    }
    param_1 = 1;
LAB_2000_8e85:
    iVar5 = iVar4;
    if (*(int *)0x3bc8 == 0) {
      out(0x3c4,(0x100 << ((byte)local_4 & 3)) + 2);
      puVar7 = (undefined1 *)((local_4 >> 2) + local_8 * 0x50);
      iVar5 = CONCAT11((char)((uint)(local_8 * 0x40) >> 8),*puVar7);
      *puVar7 = uVar1;
    }
    if ((param_1 & 1) == 0) break;
    if (*(char *)0x3bc8 == '\0') {
      out(0x3c4,(0x100 << ((byte)local_4 & 3)) + 2);
      *(undefined1 *)((local_4 >> 2) + iVar4 * 0x50) = uVar1;
    }
    if (*(char *)0x3bc9 == '\0') {
      out(0x3c4,(0x100 << ((byte)local_6 & 3)) + 2);
      *(undefined1 *)((local_6 >> 2) + local_8 * 0x50) = uVar1;
    }
    out(0x3c4,(0x100 << ((byte)local_6 & 3)) + 2);
    puVar7 = (undefined1 *)((local_6 >> 2) + iVar4 * 0x50);
    uVar2 = *puVar7;
    *puVar7 = uVar1;
    iVar4 = CONCAT11((char)((uint)(iVar4 * 0x40) >> 8),uVar2);
  }
  return iVar5;
}



// Function: FUN_2000_8fb2 @ 2000:8fb2

int __cdecl16far FUN_2000_8fb2(uint param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar7;
  int iVar6;
  undefined1 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined2 unaff_DS;
  int local_8;
  int local_6;
  int local_4;
  
  iVar4 = *(int *)0x7490 + -0x6000;
  uVar9 = *(uint *)0x5dc6;
  do {
    uVar9 = (uVar9 & 0x1fff) - 1;
  } while (uVar9 != 0);
  uVar1 = *(undefined1 *)0x7488;
  *(undefined2 *)0x3bc8 = 0;
  local_4 = *(int *)0x5db0;
  local_6 = *(int *)0x5df0;
  if (local_4 <= local_6) {
    *(char *)0x3bc8 = *(char *)0x3bc8 + '\x01';
  }
  local_4 = local_4 + local_6;
  iVar5 = local_4;
  if ((-1 < local_4) && (local_6 = *(int *)0x5db0 - local_6, iVar5 = local_6, -1 < local_6)) {
    local_8 = *(int *)0x5db2;
    iVar6 = *(int *)0x5dee;
    if (local_8 <= iVar6) {
      *(char *)0x3bc9 = *(char *)0x3bc9 + '\x01';
    }
    local_8 = local_8 + iVar6;
    iVar5 = local_8;
    if ((-1 < local_8) && (iVar5 = *(int *)0x5db2 - iVar6, -1 < iVar5)) goto LAB_2000_9018;
  }
  while( true ) {
    if (((param_1 & 3) == 0) || ((POPCOUNT(param_1 & 3) & 1U) != 0)) {
      return iVar5;
    }
    *(undefined2 *)0x3bc8 = 0;
    local_4 = *(int *)0x5db0;
    local_6 = *(int *)0x5dee;
    if (local_4 <= local_6) {
      *(char *)0x3bc8 = *(char *)0x3bc8 + '\x01';
    }
    local_4 = local_4 + local_6;
    if (local_4 < 0) {
      return local_4;
    }
    local_6 = *(int *)0x5db0 - local_6;
    if (local_6 < 0) {
      return local_6;
    }
    local_8 = *(int *)0x5db2;
    iVar5 = *(int *)0x5df0;
    if (local_8 <= iVar5) {
      *(char *)0x3bc9 = *(char *)0x3bc9 + '\x01';
    }
    local_8 = local_8 + iVar5;
    if (local_8 < 0) {
      return local_8;
    }
    iVar5 = *(int *)0x5db2 - iVar5;
    if (iVar5 < 0) {
      return iVar5;
    }
    param_1 = 1;
LAB_2000_9018:
    bVar2 = (byte)local_8;
    uVar7 = (undefined1)((uint)local_8 >> 8);
    iVar6 = iVar5;
    if (*(int *)0x3bc8 == 0) {
      uVar9 = CONCAT11(bVar2,uVar7);
      puVar10 = (undefined1 *)(local_4 + uVar9 + (uVar9 >> 2));
      iVar6 = CONCAT11(bVar2 >> 2,*puVar10);
      *puVar10 = uVar1;
    }
    if ((param_1 & 1) == 0) break;
    bVar3 = (byte)iVar5;
    uVar8 = (undefined1)((uint)iVar5 >> 8);
    if (*(char *)0x3bc8 == '\0') {
      uVar9 = CONCAT11(bVar3,uVar8);
      *(undefined1 *)(local_4 + uVar9 + (uVar9 >> 2)) = uVar1;
    }
    if (*(char *)0x3bc9 == '\0') {
      uVar9 = CONCAT11(bVar2,uVar7);
      *(undefined1 *)(local_6 + uVar9 + (uVar9 >> 2)) = uVar1;
    }
    uVar9 = CONCAT11(bVar3,uVar8);
    puVar10 = (undefined1 *)(local_6 + uVar9 + (uVar9 >> 2));
    uVar7 = *puVar10;
    *puVar10 = uVar1;
    iVar5 = CONCAT11(bVar3 >> 2,uVar7);
  }
  return iVar6;
}



// Function: FUN_2000_90ed @ 2000:90ed

uint __cdecl16far FUN_2000_90ed(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  undefined2 unaff_DS;
  
  iVar4 = *(int *)0x7490 + -0x6000;
  uVar5 = *(int *)0x5db0 + param_1;
  uVar6 = uVar5;
  if (-1 < (int)uVar5) {
    uVar6 = *(int *)0x5db2 + param_2;
    if (-1 < (int)uVar6) {
      pbVar9 = (byte *)(((int)uVar5 >> 3) + ((int)uVar6 >> 1) * 0x50);
      bVar7 = (byte)uVar5 & 7 ^ 7;
      bVar8 = '\x01' << bVar7;
      out(0x3ce,4);
      out(0x3cf,1);
      bVar1 = bVar7 - 1 & 7;
      out(0x3cf,2);
      bVar2 = bVar7 - 2 & 7;
      out(0x3cf,3);
      bVar3 = bVar7 - 3 & 7;
      uVar6 = (uint)(byte)((*pbVar9 & bVar8) >> bVar7 | (*pbVar9 & bVar8) << 8 - bVar7 |
                           (*pbVar9 & bVar8) >> bVar1 | (*pbVar9 & bVar8) << 8 - bVar1 |
                           (*pbVar9 & bVar8) >> bVar2 | (*pbVar9 & bVar8) << 8 - bVar2 |
                          (*pbVar9 & bVar8) >> bVar3 | (*pbVar9 & bVar8) << 8 - bVar3);
    }
  }
  return uVar6 & 0xff;
}



// Function: FUN_2000_9185 @ 2000:9185

uint __cdecl16far FUN_2000_9185(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  undefined2 unaff_DS;
  
  iVar4 = *(int *)0x7490 + -0x6000;
  uVar5 = *(int *)0x5db0 + param_1;
  uVar6 = uVar5;
  if (-1 < (int)uVar5) {
    uVar6 = *(int *)0x5db2 + param_2;
    if (-1 < (int)uVar6) {
      pbVar9 = (byte *)(((int)uVar5 >> 3) + uVar6 * 0x50);
      bVar7 = (byte)uVar5 & 7 ^ 7;
      bVar8 = '\x01' << bVar7;
      out(0x3ce,4);
      out(0x3cf,1);
      bVar1 = bVar7 - 1 & 7;
      out(0x3cf,2);
      bVar2 = bVar7 - 2 & 7;
      out(0x3cf,3);
      bVar3 = bVar7 - 3 & 7;
      uVar6 = (uint)(byte)((*pbVar9 & bVar8) >> bVar7 | (*pbVar9 & bVar8) << 8 - bVar7 |
                           (*pbVar9 & bVar8) >> bVar1 | (*pbVar9 & bVar8) << 8 - bVar1 |
                           (*pbVar9 & bVar8) >> bVar2 | (*pbVar9 & bVar8) << 8 - bVar2 |
                          (*pbVar9 & bVar8) >> bVar3 | (*pbVar9 & bVar8) << 8 - bVar3);
    }
  }
  return uVar6 & 0xff;
}



// Function: FUN_2000_921b @ 2000:921b

undefined1 __cdecl16far FUN_2000_921b(int param_1,int param_2)

{
  undefined2 unaff_DS;
  undefined1 local_4;
  
  local_4 = (byte)(*(int *)0x5db0 + param_1);
  out(0x3c4,(0x100 << (local_4 & 3)) + 2);
  out(0x3ce,CONCAT11(local_4 & 3,4));
  return *(undefined1 *)((*(int *)0x5db0 + param_1 >> 2) + (*(int *)0x5db2 + param_2) * 0x50);
}



// Function: FUN_2000_9281 @ 2000:9281

undefined1 __cdecl16far FUN_2000_9281(int param_1,int param_2)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  uVar1 = CONCAT11((char)(*(int *)0x5db2 + param_2),(char)((uint)(*(int *)0x5db2 + param_2) >> 8));
  return *(undefined1 *)(*(int *)0x5db0 + param_1 + uVar1 + (uVar1 >> 2));
}



// Function: FUN_2000_9435 @ 2000:9435

undefined2 __cdecl16far FUN_2000_9435(int param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x3bc6 = 0x41;
  if (param_1 != 2) {
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
  }
  out(0x3ce,0x205);
  return 0x205;
}



// Function: FUN_2000_945d @ 2000:945d

void __cdecl16far FUN_2000_945d(undefined2 param_1,int param_2,int param_3)

{
  undefined2 *puVar1;
  byte bVar2;
  undefined2 *puVar3;
  
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) != 0);
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) == 0);
  out(0x3c4,0xf02);
  puVar3 = (undefined2 *)0x0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = param_1;
  }
  return;
}



// Function: FUN_2000_948c @ 2000:948c

void __cdecl16far FUN_2000_948c(int param_1)

{
  code *pcVar1;
  byte bVar2;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x3bc6 = 0x43;
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  out(0x3c4,4);
  bVar2 = in(0x3c5);
  out(0x3c5,bVar2 & 0xf7 | 4);
  out(0x3ce,5);
  bVar2 = in(0x3cf);
  out(0x3cf,bVar2 & 0xe7);
  out(0x3ce,6);
  bVar2 = in(0x3cf);
  out(0x3cf,bVar2 & 0xfd);
  if (param_1 != 0) {
    FUN_2000_945d();
  }
  out(0x3d4,9);
  bVar2 = in(0x3d5);
  out(0x3d5,bVar2 & 0x60);
  out(0x3d4,0x14);
  bVar2 = in(0x3d5);
  out(0x3d5,bVar2 & 0xbf);
  out(0x3d4,0x17);
  bVar2 = in(0x3d5);
  out(0x3d5,bVar2 | 0x40);
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}



// Function: FUN_2000_952e @ 2000:952e

void __cdecl16far FUN_2000_952e(int param_1)

{
  code *pcVar1;
  undefined2 unaff_DS;
  
  *(undefined2 *)0x3bc6 = 0x44;
  if (param_1 == 0) {
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
  }
  else {
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
    FUN_2000_945d(*(undefined2 *)0x5d8a,32000);
  }
  return;
}



// Function: FUN_2000_955d @ 2000:955d

undefined2 __cdecl16far FUN_2000_955d(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 unaff_DS;
  
  out(0x3ce,0xff08);
  uVar2 = 5;
  out(0x3ce,5);
  if (param_1 != 0) {
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
    if (0x18 < *(uint *)0x748c) {
      DAT_0000_0484 = (undefined1)*(undefined2 *)0x748c;
      pcVar1 = (code *)swi(0x10);
      (*pcVar1)();
    }
    pcVar1 = (code *)swi(0x10);
    uVar2 = (*pcVar1)();
  }
  return uVar2;
}



// Function: FUN_2000_95a3 @ 2000:95a3

void __cdecl16far FUN_2000_95a3(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_DS;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar6 = (undefined1 *)param_1;
  uVar1 = *param_1;
  *param_1 = *(undefined1 *)0x5d8a;
  uVar2 = puVar6[1];
  puVar6[1] = *(undefined1 *)0x5d6c;
  uVar3 = puVar6[2];
  puVar6[2] = *(undefined1 *)0x5d6e;
  uVar4 = puVar6[0x10];
  puVar6[0x10] = *(undefined1 *)0x5d8c;
  pcVar5 = (code *)swi(0x10);
  (*pcVar5)();
  puVar6[0x10] = uVar4;
  puVar6[2] = uVar3;
  puVar6[1] = uVar2;
  *puVar6 = uVar1;
  return;
}



// Function: FUN_2000_960c @ 2000:960c

void __cdecl16far FUN_2000_960c(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined2 uVar8;
  undefined2 unaff_DS;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  puVar7 = (undefined1 *)param_1;
  uVar1 = *param_1;
  *param_1 = *(undefined1 *)0x5d8a;
  uVar2 = puVar7[1];
  puVar7[1] = *(undefined1 *)0x5d6c;
  uVar3 = puVar7[2];
  puVar7[2] = *(undefined1 *)0x5d6e;
  uVar4 = puVar7[0x10];
  puVar7[0x10] = *(undefined1 *)0x5d8c;
  do {
    bVar5 = in(0x3da);
  } while ((bVar5 & 8) != 0);
  do {
    bVar5 = in(0x3da);
  } while ((bVar5 & 8) == 0);
  iVar6 = 0xf;
  do {
    out(0x3c0,(char)iVar6);
    out(0x3c0,puVar7[iVar6]);
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  out(0x3c0,0);
  out(0x3c0,*param_1);
  out(0x3c0,0x31);
  out(0x3c0,puVar7[0x10]);
  puVar7[0x10] = uVar4;
  puVar7[2] = uVar3;
  puVar7[1] = uVar2;
  *param_1 = uVar1;
  return;
}



// Function: FUN_2000_96a4 @ 2000:96a4

void __cdecl16far FUN_2000_96a4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}



// Function: FUN_2000_96b7 @ 2000:96b7

void __cdecl16far FUN_2000_96b7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}



// Function: FUN_2000_96d8 @ 2000:96d8

undefined2 __cdecl16far FUN_2000_96d8(undefined1 *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)param_1;
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) != 0);
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) == 0);
  out(0x3c8,3);
  iVar3 = 0x2f7;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    out(*puVar1,0x3c9);
  }
  return 3;
}



// Function: FUN_2000_9704 @ 2000:9704

undefined2 __cdecl16far FUN_2000_9704(undefined1 *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined1 *)param_1;
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) != 0);
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) == 0);
  out(0x3c8,3);
  iVar3 = 0x17a;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    out(*puVar1,0x3c9);
  }
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) != 0);
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) == 0);
  out(0x3c8,0x81);
  iVar3 = 0x17d;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    out(*puVar1,0x3c9);
  }
  return 0x81;
}



// Function: FUN_2000_974f @ 2000:974f

undefined1 __cdecl16far FUN_2000_974f(undefined1 *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)param_1;
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) != 0);
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) == 0);
  out(0x3c8,3);
  iVar3 = 0x2f7;
  do {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    out(0x3c9,*puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return *puVar1;
}



// Function: FUN_2000_977e @ 2000:977e

undefined1 __cdecl16far FUN_2000_977e(undefined1 *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  puVar4 = (undefined1 *)param_1;
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) != 0);
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) == 0);
  out(0x3c8,3);
  iVar3 = 0x17a;
  do {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    out(0x3c9,*puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) != 0);
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) == 0);
  out(0x3c8,0x81);
  iVar3 = 0x17d;
  do {
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    out(0x3c9,*puVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return *puVar1;
}



// Function: FUN_2000_97d0 @ 2000:97d0

undefined2 __cdecl16far FUN_2000_97d0(undefined2 param_1)

{
  byte bVar1;
  
  do {
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) != 0);
  do {
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) == 0);
  out(0x3d4,CONCAT11((char)param_1,0x18));
  out(0x3d4,CONCAT11(((byte)((uint)param_1 >> 8) & 1) << 4 | 0xf,7));
  out(0x3d4,9);
  return 9;
}



// Function: FUN_2000_9803 @ 2000:9803

undefined2 __cdecl16far FUN_2000_9803(undefined2 param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) != 0);
  do {
    bVar2 = in(0x3da);
  } while ((bVar2 & 8) == 0);
  uVar1 = (undefined1)((uint)param_1 >> 8);
  iVar4 = (CONCAT11(uVar1,uVar1) & 0x201) << 4;
  out(0x3d4,CONCAT11((char)param_1,0x18));
  out(0x3d4,7);
  bVar2 = in(0x3d5);
  out(0x3d4,CONCAT11(bVar2 & 0xef | (byte)iVar4,7));
  out(0x3d4,9);
  bVar2 = in(0x3d5);
  uVar3 = CONCAT11(bVar2 & 0xbf | (char)((uint)iVar4 >> 8) << 1,9);
  out(0x3d4,uVar3);
  return uVar3;
}



// Function: FUN_2000_984f @ 2000:984f

undefined2 __cdecl16far FUN_2000_984f(uint param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = (param_1 / 8 & 0xff) + param_2 * 0x50;
  do {
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) != 0);
  do {
    bVar1 = in(0x3da);
  } while ((bVar1 & 8) == 0);
  out(0x3d4,CONCAT11((char)((uint)iVar3 >> 8),0xc));
  uVar2 = CONCAT11((char)iVar3,0xd);
  out(0x3d4,uVar2);
  return uVar2;
}



// Function: FUN_2000_99aa @ 2000:99aa

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl16far
FUN_2000_99aa(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
             int param_8)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 unaff_CS;
  undefined2 uVar11;
  undefined2 unaff_DS;
  
  if (*(uint *)0x5da6 <= *(uint *)0x5d7a) {
    unaff_CS = 0x11c1;
    FUN_1000_4125();
  }
  uVar11 = unaff_CS;
  if (*(int *)0x5d7e != 0) {
    uVar11 = 0x11c1;
    iVar1 = func_0x000134f7(unaff_CS);
    if (iVar1 != 0) {
      return;
    }
  }
  if (*(char *)0x5d92 != 'n') {
    if ((param_3 - param_1 < 2) && (param_4 - param_2 < 2)) {
      return;
    }
    iVar1 = ((uint)(param_3 + param_1) >> 1) + (uint)((param_3 + param_1 & 1U) != 0);
    iVar10 = ((uint)(param_4 + param_2) >> 1) + (uint)((param_4 + param_2 & 1U) != 0);
    uVar2 = (*(code *)*(undefined2 *)0x5c3b)(uVar11,iVar1,iVar10);
    if (((char)uVar2 == (char)*(undefined2 *)0x5d8a) ||
       ((char)uVar2 == (char)((uint)*(undefined2 *)0x5d8a >> 8))) {
      *(uint *)0x7488 = (uint)(param_5 + param_6 + param_7 + param_8) >> 2;
      *(int *)0x5df0 = iVar1;
      *(int *)0x5dee = iVar10;
      (*(code *)*(undefined2 *)0x5c3f)(uVar11,1);
      uVar2 = *(undefined2 *)0x7488;
    }
    iVar9 = (((param_3 - param_1) + param_4) - param_2) * 2;
    uVar3 = (*(code *)*(undefined2 *)0x5c3b)(uVar11,iVar1,param_2);
    if (((char)uVar3 == (char)*(undefined2 *)0x5d8a) ||
       ((char)uVar3 == (char)((uint)*(undefined2 *)0x5d8a >> 8))) {
      uVar7 = *(int *)0x7492 + 0x9248U >> 1;
      uVar7 = ((uVar7 | (uint)((*(int *)0x7492 + 0x9248U & 1) != 0) << 0xf) >> 1 |
              (uint)((uVar7 & 1) != 0) << 0xf) >> 1 | (uint)((uVar7 & 2) != 0) << 0xf;
      *(uint *)0x7492 = uVar7;
      iVar8 = (int)((ulong)((long)iVar9 * (long)(int)uVar7) >> 0x10) + param_5 + param_6 >> 1;
      if (iVar8 < 4) {
        iVar8 = 3;
      }
      else if (*(int *)0x7498 < iVar8) {
        iVar8 = *(int *)0x7498;
      }
      *(int *)0x7488 = iVar8;
      *(int *)0x5df0 = iVar1;
      *(int *)0x5dee = param_2;
      (*(code *)*(undefined2 *)0x5c3f)(uVar11,1);
      uVar3 = *(undefined2 *)0x7488;
    }
    uVar4 = (*(code *)*(undefined2 *)0x5c3b)(uVar11,param_1,iVar10);
    if (((char)uVar4 == (char)*(undefined2 *)0x5d8a) ||
       ((char)uVar4 == (char)((uint)*(undefined2 *)0x5d8a >> 8))) {
      uVar7 = *(int *)0x7492 + 0x9248U >> 1;
      uVar7 = ((uVar7 | (uint)((*(int *)0x7492 + 0x9248U & 1) != 0) << 0xf) >> 1 |
              (uint)((uVar7 & 1) != 0) << 0xf) >> 1 | (uint)((uVar7 & 2) != 0) << 0xf;
      *(uint *)0x7492 = uVar7;
      iVar8 = (int)((ulong)((long)iVar9 * (long)(int)uVar7) >> 0x10) + param_5 + param_8 >> 1;
      if (iVar8 < 4) {
        iVar8 = 3;
      }
      else if (*(int *)0x7498 < iVar8) {
        iVar8 = *(int *)0x7498;
      }
      *(int *)0x7488 = iVar8;
      *(int *)0x5df0 = param_1;
      *(int *)0x5dee = iVar10;
      (*(code *)*(undefined2 *)0x5c3f)(uVar11,1);
      uVar4 = *(undefined2 *)0x7488;
    }
    uVar5 = (*(code *)*(undefined2 *)0x5c3b)(uVar11,param_3,iVar10);
    if (((char)uVar5 == (char)*(undefined2 *)0x5d8a) ||
       ((char)uVar5 == (char)((uint)*(undefined2 *)0x5d8a >> 8))) {
      uVar7 = *(int *)0x7492 + 0x9248U >> 1;
      uVar7 = ((uVar7 | (uint)((*(int *)0x7492 + 0x9248U & 1) != 0) << 0xf) >> 1 |
              (uint)((uVar7 & 1) != 0) << 0xf) >> 1 | (uint)((uVar7 & 2) != 0) << 0xf;
      *(uint *)0x7492 = uVar7;
      iVar8 = (int)((ulong)((long)iVar9 * (long)(int)uVar7) >> 0x10) + param_6 + param_7 >> 1;
      if (iVar8 < 4) {
        iVar8 = 3;
      }
      else if (*(int *)0x7498 < iVar8) {
        iVar8 = *(int *)0x7498;
      }
      *(int *)0x7488 = iVar8;
      *(int *)0x5df0 = param_3;
      *(int *)0x5dee = iVar10;
      (*(code *)*(undefined2 *)0x5c3f)(uVar11,1);
      uVar5 = *(undefined2 *)0x7488;
    }
    uVar6 = (*(code *)*(undefined2 *)0x5c3b)(uVar11,iVar1,param_4);
    if (((char)uVar6 == (char)*(undefined2 *)0x5d8a) ||
       ((char)uVar6 == (char)((uint)*(undefined2 *)0x5d8a >> 8))) {
      uVar7 = *(int *)0x7492 + 0x9248U >> 1;
      uVar7 = ((uVar7 | (uint)((*(int *)0x7492 + 0x9248U & 1) != 0) << 0xf) >> 1 |
              (uint)((uVar7 & 1) != 0) << 0xf) >> 1 | (uint)((uVar7 & 2) != 0) << 0xf;
      *(uint *)0x7492 = uVar7;
      iVar9 = (int)((ulong)((long)iVar9 * (long)(int)uVar7) >> 0x10) + param_8 + param_7 >> 1;
      if (iVar9 < 4) {
        iVar9 = 3;
      }
      else if (*(int *)0x7498 < iVar9) {
        iVar9 = *(int *)0x7498;
      }
      *(int *)0x7488 = iVar9;
      *(int *)0x5df0 = iVar1;
      *(int *)0x5dee = param_4;
      (*(code *)*(undefined2 *)0x5c3f)(uVar11,1);
      uVar6 = *(undefined2 *)0x7488;
    }
    FUN_2000_99aa(param_1,param_2,iVar1,iVar10,param_5,uVar3,uVar2,uVar4);
    FUN_2000_99aa(iVar1,param_2,param_3,iVar10,uVar3,param_6,uVar5,uVar2);
    FUN_2000_99aa(iVar1,iVar10,param_3,param_4,uVar2,uVar5,param_7,uVar6);
    FUN_2000_99aa(param_1,iVar10,iVar1,param_4,uVar4,uVar2,uVar6,param_8);
    return;
  }
  return;
}



// Function: FUN_2000_9ccd @ 2000:9ccd

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl16far FUN_2000_9ccd(void)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 extraout_DX;
  undefined2 unaff_DS;
  
  *(int *)0x7494 = *(int *)0x5db0 + -1;
  *(int *)0x7496 = *(int *)0x5db2 + -1;
  *(int *)0x7498 = *(int *)0x5db6 + -1;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  *(undefined2 *)0x7492 = extraout_DX;
  uVar2 = *(int *)0x7492 + 0x9248U >> 1;
  uVar2 = ((uVar2 | (uint)((*(int *)0x7492 + 0x9248U & 1) != 0) << 0xf) >> 1 |
          (uint)((uVar2 & 1) != 0) << 0xf) >> 1 | (uint)((uVar2 & 2) != 0) << 0xf;
  *(uint *)0x7492 = uVar2;
  uVar2 = uVar2 >> 8;
  if (uVar2 < 4) {
    uVar2 = 3;
  }
  else if (*(int *)0x7498 < (int)uVar2) {
    uVar2 = *(uint *)0x7498;
  }
  *(uint *)0x7488 = uVar2;
  *(undefined2 *)0x5df0 = 0;
  *(undefined2 *)0x5dee = 0;
  (*(code *)*(undefined2 *)0x5c3f)();
  uVar3 = *(int *)0x7492 + 0x9248U >> 1;
  uVar3 = ((uVar3 | (uint)((*(int *)0x7492 + 0x9248U & 1) != 0) << 0xf) >> 1 |
          (uint)((uVar3 & 1) != 0) << 0xf) >> 1 | (uint)((uVar3 & 2) != 0) << 0xf;
  *(uint *)0x7492 = uVar3;
  uVar3 = uVar3 >> 8;
  if (uVar3 < 4) {
    uVar3 = 3;
  }
  else if (*(int *)0x7498 < (int)uVar3) {
    uVar3 = *(uint *)0x7498;
  }
  *(uint *)0x7488 = uVar3;
  *(undefined2 *)0x5df0 = *(undefined2 *)0x7494;
  *(undefined2 *)0x5dee = 0;
  (*(code *)*(undefined2 *)0x5c3f)();
  uVar4 = *(int *)0x7492 + 0x9248U >> 1;
  uVar4 = ((uVar4 | (uint)((*(int *)0x7492 + 0x9248U & 1) != 0) << 0xf) >> 1 |
          (uint)((uVar4 & 1) != 0) << 0xf) >> 1 | (uint)((uVar4 & 2) != 0) << 0xf;
  *(uint *)0x7492 = uVar4;
  uVar4 = uVar4 >> 8;
  if (uVar4 < 4) {
    uVar4 = 3;
  }
  else if (*(int *)0x7498 < (int)uVar4) {
    uVar4 = *(uint *)0x7498;
  }
  *(uint *)0x7488 = uVar4;
  *(undefined2 *)0x5df0 = *(undefined2 *)0x7494;
  *(undefined2 *)0x5dee = *(undefined2 *)0x7496;
  (*(code *)*(undefined2 *)0x5c3f)();
  uVar5 = *(int *)0x7492 + 0x9248U >> 1;
  uVar5 = ((uVar5 | (uint)((*(int *)0x7492 + 0x9248U & 1) != 0) << 0xf) >> 1 |
          (uint)((uVar5 & 1) != 0) << 0xf) >> 1 | (uint)((uVar5 & 2) != 0) << 0xf;
  *(uint *)0x7492 = uVar5;
  uVar5 = uVar5 >> 8;
  if (uVar5 < 4) {
    uVar5 = 3;
  }
  else if (*(int *)0x7498 < (int)uVar5) {
    uVar5 = *(uint *)0x7498;
  }
  *(uint *)0x7488 = uVar5;
  *(undefined2 *)0x5df0 = 0;
  *(undefined2 *)0x5dee = *(undefined2 *)0x7496;
  (*(code *)*(undefined2 *)0x5c3f)();
  FUN_2000_99aa(0,0,*(undefined2 *)0x7494,*(undefined2 *)0x7496,uVar2,uVar3,uVar4,uVar5);
  return;
}



// Function: FUN_2000_9f07 @ 2000:9f07

void __cdecl16far FUN_2000_9f07(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0;
  do {
    *(char *)((int)*(undefined4 *)0x7756 + iVar1) =
         *(char *)((int)*(undefined4 *)0x5d94 + iVar1) << 2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  for (; iVar1 < 0x301; iVar1 = iVar1 + 1) {
    *(char *)((int)*(undefined4 *)0x7756 + iVar1) =
         *(char *)(*(int *)0x5dec + iVar1 + *(int *)0x5d94) << 2;
  }
  return;
}



// Function: FUN_2000_9f4d @ 2000:9f4d

void __cdecl16far FUN_2000_9f4d(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_DS;
  
  iVar4 = 0;
  uVar5 = (undefined2)((ulong)*(undefined4 *)0x7762 >> 0x10);
  iVar2 = (int)*(undefined4 *)0x7762;
  *(byte *)(iVar2 + 0x10) =
       (byte)((*(uint *)0x5d8a & 0x20) >> 5) | (byte)((*(uint *)0x5d8a & 4) >> 1);
  *(byte *)(iVar2 + 0x11) = (byte)((*(uint *)0x5d8a & 0x10) >> 4) | *(byte *)0x5d8a & 2;
  *(byte *)(iVar2 + 0x12) = (byte)((*(uint *)0x5d8a & 8) >> 3) | (*(byte *)0x5d8a & 1) << 1;
  for (iVar2 = 3; iVar2 < 9; iVar2 = iVar2 + 3) {
    uVar5 = (undefined2)((ulong)*(undefined4 *)0x7762 >> 0x10);
    *(byte *)((int)*(undefined4 *)0x7762 + iVar2 + 0x10) =
         (byte)((*(uint *)(iVar4 * 2 + 0x5d6c) & 0x20) >> 5) |
         (byte)((*(uint *)(iVar4 * 2 + 0x5d6c) & 4) >> 1);
    *(byte *)(*(int *)0x7762 + iVar2 + 0x11) =
         (byte)((*(uint *)(iVar4 * 2 + 0x5d6c) & 0x10) >> 4) | *(byte *)(iVar4 * 2 + 0x5d6c) & 2;
    *(byte *)(*(int *)0x7762 + iVar2 + 0x12) =
         (byte)((*(uint *)(iVar4 * 2 + 0x5d6c) & 8) >> 3) | (*(byte *)(iVar4 * 2 + 0x5d6c) & 1) << 1
    ;
    iVar4 = iVar4 + 1;
  }
  iVar4 = *(int *)0x5dec + 3;
  for (; iVar2 < 0x30; iVar2 = iVar2 + 3) {
    uVar5 = (undefined2)((ulong)*(undefined4 *)0x5d94 >> 0x10);
    iVar3 = (int)*(undefined4 *)0x5d94;
    *(byte *)((int)*(undefined4 *)0x7762 + iVar2 + 0x10) =
         (byte)((int)(*(byte *)(iVar3 + iVar4) & 0x20) >> 5) |
         (byte)((int)(*(byte *)(iVar3 + iVar4) & 4) >> 1);
    uVar5 = (undefined2)((ulong)*(undefined4 *)0x5d94 >> 0x10);
    iVar3 = (int)*(undefined4 *)0x5d94;
    *(byte *)((int)*(undefined4 *)0x7762 + iVar2 + 0x11) =
         (byte)((int)(*(byte *)(iVar3 + iVar4) & 0x10) >> 4) | *(byte *)(iVar3 + iVar4) & 2;
    uVar5 = (undefined2)((ulong)*(undefined4 *)0x5d94 >> 0x10);
    iVar3 = (int)*(undefined4 *)0x5d94;
    *(byte *)((int)*(undefined4 *)0x7762 + iVar2 + 0x12) =
         (byte)((int)(*(byte *)(iVar3 + iVar4) & 8) >> 3) | (*(byte *)(iVar3 + iVar4) & 1) << 1;
    iVar4 = iVar4 + 1;
  }
  for (iVar2 = 0; iVar2 < 0x30; iVar2 = iVar2 + 1) {
    cVar1 = *(char *)((int)*(undefined4 *)0x7762 + iVar2 + 0x10);
    if (cVar1 == '\x01') {
      *(undefined1 *)((int)*(undefined4 *)0x7762 + iVar2 + 0x10) = 0x55;
    }
    else if (cVar1 == '\x02') {
      *(undefined1 *)((int)*(undefined4 *)0x7762 + iVar2 + 0x10) = 0xaa;
    }
    else if (cVar1 == '\x03') {
      *(undefined1 *)((int)*(undefined4 *)0x7762 + iVar2 + 0x10) = 0xff;
    }
  }
  return;
}



// Function: FUN_2000_a0e2 @ 2000:a0e2

void __cdecl16far FUN_2000_a0e2(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_DS;
  
  func_0x00004d36();
  puVar1 = (undefined1 *)*(undefined4 *)0x7762;
  uVar4 = (undefined2)((ulong)puVar1 >> 0x10);
  puVar2 = (undefined1 *)puVar1;
  *puVar1 = 10;
  puVar2[1] = 5;
  puVar2[2] = 1;
  if (*(int *)0x7484 == 4) {
    puVar2[3] = 1;
    *(undefined2 *)(puVar2 + 8) = 0x27f;
    *(undefined2 *)(puVar2 + 10) = 0x15d;
    *(undefined2 *)(puVar2 + 0xc) = 0x280;
    *(undefined2 *)(puVar2 + 0xe) = 0x15e;
    puVar2[0x41] = 4;
    *(undefined2 *)(puVar2 + 0x42) = 0x50;
    FUN_2000_9f4d();
  }
  else {
    uVar4 = (undefined2)((ulong)*(undefined4 *)0x7762 >> 0x10);
    iVar3 = (int)*(undefined4 *)0x7762;
    *(undefined1 *)(iVar3 + 3) = 8;
    *(undefined2 *)(iVar3 + 8) = 0x13f;
    *(undefined2 *)(iVar3 + 0xc) = 0x140;
    *(undefined1 *)(iVar3 + 0x41) = 1;
    *(undefined2 *)(iVar3 + 0x42) = 0x140;
    if (*(int *)0x5de4 == 0) {
      uVar4 = (undefined2)((ulong)*(undefined4 *)0x7762 >> 0x10);
      iVar3 = (int)*(undefined4 *)0x7762;
      *(undefined2 *)(iVar3 + 10) = 399;
      *(undefined2 *)(iVar3 + 0xe) = 400;
    }
    else {
      *(undefined2 *)(iVar3 + 10) = 199;
      *(undefined2 *)(iVar3 + 0xe) = 200;
    }
  }
  func_0x000048cc(0,*(undefined2 *)0x7762,*(undefined2 *)0x7764,1,0x80,*(undefined2 *)0x775a,
                  *(undefined2 *)0x775c);
  return;
}



// Function: FUN_2000_a1a6 @ 2000:a1a6

int __cdecl16far FUN_2000_a1a6(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  undefined2 uVar5;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  uVar2 = 0;
  do {
    uVar3 = 0;
    while( true ) {
      uVar4 = (undefined2)((ulong)param_1 >> 0x10);
      iVar1 = (int)param_1;
      if (((*(char *)(iVar1 + uVar2 + uVar3) != *(char *)(iVar1 + uVar2 + uVar3 + 1)) ||
          (*(uint *)((int)*(undefined4 *)0x7762 + 0x42) <= uVar2 + uVar3)) || (0x3e < uVar3)) break;
      uVar3 = uVar3 + 1;
    }
    if (uVar3 == 0) {
      uVar5 = unaff_CS;
      if (((int)*(char *)(iVar1 + uVar2) & 0xc0U) == 0xc0) {
        uVar5 = 0;
        func_0x00004fea(unaff_CS,0xc1,*(undefined2 *)0x775a,*(undefined2 *)0x775c);
        local_4 = local_4 + 1;
      }
      uVar3 = uVar2 + 1;
      func_0x00004fea(uVar5,(int)*(char *)(iVar1 + uVar2),*(undefined2 *)0x775a,
                      *(undefined2 *)0x775c);
      local_4 = local_4 + 1;
    }
    else {
      func_0x00004fea(unaff_CS,uVar3 | 0xc0,*(undefined2 *)0x775a,*(undefined2 *)0x775c);
      func_0x00004fea(0,(int)*(char *)(iVar1 + uVar2),*(undefined2 *)0x775a,*(undefined2 *)0x775c);
      uVar3 = uVar2 + uVar3;
      local_4 = local_4 + 2;
    }
    unaff_CS = 0;
    uVar2 = uVar3;
  } while (uVar3 < *(uint *)((int)*(undefined4 *)0x7762 + 0x42));
  return local_4;
}



// Function: FUN_2000_a27e @ 2000:a27e

void __cdecl16far FUN_2000_a27e(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  for (iVar1 = 0; iVar1 < *(int *)((int)*(undefined4 *)0x7762 + 0xe); iVar1 = iVar1 + 1) {
    out(0x3ce,4);
    out(0x3cf,0);
    FUN_2000_a1a6(*(int *)0x775e + *(int *)((int)*(undefined4 *)0x7762 + 0x42) * iVar1,
                  *(undefined2 *)0x7760);
    out(0x3cf,1);
    FUN_2000_a1a6(*(int *)0x775e + *(int *)((int)*(undefined4 *)0x7762 + 0x42) * iVar1,
                  *(undefined2 *)0x7760);
    out(0x3cf,2);
    FUN_2000_a1a6(*(int *)0x775e + *(int *)((int)*(undefined4 *)0x7762 + 0x42) * iVar1,
                  *(undefined2 *)0x7760);
    out(0x3cf,3);
    FUN_2000_a1a6(*(int *)0x775e + *(int *)((int)*(undefined4 *)0x7762 + 0x42) * iVar1,
                  *(undefined2 *)0x7760);
  }
  return;
}



// Function: FUN_2000_a327 @ 2000:a327

void __cdecl16far FUN_2000_a327(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  for (iVar1 = 0; iVar1 < *(int *)((int)*(undefined4 *)0x7762 + 0xe); iVar1 = iVar1 + 1) {
    FUN_2000_a1a6(*(int *)0x775e + *(int *)((int)*(undefined4 *)0x7762 + 0x42) * iVar1,
                  *(undefined2 *)0x7760);
  }
  func_0x00004fea();
  func_0x000048cc(0,*(undefined2 *)0x7756,*(undefined2 *)0x7758,0x301,1,*(undefined2 *)0x775a,
                  *(undefined2 *)0x775c);
  return;
}



// Function: FUN_2000_a388 @ 2000:a388

void __cdecl16far FUN_2000_a388(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined2 unaff_DS;
  long lVar7;
  
  iVar1 = *(int *)((int)*(undefined4 *)0x7762 + 0x42) / 4;
  lVar7 = func_0x00002c51();
  uVar4 = (undefined2)((ulong)lVar7 >> 0x10);
  iVar2 = (int)lVar7;
  if (lVar7 == 0) {
    func_0x0001955d(0,1);
    func_0x000045d4(0x1899,0x441c);
    func_0x000011a8(0,0x387);
  }
  for (iVar5 = 0; iVar5 < *(int *)((int)*(undefined4 *)0x7762 + 0xe); iVar5 = iVar5 + 1) {
    iVar6 = 0;
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        out(0x3ce,4);
        out(0x3cf,0);
        *(undefined1 *)(iVar2 + iVar3) = *(undefined1 *)(iVar6 + iVar5 * 0x50 + *(int *)0x775e);
        out(0x3cf,1);
        *(undefined1 *)(iVar2 + iVar3 + 1) = *(undefined1 *)(iVar6 + iVar5 * 0x50 + *(int *)0x775e);
        out(0x3cf,2);
        *(undefined1 *)(iVar2 + iVar3 + 2) = *(undefined1 *)(iVar6 + iVar5 * 0x50 + *(int *)0x775e);
        out(0x3cf,3);
        *(undefined1 *)(iVar2 + iVar3 + 3) = *(undefined1 *)(iVar6 + iVar5 * 0x50 + *(int *)0x775e);
        iVar3 = iVar3 + 4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
    FUN_2000_a1a6(lVar7);
  }
  func_0x00002b47(0,lVar7);
  func_0x00004fea(0,0xc,*(undefined2 *)0x775a,*(undefined2 *)0x775c);
  func_0x000048cc(0,*(undefined2 *)0x7756,*(undefined2 *)0x7758,0x301,1,*(undefined2 *)0x775a,
                  *(undefined2 *)0x775c);
  return;
}



// Function: FUN_2000_a50b @ 2000:a50b

void __cdecl16far FUN_2000_a50b(void)

{
  int iVar1;
  undefined2 unaff_CS;
  undefined2 uVar2;
  undefined2 unaff_DS;
  long lVar3;
  undefined1 local_10 [14];
  
  *(undefined2 *)0x45ae = 0x8000;
  do {
    *(int *)0x3c66 = *(int *)0x3c66 + 1;
    func_0x00005893(unaff_CS,local_10);
    iVar1 = func_0x00003fed(0,local_10);
    if ((iVar1 == -1) && (*(int *)0x7f != 0x23)) {
      func_0x0001955d(0,1);
      func_0x000045d4(0x1899,0x441c);
      func_0x000011a8(0,0x388);
    }
    unaff_CS = 0;
  } while ((iVar1 == -1) && (*(int *)0x3c66 < 9999));
  if (9999 < *(int *)0x3c66) {
    func_0x0001955d(0,1);
    func_0x000045d4(0x1899,0x441c);
    func_0x000011a8(0,0x389);
  }
  lVar3 = func_0x0000412a(0,iVar1,0x3ce5);
  *(undefined2 *)0x775c = (int)((ulong)lVar3 >> 0x10);
  *(undefined2 *)0x775a = (int)lVar3;
  if (lVar3 == 0) {
    func_0x0001955d(0,1);
    func_0x000045d4(0x1899,0x441c);
    func_0x000011a8(0,900);
  }
  lVar3 = func_0x00002c51(0,0x80);
  *(undefined2 *)0x7764 = (int)((ulong)lVar3 >> 0x10);
  *(undefined2 *)0x7762 = (int)lVar3;
  if (lVar3 == 0) {
    func_0x0001955d(0,1);
    func_0x000045d4(0x1899,0x441c);
    func_0x000011a8(0,0x385);
  }
  FUN_2000_a0e2();
  uVar2 = 0x11c1;
  func_0x00012a17(0,600,0x37);
  *(undefined2 *)0x7760 = 0xa000;
  *(undefined2 *)0x775e = 0;
  if (*(int *)0x5de6 < 2) {
    (*(code *)*(undefined2 *)0x5c33)(0x11c1,0,0);
    *(undefined2 *)0x7760 = 0xa000;
  }
  else {
    if (*(int *)0x7484 == 4) {
      iVar1 = 0x15e;
    }
    else {
      iVar1 = *(int *)0x5db2 << 1;
    }
    (*(code *)*(undefined2 *)0x5c33)(0x11c1,0,iVar1);
    *(int *)0x7760 = *(int *)0x7490 + -0x6000;
  }
  *(undefined2 *)0x775e = 0;
  if (*(int *)0x7484 == 4) {
    FUN_2000_a27e();
  }
  else {
    lVar3 = func_0x00002c51(0x11c1,0x301);
    *(undefined2 *)0x7758 = (int)((ulong)lVar3 >> 0x10);
    *(undefined2 *)0x7756 = (int)lVar3;
    if (lVar3 == 0) {
      func_0x0001955d(0,1);
      func_0x000045d4(0x1899,0x441c);
      func_0x000011a8(0,0x386);
    }
    FUN_2000_9f07();
    if (*(int *)0x5de4 == 0) {
      FUN_2000_a388();
    }
    else {
      FUN_2000_a327();
    }
    uVar2 = 0;
    func_0x00002b47(0,*(undefined2 *)0x7756,*(undefined2 *)0x7758);
  }
  func_0x00002b47(uVar2,*(undefined2 *)0x7762,*(undefined2 *)0x7764);
  func_0x00003f37(0);
  *(undefined2 *)0x45ae = 0x4000;
  func_0x00012a17(0,300,0x28);
  return;
}



// Function: FUN_2000_a77e @ 2000:a77e

void __cdecl16far FUN_2000_a77e(void)

{
  undefined2 *puVar1;
  undefined2 *local_6;
  
  local_6 = (undefined2 *)0x1e814385;
  while ((undefined2 *)local_6 < (undefined2 *)0x6384) {
    *local_6 = 0x1000;
    local_6 = (undefined2 *)CONCAT22(local_6._2_2_,(undefined2 *)local_6 + 1);
  }
  local_6 = (undefined2 *)0x1e816385;
  do {
    *local_6 = 0x1000;
    puVar1 = (undefined2 *)local_6 + 1;
    local_6 = (undefined2 *)CONCAT22(local_6._2_2_,puVar1);
  } while (puVar1 < (undefined2 *)0x8385);
  return;
}



// Function: FUN_2000_a7e2 @ 2000:a7e2

void __cdecl16far FUN_2000_a7e2(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint local_c;
  undefined4 local_8;
  int local_4;
  
  local_4 = 1;
  pbVar2 = (byte *)(param_1 + -0x5c73);
  local_8 = (byte *)CONCAT22(0x1e81,pbVar2);
  bVar1 = *(byte *)(param_1 + -0x5c72) ^ *(byte *)(param_1 + -0x5c71);
  iVar3 = *local_8 + 0x1001 + ((byte)(bVar1 ^ bVar1 >> 4) & 0xf) * 0x100;
  *(undefined2 *)(param_1 * 2 + -0x7c79) = 0x1000;
  *(undefined2 *)(param_1 * 2 + 0x2383) = 0x1000;
  uRam00028b99 = 0;
  local_c = 1;
  uVar4 = uRam00028b9b;
  do {
    uRam00028b9b = uVar4;
    if (local_4 < 0) {
      if (*(int *)(iVar3 * 2 + -0x7c79) == 0x1000) {
        *(int *)(iVar3 * 2 + -0x7c79) = param_1;
        goto LAB_2000_a8a0;
      }
      iVar3 = *(int *)(iVar3 * 2 + -0x7c79);
    }
    else {
      if (*(int *)(iVar3 * 2 + 0x2383) == 0x1000) {
        *(int *)(iVar3 * 2 + 0x2383) = param_1;
LAB_2000_a8a0:
        *(int *)(param_1 * 2 + 0x6385) = iVar3;
        *(undefined1 *)(param_1 + 0x1382) = (undefined1)local_c;
        return;
      }
      iVar3 = *(int *)(iVar3 * 2 + 0x2383);
    }
    uVar4 = (uint)*(byte *)(iVar3 + 0x1382);
    if (uVar4 < local_c) {
      local_4 = (uint)pbVar2[uVar4] - (uint)*(byte *)(uVar4 + iVar3 + -0x5c73);
      local_c = uVar4;
    }
    else if (local_c == uVar4) {
      while ((local_c < 0x3c &&
             (local_4 = (uint)pbVar2[local_c] - (uint)*(byte *)(local_c + iVar3 + -0x5c73),
             local_4 == 0))) {
        local_c = local_c + 1;
      }
    }
    uVar4 = uRam00028b9b;
    if (2 < local_c) {
      if (uRam00028b99 < local_c) {
        uRam00028b9b = (param_1 - iVar3 & 0xfffU) - 1;
        uRam00028b99 = local_c;
        uVar4 = uRam00028b9b;
        if (0x3b < local_c) {
          *(undefined1 *)(param_1 + 0x1382) = *(undefined1 *)(iVar3 + 0x1382);
          *(undefined2 *)(param_1 * 2 + 0x6385) = *(undefined2 *)(iVar3 * 2 + 0x6385);
          *(undefined2 *)(param_1 * 2 + -0x7c79) = *(undefined2 *)(iVar3 * 2 + -0x7c79);
          *(undefined2 *)(param_1 * 2 + 0x2383) = *(undefined2 *)(iVar3 * 2 + 0x2383);
          *(int *)(*(int *)(iVar3 * 2 + -0x7c79) * 2 + 0x6385) = param_1;
          *(int *)(*(int *)(iVar3 * 2 + 0x2383) * 2 + 0x6385) = param_1;
          if (*(int *)(*(int *)(iVar3 * 2 + 0x6385) * 2 + 0x2383) == iVar3) {
            *(int *)(*(int *)(iVar3 * 2 + 0x6385) * 2 + 0x2383) = param_1;
          }
          else {
            *(int *)(*(int *)(iVar3 * 2 + 0x6385) * 2 + -0x7c79) = param_1;
          }
          *(undefined2 *)(iVar3 * 2 + 0x6385) = 0x1000;
          return;
        }
      }
      else if ((uRam00028b99 == local_c) &&
              (uVar4 = (param_1 - iVar3 & 0xfffU) - 1, uRam00028b9b <= uVar4)) {
        uVar4 = uRam00028b9b;
      }
    }
  } while( true );
}



// Function: FUN_2000_aac8 @ 2000:aac8

void __cdecl16far FUN_2000_aac8(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 local_a;
  undefined4 local_6;
  
  if (param_2 < 0x1000) {
    local_6._0_2_ = (char *)(param_2 + param_1 + -0x5c73);
    local_6 = (char *)CONCAT22(0x1e81,(char *)local_6);
    local_a = (char *)CONCAT22(0x1e81,(char *)(param_3 + param_1 + -0x5c73));
    pcVar3 = local_a;
    pcVar4 = local_6;
    do {
      if ((char *)(param_2 + -0x5c37) <= (char *)local_6) {
        *(undefined1 *)(param_3 + 0x1382) = 0x3c;
        return;
      }
      local_6._0_2_ = (char *)pcVar4;
      local_6._0_2_ = (char *)local_6 + 1;
      local_6._2_2_ = (undefined2)((ulong)pcVar4 >> 0x10);
      cVar1 = *pcVar4;
      local_a._0_2_ = (char *)pcVar3;
      local_a = (char *)CONCAT22((int)((ulong)pcVar3 >> 0x10),(char *)local_a + 1);
      cVar2 = *pcVar3;
      pcVar3 = local_a;
      pcVar4 = local_6;
    } while (cVar1 == cVar2);
    *(char *)(param_3 + 0x1382) = ((char)(char *)local_6 + 'r') - (char)param_2;
  }
  else {
    *(undefined1 *)(param_3 + 0x1382) = 1;
  }
  return;
}



// Function: FUN_2000_ab64 @ 2000:ab64

void __cdecl16far FUN_2000_ab64(undefined2 param_1,int param_2,int param_3)

{
  if ((uint)*(byte *)(param_2 + 0x1382) == (uint)*(byte *)(param_3 + 0x1382)) {
    FUN_2000_aac8(*(undefined1 *)(param_2 + 0x1382),param_1,param_3);
  }
  else if ((int)((uint)*(byte *)(param_2 + 0x1382) - (uint)*(byte *)(param_3 + 0x1382)) < 0) {
    *(undefined1 *)(param_3 + 0x1382) = *(undefined1 *)(param_2 + 0x1382);
  }
  return;
}



// Function: FUN_2000_abcd @ 2000:abcd

void __cdecl16far FUN_2000_abcd(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 * 2 + 0x6385) == 0x1000) {
    return;
  }
  if (*(int *)(param_1 * 2 + 0x2383) == 0x1000) {
    iVar1 = *(int *)(param_1 * 2 + -0x7c79);
    if (iVar1 == 0x1000) goto LAB_2000_adcd;
  }
  else {
    if (*(int *)(param_1 * 2 + -0x7c79) != 0x1000) {
      iVar1 = *(int *)(param_1 * 2 + -0x7c79);
      if (*(int *)(iVar1 * 2 + 0x2383) != 0x1000) {
        do {
          iVar1 = *(int *)(iVar1 * 2 + 0x2383);
        } while (*(int *)(iVar1 * 2 + 0x2383) != 0x1000);
        if (*(int *)(iVar1 * 2 + -0x7c79) != 0x1000) {
          FUN_2000_ab64(*(undefined2 *)(iVar1 * 2 + 0x6385),iVar1,
                        *(undefined2 *)(iVar1 * 2 + -0x7c79));
        }
        FUN_2000_aac8(1,iVar1,*(undefined2 *)(param_1 * 2 + -0x7c79));
        *(undefined2 *)(*(int *)(iVar1 * 2 + 0x6385) * 2 + 0x2383) =
             *(undefined2 *)(iVar1 * 2 + -0x7c79);
        *(undefined2 *)(*(int *)(iVar1 * 2 + -0x7c79) * 2 + 0x6385) =
             *(undefined2 *)(iVar1 * 2 + 0x6385);
        *(undefined2 *)(iVar1 * 2 + -0x7c79) = *(undefined2 *)(param_1 * 2 + -0x7c79);
        *(int *)(*(int *)(param_1 * 2 + -0x7c79) * 2 + 0x6385) = iVar1;
      }
      FUN_2000_aac8(1,*(undefined2 *)(param_1 * 2 + 0x6385),iVar1);
      FUN_2000_aac8(1,iVar1,*(undefined2 *)(param_1 * 2 + 0x2383));
      *(undefined2 *)(iVar1 * 2 + 0x2383) = *(undefined2 *)(param_1 * 2 + 0x2383);
      *(int *)(*(int *)(param_1 * 2 + 0x2383) * 2 + 0x6385) = iVar1;
      goto LAB_2000_adcd;
    }
    iVar1 = *(int *)(param_1 * 2 + 0x2383);
  }
  FUN_2000_ab64(*(undefined2 *)(param_1 * 2 + 0x6385),param_1,iVar1);
LAB_2000_adcd:
  *(undefined2 *)(iVar1 * 2 + 0x6385) = *(undefined2 *)(param_1 * 2 + 0x6385);
  if (*(int *)(*(int *)(param_1 * 2 + 0x6385) * 2 + 0x2383) == param_1) {
    *(int *)(*(int *)(param_1 * 2 + 0x6385) * 2 + 0x2383) = iVar1;
  }
  else {
    *(int *)(*(int *)(param_1 * 2 + 0x6385) * 2 + -0x7c79) = iVar1;
  }
  *(undefined2 *)(param_1 * 2 + 0x6385) = 0x1000;
  return;
}



// Function: FUN_2000_ae4f @ 2000:ae4f

bool __cdecl16far FUN_2000_ae4f(void)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined2 unaff_DS;
  
  piVar3 = piRam00029bec;
  uVar6 = *(uint *)0x3f66;
  if (*(byte *)0x3f68 < 9) {
    piVar5 = (int *)piRam00029bec;
    iVar1 = *piRam00029bec;
    *piRam00029bec = *piRam00029bec + -1;
    if (SBORROW2(iVar1,1) == *piVar3 < 0) {
      iVar1 = piVar5[7];
      pbVar2 = (byte *)piVar5[6];
      piVar5[6] = piVar5[6] + 1;
      uVar4 = (uint)*pbVar2;
    }
    else {
      uVar4 = func_0x00004a0d();
    }
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    uVar6 = uVar6 | uVar4 << (8U - *(char *)0x3f68 & 0x1f);
    *(char *)0x3f68 = *(char *)0x3f68 + '\b';
  }
  *(int *)0x3f66 = uVar6 << 1;
  *(char *)0x3f68 = *(char *)0x3f68 + -1;
  return (uVar6 & 0x8000) != 0;
}



// Function: FUN_2000_aed4 @ 2000:aed4

uint __cdecl16far FUN_2000_aed4(void)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined2 unaff_DS;
  
  piVar3 = piRam00029bec;
  uVar6 = *(uint *)0x3f66;
  if (*(byte *)0x3f68 < 9) {
    piVar5 = (int *)piRam00029bec;
    iVar1 = *piRam00029bec;
    *piRam00029bec = *piRam00029bec + -1;
    if (SBORROW2(iVar1,1) == *piVar3 < 0) {
      iVar1 = piVar5[7];
      pbVar2 = (byte *)piVar5[6];
      piVar5[6] = piVar5[6] + 1;
      uVar4 = (uint)*pbVar2;
    }
    else {
      uVar4 = func_0x00004a0d();
    }
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    uVar6 = uVar6 | uVar4 << (8U - *(char *)0x3f68 & 0x1f);
    *(char *)0x3f68 = *(char *)0x3f68 + '\b';
  }
  *(int *)0x3f66 = uVar6 << 8;
  *(char *)0x3f68 = *(char *)0x3f68 + -8;
  return uVar6 >> 8;
}



// Function: FUN_2000_af59 @ 2000:af59

uint __cdecl16far FUN_2000_af59(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined2 unaff_DS;
  
  piVar3 = piRam00029bec;
  uVar6 = *(uint *)0x3f66;
  if (*(byte *)0x3f68 < 9) {
    piVar5 = (int *)piRam00029bec;
    iVar1 = *piRam00029bec;
    *piRam00029bec = *piRam00029bec + -1;
    if (SBORROW2(iVar1,1) == *piVar3 < 0) {
      iVar1 = piVar5[7];
      pbVar2 = (byte *)piVar5[6];
      piVar5[6] = piVar5[6] + 1;
      uVar4 = (uint)*pbVar2;
    }
    else {
      uVar4 = func_0x00004a0d();
    }
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    uVar6 = uVar6 | uVar4 << (8U - *(char *)0x3f68 & 0x1f);
    *(char *)0x3f68 = *(char *)0x3f68 + '\b';
  }
  *(int *)0x3f66 = uVar6 << ((byte)param_1 & 0x1f);
  *(char *)0x3f68 = *(char *)0x3f68 - (byte)param_1;
  return uVar6 >> (*(byte *)(param_1 * 2 + 0x3f8b) & 0x1f) & *(uint *)(param_1 * 2 + 0x3f69);
}



// Function: FUN_2000_aff3 @ 2000:aff3

void __cdecl16far FUN_2000_aff3(int param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  bool bVar5;
  uint local_6;
  int local_4;
  
  piVar3 = piRam00029be8;
  local_6 = *(uint *)0x3fad | param_2 >> (*(byte *)0x3faf & 0x1f);
  local_4 = (uint)*(byte *)0x3faf + param_1;
  if (7 < local_4) {
    piVar4 = (int *)piRam00029be8;
    iVar1 = *piRam00029be8;
    *piRam00029be8 = *piRam00029be8 + 1;
    if (SCARRY2(iVar1,1) == *piVar3 < 0) {
      unaff_CS = 0;
      func_0x00004fce();
    }
    else {
      iVar1 = piVar4[7];
      puVar2 = (undefined1 *)piVar4[6];
      piVar4[6] = piVar4[6] + 1;
      *puVar2 = (char)(local_6 >> 8);
    }
    piVar3 = piRam00029be8;
    if (local_4 + -8 < 8) {
      local_6 = local_6 << 8;
      bVar5 = 0xfffe < uRam00029be0;
      uRam00029be0 = uRam00029be0 + 1;
      iRam00029be2 = iRam00029be2 + (uint)bVar5;
      local_4 = local_4 + -8;
    }
    else {
      piVar4 = (int *)piRam00029be8;
      iVar1 = *piRam00029be8;
      *piRam00029be8 = *piRam00029be8 + 1;
      if (SCARRY2(iVar1,1) == *piVar3 < 0) {
        func_0x00004fce(unaff_CS,CONCAT11(0x1e,(undefined1)local_6),(int *)piRam00029be8,
                        piRam00029be8._2_2_);
      }
      else {
        iVar1 = piVar4[7];
        puVar2 = (undefined1 *)piVar4[6];
        piVar4[6] = piVar4[6] + 1;
        *puVar2 = (undefined1)local_6;
      }
      bVar5 = 0xfffd < uRam00029be0;
      uRam00029be0 = uRam00029be0 + 2;
      iRam00029be2 = iRam00029be2 + (uint)bVar5;
      local_4 = local_4 + -0x10;
      local_6 = param_2 << ((char)param_1 - (char)local_4 & 0x1fU);
    }
  }
  *(uint *)0x3fad = local_6;
  *(undefined1 *)0x3faf = (char)local_4;
  return;
}



// Function: FUN_2000_b11e @ 2000:b11e

void __cdecl16far FUN_2000_b11e(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar1 = 0;
  do {
    *(undefined2 *)(iVar1 * 2 + 0xe9a) = 1;
    *(int *)(iVar1 * 2 + 0x25a) = iVar1 + 0x273;
    *(int *)(iVar1 * 2 + 0xc26) = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x13a);
  iVar1 = 0;
  for (iVar2 = 0x13a; iVar2 < 0x273; iVar2 = iVar2 + 1) {
    *(int *)(iVar2 * 2 + 0xe9a) = *(int *)(iVar1 * 2 + 0xe9a) + *(int *)(iVar1 * 2 + 0xe9c);
    *(int *)(iVar2 * 2 + 0x25a) = iVar1;
    *(int *)(iVar1 * 2 + 0x742) = iVar2;
    *(int *)(iVar1 * 2 + 0x740) = iVar2;
    iVar1 = iVar1 + 2;
  }
  DAT_1000_fb90 = 0xffff;
  DAT_1000_f434 = 0;
  *(undefined1 *)0x3f68 = 0;
  *(undefined1 *)0x3faf = 0;
  *(undefined2 *)0x3f66 = 0;
  *(undefined2 *)0x3fad = 0;
  return;
}



// Function: FUN_2000_b1ed @ 2000:b1ed

void __cdecl16far FUN_2000_b1ed(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 local_8;
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    if (0x272 < *(int *)(iVar4 * 2 + 0x25a)) {
      *(uint *)(iVar5 * 2 + 0xe9a) = *(int *)(iVar4 * 2 + 0xe9a) + 1U >> 1;
      *(undefined2 *)(iVar5 * 2 + 0x25a) = *(undefined2 *)(iVar4 * 2 + 0x25a);
      iVar5 = iVar5 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x273);
  iVar4 = 0;
  for (iVar5 = 0x13a; iVar5 < 0x273; iVar5 = iVar5 + 1) {
    uVar3 = *(int *)(iVar4 * 2 + 0xe9a) + *(int *)((iVar4 + 1) * 2 + 0xe9a);
    *(uint *)(iVar5 * 2 + 0xe9a) = uVar3;
    iVar2 = iVar5;
    do {
      iVar1 = iVar2;
      iVar2 = iVar1 + -1;
    } while (uVar3 < *(uint *)((iVar1 + -1) * 2 + 0xe9a));
    local_8 = (undefined2 *)CONCAT22(0x1e81,(undefined2 *)(iVar5 * 2 + 0xe9a));
    while ((undefined2 *)(iVar1 * 2 + 0xe9a) < (undefined2 *)local_8) {
      uVar6 = (undefined2)((ulong)local_8 >> 0x10);
      *local_8 = ((undefined2 *)local_8)[-1];
      local_8 = (undefined2 *)CONCAT22(uVar6,(undefined2 *)local_8 + -1);
    }
    *(uint *)(iVar1 * 2 + 0xe9a) = uVar3;
    local_8 = (undefined2 *)CONCAT22(0x1e81,(undefined2 *)(iVar5 * 2 + 0x25a));
    while ((undefined2 *)(iVar1 * 2 + 0x25a) < (undefined2 *)local_8) {
      uVar6 = (undefined2)((ulong)local_8 >> 0x10);
      *local_8 = ((undefined2 *)local_8)[-1];
      local_8 = (undefined2 *)CONCAT22(uVar6,(undefined2 *)local_8 + -1);
    }
    *(int *)(iVar1 * 2 + 0x25a) = iVar4;
    iVar4 = iVar4 + 2;
  }
  iVar4 = 0;
  do {
    iVar5 = *(int *)(iVar4 * 2 + 0x25a);
    if (iVar5 < 0x273) {
      *(int *)(iVar5 * 2 + 0x742) = iVar4;
      *(int *)(iVar5 * 2 + 0x740) = iVar4;
    }
    else {
      *(int *)(iVar5 * 2 + 0x740) = iVar4;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x273);
  return;
}



// Function: FUN_2000_b389 @ 2000:b389

void __cdecl16far FUN_2000_b389(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined2 unaff_CS;
  undefined4 local_6;
  
  if (DAT_1000_fb8e == -0x8000) {
    FUN_2000_b1ed();
  }
  iVar9 = *(int *)((param_1 + 0x273) * 2 + 0x740);
  do {
    piVar1 = (int *)(iVar9 * 2 + 0xe9a);
    *piVar1 = *piVar1 + 1;
    uVar3 = *(uint *)(iVar9 * 2 + 0xe9a);
    if (*(uint *)((iVar9 + 1) * 2 + 0xe9a) < uVar3) {
      local_6 = (uint *)CONCAT22(0x1e81,(uint *)((iVar9 + 1) * 2 + 0xe9c));
      do {
        puVar7 = local_6;
        puVar6 = (uint *)local_6;
        puVar2 = (uint *)local_6 + 1;
        local_6 = (uint *)CONCAT22(local_6._2_2_,puVar2);
      } while (*puVar7 < uVar3);
      iVar8 = func_0x000012e7(unaff_CS,puVar6 + -0x74c,-(uint)(puVar2 < (uint *)0xe9a),2,0);
      iVar8 = iVar8 + -2;
      *(uint *)(iVar9 * 2 + 0xe9a) = puVar6[-1];
      puVar6[-1] = uVar3;
      iVar4 = *(int *)(iVar9 * 2 + 0x25a);
      *(int *)(iVar4 * 2 + 0x740) = iVar8;
      if (iVar4 < 0x273) {
        *(int *)(iVar4 * 2 + 0x742) = iVar8;
      }
      iVar5 = *(int *)(iVar8 * 2 + 0x25a);
      *(int *)(iVar8 * 2 + 0x25a) = iVar4;
      *(int *)(iVar5 * 2 + 0x740) = iVar9;
      if (iVar5 < 0x273) {
        *(int *)(iVar5 * 2 + 0x742) = iVar9;
      }
      *(int *)(iVar9 * 2 + 0x25a) = iVar5;
      iVar9 = iVar8;
      unaff_CS = 0;
    }
    iVar9 = *(int *)(iVar9 * 2 + 0x740);
  } while (iVar9 != 0);
  return;
}



// Function: FUN_2000_b4e6 @ 2000:b4e6

int __cdecl16far FUN_2000_b4e6(void)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = uRam0001ef4e; uVar2 < 0x273; uVar2 = *(uint *)((uVar2 + iVar1) * 2 + 0x25a)) {
    iVar1 = FUN_2000_ae4f();
  }
  FUN_2000_b389(uVar2 - 0x273);
  return uVar2 - 0x273;
}



// Function: FUN_2000_b51b @ 2000:b51b

uint __cdecl16far FUN_2000_b51b(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined2 unaff_DS;
  undefined1 local_4;
  
  iVar3 = FUN_2000_aed4();
  bVar2 = *(byte *)(iVar3 + 0x3d66);
  iVar1 = *(byte *)(iVar3 + 0x3e66) - 2;
  uVar4 = FUN_2000_af59(iVar1);
  local_4 = (byte)iVar1;
  return (uint)bVar2 << 6 | (iVar3 << (local_4 & 0x1f) | uVar4) & 0x3f;
}



// Function: FUN_2000_b560 @ 2000:b560

void __cdecl16far FUN_2000_b560(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined2 unaff_CS;
  undefined2 uVar12;
  bool bVar13;
  uint local_e;
  int local_c;
  undefined1 local_a;
  int local_8;
  
  if (uRam00029be4 != 0 || iRam00029be6 != 0) {
    FUN_2000_b11e();
    puVar10 = (undefined2 *)0xa38d;
    for (iVar8 = 0x7e2; iVar8 != 0; iVar8 = iVar8 + -1) {
      puVar3 = puVar10;
      puVar10 = puVar10 + 1;
      *puVar3 = 0x2020;
    }
    uVar11 = 0xfc4;
    local_c = 0;
    local_e = 0;
    while ((local_c < iRam00029be6 || ((iRam00029be6 == local_c && (local_e < uRam00029be4))))) {
      iVar8 = FUN_2000_b4e6();
      piVar6 = piRam00029be8;
      if (iVar8 < 0x100) {
        piVar9 = (int *)piRam00029be8;
        iVar7 = *piRam00029be8;
        *piRam00029be8 = *piRam00029be8 + 1;
        local_a = (undefined1)iVar8;
        if (SCARRY2(iVar7,1) == *piVar6 < 0) {
          func_0x00004fce(unaff_CS,CONCAT11(0x1e,local_a),(int *)piRam00029be8,piRam00029be8._2_2_);
          unaff_CS = 0;
        }
        else {
          iVar8 = piVar9[7];
          puVar5 = (undefined1 *)piVar9[6];
          piVar9[6] = piVar9[6] + 1;
          *puVar5 = local_a;
        }
        *(undefined1 *)(uVar11 + 0xa38d) = local_a;
        uVar11 = uVar11 + 1 & 0xfff;
        bVar13 = 0xfffe < local_e;
        local_e = local_e + 1;
        local_c = local_c + (uint)bVar13;
      }
      else {
        iVar7 = FUN_2000_b51b();
        iVar7 = uVar11 - iVar7;
        local_8 = 0;
        uVar12 = unaff_CS;
        if (0 < iVar8 + -0xfd) {
          do {
            piVar6 = piRam00029be8;
            uVar4 = *(undefined1 *)(((iVar7 - 1U & 0xfff) + local_8 & 0xfff) + 0xa38d);
            piVar9 = (int *)piRam00029be8;
            iVar2 = *piRam00029be8;
            *piRam00029be8 = *piRam00029be8 + 1;
            if (SCARRY2(iVar2,1) == *piVar6 < 0) {
              unaff_CS = 0;
              func_0x00004fce(uVar12,CONCAT11(0x1e,uVar4),(int *)piRam00029be8,piRam00029be8._2_2_);
            }
            else {
              iVar2 = piVar9[7];
              puVar5 = (undefined1 *)piVar9[6];
              piVar9[6] = piVar9[6] + 1;
              *puVar5 = uVar4;
              unaff_CS = uVar12;
            }
            *(undefined1 *)(uVar11 + 0xa38d) = uVar4;
            uVar11 = uVar11 + 1 & 0xfff;
            bVar13 = 0xfffe < local_e;
            local_e = local_e + 1;
            local_c = local_c + (uint)bVar13;
            local_8 = local_8 + 1;
            uVar12 = unaff_CS;
          } while (local_8 < iVar8 + -0xfd);
        }
      }
      if ((iRam00029bde <= local_c) && ((iRam00029bde < local_c || (uRam00029bdc < local_e)))) {
        if (DAT_2000_dff8 < -1) {
          puVar1 = DAT_2000_e004;
          DAT_2000_dff8 = DAT_2000_dff8 + 1;
          DAT_2000_e004 = DAT_2000_e004 + 1;
          *puVar1 = 0x3a;
          uVar12 = unaff_CS;
        }
        else {
          uVar12 = 0;
          DAT_2000_dff8 = DAT_2000_dff8 + 1;
          func_0x00004fce(unaff_CS,0x443a,0x4408,0x29bf);
        }
        unaff_CS = 0;
        func_0x00004169(uVar12,0x4408,0x29bf);
        bVar13 = CARRY2(uRam00029bdc,uRam00029bd8);
        uRam00029bdc = uRam00029bdc + uRam00029bd8;
        iRam00029bde = iRam00029bde + iRam00029bda + (uint)bVar13;
      }
    }
  }
  return;
}



// Function: FUN_2000_b772 @ 2000:b772

void __cdecl16far
FUN_2000_b772(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  long lVar3;
  int local_6;
  int local_4;
  
  func_0x00005a36();
  func_0x00004fb3(0,0x4029);
  uVar2 = func_0x00001395(0);
  lVar3 = func_0x00001395(0,uVar2);
  func_0x000012e7(0,lVar3 + CONCAT22(param_4,param_3) + -1);
  lRam00029bd8 = func_0x00001395(0);
  lVar3 = func_0x000012e7(0,lRam00029bd8 + CONCAT22(param_4,param_3) + -1,lRam00029bd8);
  while( true ) {
    local_4 = (int)((ulong)lVar3 >> 0x10);
    local_6 = (int)lVar3;
    local_4 = local_4 - (uint)(local_6 == 0);
    if (lVar3 == 0) break;
    if (DAT_2000_dff8 < -1) {
      puVar1 = DAT_2000_e004;
      DAT_2000_dff8 = DAT_2000_dff8 + 1;
      DAT_2000_e004 = DAT_2000_e004 + 1;
      *puVar1 = 0x2e;
      lVar3 = CONCAT22(local_4,local_6 + -1);
    }
    else {
      DAT_2000_dff8 = DAT_2000_dff8 + 1;
      func_0x00004fce(0,0x442e,0x4408,0x29bf);
      lVar3 = CONCAT22(local_4,local_6 + -1);
    }
  }
  uRam00029bde = 0;
  uRam00029bdc = 0;
  func_0x00004fb3(0,0x4029);
  func_0x00004169(0,0x4408,0x29bf);
  return;
}



// Function: FUN_2000_b8ae @ 2000:b8ae

void __cdecl16far FUN_2000_b8ae(void)

{
  func_0x00004fb3();
  func_0x00004169(0,0x4408,0x29bf);
  return;
}



// Function: FUN_2000_bad2 @ 2000:bad2

void __cdecl16near FUN_2000_bad2(void)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint *in_BX;
  uint *unaff_SI;
  uint *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  if ((((unaff_SI[3] & 0x7fff) == 0 && *unaff_SI == 0) && unaff_SI[1] == 0) && unaff_SI[2] == 0) {
    if (in_BX == (uint *)0xffff) {
      return;
    }
    if ((int)in_BX[4] < 0x4001) {
      return;
    }
    if ((((in_BX[3] & 0x7fff) == 0 && *in_BX == 0) && in_BX[1] == 0) && in_BX[2] == 0) {
      return;
    }
  }
  else if (((((in_BX == (uint *)0xffff) || ((int)in_BX[4] < 0x4001)) ||
            ((((in_BX[3] & 0x7fff) == 0 && *in_BX == 0) && in_BX[1] == 0) && in_BX[2] == 0)) ||
           (in_BX[3] < unaff_SI[3])) ||
          ((in_BX[3] <= unaff_SI[3] &&
           ((in_BX[2] < unaff_SI[2] ||
            ((in_BX[2] <= unaff_SI[2] &&
             ((in_BX[1] < unaff_SI[1] || ((in_BX[1] <= unaff_SI[1] && (*in_BX < *unaff_SI)))))))))))
          ) goto LAB_2000_bb46;
  unaff_SI = in_BX;
LAB_2000_bb46:
  FUN_2000_e1d4();
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar2 = *puVar1;
  }
  return;
}



// Function: FUN_2000_bbb3 @ 2000:bbb3

void FUN_2000_bbb3(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar12;
  bool bVar13;
  byte local_7;
  uint local_6;
  byte local_4;
  
  bVar2 = (byte)param_2[5] ^ (byte)param_3[5];
  uVar9 = param_3[4];
  uVar6 = param_2[4];
  bVar12 = uVar9 < 0x4001;
  puVar10 = param_3;
  if ((int)uVar9 < 0x4001) {
    if (0x4000 < (int)uVar6) {
      bVar12 = false;
      local_7 = FUN_2000_bad2();
      puVar10 = param_2;
      if (bVar12) {
        return;
      }
      goto LAB_2000_bb59;
    }
    if ((int)uVar9 < (int)uVar6) {
      bVar5 = (byte)param_2[5];
      uVar3 = uVar6;
      uVar6 = uVar9;
      puVar10 = param_2;
    }
    else {
      bVar5 = (byte)param_3[5];
      uVar3 = uVar9;
      param_3 = param_2;
    }
    local_6 = puVar10[4];
    local_7 = bVar5;
    if ((-0x3fff < (int)uVar6) && (uVar3 = uVar3 - uVar6, (int)uVar3 < 0x42)) {
      uVar9 = param_3[1];
      uVar6 = param_3[2];
      uVar8 = param_3[3];
      uVar4 = *param_3;
      local_4 = 0;
      while (bVar12 = 7 < (int)uVar3, uVar3 = uVar3 - 8, bVar12) {
        local_4 = (byte)uVar4;
        uVar4 = CONCAT11((char)uVar9,(char)(uVar4 >> 8));
        uVar9 = CONCAT11((char)uVar6,(char)(uVar9 >> 8));
        uVar6 = CONCAT11((char)uVar8,(char)(uVar6 >> 8));
        uVar8 = uVar8 >> 8;
      }
      for (uVar3 = uVar3 & 7; uVar3 != 0; uVar3 = uVar3 - 1) {
        uVar1 = uVar8 & 1;
        uVar8 = uVar8 >> 1;
        uVar7 = uVar6 & 1;
        uVar6 = uVar6 >> 1 | (uint)(uVar1 != 0) << 0xf;
        uVar1 = uVar9 & 1;
        uVar9 = uVar9 >> 1 | (uint)(uVar7 != 0) << 0xf;
        uVar7 = uVar4 & 1;
        uVar4 = uVar4 >> 1 | (uint)(uVar1 != 0) << 0xf;
        local_4 = local_4 >> 1 | (uVar7 != 0) << 7;
      }
      if (bVar2 != 0) {
        uVar3 = uVar4 - *puVar10;
        uVar7 = (uint)(uVar4 < *puVar10);
        uVar1 = uVar9 - puVar10[1];
        uVar4 = uVar1 - uVar7;
        uVar7 = (uint)(uVar9 < puVar10[1] || uVar1 < uVar7);
        uVar1 = uVar6 - puVar10[2];
        uVar9 = uVar1 - uVar7;
        uVar7 = (uint)(uVar6 < puVar10[2] || uVar1 < uVar7);
        uVar1 = uVar8 - puVar10[3];
        uVar6 = uVar1 - uVar7;
        local_7 = bVar5 ^ 1;
        if (uVar8 < puVar10[3] || uVar1 < uVar7) {
          uVar7 = ~uVar9;
          uVar8 = ~uVar4;
          uVar9 = ~uVar3;
          bVar12 = local_4 == 0;
          local_4 = -local_4;
          uVar3 = uVar9 + bVar12;
          uVar9 = (uint)CARRY2(uVar9,(uint)bVar12);
          uVar4 = uVar8 + uVar9;
          uVar8 = (uint)CARRY2(uVar8,uVar9);
          uVar9 = uVar7 + uVar8;
          uVar6 = ~uVar6 + (uint)CARRY2(uVar7,uVar8);
          local_7 = bVar5;
        }
        iVar11 = 8;
        do {
          if ((char)(uVar6 >> 8) != '\0') goto LAB_2000_bccc;
          uVar6 = CONCAT11((char)uVar6,(char)(uVar9 >> 8));
          uVar9 = CONCAT11((char)uVar9,(char)(uVar4 >> 8));
          uVar4 = CONCAT11((char)uVar4,(char)(uVar3 >> 8));
          uVar3 = CONCAT11((char)uVar3,local_4);
          local_4 = 0;
          local_6 = local_6 - 8;
          bVar12 = 0 < iVar11;
          iVar11 = iVar11 + -1;
        } while (bVar12);
        local_6 = 0xc001;
        local_7 = 0;
        goto LAB_2000_bcee;
      }
      uVar3 = uVar4 + *puVar10;
      uVar7 = (uint)CARRY2(uVar4,*puVar10);
      uVar1 = uVar9 + puVar10[1];
      uVar4 = uVar1 + uVar7;
      uVar7 = (uint)(CARRY2(uVar9,puVar10[1]) || CARRY2(uVar1,uVar7));
      uVar1 = uVar6 + puVar10[2];
      uVar9 = uVar1 + uVar7;
      uVar7 = (uint)(CARRY2(uVar6,puVar10[2]) || CARRY2(uVar1,uVar7));
      bVar12 = CARRY2(uVar8,puVar10[3]);
      uVar8 = uVar8 + puVar10[3];
      uVar6 = uVar8 + uVar7;
      if (bVar12 || CARRY2(uVar8,uVar7)) {
        uVar1 = uVar6 & 1;
        uVar6 = uVar6 >> 1 | (uint)(bVar12 || CARRY2(uVar8,uVar7)) << 0xf;
        uVar8 = uVar9 & 1;
        uVar9 = uVar9 >> 1 | (uint)(uVar1 != 0) << 0xf;
        uVar7 = uVar4 & 1;
        uVar4 = uVar4 >> 1 | (uint)(uVar8 != 0) << 0xf;
        uVar8 = uVar3 & 1;
        uVar3 = uVar3 >> 1 | (uint)(uVar7 != 0) << 0xf;
        local_4 = local_4 >> 1 | (uVar8 != 0) << 7;
        local_6 = local_6 + 1;
      }
      goto LAB_2000_bcce;
    }
  }
  else {
    FUN_2000_bad2(param_2);
    if (bVar12) {
      return;
    }
    if ((0x4000 < (int)uVar6) && (bVar2 != 0)) {
      FUN_2000_c913();
      return;
    }
    local_7 = (byte)param_3[5];
LAB_2000_bb59:
    local_6 = 0x4001;
  }
  uVar3 = *puVar10;
  uVar4 = puVar10[1];
  uVar9 = puVar10[2];
  uVar6 = puVar10[3];
LAB_2000_bcee:
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar9;
  param_1[3] = uVar6;
  param_1[4] = local_6;
  *(byte *)(param_1 + 5) = local_7;
  return;
LAB_2000_bccc:
  for (; -1 < (int)uVar6; uVar6 = uVar6 * 2 + (uint)bVar13) {
    local_6 = local_6 - 1;
    bVar12 = (char)local_4 < '\0';
    local_4 = local_4 << 1;
    bVar13 = (int)uVar3 < 0;
    uVar3 = uVar3 << 1 | (uint)bVar12;
    bVar12 = (int)uVar4 < 0;
    uVar4 = uVar4 << 1 | (uint)bVar13;
    bVar13 = (int)uVar9 < 0;
    uVar9 = uVar9 << 1 | (uint)bVar12;
  }
LAB_2000_bcce:
  bVar12 = CARRY2(uVar3,(uint)((char)local_4 < '\0'));
  uVar3 = uVar3 + ((char)local_4 < '\0');
  uVar8 = (uint)bVar12;
  uVar7 = (uint)CARRY2(uVar4,uVar8);
  uVar1 = (uint)CARRY2(uVar9,uVar7);
  bVar12 = CARRY2(uVar6,uVar1);
  uVar6 = uVar6 + uVar1;
  if (bVar12) {
    uVar6 = uVar6 >> 1 | 0x8000;
    local_6 = local_6 + 1;
  }
  if ((int)local_6 < 0x4001) {
    uVar9 = uVar9 + uVar7;
    uVar4 = uVar4 + uVar8;
    if (-0x3fff < (int)local_6) goto LAB_2000_bcee;
    local_6 = 0xc001;
  }
  else {
    local_6 = 0x4001;
  }
  FUN_2000_e1d4();
  local_7 = 0;
  uVar3 = 0;
  uVar6 = 0;
  uVar9 = uVar3;
  uVar4 = uVar3;
  goto LAB_2000_bcee;
}



// Function: FUN_2000_bd7d @ 2000:bd7d

byte FUN_2000_bd7d(uint *param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  long lVar13;
  
  bVar6 = *(byte *)(param_3 + 10) ^ *(byte *)(param_2 + 5);
  uVar9 = param_2[4];
  uVar7 = 0xc001;
  uVar4 = *(uint *)(param_3 + 8);
  bVar10 = uVar4 < 0x4001;
  if ((int)uVar4 < 0x4001) {
    bVar10 = uVar9 < 0x4001;
    if ((int)uVar9 < 0x4001) {
      if ((-0x3fff < (int)uVar4) && (-0x3fff < (int)uVar9)) {
        uVar4 = uVar4 + uVar9;
        if ((int)(uVar4 - 1) < 0x4001) {
          if (-0x3fff < (int)uVar4) {
            lVar13 = FUN_2000_be13(*param_2,param_2[1],param_2[2],param_2[3]);
            if (-1 < lVar13) {
              uVar4 = uVar4 - 1;
              bVar10 = param_3 < 0;
              param_3 = param_3 << 1;
              bVar11 = (int)uVar9 < 0;
              uVar9 = uVar9 << 1 | (uint)((int)lVar13 < 0);
              bVar12 = (int)uVar7 < 0;
              uVar7 = uVar7 << 1 | (uint)bVar11;
              lVar13 = CONCAT22((int)((ulong)lVar13 >> 0x10) << 1 | (uint)bVar12,
                                (int)lVar13 << 1 | (uint)bVar10);
            }
            uVar8 = (uint)((ulong)lVar13 >> 0x10);
            uVar5 = (uint)lVar13 + (uint)(param_3 < 0);
            if (CARRY2((uint)lVar13,(uint)(param_3 < 0))) {
              bVar10 = CARRY2(uVar9,uVar5);
              uVar2 = uVar9 + uVar5;
              uVar9 = uVar2 + 1;
              uVar2 = (uint)(bVar10 || 0xfffe < uVar2);
              bVar10 = CARRY2(uVar7,uVar5);
              uVar3 = uVar7 + uVar5;
              uVar7 = uVar3 + uVar2;
              uVar2 = (uint)(bVar10 || CARRY2(uVar3,uVar2));
              bVar10 = CARRY2(uVar8,uVar5);
              uVar3 = uVar8 + uVar5;
              uVar8 = uVar3 + uVar2;
              if (bVar10 || CARRY2(uVar3,uVar2)) {
                uVar8 = uVar8 >> 1 | (uint)(bVar10 || CARRY2(uVar3,uVar2)) << 0xf;
                uVar4 = uVar4 + 1;
              }
            }
            *param_1 = uVar5;
            param_1[1] = uVar9;
            param_1[2] = uVar7;
            param_1[3] = uVar8;
            param_1[4] = uVar4;
            *(byte *)(param_1 + 5) = bVar6;
            return bVar6;
          }
          FUN_2000_e1d4();
        }
        else {
          FUN_2000_e1d4();
        }
      }
      goto LAB_2000_bd2c;
    }
    FUN_2000_bad2();
    if (bVar10) {
      return bVar6;
    }
    iVar1 = *(int *)(param_3 + 8);
  }
  else {
    FUN_2000_bad2();
    if (bVar10) {
      return bVar6;
    }
    iVar1 = param_2[4];
  }
  if (iVar1 < -0x3ffe) {
    FUN_2000_c913();
    return bVar6;
  }
LAB_2000_bd2c:
  FUN_2000_c8fd();
  return bVar6;
}



// Function: FUN_2000_be13 @ 2000:be13

undefined4 __cdecl16near FUN_2000_be13(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *unaff_BP;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined2 unaff_SS;
  bool bVar14;
  
  uVar10 = 0;
  uVar3 = 0;
  uVar7 = 0;
  if ((*(byte *)((int)unaff_BP + 0xf) & 0x80) != 0) {
    uVar3 = *unaff_BP;
    uVar7 = unaff_BP[1];
  }
  if ((*(byte *)((int)unaff_BP + 3) & 0x80) != 0) {
    bVar14 = CARRY2(uVar3,unaff_BP[6]);
    uVar3 = uVar3 + unaff_BP[6];
    uVar10 = (uint)bVar14;
    bVar14 = CARRY2(uVar7,unaff_BP[7]);
    uVar5 = uVar7 + unaff_BP[7];
    uVar7 = uVar5 + uVar10;
    uVar10 = (uint)(bVar14 || CARRY2(uVar5,uVar10));
    if ((*(byte *)((int)unaff_BP + 0xf) & 0x80) != 0) {
      uVar10 = uVar10 - 1;
    }
  }
  uVar6 = 0;
  uVar4 = (uint)((ulong)unaff_BP[6] * (ulong)unaff_BP[2] >> 0x10);
  uVar2 = (uint)((ulong)unaff_BP[6] * (ulong)unaff_BP[2]);
  uVar5 = (uint)CARRY2(uVar3,uVar2);
  uVar11 = uVar7 + uVar4;
  uVar8 = uVar11 + uVar5;
  uVar10 = uVar10 + (CARRY2(uVar7,uVar4) || CARRY2(uVar11,uVar5));
  if (unaff_BP[8] != 0) {
    lVar1 = (ulong)unaff_BP[8] * (ulong)*unaff_BP;
    uVar5 = (uint)((ulong)lVar1 >> 0x10);
    uVar3 = (uint)CARRY2(uVar3 + uVar2,(uint)lVar1);
    uVar7 = uVar8 + uVar5;
    uVar6 = uVar7 + uVar3;
    uVar11 = uVar10 + (CARRY2(uVar8,uVar5) || CARRY2(uVar7,uVar3));
    uVar5 = (uint)((ulong)unaff_BP[8] * (ulong)unaff_BP[1] >> 0x10);
    uVar3 = (uint)((ulong)unaff_BP[8] * (ulong)unaff_BP[1]);
    uVar8 = uVar6 + uVar3;
    uVar3 = (uint)CARRY2(uVar6,uVar3);
    uVar7 = uVar11 + uVar5;
    uVar10 = uVar7 + uVar3;
    uVar6 = (uint)(CARRY2(uVar11,uVar5) || CARRY2(uVar7,uVar3));
  }
  uVar4 = (uint)((ulong)unaff_BP[6] * (ulong)unaff_BP[3] >> 0x10);
  uVar3 = (uint)((ulong)unaff_BP[6] * (ulong)unaff_BP[3]);
  uVar9 = uVar8 + uVar3;
  uVar3 = (uint)CARRY2(uVar8,uVar3);
  uVar5 = uVar10 + uVar4;
  uVar12 = uVar5 + uVar3;
  uVar8 = (uint)((ulong)unaff_BP[7] * (ulong)unaff_BP[2] >> 0x10);
  uVar2 = (uint)((ulong)unaff_BP[7] * (ulong)unaff_BP[2]);
  uVar7 = (uint)CARRY2(uVar9,uVar2);
  uVar11 = uVar12 + uVar8;
  uVar13 = uVar11 + uVar7;
  uVar3 = uVar6 + (CARRY2(uVar10,uVar4) || CARRY2(uVar5,uVar3)) +
          (uint)(CARRY2(uVar12,uVar8) || CARRY2(uVar11,uVar7));
  if (unaff_BP[9] != 0) {
    lVar1 = (ulong)unaff_BP[9] * (ulong)*unaff_BP;
    uVar10 = (uint)((ulong)lVar1 >> 0x10);
    uVar7 = (uint)CARRY2(uVar9 + uVar2,(uint)lVar1);
    bVar14 = CARRY2(uVar13,uVar10);
    uVar10 = uVar13 + uVar10;
    uVar13 = uVar10 + uVar7;
    uVar3 = uVar3 + (bVar14 || CARRY2(uVar10,uVar7));
  }
  uVar10 = 0;
  uVar6 = (uint)((ulong)unaff_BP[7] * (ulong)unaff_BP[3] >> 0x10);
  uVar7 = (uint)((ulong)unaff_BP[7] * (ulong)unaff_BP[3]);
  uVar2 = uVar13 + uVar7;
  uVar7 = (uint)CARRY2(uVar13,uVar7);
  uVar5 = uVar3 + uVar6;
  uVar11 = uVar5 + uVar7;
  uVar3 = (uint)(CARRY2(uVar3,uVar6) || CARRY2(uVar5,uVar7));
  if (unaff_BP[8] != 0) {
    lVar1 = (ulong)unaff_BP[8] * (ulong)unaff_BP[2];
    uVar5 = (uint)((ulong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1;
    bVar14 = CARRY2(uVar2,uVar7);
    uVar2 = uVar2 + uVar7;
    uVar7 = (uint)bVar14;
    uVar10 = uVar11 + uVar5;
    uVar4 = uVar10 + uVar7;
    uVar5 = uVar3 + (CARRY2(uVar11,uVar5) || CARRY2(uVar10,uVar7));
    uVar6 = (uint)((ulong)unaff_BP[8] * (ulong)unaff_BP[3] >> 0x10);
    uVar3 = (uint)((ulong)unaff_BP[8] * (ulong)unaff_BP[3]);
    uVar11 = uVar4 + uVar3;
    uVar7 = (uint)CARRY2(uVar4,uVar3);
    uVar10 = uVar5 + uVar6;
    uVar3 = uVar10 + uVar7;
    uVar10 = (uint)(CARRY2(uVar5,uVar6) || CARRY2(uVar10,uVar7));
  }
  if (unaff_BP[9] != 0) {
    lVar1 = (ulong)unaff_BP[9] * (ulong)unaff_BP[1];
    uVar5 = (uint)((ulong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1;
    bVar14 = CARRY2(uVar2,uVar7);
    uVar2 = uVar2 + uVar7;
    uVar7 = (uint)bVar14;
    uVar6 = uVar11 + uVar5;
    uVar5 = (uint)(CARRY2(uVar11,uVar5) || CARRY2(uVar6,uVar7));
    uVar11 = uVar3 + uVar5;
    uVar4 = (uint)((ulong)unaff_BP[9] * (ulong)unaff_BP[2] >> 0x10);
    uVar7 = (uint)CARRY2(uVar6 + uVar7,(uint)((ulong)unaff_BP[9] * (ulong)unaff_BP[2]));
    uVar6 = uVar11 + uVar4;
    uVar10 = uVar10 + CARRY2(uVar3,uVar5) + (uint)(CARRY2(uVar11,uVar4) || CARRY2(uVar6,uVar7)) +
             (int)((ulong)unaff_BP[9] * (ulong)unaff_BP[3] >> 0x10) +
             (uint)CARRY2(uVar6 + uVar7,(uint)((ulong)unaff_BP[9] * (ulong)unaff_BP[3]));
  }
  return CONCAT22(uVar10,uVar2);
}



// Function: FUN_2000_bf4a @ 2000:bf4a

void FUN_2000_bf4a(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar29;
  bool bVar30;
  uint local_e;
  uint local_c;
  byte local_a;
  uint local_8;
  
  uVar5 = param_3[5];
  uVar6 = param_2[5];
  uVar1 = param_2[4];
  local_8 = param_3[4];
  bVar29 = uVar1 < 0x4001;
  if (0x4000 < (int)uVar1) {
    FUN_2000_bad2();
    if (bVar29) {
      return;
    }
    if (0x4000 < (int)param_3[4]) {
      FUN_2000_c913();
      return;
    }
    goto LAB_2000_bf23;
  }
  bVar29 = local_8 < 0x4001;
  if (0x4000 < (int)local_8) {
    FUN_2000_bad2();
    if (bVar29) {
      return;
    }
    goto LAB_2000_bf23;
  }
  if ((int)uVar1 < -0x3ffe) {
LAB_2000_bf1d:
    FUN_2000_e1d4();
    goto LAB_2000_bf23;
  }
  if ((int)local_8 < -0x3ffe) goto LAB_2000_bf23;
  local_8 = local_8 - uVar1;
  if (0x4000 < (int)local_8) goto LAB_2000_bf1d;
  if ((int)local_8 < -0x3ffe) {
    FUN_2000_e1d4();
    goto LAB_2000_bf23;
  }
  uVar1 = param_2[3];
  uVar7 = param_2[2];
  uVar14 = param_2[1];
  uVar13 = *param_2;
  local_a = 0;
  uVar25 = param_3[3];
  uVar20 = param_3[2];
  if ((uVar7 == 0) && (uVar14 == 0 && uVar13 == 0)) {
    local_a = uVar1 <= uVar25;
    if ((bool)local_a) {
      uVar25 = uVar25 - uVar1;
    }
    local_c = (uint)(CONCAT22(uVar25,uVar20) / (ulong)uVar1);
    uVar2 = CONCAT22(uVar25,uVar20) % (ulong)uVar1 << 0x10 | (ulong)param_3[1];
    local_e = (uint)(uVar2 / uVar1);
    uVar2 = uVar2 % (ulong)uVar1 << 0x10 | (ulong)*param_3;
    uVar13 = (uint)(uVar2 / uVar1);
    uVar2 = uVar2 % (ulong)uVar1 << 0x10;
    uVar7 = (uint)(uVar2 / uVar1);
    bVar15 = (byte)(uVar2 % (ulong)uVar1 >> 8);
  }
  else {
    uVar8 = param_3[1];
    uVar16 = *param_3;
    if (uVar25 < uVar1) {
LAB_2000_c02a:
      uVar2 = CONCAT22(uVar25,uVar20) / (ulong)uVar1;
      local_c = (uint)uVar2;
      lVar3 = (uVar2 & 0xffff) * (ulong)uVar1;
      uVar22 = (uint)lVar3;
      uVar28 = uVar20 - uVar22;
      lVar4 = (ulong)uVar7 * (uVar2 & 0xffff);
      uVar18 = (uint)((ulong)lVar4 >> 0x10);
      uVar9 = (uint)lVar4;
      uVar10 = uVar8 - uVar9;
      uVar11 = (uint)(uVar8 < uVar9);
      uVar21 = uVar28 - uVar18;
      uVar23 = uVar21 - uVar11;
      lVar4 = (ulong)uVar14 * (uVar2 & 0xffff);
      uVar9 = (uint)((ulong)lVar4 >> 0x10);
      uVar8 = (uint)lVar4;
      uVar27 = uVar16 - uVar8;
      uVar8 = (uint)(uVar16 < uVar8);
      uVar16 = uVar10 - uVar9;
      uVar17 = uVar16 - uVar8;
      uVar12 = (uint)(uVar10 < uVar9 || uVar16 < uVar8);
      uVar24 = uVar23 - uVar12;
      lVar4 = (ulong)uVar13 * (uVar2 & 0xffff);
      uVar19 = (uint)((ulong)lVar4 >> 0x10);
      iVar26 = (int)lVar4;
      uVar8 = -iVar26;
      uVar16 = (uint)(iVar26 != 0);
      uVar10 = uVar27 - uVar19;
      uVar9 = uVar10 - uVar16;
      uVar10 = (uint)(uVar27 < uVar19 || uVar10 < uVar16);
      uVar16 = uVar17 - uVar10;
      uVar17 = (uint)(uVar17 < uVar10);
      uVar10 = uVar24 - uVar17;
      if ((int)(uint)(uVar24 < uVar17) <=
          (int)((((uVar25 - (int)((ulong)lVar3 >> 0x10)) - (uint)(uVar20 < uVar22)) -
                (uint)(uVar28 < uVar18 || uVar21 < uVar11)) - (uint)(uVar23 < uVar12)))
      goto LAB_2000_c0f6;
      if (uVar1 <= -uVar10) {
        bVar29 = local_c == 0;
        local_c = local_c - 1;
        local_a = local_a - bVar29;
        bVar29 = CARRY2(uVar8,uVar13);
        uVar8 = uVar8 + uVar13;
        bVar30 = CARRY2(uVar9,uVar14);
        uVar25 = uVar9 + uVar14;
        uVar9 = uVar25 + bVar29;
        uVar25 = (uint)(bVar30 || CARRY2(uVar25,(uint)bVar29));
        bVar29 = CARRY2(uVar16,uVar7);
        uVar20 = uVar16 + uVar7;
        uVar16 = uVar20 + uVar25;
        uVar25 = (uint)(bVar29 || CARRY2(uVar20,uVar25));
        bVar29 = SCARRY2(uVar10,uVar1);
        iVar26 = uVar10 + uVar1;
        uVar10 = iVar26 + uVar25;
        if ((bVar29 != SCARRY2(iVar26,uVar25)) == (int)uVar10 < 0) goto LAB_2000_c0f6;
      }
LAB_2000_c08d:
      uVar2 = CONCAT22(-(uint)(uVar16 != 0) - uVar10,-uVar16) / (ulong)uVar1;
      lVar4 = (uVar2 & 0xffff) * (ulong)uVar1 + CONCAT22(uVar10,uVar16);
      uVar10 = (uint)lVar4;
      lVar3 = (ulong)uVar7 * (uVar2 & 0xffff);
      uVar11 = (uint)((ulong)lVar3 >> 0x10);
      uVar25 = (uint)lVar3;
      uVar17 = uVar9 + uVar25;
      uVar25 = (uint)CARRY2(uVar9,uVar25);
      uVar16 = uVar10 + uVar11;
      uVar9 = uVar16 + uVar25;
      lVar3 = (ulong)uVar14 * (uVar2 & 0xffff);
      uVar12 = (uint)((ulong)lVar3 >> 0x10);
      uVar20 = (uint)lVar3;
      uVar22 = uVar8 + uVar20;
      uVar20 = (uint)CARRY2(uVar8,uVar20);
      uVar8 = uVar17 + uVar12;
      uVar21 = uVar8 + uVar20;
      uVar20 = (uint)(CARRY2(uVar17,uVar12) || CARRY2(uVar8,uVar20));
      uVar8 = uVar9 + uVar20;
      iVar26 = (int)((ulong)lVar4 >> 0x10) + (uint)(CARRY2(uVar10,uVar11) || CARRY2(uVar16,uVar25))
               + (uint)CARRY2(uVar9,uVar20);
      uVar25 = (uint)((ulong)uVar13 * (uVar2 & 0xffff) >> 0x10);
      local_e = -(int)uVar2;
      uVar13 = (uint)((int)uVar2 != 0);
      bVar29 = local_c < uVar13;
      local_c = local_c - uVar13;
      local_a = local_a - bVar29;
      uVar28 = uVar22 + uVar25;
      uVar13 = (uint)CARRY2(uVar22,uVar25);
      uVar18 = uVar21 + uVar13;
      uVar13 = (uint)CARRY2(uVar21,uVar13);
      uVar21 = uVar8 + uVar13;
      uVar13 = (uint)CARRY2(uVar8,uVar13);
      if (SCARRY2(iVar26,uVar13) != (int)(iVar26 + uVar13) < 0) goto LAB_2000_c154;
      if (uVar1 <= uVar21) {
        bVar30 = 0xfffe < local_e;
        local_e = local_e + 1;
        bVar29 = CARRY2(local_c,(uint)bVar30);
        local_c = local_c + bVar30;
        local_a = local_a + bVar29;
        bVar29 = uVar28 < uVar14;
        uVar28 = uVar28 - uVar14;
        bVar30 = uVar18 < uVar7;
        uVar13 = uVar18 - uVar7;
        uVar18 = uVar13 - bVar29;
        uVar13 = (uint)(bVar30 || uVar13 < bVar29);
        bVar29 = SBORROW2(uVar21,uVar1);
        iVar26 = uVar21 - uVar1;
        uVar21 = iVar26 - uVar13;
        if ((bVar29 != SBORROW2(iVar26,uVar13)) != (int)uVar21 < 0) goto LAB_2000_c154;
      }
LAB_2000_c1a9:
      uVar2 = CONCAT22(uVar21,uVar18) / (ulong)uVar1;
      uVar13 = (uint)uVar2;
      lVar3 = (uVar2 & 0xffff) * (ulong)uVar1;
      uVar9 = (uint)lVar3;
      uVar11 = uVar18 - uVar9;
      lVar4 = (ulong)uVar7 * (uVar2 & 0xffff);
      uVar10 = (uint)((ulong)lVar4 >> 0x10);
      uVar25 = (uint)lVar4;
      uVar17 = uVar28 - uVar25;
      uVar8 = (uint)(uVar28 < uVar25);
      uVar16 = uVar11 - uVar10;
      uVar12 = uVar16 - uVar8;
      uVar14 = (uint)((ulong)uVar14 * (uVar2 & 0xffff) >> 0x10);
      uVar20 = uVar17 - uVar14;
      uVar14 = (uint)(uVar17 < uVar14);
      uVar25 = uVar12 - uVar14;
      if ((int)(((uVar21 - (int)((ulong)lVar3 >> 0x10)) - (uint)(uVar18 < uVar9)) -
               (uint)(uVar11 < uVar10 || uVar16 < uVar8)) < (int)(uint)(uVar12 < uVar14)) {
        if (uVar1 <= -uVar25) {
          bVar30 = uVar13 == 0;
          uVar13 = uVar13 - 1;
          bVar29 = local_e < bVar30;
          local_e = local_e - bVar30;
          uVar14 = (uint)bVar29;
          bVar29 = local_c < uVar14;
          local_c = local_c - uVar14;
          local_a = local_a - bVar29;
          bVar29 = CARRY2(uVar20,uVar7);
          uVar20 = uVar20 + uVar7;
          bVar30 = SCARRY2(uVar25,uVar1);
          iVar26 = uVar25 + uVar1;
          uVar25 = iVar26 + (uint)bVar29;
          if ((bVar30 != SCARRY2(iVar26,(uint)bVar29)) == (int)uVar25 < 0) goto LAB_2000_c233;
        }
LAB_2000_c1f1:
        uVar7 = uVar1 - (uVar7 >> 1);
        uVar25 = -(uint)(uVar7 < uVar20) - uVar25;
        if (uVar25 < uVar1) {
          uVar2 = CONCAT22(uVar25,uVar7 - uVar20);
          iVar26 = (int)(uVar2 / uVar1);
          bVar15 = (byte)(-((int)(uVar2 % (ulong)uVar1) - uVar1) >> 8);
          bVar29 = iVar26 != 0;
          uVar7 = -iVar26;
        }
        else {
          uVar7 = 0;
          bVar15 = 0;
          bVar29 = true;
        }
        bVar30 = uVar13 < bVar29;
        uVar13 = uVar13 - bVar29;
        if (bVar30) {
          bVar29 = local_e == 0;
          local_e = local_e - 1;
          bVar30 = local_c < bVar29;
          local_c = local_c - bVar29;
          local_a = local_a - bVar30;
        }
        goto LAB_2000_c251;
      }
    }
    else {
      local_a = 1;
      bVar29 = uVar16 < uVar13;
      uVar16 = uVar16 - uVar13;
      bVar30 = uVar8 < uVar14;
      uVar9 = uVar8 - uVar14;
      uVar8 = uVar9 - bVar29;
      uVar9 = (uint)(bVar30 || uVar9 < bVar29);
      bVar29 = uVar20 < uVar7;
      uVar10 = uVar20 - uVar7;
      uVar20 = uVar10 - uVar9;
      uVar9 = (uint)(bVar29 || uVar10 < uVar9);
      bVar29 = uVar1 <= uVar25;
      uVar10 = uVar25 - uVar1;
      uVar25 = uVar10 - uVar9;
      if (bVar29 && uVar9 <= uVar10) goto LAB_2000_c02a;
      uVar2 = CONCAT22(-(uint)(uVar20 != 0) - uVar25,-uVar20) / (ulong)uVar1;
      lVar4 = (uVar2 & 0xffff) * (ulong)uVar1 + CONCAT22(uVar25,uVar20);
      uVar21 = (uint)lVar4;
      lVar3 = (ulong)uVar7 * (uVar2 & 0xffff);
      uVar11 = (uint)((ulong)lVar3 >> 0x10);
      uVar25 = (uint)lVar3;
      uVar9 = uVar8 + uVar25;
      uVar25 = (uint)CARRY2(uVar8,uVar25);
      uVar8 = uVar21 + uVar11;
      uVar22 = uVar8 + uVar25;
      lVar3 = (ulong)uVar14 * (uVar2 & 0xffff);
      uVar12 = (uint)((ulong)lVar3 >> 0x10);
      uVar20 = (uint)lVar3;
      uVar17 = uVar16 + uVar20;
      uVar20 = (uint)CARRY2(uVar16,uVar20);
      uVar16 = uVar9 + uVar12;
      uVar10 = uVar16 + uVar20;
      uVar20 = (uint)(CARRY2(uVar9,uVar12) || CARRY2(uVar16,uVar20));
      uVar12 = uVar22 + uVar20;
      iVar26 = (int)((ulong)lVar4 >> 0x10) + (uint)(CARRY2(uVar21,uVar11) || CARRY2(uVar8,uVar25)) +
               (uint)CARRY2(uVar22,uVar20);
      lVar3 = (ulong)uVar13 * (uVar2 & 0xffff);
      uVar25 = (uint)((ulong)lVar3 >> 0x10);
      uVar8 = (uint)lVar3;
      local_c = -(int)uVar2;
      local_a = 1 - ((int)uVar2 != 0);
      uVar9 = uVar17 + uVar25;
      uVar25 = (uint)CARRY2(uVar17,uVar25);
      uVar16 = uVar10 + uVar25;
      uVar25 = (uint)CARRY2(uVar10,uVar25);
      uVar10 = uVar12 + uVar25;
      uVar25 = (uint)CARRY2(uVar12,uVar25);
      bVar29 = SCARRY2(iVar26,uVar25);
      bVar30 = (int)(iVar26 + uVar25) < 0;
      if (bVar29 != bVar30) {
LAB_2000_c025:
        if (bVar29 == bVar30) goto LAB_2000_c0f6;
        goto LAB_2000_c08d;
      }
      if (uVar1 <= uVar10) {
        bVar29 = 0xfffe < local_c;
        local_c = local_c + 1;
        local_a = local_a + bVar29;
        bVar29 = uVar8 < uVar13;
        uVar8 = uVar8 - uVar13;
        bVar30 = uVar9 < uVar14;
        uVar25 = uVar9 - uVar14;
        uVar9 = uVar25 - bVar29;
        uVar25 = (uint)(bVar30 || uVar25 < bVar29);
        bVar29 = uVar16 < uVar7;
        uVar20 = uVar16 - uVar7;
        uVar16 = uVar20 - uVar25;
        uVar25 = (uint)(bVar29 || uVar20 < uVar25);
        bVar29 = SBORROW2(uVar10,uVar1) != SBORROW2(uVar10 - uVar1,uVar25);
        uVar10 = (uVar10 - uVar1) - uVar25;
        bVar30 = (int)uVar10 < 0;
        goto LAB_2000_c025;
      }
LAB_2000_c0f6:
      uVar2 = CONCAT22(uVar10,uVar16) / (ulong)uVar1;
      local_e = (uint)uVar2;
      lVar3 = (uVar2 & 0xffff) * (ulong)uVar1;
      uVar11 = (uint)lVar3;
      uVar12 = uVar16 - uVar11;
      lVar4 = (ulong)uVar7 * (uVar2 & 0xffff);
      uVar22 = (uint)((ulong)lVar4 >> 0x10);
      uVar25 = (uint)lVar4;
      uVar18 = uVar9 - uVar25;
      uVar25 = (uint)(uVar9 < uVar25);
      uVar9 = uVar12 - uVar22;
      uVar17 = uVar9 - uVar25;
      lVar4 = (ulong)uVar14 * (uVar2 & 0xffff);
      uVar21 = (uint)((ulong)lVar4 >> 0x10);
      uVar20 = (uint)lVar4;
      uVar27 = uVar8 - uVar20;
      uVar20 = (uint)(uVar8 < uVar20);
      uVar8 = uVar18 - uVar21;
      uVar19 = uVar8 - uVar20;
      uVar20 = (uint)(uVar18 < uVar21 || uVar8 < uVar20);
      uVar8 = uVar17 - uVar20;
      uVar13 = (uint)((ulong)uVar13 * (uVar2 & 0xffff) >> 0x10);
      uVar28 = uVar27 - uVar13;
      uVar13 = (uint)(uVar27 < uVar13);
      uVar18 = uVar19 - uVar13;
      uVar13 = (uint)(uVar19 < uVar13);
      uVar21 = uVar8 - uVar13;
      if ((int)(uint)(uVar8 < uVar13) <=
          (int)((((uVar10 - (int)((ulong)lVar3 >> 0x10)) - (uint)(uVar16 < uVar11)) -
                (uint)(uVar12 < uVar22 || uVar9 < uVar25)) - (uint)(uVar17 < uVar20)))
      goto LAB_2000_c1a9;
      if (uVar1 <= -uVar21) {
        bVar30 = local_e == 0;
        local_e = local_e - 1;
        bVar29 = local_c < bVar30;
        local_c = local_c - bVar30;
        local_a = local_a - bVar29;
        bVar29 = CARRY2(uVar28,uVar14);
        uVar28 = uVar28 + uVar14;
        bVar30 = CARRY2(uVar18,uVar7);
        uVar13 = uVar18 + uVar7;
        uVar18 = uVar13 + bVar29;
        uVar13 = (uint)(bVar30 || CARRY2(uVar13,(uint)bVar29));
        bVar29 = SCARRY2(uVar21,uVar1);
        iVar26 = uVar21 + uVar1;
        uVar21 = iVar26 + uVar13;
        if ((bVar29 != SCARRY2(iVar26,uVar13)) == (int)uVar21 < 0) goto LAB_2000_c1a9;
      }
LAB_2000_c154:
      uVar2 = CONCAT22(-(uint)(uVar18 != 0) - uVar21,-uVar18) / (ulong)uVar1;
      lVar4 = (uVar2 & 0xffff) * (ulong)uVar1 + CONCAT22(uVar21,uVar18);
      uVar8 = (uint)lVar4;
      lVar3 = (ulong)uVar7 * (uVar2 & 0xffff);
      uVar20 = (uint)((ulong)lVar3 >> 0x10);
      uVar13 = (uint)lVar3;
      uVar9 = uVar28 + uVar13;
      uVar13 = (uint)CARRY2(uVar28,uVar13);
      uVar25 = uVar8 + uVar20;
      uVar16 = uVar25 + uVar13;
      iVar26 = (int)((ulong)lVar4 >> 0x10) + (uint)(CARRY2(uVar8,uVar20) || CARRY2(uVar25,uVar13));
      uVar25 = (uint)((ulong)uVar14 * (uVar2 & 0xffff) >> 0x10);
      uVar13 = -(int)uVar2;
      uVar14 = (uint)((int)uVar2 != 0);
      bVar29 = local_e < uVar14;
      local_e = local_e - uVar14;
      uVar14 = (uint)bVar29;
      bVar29 = local_c < uVar14;
      local_c = local_c - uVar14;
      local_a = local_a - bVar29;
      uVar20 = uVar9 + uVar25;
      uVar14 = (uint)CARRY2(uVar9,uVar25);
      uVar25 = uVar16 + uVar14;
      uVar14 = (uint)CARRY2(uVar16,uVar14);
      if (SCARRY2(iVar26,uVar14) != (int)(iVar26 + uVar14) < 0) goto LAB_2000_c1f1;
      if (uVar1 <= uVar25) {
        bVar30 = 0xfffe < uVar13;
        uVar13 = uVar13 + 1;
        bVar29 = CARRY2(local_e,(uint)bVar30);
        local_e = local_e + bVar30;
        uVar14 = (uint)bVar29;
        bVar29 = CARRY2(local_c,uVar14);
        local_c = local_c + uVar14;
        local_a = local_a + bVar29;
        bVar29 = uVar20 < uVar7;
        uVar20 = uVar20 - uVar7;
        bVar30 = SBORROW2(uVar25,uVar1);
        iVar26 = uVar25 - uVar1;
        uVar25 = iVar26 - (uint)bVar29;
        if ((bVar30 != SBORROW2(iVar26,(uint)bVar29)) != (int)uVar25 < 0) goto LAB_2000_c1f1;
      }
    }
LAB_2000_c233:
    uVar7 = -(uVar7 >> 1);
    uVar14 = ((int)uVar7 >> 0xf) + uVar25 + (uint)CARRY2(uVar7,uVar20);
    if (uVar14 < uVar1) {
      uVar2 = CONCAT22(uVar14,uVar7 + uVar20);
      uVar7 = (uint)(uVar2 / uVar1);
      bVar15 = (byte)(uVar2 % (ulong)uVar1 >> 8);
    }
    else {
      uVar7 = 0;
      bVar15 = 0;
    }
  }
LAB_2000_c251:
  if ((bool)(local_a & 1)) {
    uVar14 = local_c & 1;
    local_c = local_c >> 1 | 0x8000;
    uVar25 = local_e & 1;
    local_e = local_e >> 1 | (uint)(uVar14 != 0) << 0xf;
    uVar14 = uVar13 & 1;
    uVar13 = uVar13 >> 1 | (uint)(uVar25 != 0) << 0xf;
    uVar25 = uVar7 & 1;
    uVar7 = uVar7 >> 1 | (uint)(uVar14 != 0) << 0xf;
    bVar15 = bVar15 >> 1 | (uVar25 != 0) << 7;
    local_8 = local_8 + 1;
  }
  uVar1 = (uint)((byte)(uVar1 >> 9) < bVar15);
  uVar14 = uVar7 + uVar1;
  if (CARRY2(uVar7,uVar1)) {
    bVar29 = CARRY2(uVar13,uVar14);
    uVar1 = uVar13 + uVar14;
    uVar13 = uVar1 + 1;
    uVar1 = (uint)(bVar29 || 0xfffe < uVar1);
    bVar29 = CARRY2(local_e,uVar14);
    uVar7 = local_e + uVar14;
    local_e = uVar7 + uVar1;
    uVar1 = (uint)(bVar29 || CARRY2(uVar7,uVar1));
    bVar29 = CARRY2(local_c,uVar14);
    uVar7 = local_c + uVar14;
    local_c = uVar7 + uVar1;
    if (bVar29 || CARRY2(uVar7,uVar1)) {
      local_c = local_c >> 1 | (uint)(bVar29 || CARRY2(uVar7,uVar1)) << 0xf;
      local_8 = local_8 + 1;
    }
  }
  if ((int)local_8 < 0x4001) {
    *param_1 = uVar14;
    param_1[1] = uVar13;
    param_1[2] = local_e;
    param_1[3] = local_c;
    param_1[4] = local_8;
    *(byte *)(param_1 + 5) = (byte)uVar5 ^ (byte)uVar6;
    return;
  }
LAB_2000_bf23:
  FUN_2000_c8fd();
  return;
}



// Function: FUN_2000_c881 @ 2000:c881

undefined1 * __cdecl16near FUN_2000_c881(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_CS;
  
  puVar4 = (undefined2 *)0xdb5;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)unaff_DI = *(undefined1 *)puVar4;
  return (undefined1 *)((int)puVar4 + 1);
}



// Function: FUN_2000_c8fd @ 2000:c8fd

void __cdecl16near FUN_2000_c8fd(void)

{
  uint in_AX;
  undefined1 in_CL;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  
  *unaff_DI = 0;
  unaff_DI[1] = 0;
  unaff_DI[2] = 0;
  unaff_DI[3] = (uint)(in_AX < 0xc001) << 0xf;
  unaff_DI[4] = in_AX;
  *(undefined1 *)(unaff_DI + 5) = in_CL;
  return;
}



// Function: FUN_2000_c913 @ 2000:c913

void __cdecl16near FUN_2000_c913(void)

{
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  
  FUN_2000_e1d4();
  *unaff_DI = 0;
  unaff_DI[1] = 0;
  unaff_DI[2] = 0;
  unaff_DI[3] = 0xc000;
  unaff_DI[4] = 0x4001;
  *(undefined1 *)(unaff_DI + 5) = 1;
  return;
}



// Function: FUN_2000_c92b @ 2000:c92b

void __cdecl16near FUN_2000_c92b(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *unaff_SI;
  undefined2 *puVar4;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  *(int *)0xc = *(int *)0xc + -0xc;
  puVar4 = (undefined2 *)*(undefined2 *)0xc;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar4 = *(undefined1 *)unaff_SI;
  return;
}



// Function: FUN_2000_c947 @ 2000:c947

void __cdecl16near FUN_2000_c947(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *unaff_SI;
  undefined2 *puVar4;
  undefined2 unaff_CS;
  undefined2 unaff_DS;
  
  *(int *)0xc = *(int *)0xc + -0xc;
  puVar4 = (undefined2 *)*(undefined2 *)0xc;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = unaff_SI;
    unaff_SI = unaff_SI + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar4 = *(undefined1 *)unaff_SI;
  return;
}



// Function: FUN_2000_c97a @ 2000:c97a

void __cdecl16near FUN_2000_c97a(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  puVar4 = (undefined2 *)*(undefined2 *)0xc;
  puVar5 = puVar4 + -6;
  *(int *)0xc = (int)puVar5;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
  return;
}



// Function: FUN_2000_ccdd @ 2000:ccdd

void __cdecl16near FUN_2000_ccdd(void)

{
  uint uVar1;
  uint uVar2;
  uint in_AX;
  uint uVar3;
  uint in_CX;
  uint uVar4;
  uint in_DX;
  uint in_BX;
  undefined1 unaff_BP;
  uint unaff_SI;
  uint *unaff_DI;
  undefined2 unaff_DS;
  bool bVar5;
  bool bVar6;
  
  while (uVar4 = in_CX, uVar3 = in_AX, in_DX == 0) {
    unaff_SI = unaff_SI - 0x10;
    in_AX = in_DX;
    in_CX = in_BX;
    in_DX = uVar4;
    in_BX = uVar3;
  }
  for (; -1 < (int)in_DX; in_DX = in_DX * 2 + (uint)(bVar5 || CARRY2(uVar2,uVar1))) {
    unaff_SI = unaff_SI - 1;
    bVar5 = CARRY2(uVar3,uVar3);
    uVar3 = uVar3 * 2;
    bVar6 = CARRY2(in_BX,in_BX);
    uVar1 = in_BX * 2;
    in_BX = uVar1 + bVar5;
    uVar1 = (uint)(bVar6 || CARRY2(uVar1,(uint)bVar5));
    bVar5 = CARRY2(uVar4,uVar4);
    uVar2 = uVar4 * 2;
    uVar4 = uVar2 + uVar1;
  }
  unaff_DI[4] = unaff_SI;
  unaff_DI[3] = in_DX;
  unaff_DI[2] = uVar4;
  unaff_DI[1] = in_BX;
  *unaff_DI = uVar3;
  *(undefined1 *)(unaff_DI + 5) = unaff_BP;
  return;
}



// Function: FUN_2000_cf06 @ 2000:cf06

void __cdecl16near FUN_2000_cf06(void)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  puVar1 = (uint *)*(int *)0xc;
  uVar6 = *puVar1;
  uVar14 = puVar1[1];
  uVar15 = puVar1[2];
  uVar16 = puVar1[3];
  uVar19 = 0;
  uVar4 = puVar1[4];
  uVar3 = uVar6;
  uVar5 = uVar15;
  uVar11 = uVar16;
  if (uVar4 != 0xc001) {
    if ((int)uVar4 < -0xf) {
      uVar11 = 0;
      uVar3 = uVar14;
      uVar5 = uVar16;
      uVar14 = uVar15;
      uVar4 = uVar4 + 0x10;
      uVar19 = uVar6;
    }
    while (uVar4 + 1 == 0 || (int)uVar4 < -1) {
      uVar15 = uVar11 & 1;
      uVar11 = uVar11 >> 1;
      uVar6 = uVar5 & 1;
      uVar5 = uVar5 >> 1 | (uint)(uVar15 != 0) << 0xf;
      uVar15 = uVar14 & 1;
      uVar14 = uVar14 >> 1 | (uint)(uVar6 != 0) << 0xf;
      uVar6 = uVar3 & 1;
      uVar3 = uVar3 >> 1 | (uint)(uVar15 != 0) << 0xf;
      uVar19 = uVar19 >> 1 | (uint)(uVar6 != 0) << 0xf;
      uVar4 = uVar4 + 1;
    }
  }
  uVar6 = (uint)CARRY2(uVar3,(uint)((int)uVar19 < 0));
  uVar15 = (uint)CARRY2(uVar14,uVar6);
  *puVar1 = uVar3 + ((int)uVar19 < 0);
  puVar1[1] = uVar14 + uVar6;
  puVar1[2] = uVar5 + uVar15;
  puVar1[3] = uVar11 + CARRY2(uVar5,uVar15);
  uVar14 = 0;
  uVar6 = 0;
  if ((*(byte *)((int)puVar1 + 3) & 0x80) != 0) {
    uVar14 = *puVar1 << 1;
    uVar6 = puVar1[1] << 1 | (uint)((int)*puVar1 < 0);
  }
  uVar11 = (uint)((ulong)*puVar1 * (ulong)puVar1[2] >> 0x10);
  uVar4 = (uint)((ulong)*puVar1 * (ulong)puVar1[2]);
  uVar3 = uVar6 + uVar11 + (uint)CARRY2(uVar14,uVar4);
  uVar15 = (uint)CARRY2(uVar14 + uVar4,uVar4);
  uVar16 = uVar3 + uVar11;
  uVar5 = uVar16 + uVar15;
  uVar18 = (uint)(CARRY2(uVar6,uVar11) || CARRY2(uVar6 + uVar11,(uint)CARRY2(uVar14,uVar4))) +
           (uint)(CARRY2(uVar3,uVar11) || CARRY2(uVar16,uVar15));
  uVar12 = (uint)((ulong)puVar1[1] * (ulong)puVar1[2] >> 0x10);
  uVar14 = (uint)((ulong)puVar1[1] * (ulong)puVar1[2]);
  uVar15 = uVar5 + uVar14;
  uVar6 = (uint)CARRY2(uVar5,uVar14);
  uVar3 = uVar18 + uVar12;
  uVar7 = uVar3 + uVar6;
  uVar16 = uVar15 + uVar14;
  uVar14 = (uint)CARRY2(uVar15,uVar14);
  uVar5 = uVar7 + uVar12;
  uVar8 = uVar5 + uVar14;
  uVar13 = (uint)((ulong)*puVar1 * (ulong)puVar1[3] >> 0x10);
  uVar4 = (uint)((ulong)*puVar1 * (ulong)puVar1[3]);
  uVar17 = uVar16 + uVar4;
  uVar15 = (uint)CARRY2(uVar16,uVar4);
  uVar11 = uVar8 + uVar13;
  uVar9 = uVar11 + uVar15;
  uVar16 = (uint)CARRY2(uVar17,uVar4);
  uVar19 = uVar9 + uVar13;
  uVar10 = uVar19 + uVar16;
  uVar4 = (uint)((int)(uVar17 + uVar4) < 0);
  uVar17 = uVar10 + uVar4;
  uVar12 = (uint)(CARRY2(uVar18,uVar12) || CARRY2(uVar3,uVar6)) +
           (uint)(CARRY2(uVar7,uVar12) || CARRY2(uVar5,uVar14)) +
           (uint)(CARRY2(uVar8,uVar13) || CARRY2(uVar11,uVar15)) +
           (uint)(CARRY2(uVar9,uVar13) || CARRY2(uVar19,uVar16)) + (uint)CARRY2(uVar10,uVar4);
  lVar2 = (ulong)puVar1[2] * (ulong)puVar1[2];
  uVar8 = (uint)((ulong)lVar2 >> 0x10);
  uVar6 = (uint)lVar2;
  uVar14 = uVar17 + uVar6;
  uVar6 = (uint)CARRY2(uVar17,uVar6);
  uVar16 = uVar12 + uVar8;
  uVar11 = uVar16 + uVar6;
  uVar9 = (uint)((ulong)puVar1[3] * (ulong)puVar1[1] >> 0x10);
  uVar5 = (uint)((ulong)puVar1[3] * (ulong)puVar1[1]);
  uVar10 = uVar14 + uVar5;
  uVar14 = (uint)CARRY2(uVar14,uVar5);
  uVar4 = uVar11 + uVar9;
  uVar19 = uVar4 + uVar14;
  uVar15 = (uint)CARRY2(uVar10,uVar5);
  uVar3 = uVar19 + uVar9;
  uVar7 = uVar3 + uVar15;
  uVar19 = (uint)(CARRY2(uVar12,uVar8) || CARRY2(uVar16,uVar6)) +
           (uint)(CARRY2(uVar11,uVar9) || CARRY2(uVar4,uVar14)) +
           (uint)(CARRY2(uVar19,uVar9) || CARRY2(uVar3,uVar15));
  uVar11 = (uint)((ulong)puVar1[3] * (ulong)puVar1[2] >> 0x10);
  uVar4 = (uint)((ulong)puVar1[3] * (ulong)puVar1[2]);
  uVar3 = uVar7 + uVar4;
  uVar6 = (uint)CARRY2(uVar7,uVar4);
  uVar15 = uVar19 + uVar11;
  uVar7 = uVar15 + uVar6;
  uVar14 = (uint)CARRY2(uVar3,uVar4);
  uVar16 = uVar7 + uVar11;
  lVar2 = (ulong)puVar1[3] * (ulong)puVar1[3] +
          CONCAT22((uint)(CARRY2(uVar19,uVar11) || CARRY2(uVar15,uVar6)) +
                   (uint)(CARRY2(uVar7,uVar11) || CARRY2(uVar16,uVar14)),uVar16 + uVar14);
  *puVar1 = uVar10 + uVar5;
  puVar1[1] = uVar3 + uVar4;
  puVar1[2] = (uint)lVar2;
  puVar1[3] = (uint)((ulong)lVar2 >> 0x10);
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[4] = 0;
  return;
}



// Function: FUN_2000_d00e @ 2000:d00e

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_2000_d00e(int param_1,byte param_2)

{
  uint *puVar1;
  byte bVar2;
  int *piVar3;
  uint *puVar4;
  byte bVar5;
  uint in_CX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint in_BX;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar17;
  undefined4 uVar18;
  
  FUN_2000_c947();
  puVar15 = (uint *)((uint)param_2 * 0xc + -0xc + param_1);
  while( true ) {
    bVar2 = param_2 - 1;
    if (bVar2 == 0 || (char)param_2 < '\x01') break;
    puVar4 = (uint *)*(undefined2 *)0xc;
    *(byte *)(puVar4 + 5) = (byte)puVar4[5] ^ (byte)puVar4[0xb];
    uVar18 = FUN_2000_be13();
    *puVar4 = (uint)uVar18;
    puVar4[1] = in_BX;
    puVar4[2] = in_CX;
    puVar4[3] = (uint)((ulong)uVar18 >> 0x10);
    puVar16 = puVar15 + -6;
    in_BX = *puVar16;
    in_CX = puVar15[-5];
    uVar6 = puVar15[-4];
    uVar10 = puVar15[-3];
    bVar5 = (byte)puVar15[-1];
    puVar15 = puVar16;
    param_2 = bVar2;
    if (bVar5 == (byte)puVar4[5]) {
      puVar1 = puVar4;
      uVar8 = *puVar1;
      *puVar1 = *puVar1 + in_BX;
      puVar1 = puVar4 + 1;
      uVar13 = *puVar1;
      uVar9 = *puVar1;
      *puVar1 = uVar9 + in_CX + (uint)CARRY2(uVar8,in_BX);
      puVar1 = puVar4 + 2;
      uVar9 = (uint)(CARRY2(uVar13,in_CX) || CARRY2(uVar9 + in_CX,(uint)CARRY2(uVar8,in_BX)));
      uVar13 = *puVar1;
      uVar8 = *puVar1;
      *puVar1 = uVar8 + uVar6 + uVar9;
      puVar4[3] = puVar4[3] + uVar10 + (uint)(CARRY2(uVar13,uVar6) || CARRY2(uVar8 + uVar6,uVar9));
    }
    else {
      bVar17 = in_BX < *puVar4;
      in_BX = in_BX - *puVar4;
      uVar8 = (uint)bVar17;
      bVar17 = in_CX < puVar4[1];
      uVar13 = in_CX - puVar4[1];
      in_CX = uVar13 - uVar8;
      uVar8 = (uint)(bVar17 || uVar13 < uVar8);
      uVar13 = uVar6 - puVar4[2];
      uVar9 = uVar13 - uVar8;
      uVar6 = (uint)(uVar6 < puVar4[2] || uVar13 < uVar8);
      uVar8 = uVar10 - puVar4[3];
      uVar13 = uVar8 - uVar6;
      if (uVar10 < puVar4[3] || uVar8 < uVar6) {
        uVar10 = ~uVar9;
        uVar6 = ~in_CX;
        bVar17 = in_BX == 0;
        in_BX = -in_BX;
        in_CX = uVar6 + bVar17;
        uVar6 = (uint)CARRY2(uVar6,(uint)bVar17);
        uVar9 = uVar10 + uVar6;
        uVar13 = ~uVar13 + (uint)CARRY2(uVar10,uVar6);
        bVar5 = bVar5 ^ 1;
      }
      *puVar4 = in_BX;
      puVar4[1] = in_CX;
      puVar4[2] = uVar9;
      puVar4[3] = uVar13;
      *(byte *)(puVar4 + 5) = bVar5;
    }
  }
  puVar15 = (uint *)*(undefined2 *)0xc;
  uVar6 = *puVar15;
  uVar10 = puVar15[1];
  uVar8 = puVar15[2];
  uVar13 = puVar15[3];
  uVar9 = puVar15[5];
  *(undefined2 *)0xc = puVar15 + 6;
  bVar17 = (char)uVar9 != '\x01';
  if (bVar17) {
    uVar9 = uVar8 >> 1 | (uint)((uVar13 & 1) != 0) << 0xf;
    uVar8 = uVar10 >> 1 | (uint)((uVar8 & 1) != 0) << 0xf;
    uVar10 = uVar6 >> 1 | (uint)((uVar10 & 1) != 0) << 0xf;
    uVar6 = (uint)((uVar6 & 1) != 0);
    iVar12 = uVar10 + uVar6;
    uVar6 = (uint)CARRY2(uVar10,uVar6);
    iVar7 = uVar8 + uVar6;
    uVar6 = (uint)CARRY2(uVar8,uVar6);
    iVar11 = uVar9 + uVar6;
    iVar14 = (uVar13 >> 1 | 0x8000) + (uint)CARRY2(uVar9,uVar6);
  }
  else {
    iVar12 = -uVar6;
    iVar7 = ~uVar10 + (uint)(uVar6 == 0);
    uVar6 = (uint)CARRY2(~uVar10,(uint)(uVar6 == 0));
    iVar11 = ~uVar8 + uVar6;
    iVar14 = ~uVar13 + (uint)CARRY2(~uVar8,uVar6);
  }
  piVar3 = (int *)*(int *)0xc;
  *piVar3 = iVar12;
  piVar3[1] = iVar7;
  piVar3[2] = iVar11;
  piVar3[3] = iVar14;
  piVar3[4] = (uint)bVar17;
  *(undefined1 *)(piVar3 + 5) = 0;
  return;
}



// Function: FUN_2000_d61d @ 2000:d61d

void __cdecl16near FUN_2000_d61d(void)

{
  int iVar1;
  undefined2 unaff_SI;
  undefined2 unaff_DS;
  
  FUN_2000_c92b();
  FUN_2000_d656();
  FUN_2000_c947();
  iVar1 = *(int *)0xc + 0xc;
  FUN_2000_bd7d(iVar1,iVar1,*(int *)0xc);
  FUN_2000_bd7d(unaff_SI,unaff_SI,iVar1);
  *(int *)0xc = *(int *)0xc + 0x18;
  return;
}



// Function: FUN_2000_d656 @ 2000:d656

void __cdecl16near FUN_2000_d656(void)

{
  int iVar1;
  int unaff_SI;
  undefined2 unaff_DS;
  
  if (-0x40 < *(int *)(unaff_SI + 8)) {
    *(int *)0xc = *(int *)0xc + -0xc;
    iVar1 = *(int *)0xc;
    FUN_2000_c881();
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    FUN_2000_bbb3(iVar1,iVar1,unaff_SI);
    FUN_2000_bf4a(iVar1,iVar1,unaff_SI);
    FUN_2000_c97a();
    *(int *)(*(int *)0xc + 8) = *(int *)(*(int *)0xc + 8) + 2;
    FUN_2000_cf06();
    FUN_2000_d00e(0x1a3a,DAT_2000_1a38);
    FUN_2000_bd7d(unaff_SI,iVar1,*(undefined2 *)0xc);
    *(int *)(unaff_SI + 8) = *(int *)(unaff_SI + 8) + 1;
    *(int *)0xc = *(int *)0xc + 0x18;
  }
  return;
}



// Function: FUN_2000_d978 @ 2000:d978

undefined4 __cdecl16near FUN_2000_d978(void)

{
  uint uVar1;
  undefined2 in_DX;
  byte bVar2;
  uint *unaff_SI;
  undefined2 unaff_ES;
  
  uVar1 = *unaff_SI;
  bVar2 = (byte)(uVar1 >> 8);
  return CONCAT22(in_DX,((uint)(byte)((bVar2 >> 4) * '\n' + (bVar2 & 0xf)) * 10 + (uVar1 >> 4 & 0xf)
                        ) * 10 + (uVar1 & 0xf));
}



// Function: FUN_2000_d9a7 @ 2000:d9a7

void __cdecl16near FUN_2000_d9a7(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  int unaff_SI;
  uint *unaff_DI;
  uint uVar11;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar12;
  bool bVar13;
  undefined4 uVar14;
  
  *(bool *)(unaff_DI + 5) = *(char *)(unaff_SI + 9) < '\0';
  iVar4 = (uint)*(byte *)(unaff_SI + 8) << 4;
  uVar8 = (uint)(byte)(((byte)iVar4 >> 4) + (char)((uint)iVar4 >> 8) * '\n') * 10000;
  uVar14 = FUN_2000_d978();
  cVar9 = (char)((ulong)uVar14 >> 0x18);
  lVar1 = (ulong)((uint)uVar14 + uVar8) * 10000;
  uVar5 = (uint)lVar1;
  uVar7 = (int)((ulong)lVar1 >> 0x10) +
          CONCAT11(cVar9,(char)((ulong)uVar14 >> 0x10) + cVar9 + CARRY2((uint)uVar14,uVar8)) * 10000
  ;
  uVar14 = FUN_2000_d978();
  uVar8 = (uint)CARRY2((uint)uVar14,uVar5);
  cVar9 = (char)((ulong)uVar14 >> 0x18);
  lVar1 = (ulong)((uint)uVar14 + uVar5) * 10000;
  uVar5 = (uint)lVar1;
  lVar2 = (ulong)(uVar7 + uVar8) * 10000 +
          CONCAT22(CONCAT11(cVar9,(char)((ulong)uVar14 >> 0x10) + cVar9 + CARRY2(uVar7,uVar8)) *
                   10000,(int)((ulong)lVar1 >> 0x10));
  uVar10 = (uint)lVar2;
  uVar14 = FUN_2000_d978();
  uVar7 = (uint)((ulong)uVar14 >> 0x10);
  uVar8 = (uint)CARRY2((uint)uVar14,uVar5);
  lVar1 = (ulong)((uint)uVar14 + uVar5) * 10000;
  uVar6 = (uint)lVar1;
  lVar1 = (ulong)(uVar10 + uVar7 + uVar8) * 10000 +
          CONCAT22(((int)((ulong)lVar2 >> 0x10) + uVar7 +
                   (uint)(CARRY2(uVar10,uVar7) || CARRY2(uVar10 + uVar7,uVar8))) * 10000,
                   (int)((ulong)lVar1 >> 0x10));
  uVar10 = (uint)lVar1;
  uVar11 = (uint)((ulong)lVar1 >> 0x10);
  uVar14 = FUN_2000_d978();
  uVar8 = (uint)CARRY2(uVar6,(uint)uVar14);
  uVar5 = (uint)CARRY2(uVar10,uVar8);
  uVar7 = 0x40;
  uVar10 = uVar10 + uVar8;
  uVar3 = (int)((ulong)uVar14 >> 0x10) + (uint)CARRY2(uVar11,uVar5);
  uVar6 = uVar6 + (uint)uVar14;
  uVar8 = uVar11 + uVar5;
  do {
    uVar11 = uVar8;
    uVar5 = uVar6;
    uVar6 = uVar3;
    uVar8 = uVar10;
    if (uVar6 != 0) goto joined_r0x0002da49;
    uVar7 = uVar7 - 0x10;
    uVar10 = uVar5;
    uVar3 = uVar11;
  } while (uVar7 != 0);
  uVar7 = 0xc001;
LAB_2000_da56:
  *unaff_DI = uVar5;
  unaff_DI[1] = uVar8;
  unaff_DI[2] = uVar11;
  unaff_DI[3] = uVar6;
  unaff_DI[4] = uVar7;
  return;
joined_r0x0002da49:
  for (; -1 < (int)uVar6; uVar6 = uVar6 * 2 + (uint)bVar12) {
    uVar7 = uVar7 - 1;
    bVar12 = (int)uVar5 < 0;
    uVar5 = uVar5 << 1;
    bVar13 = (int)uVar8 < 0;
    uVar8 = uVar8 << 1 | (uint)bVar12;
    bVar12 = (int)uVar11 < 0;
    uVar11 = uVar11 << 1 | (uint)bVar13;
  }
  goto LAB_2000_da56;
}



// Function: FUN_2000_da72 @ 2000:da72

undefined4 __cdecl16near FUN_2000_da72(void)

{
  byte bVar1;
  undefined2 in_AX;
  byte bVar2;
  byte bVar3;
  uint in_DX;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  
  bVar3 = (byte)(in_DX / 100);
  bVar2 = (byte)(in_DX % 100);
  bVar1 = bVar3 % 10;
  bVar3 = bVar3 / 10 << 4 | bVar1;
  *unaff_DI = CONCAT11(bVar3,bVar2 % 10 | bVar2 / 10 << 4);
  return CONCAT22(CONCAT11(bVar3,bVar1),in_AX);
}



// Function: FUN_2000_da90 @ 2000:da90

void __cdecl16near FUN_2000_da90(void)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  uint *unaff_SI;
  byte *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  uVar2 = unaff_SI[4];
  if ((int)uVar2 < 0) {
    bVar6 = 0;
  }
  else {
    if (((int)uVar2 < 0x3c) ||
       ((uVar2 - 0x3c == 0 || (int)uVar2 < 0x3c &&
        ((unaff_SI[3] < 0xde0b ||
         ((unaff_SI[3] < 0xde0c &&
          ((unaff_SI[2] < 0x6b3a ||
           ((unaff_SI[2] < 0x6b3b &&
            ((unaff_SI[1] < 0x763f || ((unaff_SI[1] < 0x7640 && (*unaff_SI < 0xfff1))))))))))))))))
    {
      cVar4 = (char)(uVar2 - 0x3c) + -4;
      do {
        cVar5 = cVar4;
        cVar4 = cVar5 + '\x10';
      } while (cVar4 == '\0' || cVar5 < -0x10);
      if (cVar4 < '\x10') {
        do {
          bVar3 = cVar5 < -1;
          cVar5 = cVar5 + '\x01';
        } while (bVar3);
      }
      FUN_2000_da72();
      FUN_2000_da72();
      FUN_2000_da72();
      bVar6 = FUN_2000_da72();
      pbVar1 = unaff_DI;
      unaff_DI = unaff_DI + 1;
      *pbVar1 = bVar6 % 10 | bVar6 / 10 << 4;
      goto LAB_2000_db3d;
    }
    FUN_2000_e1d4();
    bVar6 = 0x99;
  }
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    pbVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pbVar1 = bVar6;
  }
LAB_2000_db3d:
  *unaff_DI = (byte)unaff_SI[5] >> 1 | (byte)unaff_SI[5] << 7;
  return;
}



// Function: FUN_2000_e1d4 @ 2000:e1d4

/* WARNING: Unable to track spacebase fully for stack */

undefined2 __cdecl16near FUN_2000_e1d4(void)

{
  code *pcVar1;
  byte bVar2;
  undefined2 in_AX;
  undefined2 uVar3;
  byte bVar4;
  undefined2 in_CX;
  uint uVar5;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  uVar5 = CONCAT11((char)((uint)in_CX >> 8),*(undefined1 *)0x2) & 0xff7f;
  bVar4 = (byte)uVar5 ^ 0x7f;
  bVar2 = *(byte *)0x0 | (byte)(uVar5 >> 8);
  if (((bVar2 & bVar4 ^ bVar2) & 8) != 0) {
    bVar2 = bVar2 | 0x20;
  }
  if ((bVar4 & bVar2) != 0) {
    *(byte *)0x0 = bVar2 | 0x80;
    if ((bVar2 & bVar4) == 0x20) {
      return in_AX;
    }
    func_0x000004b8();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    *(undefined2 *)0x40 = in_BX;
    *(undefined2 *)0x42 = unaff_ES;
                    /* WARNING: Could not recover jumptable at 0x0002e232. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)(ulong)*(uint *)0x40)();
    return uVar3;
  }
  *(byte *)0x0 = bVar2 & 0x7f;
  return in_AX;
}



// Function: FUN_2000_e530 @ 2000:e530

void __cdecl16near FUN_2000_e530(void)

{
  byte *pbVar1;
  undefined2 unaff_SS;
  uint unaff_DS;
  
  pbVar1 = (byte *)((unaff_DS & 0xfff8) + 5);
  *pbVar1 = *pbVar1 ^ *(byte *)0x7;
  return;
}



// Function: FUN_2000_e546 @ 2000:e546

undefined2 FUN_2000_e546(void)

{
  code *pcVar1;
  byte bVar2;
  undefined2 in_AX;
  undefined1 uVar4;
  uint uVar3;
  int iVar5;
  undefined2 unaff_SS;
  undefined2 uVar6;
  undefined2 in_FPUStatusWord;
  undefined4 in_stack_00000000;
  undefined2 local_4;
  
  uVar6 = (undefined2)((ulong)in_stack_00000000 >> 0x10);
  iVar5 = (int)in_stack_00000000;
  FUN_2000_e530();
  uVar3 = *(uint *)(iVar5 + -1);
  uVar4 = (undefined1)(uVar3 >> 8);
  bVar2 = (char)uVar3 - 0x34;
  local_4 = in_AX;
  if (bVar2 < 8) {
    if (CONCAT11(uVar4,bVar2) == -0x1cfd) {
      *(undefined2 *)0x0 = 0x4100;
      *(undefined2 *)0x2 = 0x3f;
      *(undefined2 *)0x24 = 0;
      *(undefined2 *)0xc = *(undefined2 *)0x10;
      *(undefined2 *)0x4 = 0;
    }
    else if ((CONCAT11(uVar4,bVar2) != -0x1ff9) ||
            (local_4 = in_FPUStatusWord, '\x01' < *(char *)0x6)) {
      *(undefined1 *)(iVar5 + -2) = 0x9b;
      *(char *)(iVar5 + -1) = *(char *)(iVar5 + -1) + -0x5c;
      local_4 = in_AX;
    }
  }
  else if (bVar2 < 9) {
    if ((uVar3 & 0x2000) != 0) goto LAB_2000_e5ef;
    *(undefined1 *)(iVar5 + -2) = 0x9b;
    uVar3 = CONCAT11(uVar4,uVar4) & 0x7c0;
    *(int *)(iVar5 + -1) = (CONCAT11((char)(uVar3 >> 8),(byte)uVar3 >> 3) ^ 0x18) + 0xd826;
  }
  else {
    if (9 < bVar2) {
LAB_2000_e5ef:
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    *(undefined2 *)(iVar5 + -2) = 0x9b90;
  }
  FUN_2000_e530();
  return local_4;
}



// FAILED to decompile: FUN_2000_fd62 @ 2000:fd62

