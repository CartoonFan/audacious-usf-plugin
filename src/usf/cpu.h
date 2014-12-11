/*
 * Project 64 - A Nintendo 64 emulator.
 *
 * (c) Copyright 2001 zilmar (zilmar@emulation64.com) and
 * Jabo (jabo@emulation64.com).
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
#ifndef _CPU_H_
#define _CPU_H_
    
#include "interpreter_cpu.h"
#include "interpreter_ops.h"
#include "recompiler_cpu.h"
#include "registers.h"
#include "recompiler_ops.h"
#include "tlb.h"
#include "memory.h"
#include "dma.h"
#include "exception.h"
#include "pif.h"
#include "opcode.h"
#include "usf.h"
    
#ifdef __LP64__
#define USEX86
#define EXTREGS
#endif	/* 
    
    
    
    
    


#define MaxTimers				3
#define CompareTimer			0
#define ViTimer					1
#define AiTimer					2
    
    
    
    
    






				 uint32_t Reg2);












#define NORMAL					0
#define DO_DELAY_SLOT			1
#define DO_END_DELAY_SLOT		2
#define DELAY_SLOT				3
#define END_DELAY_SLOT			4
#define LIKELY_DELAY_SLOT		5
#define JUMP	 				6
#define DELAY_SLOT_DONE			7
#define LIKELY_DELAY_SLOT_DONE	8
#define END_BLOCK 				9

};

    CPU_Paused, CountPerOp, AudioIntrReg, *WaitMode, CPU_Type;





#endif	/* 