/************************************************************
NKFADC500 GUI system
Made by Byul Moon.
FADC500setting.h header file
Save setting parameters to TCB module.
May. 1. 2017.
***********************************************************/

#ifndef FADC500setting_H
#define FADC500setting_H

#include <unistd.h>
#include <stdio.h>


class FADC500setting
{
	public:
		int module_count;
		int sid = 0;				//TCB USB3 SID
		unsigned long mid[40];			//NKFADC500 mid found by TCB
		unsigned long ptrig_interval;	//pedestal trigger interval in ms, 0 for disable
		unsigned long run_num;		//Run number
		unsigned long ten_self;		//when 1 enables self trigger mode
		unsigned long ten_pedestal;	//when 1 enables pedestal trigger mode
		unsigned long ten_software;	//when 1 enables software trigger mode
		unsigned long ten_external;	//when 1 enables external trigger mode
		unsigned long rl[6];			//recording length: 1=128ns, 2=256ns, 4=512ns, 8=1us, 16=2us, 32=4us, 64=8us, 128=16us, 256=32us
		unsigned long tlt[6];			//trigger lookup table value
		unsigned long daq_mode;	//1 for FADC, 2 for PEAK ADC, 3 for both
		unsigned long cw_tcb;		//tcb coincidence width (8~32760)
		unsigned long cw[6][4];		//coincidence width (8~32760)
		unsigned long offset[6][4];			//ADC offset value (0~4095)
		unsigned long dly[6][4];			//ADC waveform delay from trigger (0~31992)
		unsigned long thr[6][4];			//ADC threshold 1 cbt ~ 0.5mV
		unsigned long tdc_thr[6][4];			//TDC threshold 1cnt ~ 0.5mV
		unsigned long pol[6][4];			//pulse polarity, 0=negative, 1=positive
		unsigned long psw[6][4];			//peak sum width in ns (2~16382)
		unsigned long amode[6][4];		//ADC mode, 0=raw, 1=filtered
		unsigned long pct[6][4];			//pulse count threshold (1~15)
		unsigned long pci[6][4];			//pusle count interval (32~8160 ns)
		unsigned long pwt[6][4];		//pulse width threshold (2 ~ 1022 ns)
		unsigned long dt[6][4];			//trigger deadtime (0 ~ 8355840 ns)
		unsigned long ten;			//when 1 enables pulse count trigger 
		unsigned long tew;			//when 1 enables pulse width trigger
		unsigned long tep;			//when 1 enables peak sum trigger
		unsigned long tet;			//when 1 enables TDC trigger
		unsigned long zerosup[6];		//zero-suppression, 0 = not use, 1 = use
		unsigned long mthr;		//TCB multiplicity trigger threshold
		unsigned long pscale=1;		//TCB trigger prescale

		unsigned long data[2];			// to get NKFADC500 mid
		int link_flag;
		int linked[40];
		unsigned long value[40];

		void FADC500ParSetting();

};
#endif

