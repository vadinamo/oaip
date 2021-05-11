	//---------------------------------------------------------------------------

#ifndef ErrorH
#define ErrorH
//---------------------------------------------------------------------------
class Error:public Exception {
	private:
		String message;

	public:
		Error(String message);
		String getError();
};
#endif
