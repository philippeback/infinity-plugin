/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Library General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#ifndef __INFINITY_EFFECTS__
#define __INFINITY_EFFECTS__

#include <glib.h>
#include "music-player.h"
#include "types.h"

/*
 * Represents effect related information.
 *
 * TODO document structure fields. Some of them are two big, byte
 * would be enough for some of them.
 */
typedef struct {
	gint32  num_effect; /* The number of the effect */
	gint32  x_curve;
	gint32  curve_color;
	gint32  curve_amplitude;
	gint32  spectral_amplitude;
	gint32  spectral_color;
	gint32  mode_spectre;
	gint32  spectral_shift;
} t_effect;

/*
 * Appends effect to file ~/infinite_states
 *
 * @param effect Must be a non NULL reference to a ::t_effect
 * object.
 */
void    effects_append_effect (t_effect *effect);

/*
 * Loads effects from file {DATADIR}/infinite_states
 *
 * Returns TRUE on success or FALSE otherwise.
 */
gboolean effects_load_effects (Player *player);

void    effects_load_random_effect (t_effect *effect);

#endif /* __INFINITY_EFFECTS__ */
