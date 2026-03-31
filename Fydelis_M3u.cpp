
#include "Fydelis_M3U.h"

namespace FydelisClass {
	Fydelis_M3U::Fydelis_M3U(void)
	{

	}

	void Fydelis_M3U::setCodigo(int _Codigo) {
		Codigo = _Codigo;
	}

	int Fydelis_M3U::getCodigo() {
		return Codigo;
	}

	void Fydelis_M3U::settvgid(String^ _tvgid) {
        tvgid = _tvgid;
	}
    String^ Fydelis_M3U::gettvgid() {
		return tvgid;
	}

	void Fydelis_M3U::settvglogo(String^ _tvglogo) {
        tvglogo = _tvglogo;
	}
	String^ Fydelis_M3U::gettvglogo() {
		return tvglogo;
	}

	void Fydelis_M3U::setgrouptitle(String^ _grouptitle) {
        grouptitle = _grouptitle;
	}
	String^ Fydelis_M3U::getgrouptitle() {
		return grouptitle;
	}
	
	void Fydelis_M3U::setURL(String^ _URL) {
        URL = _URL;
	}
    String^ Fydelis_M3U::getURL() {
		return URL;
	}
	
}
