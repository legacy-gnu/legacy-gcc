/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"

#define operands recog_operand

int
insn_current_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_default_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 173:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return 1;
        }
      else if ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))
        {
	  return 2;
        }
      else if (which_alternative == 9)
        {
	  return 1;
        }
      else if (which_alternative == 10)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return 4;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 2;
        }
      else if (which_alternative == 10)
        {
	  return 4;
        }
      else if (which_alternative == 11)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 169:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 168:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else if (which_alternative == 10)
        {
	  return 2;
        }
      else if (which_alternative == 11)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 166:
    case 163:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 165:
    case 162:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 159:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if (which_alternative == 6)
        {
	  return 1;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || (which_alternative == 12)))))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 158:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if (which_alternative == 6)
        {
	  return 1;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || (which_alternative == 11))))
        {
	  return 1;
        }
      else if (which_alternative == 12)
        {
	  return 2;
        }
      else if (which_alternative == 13)
        {
	  return 1;
        }
      else if (which_alternative == 14)
        {
	  return 2;
        }
      else if ((which_alternative == 15) || ((which_alternative == 16) || (which_alternative == 17)))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 153:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 1;
        }
      else if (which_alternative == 3)
        {
	  return 2;
        }
      else if (which_alternative == 4)
        {
	  return 1;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if (which_alternative == 6)
        {
	  return 1;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if ((which_alternative == 8) || (which_alternative == 9))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 119:
    case 118:
    case 117:
    case 116:
    case 115:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative != 2)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 324:
    case 323:
    case 320:
    case 317:
    case 316:
    case 313:
    case 283:
    case 281:
    case 273:
    case 271:
    case 265:
    case 263:
    case 255:
    case 253:
    case 247:
    case 245:
    case 240:
    case 238:
    case 204:
    case 194:
    case 184:
    case 109:
    case 108:
    case 107:
    case 104:
      return 2;

    case 310:
    case 207:
    case 197:
    case 187:
    case 82:
    case 18:
    case 5:
      return 4;

    case 309:
      return 0;

    case 307:
    case 79:
    case 78:
      return 6;

    case 303:
    case 302:
      if ((! ((mips_abicalls_attr) == (ABICALLS_NO))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 203:
    case 193:
    case 183:
      return 12 /* 0xc */;

    case 179:
    case 177:
      return 20 /* 0x14 */;

    case 175:
    case 75:
    case 74:
    case 34:
    case 30:
      return 3;

    case 151:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else if (which_alternative == 4)
        {
	  return 2;
        }
      else if (which_alternative == 5)
        {
	  return 4;
        }
      else if (which_alternative == 6)
        {
	  return 2;
        }
      else
        {
	  return 2;
        }

    case 149:
    case 148:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 140:
    case 139:
    case 138:
    case 137:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else
        {
	  return 3;
        }

    case 136:
    case 135:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 134:
    case 133:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 11 /* 0xb */;
        }
      else if (which_alternative == 1)
        {
	  return 9;
        }
      else if (which_alternative == 2)
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 131:
    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 114:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 100:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((mips_isa) >= (3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 97:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((mips_isa) >= (3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 93:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((mips_isa) >= (3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 90:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((mips_isa) >= (3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 87:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((mips_isa) >= (3))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 71:
    case 70:
    case 69:
    case 68:
      return 7;

    case 67:
    case 65:
    case 60:
      return 14 /* 0xe */;

    case 66:
    case 64:
      return 13 /* 0xd */;

    case 63:
    case 62:
      return 8;

    case 61:
      return 15 /* 0xf */;

    case 21:
    case 8:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

int
result_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 173:
    case 169:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || (which_alternative == 2)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 1) || (which_alternative == 2)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 168:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 166:
    case 165:
    case 163:
    case 162:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 2) || (which_alternative == 3)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 159:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((which_alternative == 8) || (which_alternative == 9)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 158:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 3;
        }
      else if ((((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))) || ((which_alternative == 8) || (which_alternative == 9)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 153:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 151:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 2) || (which_alternative == 3)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 119:
    case 118:
    case 117:
    case 116:
    case 115:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative != 0) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 3;
        }
      else if ((which_alternative != 0) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 148:
    case 131:
    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 114:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 85:
    case 84:
    case 77:
    case 76:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 73:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 54 /* 0x36 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 72:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 112 /* 0x70 */;
        }
      else
        {
	  return 60 /* 0x3c */;
        }

    case 71:
    case 70:
    case 69:
    case 68:
    case 67:
    case 66:
    case 65:
    case 64:
    case 63:
    case 62:
    case 61:
    case 60:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))
        {
	  return 69 /* 0x45 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))
        {
	  return 42 /* 0x2a */;
        }
      else if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 38 /* 0x26 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))
        {
	  return 36 /* 0x24 */;
        }
      else
        {
	  return 35 /* 0x23 */;
        }

    case 59:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))
        {
	  return 32 /* 0x20 */;
        }
      else if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))))
        {
	  return 23 /* 0x17 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))
        {
	  return 15 /* 0xf */;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 58:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))
        {
	  return 61 /* 0x3d */;
        }
      else if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))))
        {
	  return 36 /* 0x24 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 19 /* 0x13 */;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 38:
    case 37:
    case 36:
    case 34:
    case 33:
    case 31:
    case 30:
    case 29:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 17 /* 0x11 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 12 /* 0xc */;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case 27:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))
        {
	  return 8;
        }
      else if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))))
        {
	  return 7;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))
        {
	  return 5;
        }
      else
        {
	  return 4;
        }

    case 26:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))))
        {
	  return 8;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))
        {
	  return 6;
        }
      else
        {
	  return 5;
        }

    case 14:
    case 13:
    case 1:
    case 0:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))))
        {
	  return 4;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

int
divide_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 73:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))
        {
	  return 31 /* 0x1f */;
        }
      else
        {
	  return 54 /* 0x36 */;
        }

    case 72:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))
        {
	  return 60 /* 0x3c */;
        }
      else
        {
	  return 112 /* 0x70 */;
        }

    case 59:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))
        {
	  return 32 /* 0x20 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))
        {
	  return 15 /* 0xf */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 23 /* 0x17 */;
        }

    case 58:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))
        {
	  return 61 /* 0x3d */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))
        {
	  return 16 /* 0x10 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 19 /* 0x13 */;
        }
      else
        {
	  return 36 /* 0x24 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 112 /* 0x70 */;

    }
}

unsigned int
divide_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 786544 /* 0xc0070 */;

    }
}

int
mult_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 27:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))
        {
	  return 5;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 4;
        }
      else if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))
        {
	  return 7;
        }
      else
        {
	  return 8;
        }

    case 26:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))
        {
	  return 6;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 5;
        }
      else
        {
	  return 8;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 8;

    }
}

unsigned int
mult_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 262152 /* 0x40008 */;

    }
}

int
adder_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 85:
    case 84:
    case 77:
    case 76:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))
        {
	  return 2;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 14:
    case 13:
    case 1:
    case 0:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))
        {
	  return 3;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 4;

    }
}

unsigned int
adder_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65540 /* 0x10004 */;

    }
}

int
imuldiv_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 165:
    case 162:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8))))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 159:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))))))))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 158:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((which_alternative != 10) && ((which_alternative != 11) && ((which_alternative != 12) && ((which_alternative != 13) && (which_alternative != 14)))))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((which_alternative != 10) && ((which_alternative != 11) && ((which_alternative != 12) && ((which_alternative != 13) && (which_alternative != 14)))))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((which_alternative != 10) && ((which_alternative != 11) && ((which_alternative != 12) && ((which_alternative != 13) && (which_alternative != 14)))))))))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((which_alternative != 10) && ((which_alternative != 11) && ((which_alternative != 12) && ((which_alternative != 13) && (which_alternative != 14)))))))))))))))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((which_alternative != 10) && ((which_alternative != 11) && ((which_alternative != 12) && ((which_alternative != 13) && (which_alternative != 14))))))))))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 166:
    case 163:
    case 153:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7))))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7))))))))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))))))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 151:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5))))))) || (((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5)))))))))))
        {
	  return 1;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 71:
    case 70:
    case 69:
    case 68:
    case 67:
    case 66:
    case 65:
    case 64:
    case 63:
    case 62:
    case 61:
    case 60:
      if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))
        {
	  return 42 /* 0x2a */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))
        {
	  return 36 /* 0x24 */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 35 /* 0x23 */;
        }
      else if (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))
        {
	  return 38 /* 0x26 */;
        }
      else
        {
	  return 69 /* 0x45 */;
        }

    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 38:
    case 37:
    case 36:
    case 34:
    case 33:
    case 31:
    case 30:
    case 29:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))
        {
	  return 4;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 69 /* 0x45 */;

    }
}

unsigned int
imuldiv_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 196677 /* 0x30045 */;

    }
}

int
memory_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
        {
	  return 3;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
        {
	  return 3;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 173:
    case 169:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || (which_alternative == 2)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
        {
	  return 3;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 168:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
        {
	  return 3;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 166:
    case 165:
    case 163:
    case 162:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 4) || (which_alternative == 5)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 4) && (which_alternative != 5)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 159:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 6) || (which_alternative == 7)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && (which_alternative != 7)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 158:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 153:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 6) || (which_alternative == 7)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 151:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 4) || (which_alternative == 5)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 180:
    case 149:
      return 1;

    case 119:
    case 118:
    case 117:
    case 116:
    case 115:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))) || ((which_alternative == 0) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 148:
    case 131:
    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 114:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 3;

    }
}

unsigned int
memory_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 65537 /* 0x10001 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 65537 /* 0x10001 */;
        }
      else if (((which_alternative == 6) || (which_alternative == 7)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 173:
    case 169:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || (which_alternative == 2)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((which_alternative == 1) || (which_alternative == 2)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 65537 /* 0x10001 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 168:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 65537 /* 0x10001 */;
        }
      else if (((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 166:
    case 165:
    case 163:
    case 162:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 65537 /* 0x10001 */;
        }
      else if (((which_alternative == 6) || (which_alternative == 7)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 159:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 65537 /* 0x10001 */;
        }
      else if (((which_alternative == 8) || (which_alternative == 9)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 158:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 65537 /* 0x10001 */;
        }
      else if (((which_alternative == 8) || (which_alternative == 9)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 153:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 65537 /* 0x10001 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 151:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 65537 /* 0x10001 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 119:
    case 118:
    case 117:
    case 116:
    case 115:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative != 0) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else if ((which_alternative != 0) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  return 65537 /* 0x10001 */;
        }
      else
        {
	  return 65539 /* 0x10003 */;
        }

    case 148:
    case 131:
    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 114:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  return 65538 /* 0x10002 */;
        }
      else
        {
	  return 65537 /* 0x10001 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65539 /* 0x10003 */;

    }
}

int
function_units_used (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 173:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || (((which_alternative == 1) || (which_alternative == 2)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 0;
        }
      else if ((((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((which_alternative != 1) && (which_alternative != 2))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 0;
        }
      else if ((((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || ((((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 0;
        }
      else if ((((which_alternative != 6) && (which_alternative != 7)) && (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 169:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || (((which_alternative == 1) || (which_alternative == 2)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return 0;
        }
      else if ((((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((which_alternative != 1) && (which_alternative != 2))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 168:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || ((((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 0;
        }
      else if ((((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))) && (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 166:
    case 163:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 6) || (which_alternative == 7)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || ((((which_alternative == 4) || (which_alternative == 5)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || (((which_alternative == 2) || (which_alternative == 3)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))
        {
	  return 0;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 6) && (which_alternative != 7)) && (((which_alternative != 4) && (which_alternative != 5)) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 165:
    case 162:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 6) || (which_alternative == 7)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || ((((which_alternative == 4) || (which_alternative == 5)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || (((which_alternative == 2) || (which_alternative == 3)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))
        {
	  return 0;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8))))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 6) && (which_alternative != 7)) && (((which_alternative != 4) && (which_alternative != 5)) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 159:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 8) || (which_alternative == 9)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || ((((which_alternative == 6) || (which_alternative == 7)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))
        {
	  return 0;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 8) && (which_alternative != 9)) && (((which_alternative != 6) && (which_alternative != 7)) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 158:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 8) || (which_alternative == 9)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))) || ((((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))
        {
	  return 0;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((which_alternative != 10) && ((which_alternative != 11) && ((which_alternative != 12) && ((which_alternative != 13) && (which_alternative != 14))))))))))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 8) && (which_alternative != 9)) && (((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))) && (((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14)))))))))))))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 153:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 6) || (which_alternative == 7)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 0;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 6) && (which_alternative != 7)) && (((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 151:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative == 4) || (which_alternative == 5)) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))) || (((which_alternative == 2) || (which_alternative == 3)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))))
        {
	  return 0;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5)))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return 1;
        }
      else if ((((which_alternative != 4) && (which_alternative != 5)) && (((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || (which_alternative == 5)))))))) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 119:
    case 118:
    case 117:
    case 116:
    case 115:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative != 0) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))
        {
	  return 0;
        }
      else if ((which_alternative == 0) && ((((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))))) || (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650)))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    case 180:
    case 149:
    case 148:
    case 131:
    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 114:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))
        {
	  return 0;
        }
      else
        {
	  return 2;
        }

    case 73:
    case 72:
    case 59:
    case 58:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 71:
    case 70:
    case 69:
    case 68:
    case 67:
    case 66:
    case 65:
    case 64:
    case 63:
    case 62:
    case 61:
    case 60:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 38:
    case 37:
    case 36:
    case 34:
    case 33:
    case 31:
    case 30:
    case 29:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 27:
    case 26:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))
        {
	  return 3;
        }
      else
        {
	  return 2;
        }

    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 85:
    case 84:
    case 77:
    case 76:
    case 14:
    case 13:
    case 1:
    case 0:
      return 2;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000))))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && (! ((mips_cpu_attr) == (CPU_R4650))))))))) || (((mips_cpu_attr) == (CPU_DEFAULT)))))))))
        {
	  return -1 /* 0xffffffff */;
        }
      else
        {
	  return 2;
        }

    }
}

int
num_delay_slots (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 324:
    case 323:
    case 322:
    case 321:
    case 320:
    case 319:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 310:
      if (((mips_abicalls_attr) == (ABICALLS_NO)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 307:
    case 305:
    case 303:
    case 302:
    case 300:
    case 299:
    case 297:
    case 224:
    case 223:
    case 222:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

enum attr_abicalls
get_attr_abicalls ()
{
}

enum attr_branch_likely
get_attr_branch_likely ()
{
}

enum attr_cpu
get_attr_cpu ()
{
}

enum attr_dslot
get_attr_dslot (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) || ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 173:
    case 169:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 168:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) || ((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 166:
    case 163:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) || (((which_alternative == 6) || (which_alternative == 7)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7))))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 165:
    case 162:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) || (((which_alternative == 6) || (which_alternative == 7)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8)))))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 159:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || (((which_alternative == 8) || (which_alternative == 9)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 158:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) || (((which_alternative == 8) || (which_alternative == 9)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((which_alternative != 10) && ((which_alternative != 11) && ((which_alternative != 12) && ((which_alternative != 13) && (which_alternative != 14)))))))))))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 153:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 151:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5)))))))
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 119:
    case 118:
    case 117:
    case 116:
    case 115:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative != 0)
        {
	  return DSLOT_YES;
        }
      else
        {
	  return DSLOT_NO;
        }

    case 324:
    case 323:
    case 322:
    case 321:
    case 320:
    case 319:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 310:
    case 307:
    case 305:
    case 303:
    case 302:
    case 300:
    case 299:
    case 297:
    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 224:
    case 223:
    case 222:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
    case 148:
    case 131:
    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 114:
      return DSLOT_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return DSLOT_NO;

    }
}

enum attr_mode
get_attr_mode (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 285:
    case 286:
    case 287:
    case 288:
    case 289:
    case 290:
    case 291:
    case 292:
    case 293:
    case 294:
    case 295:
    case 296:
      return MODE_FPSW;

    case 0:
    case 13:
    case 26:
    case 50:
    case 52:
    case 54:
    case 56:
    case 58:
    case 72:
    case 76:
    case 84:
    case 132:
    case 133:
    case 135:
    case 137:
    case 138:
    case 171:
    case 172:
    case 173:
    case 334:
    case 335:
      return MODE_DF;

    case 1:
    case 14:
    case 27:
    case 51:
    case 53:
    case 55:
    case 57:
    case 59:
    case 73:
    case 77:
    case 85:
    case 103:
    case 134:
    case 136:
    case 139:
    case 140:
    case 168:
    case 169:
    case 332:
    case 333:
      return MODE_SF;

    case 5:
    case 8:
    case 11:
    case 18:
    case 21:
    case 24:
    case 25:
    case 33:
    case 34:
    case 43:
    case 44:
    case 61:
    case 63:
    case 65:
    case 67:
    case 69:
    case 71:
    case 75:
    case 79:
    case 82:
    case 83:
    case 87:
    case 90:
    case 93:
    case 95:
    case 97:
    case 100:
    case 102:
    case 114:
    case 116:
    case 119:
    case 121:
    case 123:
    case 131:
    case 151:
    case 153:
    case 175:
    case 184:
    case 187:
    case 190:
    case 193:
    case 194:
    case 197:
    case 200:
    case 203:
    case 204:
    case 207:
    case 210:
    case 237:
    case 240:
    case 244:
    case 247:
    case 251:
    case 255:
    case 259:
    case 262:
    case 265:
    case 269:
    case 273:
    case 277:
    case 280:
    case 283:
    case 330:
    case 331:
      return MODE_DI;

    case 105:
    case 112:
    case 117:
    case 162:
    case 163:
      return MODE_HI;

    case 106:
    case 165:
    case 166:
      return MODE_QI;

    case 177:
    case 179:
    case 180:
    case 217:
    case 218:
    case 219:
    case 220:
    case 221:
    case 222:
    case 223:
    case 224:
    case 297:
    case 299:
    case 300:
    case 302:
    case 303:
    case 305:
    case 307:
    case 309:
    case 310:
    case 312:
    case 313:
    case 314:
    case 315:
    case 316:
    case 317:
    case 319:
    case 320:
    case 321:
    case 322:
    case 323:
    case 324:
    case 326:
      return MODE_NONE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      return MODE_UNKNOWN;

    default:
      return MODE_SI;

    }
}

enum attr_type
get_attr_type (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || (which_alternative == 5))))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return TYPE_STORE;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 9) || (which_alternative == 10))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 173:
    case 169:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 168:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_XFER;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 9) || (which_alternative == 10))
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 11)
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_STORE;
        }

    case 166:
    case 163:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 165:
    case 162:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_MOVE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 159:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 8) || (which_alternative == 9))
        {
	  return TYPE_XFER;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 158:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_STORE;
        }
      else if ((which_alternative == 8) || (which_alternative == 9))
        {
	  return TYPE_XFER;
        }
      else if (which_alternative == 10)
        {
	  return TYPE_MOVE;
        }
      else if ((which_alternative == 11) || (which_alternative == 12))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 13) || (which_alternative == 14))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 153:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 151:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MOVE;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_ARITH;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_STORE;
        }
      else
        {
	  return TYPE_HILO;
        }

    case 119:
    case 118:
    case 117:
    case 116:
    case 115:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ARITH;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 326:
      return TYPE_NOP;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 74:
    case 75:
    case 78:
    case 79:
    case 177:
    case 179:
      return TYPE_MULTI;

    case 72:
    case 73:
      return TYPE_FSQRT;

    case 103:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
      return TYPE_FCVT;

    case 285:
    case 286:
    case 287:
    case 288:
    case 289:
    case 290:
    case 291:
    case 292:
    case 293:
    case 294:
    case 295:
    case 296:
      return TYPE_FCMP;

    case 84:
    case 85:
      return TYPE_FNEG;

    case 76:
    case 77:
      return TYPE_FABS;

    case 58:
    case 59:
      return TYPE_FDIV;

    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
      return TYPE_FMADD;

    case 26:
    case 27:
      return TYPE_FMUL;

    case 0:
    case 1:
    case 13:
    case 14:
      return TYPE_FADD;

    case 60:
    case 61:
    case 62:
    case 63:
    case 64:
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70:
    case 71:
      return TYPE_IDIV;

    case 29:
    case 30:
    case 31:
    case 33:
    case 34:
    case 36:
    case 37:
    case 38:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
      return TYPE_IMUL;

    case 5:
    case 8:
    case 11:
    case 18:
    case 21:
    case 24:
    case 82:
    case 87:
    case 90:
    case 93:
    case 97:
    case 100:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 183:
    case 184:
    case 187:
    case 193:
    case 194:
    case 197:
    case 203:
    case 204:
    case 207:
      return TYPE_DARITH;

    case 175:
    case 328:
    case 329:
    case 330:
    case 331:
    case 332:
    case 333:
    case 334:
    case 335:
      return TYPE_MOVE;

    case 149:
    case 180:
      return TYPE_STORE;

    case 114:
    case 121:
    case 123:
    case 125:
    case 127:
    case 129:
    case 131:
    case 148:
      return TYPE_LOAD;

    case 310:
    case 312:
    case 313:
    case 314:
    case 315:
    case 316:
    case 317:
    case 319:
    case 320:
    case 321:
    case 322:
    case 323:
    case 324:
      return TYPE_CALL;

    case 297:
    case 299:
    case 300:
    case 302:
    case 303:
    case 305:
    case 307:
      return TYPE_JUMP;

    case 217:
    case 218:
    case 219:
    case 220:
    case 221:
    case 222:
    case 223:
    case 224:
      return TYPE_BRANCH;

    case 309:
      return TYPE_UNKNOWN;

    default:
      return TYPE_ARITH;

    }
}

int
eligible_for_delay (delay_insn, slot, candidate_insn, flags)
     rtx delay_insn;
     int slot;
     rtx candidate_insn;
     int flags;
{
  rtx insn;

  if (slot >= 1)
    abort ();

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 324:
    case 323:
    case 322:
    case 321:
    case 320:
    case 319:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 310:
      if (((mips_abicalls_attr) == (ABICALLS_NO)))
        {
	  slot += 3 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 307:
    case 305:
    case 303:
    case 302:
    case 300:
    case 299:
    case 297:
      slot += 2 * 1;
      break;
      break;

    case 224:
    case 223:
    case 222:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
      slot += 1 * 1;
      break;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      slot += 0 * 1;
      break;
      break;

    }

  if (slot < 1)
    abort ();

  insn = candidate_insn;
  switch (slot)
    {
    case 3:
      switch (recog_memoized (insn))
	{
        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 169:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 3))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 168:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && ((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7)))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 166:
        case 163:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 165:
        case 162:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 159:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))))))) && ((which_alternative != 1) && ((which_alternative != 3) && ((which_alternative != 5) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 158:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14))))))))))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 13) || ((which_alternative == 15) || ((which_alternative == 16) || ((which_alternative == 17) || (which_alternative == 18))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 153:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || (which_alternative == 9)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 136:
        case 135:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 1)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 171:
        case 119:
        case 118:
        case 117:
        case 116:
        case 115:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 100:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 97:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 93:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 90:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 87:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 335:
        case 334:
        case 333:
        case 332:
        case 331:
        case 330:
        case 329:
        case 328:
        case 326:
        case 280:
        case 279:
        case 277:
        case 276:
        case 269:
        case 268:
        case 262:
        case 261:
        case 259:
        case 258:
        case 251:
        case 250:
        case 244:
        case 243:
        case 237:
        case 236:
        case 210:
        case 201:
        case 200:
        case 191:
        case 190:
        case 181:
        case 180:
        case 132:
        case 112:
        case 111:
        case 110:
        case 106:
        case 105:
        case 103:
        case 102:
        case 99:
        case 96:
        case 95:
        case 92:
        case 89:
        case 86:
        case 85:
        case 84:
        case 83:
        case 80:
        case 77:
        case 76:
        case 73:
        case 72:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
        case 44:
        case 43:
        case 42:
        case 41:
        case 40:
        case 38:
        case 37:
        case 36:
        case 33:
        case 31:
        case 29:
        case 27:
        case 26:
        case 25:
        case 24:
        case 16:
        case 14:
        case 13:
        case 12:
        case 11:
        case 3:
        case 1:
        case 0:
	  return 1;

        default:
	  return 0;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 169:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 3))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 168:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && ((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7)))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 166:
        case 163:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 165:
        case 162:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 159:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))))))) && ((which_alternative != 1) && ((which_alternative != 3) && ((which_alternative != 5) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 158:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14))))))))))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 13) || ((which_alternative == 15) || ((which_alternative == 16) || ((which_alternative == 17) || (which_alternative == 18))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 153:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || (which_alternative == 9)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 136:
        case 135:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 1)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 171:
        case 119:
        case 118:
        case 117:
        case 116:
        case 115:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 100:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 97:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 93:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 90:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 87:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 335:
        case 334:
        case 333:
        case 332:
        case 331:
        case 330:
        case 329:
        case 328:
        case 326:
        case 280:
        case 279:
        case 277:
        case 276:
        case 269:
        case 268:
        case 262:
        case 261:
        case 259:
        case 258:
        case 251:
        case 250:
        case 244:
        case 243:
        case 237:
        case 236:
        case 210:
        case 201:
        case 200:
        case 191:
        case 190:
        case 181:
        case 180:
        case 132:
        case 112:
        case 111:
        case 110:
        case 106:
        case 105:
        case 103:
        case 102:
        case 99:
        case 96:
        case 95:
        case 92:
        case 89:
        case 86:
        case 85:
        case 84:
        case 83:
        case 80:
        case 77:
        case 76:
        case 73:
        case 72:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
        case 44:
        case 43:
        case 42:
        case 41:
        case 40:
        case 38:
        case 37:
        case 36:
        case 33:
        case 31:
        case 29:
        case 27:
        case 26:
        case 25:
        case 24:
        case 16:
        case 14:
        case 13:
        case 12:
        case 11:
        case 3:
        case 1:
        case 0:
	  return 1;

        default:
	  return 0;

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 10))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 169:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 3))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 168:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && ((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7)))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 166:
        case 163:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 165:
        case 162:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 159:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))))))) && ((which_alternative != 1) && ((which_alternative != 3) && ((which_alternative != 5) && (which_alternative != 7)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 158:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14))))))))))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 13) || ((which_alternative == 15) || ((which_alternative == 16) || ((which_alternative == 17) || (which_alternative == 18))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 153:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || (which_alternative == 9)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 136:
        case 135:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 1)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 171:
        case 119:
        case 118:
        case 117:
        case 116:
        case 115:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 100:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 97:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 93:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 90:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 87:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((mips_isa) >= (3))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 335:
        case 334:
        case 333:
        case 332:
        case 331:
        case 330:
        case 329:
        case 328:
        case 326:
        case 280:
        case 279:
        case 277:
        case 276:
        case 269:
        case 268:
        case 262:
        case 261:
        case 259:
        case 258:
        case 251:
        case 250:
        case 244:
        case 243:
        case 237:
        case 236:
        case 210:
        case 201:
        case 200:
        case 191:
        case 190:
        case 181:
        case 180:
        case 132:
        case 112:
        case 111:
        case 110:
        case 106:
        case 105:
        case 103:
        case 102:
        case 99:
        case 96:
        case 95:
        case 92:
        case 89:
        case 86:
        case 85:
        case 84:
        case 83:
        case 80:
        case 77:
        case 76:
        case 73:
        case 72:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
        case 44:
        case 43:
        case 42:
        case 41:
        case 40:
        case 38:
        case 37:
        case 36:
        case 33:
        case 31:
        case 29:
        case 27:
        case 26:
        case 25:
        case 24:
        case 16:
        case 14:
        case 13:
        case 12:
        case 11:
        case 3:
        case 1:
        case 0:
	  return 1;

        default:
	  return 0;

      }
    default:
      abort ();
    }
}

int
eligible_for_annul_false (delay_insn, slot, candidate_insn, flags)
     rtx delay_insn;
     int slot;
     rtx candidate_insn;
     int flags;
{
  rtx insn;

  if (slot >= 1)
    abort ();

  insn = delay_insn;
  switch (recog_memoized (insn))
    {
    case 324:
    case 323:
    case 322:
    case 321:
    case 320:
    case 319:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 310:
      if (((mips_abicalls_attr) == (ABICALLS_NO)))
        {
	  slot += 3 * 1;
      break;
        }
      else
        {
	  slot += 0 * 1;
      break;
        }
      break;

    case 307:
    case 305:
    case 303:
    case 302:
    case 300:
    case 299:
    case 297:
      slot += 2 * 1;
      break;
      break;

    case 224:
    case 223:
    case 222:
    case 221:
    case 220:
    case 219:
    case 218:
    case 217:
      slot += 1 * 1;
      break;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      slot += 0 * 1;
      break;
      break;

    }

  if (slot < 1)
    abort ();

  insn = candidate_insn;
  switch (slot)
    {
    case 3:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 2:
      switch (recog_memoized (insn))
	{
        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 0;

      }
    case 1:
      switch (recog_memoized (insn))
	{
        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && (((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 10)))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 169:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && (((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 3)))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 168:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && ((((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && ((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7)))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 11)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 166:
        case 163:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 165:
        case 162:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))))))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10)))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 159:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))))))))))) && ((which_alternative != 1) && ((which_alternative != 3) && ((which_alternative != 5) && (which_alternative != 7))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 158:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && ((((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 8) && (which_alternative != 9)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 12) || ((which_alternative == 13) || (which_alternative == 14))))))))))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || ((which_alternative == 9) || ((which_alternative == 10) || ((which_alternative == 11) || ((which_alternative == 13) || ((which_alternative == 15) || ((which_alternative == 16) || ((which_alternative == 17) || (which_alternative == 18)))))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 153:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7))))))))) && ((which_alternative == 0) || ((which_alternative == 2) || ((which_alternative == 4) || ((which_alternative == 6) || ((which_alternative == 8) || (which_alternative == 9))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 136:
        case 135:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && (which_alternative == 1))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 171:
        case 119:
        case 118:
        case 117:
        case 116:
        case 115:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && (which_alternative == 0))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 100:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && ((mips_isa) >= (3)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 97:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && ((mips_isa) >= (3)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 93:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && ((mips_isa) >= (3)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 90:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && ((mips_isa) >= (3)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 87:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((mips_isa) >= (2))) && ((mips_isa) >= (3)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 335:
        case 334:
        case 333:
        case 332:
        case 331:
        case 330:
        case 329:
        case 328:
        case 326:
        case 280:
        case 279:
        case 277:
        case 276:
        case 269:
        case 268:
        case 262:
        case 261:
        case 259:
        case 258:
        case 251:
        case 250:
        case 244:
        case 243:
        case 237:
        case 236:
        case 210:
        case 201:
        case 200:
        case 191:
        case 190:
        case 181:
        case 180:
        case 132:
        case 112:
        case 111:
        case 110:
        case 106:
        case 105:
        case 103:
        case 102:
        case 99:
        case 96:
        case 95:
        case 92:
        case 89:
        case 86:
        case 85:
        case 84:
        case 83:
        case 80:
        case 77:
        case 76:
        case 73:
        case 72:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
        case 44:
        case 43:
        case 42:
        case 41:
        case 40:
        case 38:
        case 37:
        case 36:
        case 33:
        case 31:
        case 29:
        case 27:
        case 26:
        case 25:
        case 24:
        case 16:
        case 14:
        case 13:
        case 12:
        case 11:
        case 3:
        case 1:
        case 0:
	  if (((mips_isa) >= (2)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        default:
	  return 0;

      }
    default:
      abort ();
    }
}

static int
divide_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 73:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 9;
        }
      break;

    case 72:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 59:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 0;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  casenum = 1;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 58:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 4;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  casenum = 5;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 11 /* 0xb */;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 23 /* 0x17 */;

    case 1:
      return 12 /* 0xc */;

    case 2:
      return 15 /* 0xf */;

    case 3:
      return 32 /* 0x20 */;

    case 4:
      return 36 /* 0x24 */;

    case 5:
      return 19 /* 0x13 */;

    case 6:
      return 16 /* 0x10 */;

    case 7:
      return 61 /* 0x3d */;

    case 8:
      return 54 /* 0x36 */;

    case 9:
      return 31 /* 0x1f */;

    case 10:
      return 112 /* 0x70 */;

    case 11:
      return 60 /* 0x3c */;

    }
}

static int
mult_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 27:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 0;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  casenum = 1;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 26:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))))
        {
	  casenum = 4;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  casenum = 5;
        }
      else
        {
	  casenum = 6;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 6;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 7;

    case 1:
      return 4;

    case 2:
      return 5;

    case 3:
      return 8;

    case 4:
      return 8;

    case 5:
      return 5;

    case 6:
      return 6;

    }
}

static int
adder_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 85:
    case 84:
    case 77:
    case 76:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 5;
        }
      else
        {
	  casenum = 6;
        }
      break;

    case 14:
    case 13:
    case 1:
    case 0:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((mips_cpu_attr) == (CPU_R6000)))))))
        {
	  casenum = 2;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 6;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 2;

    case 2:
      return 4;

    case 3:
      return 2;

    case 4:
      return 3;

    case 5:
      return 2;

    case 6:
      return 1;

    }
}

static int
imuldiv_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 165:
    case 162:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 159:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 158:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 166:
    case 163:
    case 153:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 151:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 71:
    case 70:
    case 69:
    case 68:
    case 67:
    case 66:
    case 65:
    case 64:
    case 63:
    case 62:
    case 61:
    case 60:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 5;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  casenum = 6;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))
        {
	  casenum = 7;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 9;
        }
      break;

    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 38:
    case 37:
    case 36:
    case 34:
    case 33:
    case 31:
    case 30:
    case 29:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 1;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  casenum = 2;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))
        {
	  casenum = 3;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 9;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 9;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 17 /* 0x11 */;

    case 2:
      return 12 /* 0xc */;

    case 3:
      return 10 /* 0xa */;

    case 4:
      return 4;

    case 5:
      return 38 /* 0x26 */;

    case 6:
      return 35 /* 0x23 */;

    case 7:
      return 42 /* 0x2a */;

    case 8:
      return 36 /* 0x24 */;

    case 9:
      return 69 /* 0x45 */;

    }
}

static int
imuldiv_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 165:
    case 162:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 159:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 158:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 166:
    case 163:
    case 153:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 151:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 71:
    case 70:
    case 69:
    case 68:
    case 67:
    case 66:
    case 65:
    case 64:
    case 63:
    case 62:
    case 61:
    case 60:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 5;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  casenum = 6;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))
        {
	  casenum = 7;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 9;
        }
      break;

    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 38:
    case 37:
    case 36:
    case 34:
    case 33:
    case 31:
    case 30:
    case 29:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000))))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 1;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))
        {
	  casenum = 2;
        }
      else if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((mips_cpu_attr) == (CPU_R4000)))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))
        {
	  casenum = 3;
        }
      else if (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 9;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 9;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 17 /* 0x11 */;

    case 2:
      return 12 /* 0xc */;

    case 3:
      return 10 /* 0xa */;

    case 4:
      return 4;

    case 5:
      return 38 /* 0x26 */;

    case 6:
      return 35 /* 0x23 */;

    case 7:
      return 42 /* 0x2a */;

    case 8:
      return 36 /* 0x24 */;

    case 9:
      return 69 /* 0x45 */;

    }
}

static int
memory_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 172:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 171:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10)))))))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 173:
    case 169:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || (which_alternative == 2)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || (which_alternative == 2)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 168:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10)))))))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 158:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 159:
    case 153:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 166:
    case 165:
    case 163:
    case 162:
    case 151:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 2) || (which_alternative == 3)) && ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 1;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 180:
    case 149:
      casenum = 2;
      break;

    case 119:
    case 118:
    case 117:
    case 116:
    case 115:
      insn_extract (insn);
      if (! constrain_operands (INSN_CODE (insn), reload_completed))
        fatal_insn_not_found (insn);
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 148:
    case 131:
    case 129:
    case 127:
    case 125:
    case 123:
    case 121:
    case 114:
      if ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      switch (recog_memoized (insn))
	{
        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 171:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 9) || (which_alternative == 10))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
	    {
	      return 1;
	    }
	  else if (((which_alternative == 6) || (which_alternative == 7)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 3;
	    }

        case 173:
        case 169:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 2)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || (which_alternative == 2)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 168:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 9) || (which_alternative == 10)))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
	    {
	      return 1;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 6) || (which_alternative == 7))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 3;
	    }

        case 166:
        case 165:
        case 163:
        case 162:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 2) || (which_alternative == 3)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
	    {
	      return 1;
	    }
	  else if (((which_alternative == 6) || (which_alternative == 7)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 3;
	    }

        case 159:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
	    {
	      return 1;
	    }
	  else if (((which_alternative == 8) || (which_alternative == 9)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 3;
	    }

        case 158:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 11) || (which_alternative == 12))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
	    {
	      return 1;
	    }
	  else if (((which_alternative == 8) || (which_alternative == 9)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 3;
	    }

        case 153:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 1) || ((which_alternative == 4) || (which_alternative == 5))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 151:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 2) || (which_alternative == 3)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
	    {
	      return 2;
	    }
	  else if (((which_alternative == 2) || (which_alternative == 3)) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 3;
	    }

        case 119:
        case 118:
        case 117:
        case 116:
        case 115:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650)))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 148:
        case 131:
        case 129:
        case 127:
        case 125:
        case 123:
        case 121:
        case 114:
	  if ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || ((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((! ((mips_cpu_attr) == (CPU_R4600))) && ((mips_cpu_attr) == (CPU_R4650))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 3;

      }

    case 1:
      switch (recog_memoized (insn))
	{
        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 171:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))) && ((which_alternative != 6) && (which_alternative != 7)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 173:
        case 169:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 168:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))) && ((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 166:
        case 165:
        case 163:
        case 162:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 4) || (which_alternative == 5)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 4) && (which_alternative != 5)) && ((which_alternative != 6) && (which_alternative != 7)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 159:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 8) && (which_alternative != 9)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 158:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))) && ((which_alternative != 8) && (which_alternative != 9)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 153:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 151:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 4) || (which_alternative == 5)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 119:
        case 118:
        case 117:
        case 116:
        case 115:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  return 1;

        case 148:
        case 131:
        case 129:
        case 127:
        case 125:
        case 123:
        case 121:
        case 114:
	  return 1;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 2;

      }

    case 2:
      return 1;

    case 3:
      switch (recog_memoized (insn))
	{
        case 172:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 1) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9))))) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 171:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 5) && ((which_alternative != 9) && (which_alternative != 10))))) && (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))) && ((which_alternative != 6) && (which_alternative != 7)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 173:
        case 169:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 1) && (which_alternative != 2)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 168:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (which_alternative != 10))))))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 9) && (which_alternative != 10)))) && (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (which_alternative == 10))))))))) && ((which_alternative != 1) && ((which_alternative != 6) && (which_alternative != 7))))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 166:
        case 165:
        case 163:
        case 162:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 4) || (which_alternative == 5)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 2) && (which_alternative != 3)) && (((which_alternative != 4) && (which_alternative != 5)) && ((which_alternative != 6) && (which_alternative != 7)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 159:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && (((which_alternative != 6) && (which_alternative != 7)) && ((which_alternative != 8) && (which_alternative != 9)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 158:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || ((which_alternative == 7) || ((which_alternative == 13) || (which_alternative == 14)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 1) && ((which_alternative != 4) && ((which_alternative != 5) && ((which_alternative != 11) && (which_alternative != 12))))) && (((which_alternative != 6) && ((which_alternative != 7) && ((which_alternative != 13) && (which_alternative != 14)))) && ((which_alternative != 8) && (which_alternative != 9)))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 153:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 6) || (which_alternative == 7)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 1) && ((which_alternative != 4) && (which_alternative != 5))) && ((which_alternative != 6) && (which_alternative != 7))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 151:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  if ((((which_alternative == 4) || (which_alternative == 5)) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))) || ((((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative != 4) && (which_alternative != 5))) && (((((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000)))) || (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600)))))))) || ((! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((mips_cpu_attr) == (CPU_R3000))))) && (! (((! ((mips_cpu_attr) == (CPU_DEFAULT))) && ((! ((mips_cpu_attr) == (CPU_R3000))) && ((! ((mips_cpu_attr) == (CPU_R6000))) && ((! ((mips_cpu_attr) == (CPU_R4000))) && ((mips_cpu_attr) == (CPU_R4600))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 119:
        case 118:
        case 117:
        case 116:
        case 115:
	  insn_extract (insn);
	  if (! constrain_operands (INSN_CODE (insn), reload_completed))
	    fatal_insn_not_found (insn);
	  return 1;

        case 148:
        case 131:
        case 129:
        case 127:
        case 125:
        case 123:
        case 121:
        case 114:
	  return 1;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 2;

      }

    }
}

struct function_unit_desc function_units[] = {
  {"memory", 1, 1, 0, 1, 1, memory_unit_ready_cost, 0, 3, memory_unit_blockage_range, memory_unit_blockage}, 
  {"imuldiv", 2, 1, 0, 0, 69, imuldiv_unit_ready_cost, imuldiv_unit_conflict_cost, 69, imuldiv_unit_blockage_range, imuldiv_unit_blockage}, 
  {"adder", 4, 1, 1, 1, 1, adder_unit_ready_cost, 0, 4, adder_unit_blockage_range, adder_unit_blockage}, 
  {"mult", 8, 1, 1, 1, 1, mult_unit_ready_cost, 0, 8, mult_unit_blockage_range, mult_unit_blockage}, 
  {"divide", 16, 1, 1, 1, 1, divide_unit_ready_cost, 0, 112, divide_unit_blockage_range, divide_unit_blockage}, 
};

int
const_num_delay_slots (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}
