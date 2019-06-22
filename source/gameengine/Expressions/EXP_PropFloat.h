/*
 * FloatValue.h: interface for the EXP_PropFloat class.
 * Copyright (c) 1996-2000 Erwin Coumans <coockie@acm.org>
 *
 * Permission to use, copy, modify, distribute and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appear in all copies and
 * that both that copyright notice and this permission notice appear
 * in supporting documentation.  Erwin Coumans makes no
 * representations about the suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 */

/** \file EXP_PropFloat.h
 *  \ingroup expressions
 */

#ifndef __EXP_FLOATVALUE_H__
#define __EXP_FLOATVALUE_H__

#include "EXP_PropValue.h"

class EXP_PropFloat : public EXP_PropValue
{
public:
	EXP_PropFloat(double fl);

	virtual std::string GetText() const;
	virtual DataType GetValueType() const;

	double GetValue() const;
	void SetValue(double value);

	virtual EXP_PropValue *GetReplica();

#ifdef WITH_PYTHON
	virtual PyObject *ConvertValueToPython();
#endif

protected:
	double m_value;
};

#endif  // __EXP_FLOATVALUE_H__
