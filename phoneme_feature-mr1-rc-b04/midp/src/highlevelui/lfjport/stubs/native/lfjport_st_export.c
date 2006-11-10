/*
 *
 * Copyright  1990-2006 Sun Microsystems, Inc. All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 only, as published by the Free Software Foundation. 
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License version 2 for more details (a copy is
 * included at /legal/license.txt). 
 * 
 * You should have received a copy of the GNU General Public License
 * version 2 along with this work; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA 
 * 
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa
 * Clara, CA 95054 or visit www.sun.com if you need additional
 * information or have any questions. 
 */

#include <midp_logging.h>
#include <lfjport_export.h>

/**
 * @file
 * Additional porting API for Java Widgets based port of abstract
 * command manager.
 */

/**
 * Initializes the lfjport_ui_ native resources.
 */
void lfjport_ui_init() {
    REPORT_CALL_TRACE(LC_HIGHUI, "LF:STUB:lfjport_ui_init()\n");
}

/**
 * Finalize the lfjport_ui_ native resources.
 */
void lfjport_ui_finalize() {
    REPORT_CALL_TRACE(LC_HIGHUI, "LF:STUB:lfjport_ui_finalize()\n");
}

/**
 * Bridge function to request a repaint 
 * of the area specified.
 *
 * @param x1 top-left x coordinate of the area to refresh
 * @param y1 top-left y coordinate of the area to refresh
 * @param x2 bottom-right x coordinate of the area to refresh
 * @param y2 bottom-right y coordinate of the area to refresh
 */
void lfjport_refresh(int x1, int y1, int x2, int y2)
{
    REPORT_CALL_TRACE4(LC_HIGHUI, "LF:STUB:lfjport_refresh(%3d, %3d, %3d, %3d )\n",
                       x1, y1, x2, y2);

    /* Suppress unused parameter warnings */
    (void)x1;
    (void)y1;
    (void)x2;
    (void)y2;

}

/**
 * Porting API function to update scroll bar.
 *
 * @param scrollPosition current scroll position
 * @param scrollProportion maximum scroll position
 * @return status of this call
 */
int lfjport_set_vertical_scroll(int scrollPosition, int scrollProportion)
{
    REPORT_CALL_TRACE2(LC_HIGHUI, "LF:STUB:lfjport_ui_setVerticalScroll(%3d, %3d)\n",
                       scrollPosition, scrollProportion);

    /* Suppress unused parameter warnings */
    (void)scrollPosition;
    (void)scrollProportion;

    return 0;
}


/**
 * Turn on or off the full screen mode
 *
 * @param mode true for full screen mode
 *             false for normal
 */
void lfjport_set_fullscreen_mode(jboolean mode) {
    REPORT_CALL_TRACE1(LC_HIGHUI, "LF:STUB:lfjport_ui_setFullScreenMode(%1)\n",
                       mode);

    /* Suppress unused parameter warnings */
    (void)mode;

}

/**
 * Resets native resources when foreground is gained by a new display.
 */
void lfjport_gained_foreground() {
    REPORT_CALL_TRACE(LC_HIGHUI, "LF:STUB:gainedForeground()\n");
}