#include <iostream>
#include<io.h>

#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace std;

namespace FydelisClass {
    public ref class Fydelis_M3U
    {
    public:
        Fydelis_M3U(void);
    public:
        int Codigo;
        String^ tvgid;
        String^ tvglogo;
        String^ grouptitle;
        String^ URL;


        void setCodigo(int _Codigo);
        int getCodigo();

        void settvgid(String^ _tvgid);
        String^ gettvgid();

        void settvglogo(String^ _tvglogo);
        String^ gettvglogo();

        void setgrouptitle(String^ _grouptitle);
        String^ getgrouptitle();

        void setURL(String^ _URL);
        String^ getURL();
       
    };

}