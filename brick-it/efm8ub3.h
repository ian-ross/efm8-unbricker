//------------------------------------------------------------------------------
// Copyright 2014 Silicon Laboratories, Inc.
// All rights reserved. This program and the accompanying materials
// are made available under the terms of the Silicon Laboratories End User
// License Agreement which accompanies this distribution, and is available at
// http://developer.silabs.com/legal/version/v11/Silicon_Labs_Software_License_Agreement.txt
// Original content and implementation provided by Silicon Laboratories.
//------------------------------------------------------------------------------

// Modified for use with SDCC in Sky Blue Learning "8-Bit Embedded"
// course.

#ifndef EFM8UB3_H
#define EFM8UB3_H

//-----------------------------------------------------------------------------
// Register Definitions
//-----------------------------------------------------------------------------
__sfr __at (0xE0) ACC;       // Accumulator
__sfr __at (0xB3) ADC0AC;    // ADC0 Accumulator Configuration
__sfr __at (0xBC) ADC0CF;    // ADC0 Configuration
__sfr __at (0xE8) ADC0CN0;   // ADC0 Control 0
__sfr __at (0xB2) ADC0CN1;   // ADC0 Control 1
__sfr __at (0xC4) ADC0GTH;   // ADC0 Greater-Than High Byte
__sfr __at (0xC3) ADC0GTL;   // ADC0 Greater-Than Low Byte
__sfr __at (0xBE) ADC0H;     // ADC0 Data Word High Byte
__sfr __at (0xBD) ADC0L;     // ADC0 Data Word Low Byte
__sfr __at (0xC6) ADC0LTH;   // ADC0 Less-Than High Byte
__sfr __at (0xC5) ADC0LTL;   // ADC0 Less-Than Low Byte
__sfr __at (0xBB) ADC0MX;    // ADC0 Multiplexer Selection
__sfr __at (0xDF) ADC0PWR;   // ADC0 Power Control
__sfr __at (0xB9) ADC0TK;    // ADC0 Burst Mode Track Time
__sfr __at (0xF0) B;         // B Register
__sfr __at (0x8E) CKCON0;    // Clock Control 0
__sfr __at (0xA6) CKCON1;    // Clock Control 1
__sfr __at (0xCB) CLEN0;     // Configurable Logic Enable 0
__sfr __at (0xCD) CLIE0;     // Configurable Logic Interrupt Enable 0
__sfr __at (0xE8) CLIF0;     // Configurable Logic Interrupt Flag 0
__sfr __at (0xA9) CLKSEL;    // Clock Select
__sfr __at (0xD9) CLOUT0;    // Configurable Logic Output 0
__sfr __at (0xB1) CLU0CF;    // Configurable Logic Unit 0 Configuration
__sfr __at (0xAD) CLU0FN;    // Configurable Logic Unit 0 Function Select
__sfr __at (0x84) CLU0MX;    // Configurable Logic Unit 0 Multiplexer
__sfr __at (0xBB) CLU1CF;    // Configurable Logic Unit 1 Configuration
__sfr __at (0xB9) CLU1FN;    // Configurable Logic Unit 1 Function Select
__sfr __at (0x85) CLU1MX;    // Configurable Logic Unit 1 Multiplexer
__sfr __at (0xBD) CLU2CF;    // Configurable Logic Unit 2 Configuration
__sfr __at (0xBC) CLU2FN;    // Configurable Logic Unit 2 Function Select
__sfr __at (0x91) CLU2MX;    // Configurable Logic Unit 2 Multiplexer
__sfr __at (0xCA) CLU3CF;    // Configurable Logic Unit 3 Configuration
__sfr __at (0xC7) CLU3FN;    // Configurable Logic Unit 3 Function Select
__sfr __at (0x92) CLU3MX;    // Configurable Logic Unit 3 Multiplexer
__sfr __at (0x9B) CMP0CN0;   // Comparator 0 Control 0
__sfr __at (0x99) CMP0CN1;   // Comparator 0 Control 1
__sfr __at (0x9D) CMP0MD;    // Comparator 0 Mode
__sfr __at (0x9F) CMP0MX;    // Comparator 0 Multiplexer Selection
__sfr __at (0xBF) CMP1CN0;   // Comparator 1 Control 0
__sfr __at (0xAC) CMP1CN1;   // Comparator 1 Control 1
__sfr __at (0xAB) CMP1MD;    // Comparator 1 Mode
__sfr __at (0xAA) CMP1MX;    // Comparator 1 Multiplexer Selection
__sfr __at (0xCE) CRC0CN0;   // CRC0 Control 0
__sfr __at (0x86) CRC0CN1;   // CRC0 Control 1
__sfr __at (0xD3) CRC0CNT;   // CRC0 Automatic Flash Sector Count
__sfr __at (0xDE) CRC0DAT;   // CRC0 Data Output
__sfr __at (0xCF) CRC0FLIP;  // CRC0 Bit Flip
__sfr __at (0xDD) CRC0IN;    // CRC0 Data Input
__sfr __at (0xD2) CRC0ST;    // CRC0 Automatic Flash Sector Start
__sfr __at (0xAD) DERIVID;   // Derivative Identification
__sfr __at (0xB5) DEVICEID;  // Device Identification
__sfr __at (0x83) DPH;       // Data Pointer High
__sfr __at (0x82) DPL;       // Data Pointer Low
__sfr __at (0xE6) EIE1;      // Extended Interrupt Enable 1
__sfr __at (0xCE) EIE2;      // Extended Interrupt Enable 2
__sfr __at (0xF3) EIP1;      // Extended Interrupt Priority 1 Low
__sfr __at (0xF5) EIP1H;     // Extended Interrupt Priority 1 High
__sfr __at (0xF4) EIP2;      // Extended Interrupt Priority 2
__sfr __at (0xF6) EIP2H;     // Extended Interrupt Priority 2 High
__sfr __at (0xE7) EMI0CN;    // External Memory Interface Control
__sfr __at (0xB7) FLKEY;     // Flash Lock and Key
__sfr __at (0xC7) HFO0CAL;   // High Frequency Oscillator 0 Calibration
__sfr __at (0xD6) HFO1CAL;   // High Frequency Oscillator 1 Calibration
__sfr __at (0xEF) HFOCN;     // High Frequency Oscillator Control
__sfr __at (0xA8) IE;        // Interrupt Enable
__sfr __at (0xB8) IP;        // Interrupt Priority
__sfr __at (0xF2) IPH;       // Interrupt Priority High
__sfr __at (0x85) IT01CF;    // INT0/INT1 Configuration
__sfr __at (0xB1) LFO0CN;    // Low Frequency Oscillator Control
__sfr __at (0x80) P0;        // Port 0 Pin Latch
__sfr __at (0xFE) P0MASK;    // Port 0 Mask
__sfr __at (0xFD) P0MAT;     // Port 0 Match
__sfr __at (0xF1) P0MDIN;    // Port 0 Input Mode
__sfr __at (0xA4) P0MDOUT;   // Port 0 Output Mode
__sfr __at (0xD4) P0SKIP;    // Port 0 Skip
__sfr __at (0x90) P1;        // Port 1 Pin Latch
__sfr __at (0xEE) P1MASK;    // Port 1 Mask
__sfr __at (0xED) P1MAT;     // Port 1 Match
__sfr __at (0xF2) P1MDIN;    // Port 1 Input Mode
__sfr __at (0xA5) P1MDOUT;   // Port 1 Output Mode
__sfr __at (0xD5) P1SKIP;    // Port 1 Skip
__sfr __at (0xA0) P2;        // Port 2 Pin Latch
__sfr __at (0xFC) P2MASK;    // Port 2 Mask
__sfr __at (0xFB) P2MAT;     // Port 2 Match
__sfr __at (0xF3) P2MDIN;    // Port 2 Input Mode
__sfr __at (0xA6) P2MDOUT;   // Port 2 Output Mode
__sfr __at (0x9E) PCA0CENT;  // PCA Center Alignment Enable
__sfr __at (0x9C) PCA0CLR;   // PCA Comparator Clear Control
__sfr __at (0xD8) PCA0CN0;   // PCA Control
__sfr __at (0xFC) PCA0CPH0;  // PCA Channel 0 Capture Module High Byte
__sfr __at (0xEA) PCA0CPH1;  // PCA Channel 1 Capture Module High Byte
__sfr __at (0xEC) PCA0CPH2;  // PCA Channel 2 Capture Module High Byte
__sfr __at (0xFB) PCA0CPL0;  // PCA Channel 0 Capture Module Low Byte
__sfr __at (0xE9) PCA0CPL1;  // PCA Channel 1 Capture Module Low Byte
__sfr __at (0xEB) PCA0CPL2;  // PCA Channel 2 Capture Module Low Byte
__sfr __at (0xDA) PCA0CPM0;  // PCA Channel 0 Capture/Compare Mode
__sfr __at (0xDB) PCA0CPM1;  // PCA Channel 1 Capture/Compare Mode
__sfr __at (0xDC) PCA0CPM2;  // PCA Channel 2 Capture/Compare Mode
__sfr __at (0xFA) PCA0H;     // PCA Counter/Timer High Byte
__sfr __at (0xF9) PCA0L;     // PCA Counter/Timer Low Byte
__sfr __at (0xD9) PCA0MD;    // PCA Mode
__sfr __at (0x96) PCA0POL;   // PCA Output Polarity
__sfr __at (0xF7) PCA0PWM;   // PCA PWM Configuration
__sfr __at (0x87) PCON0;     // Power Control
__sfr __at (0xE4) PCON1;     // Power Control 1
__sfr __at (0xC1) PFE0CN;    // Prefetch Engine Control
__sfr __at (0xF6) PRTDRV;    // Port Drive Strength
__sfr __at (0x8F) PSCTL;     // Program Store Control
__sfr __at (0xAD) PSTAT0;    // Power Status
__sfr __at (0xD0) PSW;       // Program Status Word
__sfr __at (0xD1) REF0CN;    // Voltage Reference Control
__sfr __at (0xC9) REG0CN;    // Voltage Regulator 0 Control
__sfr __at (0xC6) REG1CN;    // Voltage Regulator 1 Control
__sfr __at (0xB6) REVID;     // Revision Identifcation
__sfr __at (0xEF) RSTSRC;    // Reset Source
__sfr __at (0x94) SBCON1;    // UART1 Baud Rate Generator Control
__sfr __at (0x96) SBRLH1;    // UART1 Baud Rate Generator High Byte
__sfr __at (0x95) SBRLL1;    // UART1 Baud Rate Generator Low Byte
__sfr __at (0x99) SBUF1;     // UART1 Serial Port Data Buffer
__sfr __at (0x98) SCON1;     // UART1 Serial Port Control
__sfr __at (0xA7) SFRPAGE;   // SFR Page
__sfr __at (0xCF) SFRPGCN;   // SFR Page Control
__sfr __at (0xD7) SFRSTACK;  // SFR Page Stack
__sfr __at (0xD6) SMB0ADM;   // SMBus 0 Slave Address Mask
__sfr __at (0xD7) SMB0ADR;   // SMBus 0 Slave Address
__sfr __at (0xC1) SMB0CF;    // SMBus 0 Configuration
__sfr __at (0xC0) SMB0CN0;   // SMBus 0 Control
__sfr __at (0xC2) SMB0DAT;   // SMBus 0 Data
__sfr __at (0xC3) SMB0FCN0;  // SMBus 0 FIFO Control 0
__sfr __at (0xC4) SMB0FCN1;  // SMBus 0 FIFO Control 1
__sfr __at (0xEF) SMB0FCT;   // SMBus 0 FIFO Count
__sfr __at (0xC5) SMB0RXLN;  // SMBus 0 Receive Length Counter
__sfr __at (0xAC) SMB0TC;    // SMBus 0 Timing and Pin Control
__sfr __at (0x93) SMOD1;     // UART1 Mode
__sfr __at (0x81) SP;        // Stack Pointer
__sfr __at (0xA1) SPI0CFG;   // SPI0 Configuration
__sfr __at (0xA2) SPI0CKR;   // SPI0 Clock Rate
__sfr __at (0xF8) SPI0CN0;   // SPI0 Control
__sfr __at (0xA3) SPI0DAT;   // SPI0 Data
__sfr __at (0x9A) SPI0FCN0;  // SPI0 FIFO Control 0
__sfr __at (0x9B) SPI0FCN1;  // SPI0 FIFO Control 1
__sfr __at (0xF7) SPI0FCT;   // SPI0 FIFO Count
__sfr __at (0xDF) SPI0PCF;   // SPI0 Pin Configuration
__sfr __at (0x88) TCON;      // Timer 0/1 Control
__sfr __at (0x8C) TH0;       // Timer 0 High Byte
__sfr __at (0x8D) TH1;       // Timer 1 High Byte
__sfr __at (0x8A) TL0;       // Timer 0 Low Byte
__sfr __at (0x8B) TL1;       // Timer 1 Low Byte
__sfr __at (0x89) TMOD;      // Timer 0/1 Mode
__sfr __at (0xC8) TMR2CN0;   // Timer 2 Control 0
__sfr __at (0xFD) TMR2CN1;   // Timer 2 Control 1
__sfr __at (0xCD) TMR2H;     // Timer 2 High Byte
__sfr __at (0xCC) TMR2L;     // Timer 2 Low Byte
__sfr __at (0xCB) TMR2RLH;   // Timer 2 Reload High Byte
__sfr __at (0xCA) TMR2RLL;   // Timer 2 Reload Low Byte
__sfr __at (0x91) TMR3CN0;   // Timer 3 Control 0
__sfr __at (0xFE) TMR3CN1;   // Timer 3 Control 1
__sfr __at (0x95) TMR3H;     // Timer 3 High Byte
__sfr __at (0x94) TMR3L;     // Timer 3 Low Byte
__sfr __at (0x93) TMR3RLH;   // Timer 3 Reload High Byte
__sfr __at (0x92) TMR3RLL;   // Timer 3 Reload Low Byte
__sfr __at (0x98) TMR4CN0;   // Timer 4 Control 0
__sfr __at (0xFF) TMR4CN1;   // Timer 4 Control 1
__sfr __at (0xA5) TMR4H;     // Timer 4 High Byte
__sfr __at (0xA4) TMR4L;     // Timer 4 Low Byte
__sfr __at (0xA3) TMR4RLH;   // Timer 4 Reload High Byte
__sfr __at (0xA2) TMR4RLL;   // Timer 4 Reload Low Byte
__sfr __at (0xC0) TMR5CN0;   // Timer 5 Control 0
__sfr __at (0xF1) TMR5CN1;   // Timer 5 Control 1
__sfr __at (0xD5) TMR5H;     // Timer 5 High Byte
__sfr __at (0xD4) TMR5L;     // Timer 5 Low Byte
__sfr __at (0xD3) TMR5RLH;   // Timer 5 Reload High Byte
__sfr __at (0xD2) TMR5RLL;   // Timer 5 Reload Low Byte
__sfr __at (0x9D) UART1FCN;  // UART1 FIFO Control 0
__sfr __at (0xD8) UART1FCN0; // UART1 FIFO Control 1
__sfr __at (0xFA) UART1FCT1; // UART1 FIFO Count
__sfr __at (0x9E) UART1LIN;  // UART1 LIN Configuration
__sfr __at (0xDA) UART1PCF;  // UART1 Configuration
__sfr __at (0xAE) USB0ADR;   // USB0 Indirect Address
__sfr __at (0xB2) USB0AEC;   // USB0 Advanced Energy Control
__sfr __at (0xB6) USB0CDCF;  // USB0 Charger Detect Configuration
__sfr __at (0xBE) USB0CDCN;  // USB0 Charger Detect Control
__sfr __at (0xBF) USB0CDST;  // USB0 Charger Detect Status
__sfr __at (0xB5) USB0CF;    // USB0 Configuration
__sfr __at (0xAF) USB0DAT;   // USB0 Data
__sfr __at (0xB3) USB0XCN;   // USB0 Transceiver Control
__sfr __at (0xFF) VDM0CN;    // Supply Monitor Control
__sfr __at (0x97) WDTCN;     // Watchdog Timer Control
__sfr __at (0xE1) XBR0;      // Port I/O Crossbar 0
__sfr __at (0xE2) XBR1;      // Port I/O Crossbar 1
__sfr __at (0xE3) XBR2;      // Port I/O Crossbar 2

//------------------------------------------------------------------------------
// 16-bit Register Definitions
//------------------------------------------------------------------------------
__sfr16 __at (0xC4C3) ADC0GT;   // ADC0 Greater-Than
__sfr16 __at (0xBEBD) ADC0;     // ADC0 Data Word
__sfr16 __at (0xC6C5) ADC0LT;   // ADC0 Less-Than
__sfr16 __at (0x8382) DP;       // Data Pointer
__sfr16 __at (0xFCFB) PCA0CP0;  // PCA Channel 0 Capture Module
__sfr16 __at (0xEAE9) PCA0CP1;  // PCA Channel 1 Capture Module
__sfr16 __at (0xECEB) PCA0CP2;  // PCA Channel 2 Capture Module
__sfr16 __at (0xFAF9) PCA0;     // PCA Counter/Timer
__sfr16 __at (0x9695) SBRL1;    // UART1 Baud Rate Generator
__sfr16 __at (0xCDCC) TMR2;     // Timer 2
__sfr16 __at (0xCBCA) TMR2RL;   // Timer 2 Reload
__sfr16 __at (0x9594) TMR3;     // Timer 3
__sfr16 __at (0x9392) TMR3RL;   // Timer 3 Reload
__sfr16 __at (0xA5A4) TMR4;     // Timer 4
__sfr16 __at (0xA3A2) TMR4RL;   // Timer 4 Reload
__sfr16 __at (0xD5D4) TMR5;     // Timer 5
__sfr16 __at (0xD3D2) TMR5RL;   // Timer 5 Reload

//------------------------------------------------------------------------------
// Indirect Register Definitions
//------------------------------------------------------------------------------
#define CLKREC   0x0F       // USB0 Clock Recovery Control
#define CMIE     0x0B       // USB0 Common Interrupt Enable
#define CMINT    0x06       // USB0 Common Interrupt
#define E0CNT    0x16       // USB0 Endpoint0 Data Count
#define E0CSR    0x11       // USB0 Endpoint0 Control
#define EENABLE  0x1E       // USB0 Endpoint Enable
#define EINCSRH  0x12       // USB0 IN Endpoint Control High
#define EINCSRL  0x11       // USB0 IN Endpoint Control
#define EOUTCNTH 0x17       // USB0 OUT Endpoint Count High
#define EOUTCNTL 0x16       // USB0 OUT Endpoint Count
#define EOUTCSRH 0x15       // USB0 OUT Endpoint Control High
#define EOUTCSRL 0x14       // USB0 OUT Endpoint Control
#define FADDR    0x00       // USB0 Function Address
#define FIFO0    0x20       // USB0 Endpoint 0 FIFO Access
#define FIFO1    0x21       // USB0 Endpoint 1 FIFO Access
#define FIFO2    0x22       // USB0 Endpoint 2 FIFO Access
#define FIFO3    0x23       // USB0 Endpoint 3 FIFO Access
#define FRAMEH   0x0D       // USB0 Frame Number High
#define FRAMEL   0x0C       // USB0 Frame Number
#define IN1IE    0x07       // USB0 IN Endpoint Interrupt Enable
#define IN1INT   0x02       // USB0 IN Endpoint Interrupt
#define INDEX    0x0E       // USB0 Endpoint Index
#define OUT1IE   0x09       // USB0 OUT Endpoint Interrupt Enable
#define OUT1INT  0x04       // USB0 OUT Endpoint Interrupt
#define POWER    0x01       // USB0 Power

//------------------------------------------------------------------------------
// Bit Definitions
//------------------------------------------------------------------------------

// ACC (Accumulator)
__sbit __at (0xE0) ACC_ACC0;    // Accumulator Bit 0
__sbit __at (0xE1) ACC_ACC1;    // Accumulator Bit 1
__sbit __at (0xE2) ACC_ACC2;    // Accumulator Bit 2
__sbit __at (0xE3) ACC_ACC3;    // Accumulator Bit 3
__sbit __at (0xE4) ACC_ACC4;    // Accumulator Bit 4
__sbit __at (0xE5) ACC_ACC5;    // Accumulator Bit 5
__sbit __at (0xE6) ACC_ACC6;    // Accumulator Bit 6
__sbit __at (0xE7) ACC_ACC7;    // Accumulator Bit 7

// ADC0CN0 (ADC0 Control 0)
__sbit __at (0xEB) ADC0CN0_ADWINT; // Window Compare Interrupt Flag
__sbit __at (0xEC) ADC0CN0_ADBUSY; // ADC Busy
__sbit __at (0xED) ADC0CN0_ADINT;  // Conversion Complete Interrupt Flag
__sbit __at (0xEE) ADC0CN0_ADBMEN; // Burst Mode Enable
__sbit __at (0xEF) ADC0CN0_ADEN;   // ADC Enable

// B (B Register)
__sbit __at (0xF0) B_B0;        // B Register Bit 0
__sbit __at (0xF1) B_B1;        // B Register Bit 1
__sbit __at (0xF2) B_B2;        // B Register Bit 2
__sbit __at (0xF3) B_B3;        // B Register Bit 3
__sbit __at (0xF4) B_B4;        // B Register Bit 4
__sbit __at (0xF5) B_B5;        // B Register Bit 5
__sbit __at (0xF6) B_B6;        // B Register Bit 6
__sbit __at (0xF7) B_B7;        // B Register Bit 7

// CLIF0 (Configurable Logic Interrupt Flag 0)
__sbit __at (0xE8) CLIF0_C0FIF; // CLU0 Falling Edge Flag
__sbit __at (0xE9) CLIF0_C0RIF; // CLU0 Rising Edge Flag
__sbit __at (0xEA) CLIF0_C1FIF; // CLU1 Falling Edge Flag
__sbit __at (0xEB) CLIF0_C1RIF; // CLU1 Rising Edge Flag
__sbit __at (0xEC) CLIF0_C2FIF; // CLU2 Falling Edge Flag
__sbit __at (0xED) CLIF0_C2RIF; // CLU2 Rising Edge Flag
__sbit __at (0xEE) CLIF0_C3FIF; // CLU3 Falling Edge Flag
__sbit __at (0xEF) CLIF0_C3RIF; // CLU3 Rising Edge Flag

// IE (Interrupt Enable)
__sbit __at (0xA8) IE_EX0;      // External Interrupt 0 Enable
__sbit __at (0xA9) IE_ET0;      // Timer 0 Interrupt Enable
__sbit __at (0xAA) IE_EX1;      // External Interrupt 1 Enable
__sbit __at (0xAB) IE_ET1;      // Timer 1 Interrupt Enable
__sbit __at (0xAC) IE_ES1;      // UART1 Interrupt Enable
__sbit __at (0xAD) IE_ET2;      // Timer 2 Interrupt Enable
__sbit __at (0xAE) IE_ESPI0;    // SPI0 Interrupt Enable
__sbit __at (0xAF) IE_EA;       // All Interrupts Enable

// IP (Interrupt Priority)
__sbit __at (0xB8) IP_PX0;    // External Interrupt 0 Priority Control LSB
__sbit __at (0xB9) IP_PT0;    // Timer 0 Interrupt Priority Control LSB
__sbit __at (0xBA) IP_PX1;    // External Interrupt 1 Priority Control LSB
__sbit __at (0xBB) IP_PT1;    // Timer 1 Interrupt Priority Control LSB
__sbit __at (0xBC) IP_PS1;    // UART1 Interrupt Priority Control LSB
__sbit __at (0xBD) IP_PT2;    // Timer 2 Interrupt Priority Control LSB
__sbit __at (0xBE) IP_PSPI0; // Serial Peripheral Interface (SPI0) Interrupt Priority Control LSB

// P0 (Port 0 Pin Latch)
__sbit __at (0x80) P0_B0;       // Port 0 Bit 0 Latch
__sbit __at (0x81) P0_B1;       // Port 0 Bit 1 Latch
__sbit __at (0x82) P0_B2;       // Port 0 Bit 2 Latch
__sbit __at (0x83) P0_B3;       // Port 0 Bit 3 Latch
__sbit __at (0x84) P0_B4;       // Port 0 Bit 4 Latch
__sbit __at (0x85) P0_B5;       // Port 0 Bit 5 Latch
__sbit __at (0x86) P0_B6;       // Port 0 Bit 6 Latch
__sbit __at (0x87) P0_B7;       // Port 0 Bit 7 Latch

// P1 (Port 1 Pin Latch)
__sbit __at (0x90) P1_B0;       // Port 1 Bit 0 Latch
__sbit __at (0x91) P1_B1;       // Port 1 Bit 1 Latch
__sbit __at (0x92) P1_B2;       // Port 1 Bit 2 Latch
__sbit __at (0x93) P1_B3;       // Port 1 Bit 3 Latch
__sbit __at (0x94) P1_B4;       // Port 1 Bit 4 Latch
__sbit __at (0x95) P1_B5;       // Port 1 Bit 5 Latch
__sbit __at (0x96) P1_B6;       // Port 1 Bit 6 Latch
__sbit __at (0x97) P1_B7;       // Port 1 Bit 7 Latch

// P2 (Port 2 Pin Latch)
__sbit __at (0xA0) P2_B0;       // Port 2 Bit 0 Latch
__sbit __at (0xA1) P2_B1;       // Port 2 Bit 1 Latch

// PCA0CN0 (PCA Control)
__sbit __at (0xD8) PCA0CN0_CCF0; // PCA Module 0 Capture/Compare Flag
__sbit __at (0xD9) PCA0CN0_CCF1; // PCA Module 1 Capture/Compare Flag
__sbit __at (0xDA) PCA0CN0_CCF2; // PCA Module 2 Capture/Compare Flag
__sbit __at (0xDE) PCA0CN0_CR;   // PCA Counter/Timer Run Control
__sbit __at (0xDF) PCA0CN0_CF;   // PCA Counter/Timer Overflow Flag

// PSW (Program Status Word)
__sbit __at (0xD0) PSW_PARITY;  // Parity Flag
__sbit __at (0xD1) PSW_F1;      // User Flag 1
__sbit __at (0xD2) PSW_OV;      // Overflow Flag
__sbit __at (0xD3) PSW_RS0;     // Register Bank Select Bit 0
__sbit __at (0xD4) PSW_RS1;     // Register Bank Select Bit 1
__sbit __at (0xD5) PSW_F0;      // User Flag 0
__sbit __at (0xD6) PSW_AC;      // Auxiliary Carry Flag
__sbit __at (0xD7) PSW_CY;      // Carry Flag

// SCON1 (UART1 Serial Port Control)
__sbit __at (0x98) SCON1_RI;    // Receive Interrupt Flag
__sbit __at (0x99) SCON1_TI;    // Transmit Interrupt Flag
__sbit __at (0x9A) SCON1_RBX;   // Extra Receive Bit
__sbit __at (0x9B) SCON1_TBX;   // Extra Transmission Bit
__sbit __at (0x9C) SCON1_REN;   // Receive Enable
__sbit __at (0x9E) SCON1_PERR;  // Parity Error Flag
__sbit __at (0x9F) SCON1_OVR;   // Receive FIFO Overrun Flag

// SMB0CN0 (SMBus 0 Control)
__sbit __at (0xC0) SMB0CN0_SI;      // SMBus Interrupt Flag
__sbit __at (0xC1) SMB0CN0_ACK;     // SMBus Acknowledge
__sbit __at (0xC2) SMB0CN0_ARBLOST; // SMBus Arbitration Lost Indicator
__sbit __at (0xC3) SMB0CN0_ACKRQ;   // SMBus Acknowledge Request
__sbit __at (0xC4) SMB0CN0_STO;     // SMBus Stop Flag
__sbit __at (0xC5) SMB0CN0_STA;     // SMBus Start Flag
__sbit __at (0xC6) SMB0CN0_TXMODE;  // SMBus Transmit Mode Indicator
__sbit __at (0xC7) SMB0CN0_MASTER;  // SMBus Master/Slave Indicator

// SPI0CN0 (SPI0 Control)
__sbit __at (0xF8) SPI0CN0_SPIEN;  // SPI0 Enable
__sbit __at (0xF9) SPI0CN0_TXNF;   // TX FIFO Not Full
__sbit __at (0xFA) SPI0CN0_NSSMD0; // Slave Select Mode Bit 0
__sbit __at (0xFB) SPI0CN0_NSSMD1; // Slave Select Mode Bit 1
__sbit __at (0xFC) SPI0CN0_RXOVRN; // Receive Overrun Flag
__sbit __at (0xFD) SPI0CN0_MODF;   // Mode Fault Flag
__sbit __at (0xFE) SPI0CN0_WCOL;   // Write Collision Flag
__sbit __at (0xFF) SPI0CN0_SPIF;   // SPI0 Interrupt Flag

// TCON (Timer 0/1 Control)
__sbit __at (0x88) TCON_IT0;    // Interrupt 0 Type Select
__sbit __at (0x89) TCON_IE0;    // External Interrupt 0
__sbit __at (0x8A) TCON_IT1;    // Interrupt 1 Type Select
__sbit __at (0x8B) TCON_IE1;    // External Interrupt 1
__sbit __at (0x8C) TCON_TR0;    // Timer 0 Run Control
__sbit __at (0x8D) TCON_TF0;    // Timer 0 Overflow Flag
__sbit __at (0x8E) TCON_TR1;    // Timer 1 Run Control
__sbit __at (0x8F) TCON_TF1;    // Timer 1 Overflow Flag

// TMR2CN0 (Timer 2 Control 0)
__sbit __at (0xC8) TMR2CN0_T2XCLK0; // Timer 2 External Clock Select Bit 0
__sbit __at (0xC9) TMR2CN0_T2XCLK1; // Timer 2 External Clock Select Bit 1
__sbit __at (0xCA) TMR2CN0_TR2;     // Timer 2 Run Control
__sbit __at (0xCB) TMR2CN0_T2SPLIT; // Timer 2 Split Mode Enable
__sbit __at (0xCC) TMR2CN0_TF2CEN;  // Timer 2 Capture Enable
__sbit __at (0xCD) TMR2CN0_TF2LEN;  // Timer 2 Low Byte Interrupt Enable
__sbit __at (0xCE) TMR2CN0_TF2L;    // Timer 2 Low Byte Overflow Flag
__sbit __at (0xCF) TMR2CN0_TF2H;    // Timer 2 High Byte Overflow Flag

// TMR4CN0 (Timer 4 Control 0)
__sbit __at (0x98) TMR4CN0_T4XCLK0; // Timer 4 External Clock Select Bit 0
__sbit __at (0x99) TMR4CN0_T4XCLK1; // Timer 4 External Clock Select Bit 1
__sbit __at (0x9A) TMR4CN0_TR4;     // Timer 4 Run Control
__sbit __at (0x9B) TMR4CN0_T4SPLIT; // Timer 4 Split Mode Enable
__sbit __at (0x9C) TMR4CN0_TF4CEN;  // Timer 4 Capture Enable
__sbit __at (0x9D) TMR4CN0_TF4LEN;  // Timer 4 Low Byte Interrupt Enable
__sbit __at (0x9E) TMR4CN0_TF4L;    // Timer 4 Low Byte Overflow Flag
__sbit __at (0x9F) TMR4CN0_TF4H;    // Timer 4 High Byte Overflow Flag

// TMR5CN0 (Timer 5 Control 0)
__sbit __at (0xC0) TMR5CN0_T5XCLK0; // Timer 5 External Clock Select Bit 0
__sbit __at (0xC1) TMR5CN0_T5XCLK1; // Timer 5 External Clock Select Bit 1
__sbit __at (0xC2) TMR5CN0_TR5;     // Timer 5 Run Control
__sbit __at (0xC3) TMR5CN0_T5SPLIT; // Timer 5 Split Mode Enable
__sbit __at (0xC4) TMR5CN0_TF5CEN;  // Timer 5 Capture Enable
__sbit __at (0xC5) TMR5CN0_TF5LEN;  // Timer 5 Low Byte Interrupt Enable
__sbit __at (0xC6) TMR5CN0_TF5L;    // Timer 5 Low Byte Overflow Flag
__sbit __at (0xC7) TMR5CN0_TF5H;    // Timer 5 High Byte Overflow Flag

// UART1FCN1 (UART1 FIFO Control 1)
__sbit __at (0xD8) UART1FCN1_RIE;    // Receive Interrupt Enable
__sbit __at (0xD9) UART1FCN1_RXTO0;  // Receive Timeout Bit 0
__sbit __at (0xDA) UART1FCN1_RXTO1;  // Receive Timeout Bit 1
__sbit __at (0xDB) UART1FCN1_RFRQ;   // Receive FIFO Request
__sbit __at (0xDC) UART1FCN1_TIE;    // Transmit Interrupt Enable
__sbit __at (0xDD) UART1FCN1_TXHOLD; // Transmit Hold
__sbit __at (0xDE) UART1FCN1_TXNF;   // TX FIFO Not Full
__sbit __at (0xDF) UART1FCN1_TFRQ;   // Transmit FIFO Request

//------------------------------------------------------------------------------
// Interrupt Definitions
//------------------------------------------------------------------------------
#define INT0_IRQn    0          // External Interrupt 0
#define TIMER0_IRQn  1          // Timer 0 Overflow
#define INT1_IRQn    2          // External Interrupt 1
#define TIMER1_IRQn  3          // Timer 1 Overflow
#define UART1_IRQn   4          // UART1
#define TIMER2_IRQn  5          // Timer 2 Overflow / Capture
#define SPI0_IRQn    6          // SPI0
#define SMBUS0_IRQn  7          // SMBus 0
#define PMATCH_IRQn  8          // Port Match
#define ADC0WC_IRQn  9          // ADC0 Window Compare
#define ADC0EOC_IRQn 10         // ADC0 End of Conversion
#define PCA0_IRQn    11         // PCA0
#define CMP0_IRQn    12         // Comparator 0
#define CMP1_IRQn    13         // Comparator 1
#define TIMER3_IRQn  14         // Timer 3 Overflow / Capture
#define USB0_IRQn    15         // USB0 Events
#define VBUS_IRQn    16         // VBUS / USB Charge Detect
#define TIMER4_IRQn  17         // Timer 4 Overflow / Capture
#define TIMER5_IRQn  18         // Timer 5 Overflow / Capture
#define CL0_IRQn     21         // Configurable Logic

//------------------------------------------------------------------------------
// SFR Page Definitions
//------------------------------------------------------------------------------
#define CRC0_PAGE      0x00     // CRC0 Page
#define LEGACY_PAGE    0x00     // Legacy SFR Page
#define PCA0_PAGE      0x00     // PCA0 Page
#define PG2_PAGE       0x10     // Page2
#define TIMER2_PAGE    0x10     // Timer 2 Page
#define TIMER3_PAGE    0x10     // Timer 3 Page
#define TIMER4_PAGE    0x10     // Timer 4 Page
#define TIMER5_PAGE    0x10     // Timer 5 Page
#define I2CSLAVE0_PAGE 0x20     // I2C Slave 0 Page
#define PG3_PAGE       0x20     // Page3
#define SMB0_PAGE      0x20     // SMBus 0 Page
#define SPI0_PAGE      0x20     // SPI0 Page
#define UART1_PAGE     0x20     // UART1 Page
#define USB0_PAGE      0x20     // USB0 Page

#endif // EFM8UB3_H
