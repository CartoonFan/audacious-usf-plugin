/*
 * RSP Compiler plug in for Project 64 (A Nintendo 64 emulator).
 *
 * (c) Copyright 2001 jabo (jabo@emulation64.com) and
 * zilmar (zilmar@emulation64.com)
 *
 * pj64 homepage: www.pj64.net
 * 
 * Permission to use, copy, modify and distribute Project64 in both binary and
 * source form, for non-commercial purposes, is hereby granted without fee,
 * providing that this license information and copyright notice appear with
 * all copies and any derived work.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event shall the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Project64 is freeware for PERSONAL USE only. Commercial users should
 * seek permission of the copyright holders first. Commercial use includes
 * charging money for Project64 or software derived from Project64.
 *
 * The copyright holders request that bug fixes and improvements to the code
 * should be forwarded to them so if they want them.
 *
 */  
    
/************************* OpCode functions *************************/ 
void RSPCompile_SPECIAL(void);




























/********************** R4300i OpCodes: Special **********************/ 
void RSPCompile_Special_SLL(void);



















/********************** R4300i OpCodes: RegImm **********************/ 
void RSPCompile_RegImm_BLTZ(void);




/************************** Cop0 functions *************************/ 
void RSPCompile_Cop0_MF(void);


/************************** Cop2 functions *************************/ 
void RSPCompile_Cop2_MF(void);





/************************** Vect functions **************************/ 
void RSPCompile_Vector_VMULF(void);









































/************************** lc2 functions **************************/ 
void RSPCompile_Opcode_LBV(void);











/************************** sc2 functions **************************/ 
void RSPCompile_Opcode_SBV(void);












/************************** Other functions **************************/ 
void RSPCompile_UnknownOpcode(void);
