/**
    File    : Rubik_run_AuxFuncs.h
    Author  : Menashe Rosemberg
    Created : 2019.10.27            Version: 20200130.4.1

    Rubik Engine - auxiliary functions to test Cube

    Copyright (c) 2019 TheArquitect (Menashe Rosemberg) rosemberg@ymail.com

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:

    1. Redistributions of source code must retain the above copyright notice, this
       list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright notice,
       this list of conditions and the following disclaimer in the documentation
       and/or other materials provided with the distribution.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
    ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**/
#ifndef AUXFUNC_H
#define AUXFUNC_H

#include <iomanip>
#include <iostream>
#include "../Rubik_Engine.h"

constexpr bool HideSize       = false;
constexpr bool HideColors     = false;
constexpr bool HidePercentual = false;

constexpr bool ShowSize               = true;
constexpr bool ShowColorsAndPositions = true;
constexpr bool ShowPercentual         = true;

void PressEnter();

constexpr bool RESET = true;
string StepCounter(bool Reset = false);

const char* TheColorIs(const uint8_t C) noexcept;
const char* ThePositionIs(const uint8_t P) noexcept;

void ShowCube(const Rubik_Engine& Cube, const bool ShowSize = true, const bool ShowColors = true, const bool ShowPercentual = true);

#endif
