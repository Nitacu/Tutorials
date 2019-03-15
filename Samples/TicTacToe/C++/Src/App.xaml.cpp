////////////////////////////////////////////////////////////////////////////////////////////////////
// NoesisGUI - http://www.noesisengine.com
// Copyright (c) 2013 Noesis Technologies S.L. All Rights Reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////


#include "App.xaml.h"

#include <NsCore/ReflectionImplement.h>


using namespace TicTacToe;
using namespace Noesis;


////////////////////////////////////////////////////////////////////////////////////////////////////
NS_BEGIN_COLD_REGION

NS_IMPLEMENT_REFLECTION(TicTacToe::App)
{
    NsMeta<Noesis::TypeId>("TicTacToe.App");
}
