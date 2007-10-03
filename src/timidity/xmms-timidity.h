/*
    xmms-timidity - MIDI Plugin for XMMS
    Copyright (C) 2004 Konstantin Korikov <lostclus@ua.fm>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef XMMS_TIMIDITY_H
#define XMMS_TIMIDITY_H

#include <audacious/plugin.h>

extern InputPlugin xmmstimid_ip;

static void xmmstimid_init(void);
static void xmmstimid_about(void);
static void xmmstimid_configure(void);
static int xmmstimid_is_our_fd(gchar * filename, VFSFile * fp );
static void xmmstimid_play_file(InputPlayback * playback);
static void xmmstimid_stop(InputPlayback * playback);
static void xmmstimid_pause(InputPlayback * playback, short p);
static void xmmstimid_seek(InputPlayback * playback, int time);
static int xmmstimid_get_time(InputPlayback * playback);
static void xmmstimid_cleanup(void);
static void xmmstimid_get_song_info(gchar *filename, gchar **title, gint *length);

#endif
