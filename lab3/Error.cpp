//---------------------------------------------------------------------------

#pragma hdrstop

#include "Error.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Error::Error(String message):Exception(message) {
	this -> message = message;
}

String Error::getError() {
    return message;
}
