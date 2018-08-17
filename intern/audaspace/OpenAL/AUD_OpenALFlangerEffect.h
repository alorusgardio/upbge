/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This file is part of AudaSpace.
 *
 * Audaspace is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * AudaSpace is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Audaspace; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file audaspace/OpenAL/AUD_OpenALFlangerEffect.h
 *  \ingroup audopenal
 */

#ifndef __AUD_OPENALFLANGEREFFECT_H__
#define __AUD_OPENALFLANGEREFFECT_H__

#include "AUD_IOpenALEffectParams.h"

class AUD_OpenALFlangerEffect : public AUD_IOpenALEffectParams
{
public:
	AUD_OpenALFlangerEffect();

	void applyParams(ALuint effect);

	int getWaveform() const;
	void setWaveform(int edge);
	int getPhase() const;
	void setPhase(int gain);
	float getRate() const;
	void setRate(float rate);
	float getDepth() const;
	void setDepth(float depth);
	float getFeedback() const;
	void setFeedback(float feedback);
	float getDelay() const;
	void setDelay(float delay);

private:
	int m_waveform;
	int m_phase;
	float m_rate;
	float m_depth;
	float m_feedback;
	float m_delay;

};

#endif // AUD_OPENALFLANGEREFFECT_H

