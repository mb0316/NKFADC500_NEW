#include "NoticeFADC500IBSROOT.h"
#include "NoticeFADC500IBS.h"

ClassImp(NKFADC500IBS)

NKFADC500IBS::NKFADC500IBS()
{
}

NKFADC500IBS::~NKFADC500IBS()
{
}

int NKFADC500IBS::FADC500IBSopen(int sid, libusb_context *ctx)
{
	return ::FADC500IBSopen(sid, ctx);
}

void NKFADC500IBS::FADC500IBSclose(int sid)
{
	::FADC500IBSclose(sid);
}

unsigned long NKFADC500IBS::FADC500IBSread_BCOUNT(int sid)
{
	return ::FADC500IBSread_BCOUNT(sid);
}

void NKFADC500IBS::FADC500IBSread_DATA(int sid, double bcount, unsigned char *data)
{
	::FADC500IBSread_DATA(sid, bcount, data);
}

unsigned long NKFADC500IBS::FADC500IBSread_PEAK_BCOUNT(int sid)
{
	return ::FADC500IBSread_PEAK_BCOUNT(sid);
}

void NKFADC500IBS::FADC500IBSread_PEAK_DATA(int sid, int bcount, unsigned char *data)
{
	::FADC500IBSread_PEAK_DATA(sid, bcount, data);
}

unsigned long NKFADC500IBS::FADC500IBSread_CAL_BCOUNT(int sid)
{
	return ::FADC500IBSread_CAL_BCOUNT(sid);
}

void NKFADC500IBS::FADC500IBSread_CAL_DATA(int sid, int bcount, unsigned char *data)
{
	::FADC500IBSread_CAL_DATA(sid, bcount, data);
}
