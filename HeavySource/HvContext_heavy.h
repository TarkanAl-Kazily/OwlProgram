/**
 * Copyright (c) 2014,2015 Enzien Audio, Ltd.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, and/or
 * sublicense copies of the Software, strictly on a non-commercial basis,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *
 * DO NOT MODIFY. THIS CODE IS MACHINE GENERATED BY THE SECTION6 HEAVY COMPILER.
 */

#ifndef _HEAVYCONTEXT_HEAVY_H_
#define _HEAVYCONTEXT_HEAVY_H_

#include "HvBase.h"

#define Context(_x) ((Hv_heavy *) (_x))

// object includes
#include "ControlVar.h"
#include "SignalVar.h"
#include "ControlBinop.h"
#include "SignalPhasor.h"
#include "HeavyMath.h"

typedef struct Hv_heavy {
  HvBase base;

  // objects
  SignalPhasor sPhasor_GPLOH;
  SignalPhasor sPhasor_8SvyU;
  ControlBinop cBinop_botFQ;
  ControlVar cVar_HWc2K;
  ControlBinop cBinop_5QvxE;
  ControlBinop cBinop_1bUsl;
  ControlBinop cBinop_ThQ9q;
  ControlBinop cBinop_B0WQf;
  ControlVar cVar_BoLat;
  ControlBinop cBinop_UzBs7;
} Hv_heavy;

#endif // _HEAVYCONTEXT_HEAVY_H_
